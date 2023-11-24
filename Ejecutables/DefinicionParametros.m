%% Inicializacion
load("H.mat");
load("HE.mat");
load("PointCloud_Cadena.mat");
load("PointCloud_PActiva.mat");
load("PointCloud_PActiva_2.mat");
load("pointcloudPPasiva.mat");
load("pointcloudPActiva.mat");
load("pointcloudPActiva.mat");
load("Signal1.mat");
load("Signal2.mat");

%% Constantes
L = 0.524;    % m Distancia lateral entre las orugas
R = 0.15279/2;  % m Radio de la polea activa
D = 0.30445;  % m Distancia entre centros de las poleas

%% Parametros del suelo
Floor.l = 100;  % m
Floor.w = 100;  % m
Floor.h = 0.1; % m

% Parametros del grid
Grid.clr = [1 1 1]*1;
Grid.numSqrs = 150;
Grid.lineWidth = 0.02;
Grid.box_h = (Floor.l-(Grid.lineWidth*(Grid.numSqrs+1)))/Grid.numSqrs;
Grid.box_l = (Floor.l-(Grid.lineWidth*(1+1)))/1;
Grid.extr_data = Extr_Data_Mesh(Floor.w,Floor.w,Grid.numSqrs,1,Grid.box_h,Grid.box_l);