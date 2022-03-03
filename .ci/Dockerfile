FROM althack/ros2:foxy-base

ENV DEBIAN_FRONTEND=noninteractive


 ENV DEBIAN_FRONTEND=noninteractive
 RUN apt-get update \
#    && apt-get -y install --no-install-recommends gcc \
    && apt-get -y install --no-install-recommends g++ \
#    && apt-get -y install --no-install-recommends cmake \
#    && apt-get -y install --no-install-recommends vim \
#    && apt-get -y install --no-install-recommends make \
#    #
    # Clean up
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*
 ENV DEBIAN_FRONTEND=dialog

ARG WORKSPACE

CMD ["./.ci/build_and_run.sh"]
