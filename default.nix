let pkgs  = import <nixpkgs> {}; #meh
in pkgs.stdenv.mkDerivation {
  name = "absl-hello";
  src = ./.;
  nativeBuildInputs = [ pkgs.cmake ];
  buildInputs = [ pkgs.abseil-cpp ];
}

