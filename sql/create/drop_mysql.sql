REVOKE ALL PRIVILEGES ON * . * FROM 'searcas'@'localhost';

REVOKE ALL PRIVILEGES ON `world` . * FROM 'searcas'@'localhost';

REVOKE GRANT OPTION ON `world` . * FROM 'searcas'@'localhost';

REVOKE ALL PRIVILEGES ON `characters` . * FROM 'searcas'@'localhost';

REVOKE GRANT OPTION ON `characters` . * FROM 'searcas'@'localhost';

REVOKE ALL PRIVILEGES ON `auth` . * FROM 'searcas'@'localhost';

REVOKE GRANT OPTION ON `auth` . * FROM 'searcas'@'localhost';

REVOKE ALL PRIVILEGES ON `hotfixes` . * FROM 'searcas'@'localhost';

REVOKE GRANT OPTION ON `hotfixes` . * FROM 'searcas'@'localhost';

DROP USER 'searcas'@'localhost';

DROP DATABASE IF EXISTS `world`;

DROP DATABASE IF EXISTS `characters`;

DROP DATABASE IF EXISTS `auth`;

DROP DATABASE IF EXISTS `hotfixes`;
