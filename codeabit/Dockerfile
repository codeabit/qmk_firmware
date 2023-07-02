# Create a docker image with qmk firmware installed and ready to use for build

FROM docker.io/ubuntu:latest

RUN apt-get update && \
  apt-get install -y \
  sudo \
  git \
  python3 \
  python3-pip \
  vim

WORKDIR /root/qmk_firmware

RUN python3 -m pip install --user qmk

RUN /root/.local/bin/qmk setup -y

ENV PATH /root/.local/bin:$PATH

ENTRYPOINT ["/bin/bash", "/root/qmk_firmware/codeabit/qmk_compile.sh"]
