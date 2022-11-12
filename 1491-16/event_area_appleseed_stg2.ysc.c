#pragma region Local_Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	struct<28> /*224*/ sLocal_15[2];
	var uLocal_72[2] = { 0, 0 };
	int iLocal_75[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<44> /*352*/ sLocal_104 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_148 = -1082130432;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 1065353216;
	var uLocal_153 = 1;
	int iLocal_154 = 0;
	bool bLocal_155 = false;
	struct<31> /*248*/ sLocal_156 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191[2] = { 0, 0 };
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197[5] = { 0, 0, 0, 0, 0 };
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	float fLocal_210 = 0.0f;
	struct<21> /*168*/ sLocal_211[3];
	struct<52> /*416*/ sLocal_275[3];
	int iLocal_432 = 0;
	struct<21> /*168*/ sLocal_433 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	char cLocal_462[32] = "";
	int iLocal_466[5] = { 0, 0, 0, 0, 0 };
	int iLocal_472[5] = { 0, 0, 0, 0, 0 };
	int iLocal_478[5] = { 0, 0, 0, 0, 0 };
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486[2] = { 0, 0 };
	int iLocal_489[2] = { 0, 0 };
	struct<7> /*56*/ sLocal_492[11];
	Vector3 vLocal_570[8] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599[2] = { 0, 0 };
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	bool bLocal_606 = false;
	var uLocal_607[4] = { 0, 0, 0, 0 };
	int iLocal_612 = 0;
	var uLocal_613 = 0;
	struct<691> /*5528*/ sLocal_614 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1;
	var uLocal_1315 = 1;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1;
	var uLocal_1327 = 1;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = -1;
	var uLocal_1339 = 1;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = -1;
	var uLocal_1351 = 1;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = -1;
	var uLocal_1363 = 1;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = -1;
	var uLocal_1375 = 1;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = 1;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = -1;
	var uLocal_1399 = 1;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = -1;
	var uLocal_1411 = 1;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = -1;
	var uLocal_1423 = 1;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = -1;
	var uLocal_1435 = 1;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = -1;
	var uLocal_1447 = 1;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = -1;
	var uLocal_1459 = 1;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = 1;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = -1;
	var uLocal_1483 = 1;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = -1;
	var uLocal_1495 = 1;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = -1;
	var uLocal_1507 = 1;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = -1;
	var uLocal_1519 = 1;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = -1;
	var uLocal_1531 = 1;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = -1;
	var uLocal_1543 = 1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = -1;
	var uLocal_1555 = 1;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = -1;
	var uLocal_1567 = 1;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = -1;
	var uLocal_1579 = 1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = -1;
	var uLocal_1591 = 1;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = -1;
	var uLocal_1603 = 1;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	struct<141> /*1128*/ sLocal_1617 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	struct<12> /*96*/ sLocal_1768[12];
	int iLocal_1913 = 0;
	int iLocal_1914[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1920 = 0;
	int iLocal_1921 = 0;
	int iLocal_1922 = 0;
	var uLocal_1923[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1954 = 30;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2016 = 0;
	var uLocal_2017 = 8;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	int iLocal_2082[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2092[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2102[2] = { 0, 0 };
	int iLocal_2105[2] = { 0, 0 };
	bool bLocal_2108[10] = { false, false, false, false, false, false, false, false, false, false };
	var uLocal_2119 = 10;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	int iLocal_2130[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2146 = 0;
	struct<35> /*280*/ sLocal_2147 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_2182[1] = { 0 };
	struct<5> /*40*/ sLocal_2184[5];
	var uLocal_2210[5] = { 0, 0, 0, 0, 0 };
	struct<24> /*192*/ sLocal_2216 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	int iLocal_2249 = 0;
	int iLocal_2250 = 0;
	int iLocal_2251 = 0;
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	bool bLocal_2254 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#pragma endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	fLocal_210 = 15.0f;
	sLocal_1617.f_136 = 0;
	sLocal_1617.f_137 = uScriptParam_0;
	sLocal_1617.f_138 = 807;
	if (func_1() == 0)
	{
		func_2();
		func_3(sLocal_1617.f_136);
		return;
	}
	iLocal_98 = func_4(sLocal_1617.f_136);
	if (func_5(sLocal_1617.f_136, (1 << 29)))
	{
		func_8(&(Global_40.f_9096[sLocal_1617.f_136 /*12*/].f_6), func_7(func_6()));
	}
	if (!func_9(sLocal_1617.f_136, (1 << 21)))
	{
		func_10(sLocal_1617.f_136, (1 << 21));
	}
	func_11();
	func_13(128, func_12(sLocal_1617.f_136));
	if (func_9(sLocal_1617.f_136, (1 << 25)))
	{
		func_14(128);
		func_15(sLocal_1617.f_136, (1 << 25));
	}
	func_14(1);
	func_13((1 << 18), func_5(sLocal_1617.f_136, 128));
	func_13((1 << 17), func_5(sLocal_1617.f_136, 4));
	func_13((1 << 21), func_9(sLocal_1617.f_136, (1 << 10)));
	func_13((1 << 31), func_9(sLocal_1617.f_136, (1 << 14)));
	func_13((1 << 20), func_16(sLocal_1617.f_136));
	func_13(16, func_17(sLocal_1617.f_136));
	func_18(0, &sLocal_1617, 0);
	VEHICLE::_0x012701ED938B85DE(1.0f, 5.0f);
	if (func_5(sLocal_1617.f_136, 128) || (iLocal_98 == 2 && (func_19((1 << 31)) || !func_9(1, 2))))
	{
		func_14((1 << 18));
	}
	func_21(&sLocal_1617, 32, func_20());
	if (func_22(&sLocal_1617, 32))
	{
		if (!func_23(sLocal_1617.f_138, 32))
		{
			func_24(sLocal_1617.f_138, 32);
		}
		if (!func_19((1 << 20)))
		{
			iVar0 = 16;
			func_25(Global_1392194[sLocal_1617.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		func_26(Global_1392194[sLocal_1617.f_136 /*10*/].f_6);
	}
	func_27(sLocal_1617.f_136, sLocal_1617.f_137, &sLocal_614, &sLocal_1617, 1, 1);
	func_13(64, func_28());
	func_13((1 << 14), func_29());
	func_13((1 << 15), func_30());
	func_13((1 << 16), func_31());
	func_13(256, func_32());
	func_33();
	sLocal_614.f_13 = joaat("LOGGING_WORKERS");
	func_34();
	if (!func_22(&sLocal_1617, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.323f, -207.0721f, 103.6361f, 0.0f, 0.0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0], 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0], 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1342.603f, -191.78f, 101.3216f, 0.0f, 0.0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[8], 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[8], 0, 0, 0, -1, -1, 2);
	}
	func_3(sLocal_1617.f_136);
	uScriptParam_0 = uScriptParam_0;
	sLocal_614.f_4 = { -1399.503f, -223.7296f, 99.81865f /*3*/ };
	sLocal_614.f_7 = { -1474.662f, -341.2676f, 80.0f /*3*/ };
	sLocal_614.f_10 = { -1326.326f, -116.0771f, 150.0f /*3*/ };
	if (func_19(16))
	{
		sLocal_433.f_3 = 1;
	}
	if (func_22(&sLocal_1617, 32))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1392194[sLocal_1617.f_136 /*10*/].f_5);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1392194[sLocal_1617.f_136 /*10*/].f_5);
		func_35((1 << 9));
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA LCMP - volOnMission");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[18], -1414.369f, -264.0309f, 134.2139f, 0.0f, 0.0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[18], -1470.38f, -391.851f, 142.0586f, 0.0f, 0.0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		func_35((1 << 9));
	}
	if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		func_35((1 << 9));
	}
	func_13((1 << 13), func_38());
	func_39(&sLocal_1617);
	func_40(&sLocal_1617, 1);
	if (func_19((1 << 20)) || func_22(&sLocal_1617, 32))
	{
		func_41(&sLocal_1617, 1);
	}
	if (func_19((1 << 18)) && !func_5(sLocal_1617.f_136, (1 << 24)))
	{
		func_42(sLocal_1617.f_136, (1 << 24));
	}
	func_43(&sLocal_1617, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_2254 = true;
	}
	while (true)
	{
		func_45(bLocal_2254, 9295, 0);
		func_46();
		if (!bLocal_2254)
		{
			switch (iLocal_2251)
			{
				case 0:
					if (!func_5(sLocal_1617.f_136, (1 << 19)) && sLocal_614.f_3 < ((2 + (sLocal_614.f_0 + sLocal_614.f_1)) + iLocal_14) + 15)
					{
						func_47((15 + (iLocal_14 + (sLocal_614.f_1 + sLocal_614.f_0) + 2)), &sLocal_614);
						func_48(&(vLocal_570[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_2251 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&sLocal_614, &sLocal_1617, &iLocal_2082, &iLocal_2105, &bVar1, &iLocal_194));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_194 = 0;
						}
					}
					if (!func_51((1 << 17)))
					{
						if (func_19(256))
						{
							if (func_55())
							{
								func_57(func_56(), 10.0f, 1);
								if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[21]))
								{
									iLocal_75[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.432f, -204.9798f, 102.1644f, 0.0f, 0.0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[21], 10208, 0, 0, -1, -1, 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]))
								{
									iLocal_2105[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, func_56(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2105[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_2105[1], 0.0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_2105[1], 0.0f);
									VEHICLE::_SET_TRAIN_HALT(iLocal_2105[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2105[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_2105[1], true);
									func_58((1 << 17));
								}
							}
						}
						else
						{
							func_58((1 << 17));
						}
					}
					if (!func_51(2) && func_52())
					{
						if (!func_22(&sLocal_1617, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_194, 0, func_59((iLocal_98 == 3 && !func_19((1 << 18))), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_194 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&sLocal_1617, 32))
						{
							func_61(sLocal_1617.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(sLocal_1617.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(func_63(sLocal_1617.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&sLocal_1617, 32) && !func_22(&sLocal_1617, 2))
						{
							if (func_64(&sLocal_614) & func_66(func_65(), &sLocal_1768, 0, 0, 0, -1, 1))
							{
								if (!func_22(&sLocal_1617, 32) && func_19(64))
								{
									func_67(&(sLocal_1617.f_35), iLocal_2082[0], "LOGGING_VICTIM", 0);
									iVar3 = 810;
									bVar4 = func_63(iVar3);
									func_67(&(sLocal_1617.f_35), bVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51((1 << 19)) && func_68())
					{
						if (func_19((1 << 16)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
						{
							func_69(&(uLocal_72[1]), &(iLocal_2082[5]), &(sLocal_15[1 /*28*/]), 1112014848, 0, 0, 0);
						}
						if (func_19((1 << 15)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
						{
							func_69(&(uLocal_72[0]), &(iLocal_2082[4]), &(sLocal_15[0 /*28*/]), 1112014848, 0, iLocal_204, 0);
							if (!func_70(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								func_71(128);
							}
						}
						func_58((1 << 19));
					}
					func_72(sLocal_1617.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51((1 << 17))) && func_51((1 << 19))) && func_73()) && func_74()) || func_22(&sLocal_1617, 32))
					{
						if (!func_22(&sLocal_1617, 32) && (func_19(128) || !func_75()))
						{
							func_67(&(sLocal_1617.f_35), Global_35, "ARTHUR", 0);
							func_67(&(sLocal_1617.f_35), func_63(sLocal_1617.f_138), "EA_LCMP_Foreman", 0);
							func_76();
						}
						else
						{
							func_67(&(sLocal_1617.f_35), Global_35, "ARTHUR", 0);
							func_67(&(sLocal_1617.f_35), func_63(sLocal_1617.f_138), "EA_LCMP_Foreman", 0);
							func_77(sLocal_1617.f_138, 1);
							func_78(&(sLocal_211[0 /*21*/]), 0);
						}
						func_79();
						iLocal_2251 = 2;
					}
					break;
				case 2:
					if (func_22(&sLocal_1617, 128) && func_80(sLocal_1617.f_136, func_19(128)))
					{
						func_81(0);
						func_82(&sLocal_1617, 128);
					}
					func_83();
					if (!func_19((1 << 24)))
					{
						func_13((1 << 24), func_84(&sLocal_1617, &sLocal_614));
					}
					if (!func_22(&sLocal_1617, 32))
					{
						if (func_18(iLocal_206, &sLocal_1617, 5))
						{
							func_85();
							func_86();
						}
						if (!func_22(&sLocal_1617, 2))
						{
							func_87(&uLocal_1923, &uLocal_1985, &sLocal_1617, 808, 833, &iLocal_190, &iLocal_206, 10, -1082130432, 1);
							func_88(&uLocal_1923);
							func_88(&iLocal_2082);
							func_88(&bLocal_2108);
							func_89();
							func_90();
							if ((!func_22(&sLocal_1617, 32) && !func_19(32)) && func_19(128))
							{
								func_93(&sLocal_1617, 0, func_91(), func_92());
								func_94();
							}
							if (func_95())
							{
								if (func_70((1 << 13)))
								{
									TASK::SET_ANIM_RATE(sLocal_614.f_690[12 /*12*/].f_8, 0.0f, 0, false);
									TASK::SET_ANIM_RATE(sLocal_614.f_690[13 /*12*/].f_8, 0.0f, 0, false);
								}
								func_96(&sLocal_433, &sLocal_1617, 0);
								func_97(&sLocal_1617);
								func_15(sLocal_1617.f_136, (1 << 14));
								func_98(&iLocal_2016);
								func_99();
								if (func_100(iLocal_154) && func_101(iLocal_154))
								{
									func_102(iLocal_154, 0, 2);
								}
								func_103(1);
								LAW::_ENABLE_DISPATCH_LAW_2(true);
								iVar5 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
								MAP::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								if (func_104(1))
								{
									func_43(&sLocal_1617, (1 << 12));
									func_43(&sLocal_1617, (1 << 14));
								}
								else
								{
									func_10(sLocal_1617.f_136, (1 << 10));
								}
								func_105();
								func_106();
								func_107();
								func_108(1);
								iVar6 = 0;
								while (iVar6 < 3)
								{
									func_109(&(sLocal_275[iVar6 /*52*/]), 1, 1, 1, 0);
									iVar6++;
								}
								func_110(0);
								func_111(iLocal_75[1]);
								func_112();
								if (!ENTITY::IS_ENTITY_DEAD(bLocal_2108[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(bLocal_2108[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(sLocal_614.f_690[23 /*12*/].f_8, false, true);
								}
								func_113(&uLocal_2092);
								func_113(&uLocal_2119);
								func_113(&uLocal_2102);
								func_114(sLocal_1617.f_136, 3);
								func_115(&sLocal_1617);
								iLocal_2253 = 4;
								iVar7 = func_59(!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)), 1, 0);
								if (!func_22(&sLocal_1617, (1 << 12)))
								{
									func_116(func_63(sLocal_1617.f_138), Global_35, "LOG_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								}
								if (func_51((1 << 15)))
								{
									iVar8 = joaat("CRIME_THEFT_VEHICLE");
								}
								else if (func_117((1 << 28)))
								{
									iVar8 = joaat("CRIME_THEFT_HORSE");
								}
								else
								{
									iVar8 = func_118(&sLocal_1617, sLocal_1617.f_28);
								}
								func_43(&sLocal_1617, 2);
								func_119();
								if (!func_19((1 << 10)))
								{
									func_121(&sLocal_1617, func_63(sLocal_1617.f_138), &(uLocal_2102[0]), 0, func_120((1 << 28), 1056964608, 1065353216), 0);
								}
								if (!(func_19(32) && func_19((1 << 10))))
								{
									iLocal_2253 = func_59(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
									iVar7 = func_122(&sLocal_1617, &iLocal_2082, &uLocal_2092, func_120((1 << 28), 1056964608, 1065353216), iVar5, iLocal_2253, 0, 0, 0, iVar8, 1051260355);
									iLocal_2253 = func_59(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								}
								iLocal_2253 = func_59(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								func_47(iLocal_190, &sLocal_614);
								iVar7 = func_123(&sLocal_1617, &uLocal_1923, &uLocal_1954, iLocal_2253, func_120((1 << 28), 1056964608, 1065353216), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355);
								iLocal_2253 = func_59(iLocal_2253 > iVar7, (iLocal_2253 - iVar7), 0);
								func_33();
								func_43(&sLocal_1617, 128);
							}
						}
						else
						{
							func_124(&uLocal_1923, &sLocal_1617);
							func_125();
							if (func_19((1 << 10)))
							{
								if (func_126(&sLocal_1617, func_63(sLocal_1617.f_138), &(uLocal_2102[0]), 0))
								{
									if (func_19(32))
									{
										if (func_127())
										{
											iVar10 = 0;
											iVar9 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
											iLocal_2253 = func_59(iLocal_2253 > iVar10, (iLocal_2253 - iVar10), 0);
											iVar10 = (func_122(&sLocal_1617, &iLocal_2082, &uLocal_2092, func_120((1 << 28), 1056964608, 1065353216), iVar9, iLocal_2253, 0, 0, 0, func_118(&sLocal_1617, sLocal_1617.f_28), 1051260355) + iVar10);
											iLocal_2253 = func_59(iLocal_2253 > iVar10, (iLocal_2253 - iVar10), 0);
											func_128((1 << 10));
										}
									}
									else
									{
										func_128((1 << 10));
									}
								}
							}
							if (func_19(32))
							{
								if (func_129())
								{
									if (!func_19((1 << 10)))
									{
										func_128(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_70((1 << 17)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2082[0] || PED::IS_PED_LASSOED(iLocal_2082[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
										{
											func_130(iLocal_2082[0], 0, 0);
										}
									}
								}
								else if (!func_131(iLocal_2082[0], joaat("SCRIPT_TASK_FLEE")) && !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2082[0], false);
									PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_2082[0], "INJURED_LEFT_LEG");
									TASK::TASK_FLEE_PED(iLocal_2082[0], Global_35, 3, 0, -1.0f, -1, 0);
								}
							}
							if (!func_22(&sLocal_1617, 4) && func_132(&sLocal_1617, &iLocal_2082, &bLocal_2108, &(sLocal_1617.f_139), 5, func_63(sLocal_1617.f_138)))
							{
								func_43(&sLocal_1617, 4);
							}
						}
						if (!func_22(&sLocal_1617, 2))
						{
							if (func_19((1 << 16)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
							{
								func_69(&(uLocal_72[1]), &(iLocal_2082[5]), &(sLocal_15[1 /*28*/]), 1112014848, func_19((1 << 12)), 0, 0);
								if (!func_70(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_ADD_PROP_SET_FOR_VEHICLE(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									func_71(128);
								}
							}
							if (func_19((1 << 15)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
							{
								func_69(&(uLocal_72[0]), &(iLocal_2082[4]), &(sLocal_15[0 /*28*/]), 1112014848, func_19((1 << 12)), iLocal_204, 0);
								if (!func_70(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									func_71(128);
								}
							}
						}
					}
					if (!func_22(&sLocal_1617, 2))
					{
						if (!func_22(&sLocal_1617, 32))
						{
							func_133(&sLocal_433);
							if (func_134(&sLocal_433, 1))
							{
								func_135(&sLocal_1617, &sLocal_433, &(sLocal_211[2 /*21*/]), &(sLocal_275[2 /*52*/]));
							}
							else
							{
								func_136(&sLocal_433, 4);
							}
						}
						if (func_137())
						{
							bLocal_2254 = true;
						}
					}
					else if (!func_22(&sLocal_1617, 32))
					{
						func_138();
					}
					break;
			}
		}
		if (func_139())
		{
			bLocal_2254 = true;
		}
		BUILTIN::WAIT(sLocal_1617.f_30);
	}
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMAN"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMAN_RUNNING"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMANC"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING_OFFICE"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_TENTS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_ANIMALS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_NIGHT"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_TENTS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_ANIMALS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_NIGHT"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_TENTS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_STALLED"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_STALLED_TENTS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_ANIMALS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGLOADERS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGHORSESA"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGD_ANIMALS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGE_ANIMALS"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLA1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLA2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLB1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLB2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLC2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_A"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_B"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_C"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING_HANDCART"), false);
}

void func_3(int iParam0)
{
	int iVar0;

	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!func_142(iVar0, 8))
	{
		func_143(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(func_144(iParam0, func_4(iParam0)), 100.0f);
	func_145(&(Global_1392194[iParam0 /*10*/].f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_4 & iParam1 != 0;
}

int func_6()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_9(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_5 & iParam1 != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 |= iParam1;
}

void func_11()
{
	iLocal_99 = 0;
}

bool func_12(var uParam0)
{
	int iVar0;

	if (func_146(30336, 1, 1) && !func_147())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_148(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_149() && func_150() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_14(iParam0);
	}
	else
	{
		func_128(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 |= iParam0;
}

void func_15(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 -= Global_40.f_9096[iParam0 /*12*/].f_5 & iParam1;
}

bool func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, (1 << 22)))
	{
		return false;
	}
	func_151(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

bool func_17(int iParam0)
{
	int iVar0;

	if (Global_40.f_9096[iParam0 /*12*/].f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, (1 << 19)))
	{
		return false;
	}
	if (!func_9(iParam0, (1 << 24)))
	{
		func_114(iParam0, 2);
		return true;
	}
	iVar0 = (Global_40.f_9096[iParam0 /*12*/] - Global_40.f_9096[iParam0 /*12*/].f_9);
	if (iVar0 >= 2)
	{
		if (func_9(iParam0, (1 << 15)))
		{
			func_15(iParam0, (1 << 15));
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_152(iParam0))
	{
		if (func_9(iParam0, (1 << 15)))
		{
			func_15(iParam0, (1 << 15));
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_9(iParam0, (1 << 15)))
	{
		func_15(iParam0, (1 << 15));
	}
	return true;
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		iVar8 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
		MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
		bVar4 = func_153(iVar7) | func_154(iVar7);
		bVar5 = func_153(iVar8) | func_154(iVar8);
		if (bVar4 && bVar5)
		{
			if (!func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_43(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_155(iVar7) | func_156(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1.0f - fVar3))
			{
				if (func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_82(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_155(iVar8) | func_156(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_43(iParam1, 256);
			}
		}
		else
		{
			if (func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_82(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

bool func_19(int iParam0)
{
	return iLocal_99 & iParam0 != 0;
}

bool func_20()
{
	if (((func_5(sLocal_1617.f_136, (1 << 19)) || func_5(sLocal_1617.f_136, (1 << 21))) || func_5(sLocal_1617.f_136, (1 << 20))) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_43(iParam0, iParam1);
	}
	else
	{
		func_82(iParam0, iParam1);
	}
}

bool func_22(int iParam0, int iParam1)
{
	return iParam0->f_29 & iParam1 != 0;
}

bool func_23(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

void func_24(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]))
		{
			Global_1935475[iVar0 /*2*/] = iParam0;
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/] = 0;
			Global_1935475[iVar0 /*2*/].f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_43(iParam3, 128);
	func_158(iParam1, 1);
	if (bParam5)
	{
		func_159(Global_1392194[iParam3->f_136 /*10*/].f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_160(Global_1392194[iParam3->f_136 /*10*/].f_6, 0);
		func_161(Global_1392194[iParam3->f_136 /*10*/].f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_162(&iVar1, &iVar2, func_9(1, (1 << 20)));
	}
	else
	{
		func_163(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_157(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_164(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_165(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		PERSCHAR::_0xB173599D61FAEB31();
	}
}

bool func_28()
{
	float fVar0;

	if (!func_166(64))
	{
		return false;
	}
	if (func_19((1 << 20)))
	{
		return false;
	}
	if (!func_9(sLocal_1617.f_136, (1 << 9)))
	{
		if (iLocal_98 == 2 && !func_5(sLocal_1617.f_136, 64))
		{
			if (func_5(sLocal_1617.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
				if (fVar0 < 1.0f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && func_5(sLocal_1617.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !func_9(sLocal_1617.f_136, (1 << 10)))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	float fVar0;

	if (func_166(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	return fVar0 < 0.4f;
}

bool func_31()
{
	float fVar0;

	if (func_166(16))
	{
		return false;
	}
	else if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		return false;
	}
	else if (iLocal_98 > 3)
	{
		return false;
	}
	else if (iLocal_98 == 2 && !func_19((1 << 17)))
	{
		return true;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
		return fVar0 < 0.33f;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (func_19(64))
	{
		return false;
	}
	else if (func_166(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19((1 << 18)))))
	{
		iVar0 = func_167(func_56(), 0);
		if (func_168(iVar0) && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1), func_56(), true) < 350.0f)
		{
			return false;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
		bVar2 = fVar1 < 1.0f;
		if (bVar2)
		{
			return true;
		}
	}
	return false;
}

void func_33()
{
	func_2();
	if (iLocal_98 < 4 && !func_19(256))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING_HANDCART"), true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_22(&sLocal_1617, 32))
			{
				if (!func_22(&sLocal_1617, 2))
				{
					iLocal_203 = joaat("BGZ_LOGGINGA");
					iLocal_204 = joaat("BGZ_LOGGINGA_NIGHT");
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLA1"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMAN"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_TENTS"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_NIGHT"), true);
					if (func_19((1 << 18)))
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING_OFFICE"), true);
					}
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGA_ANIMALS"), true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_A"), true);
			break;
		case 2:
			if (!func_22(&sLocal_1617, 32))
			{
				if (!func_22(&sLocal_1617, 2))
				{
					iLocal_203 = joaat("BGZ_LOGGINGB");
					iLocal_204 = joaat("BGZ_LOGGINGB_NIGHT");
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGLOADERS"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGHORSESA"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLB1"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMAN_RUNNING"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_TENTS"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_NIGHT"), true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGB_ANIMALS"), true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_B"), true);
			break;
		case 3:
			if (!func_22(&sLocal_1617, 32))
			{
				if (!func_22(&sLocal_1617, 2))
				{
					if (func_19((1 << 18)))
					{
						iLocal_203 = joaat("BGZ_LOGGINGC");
						iLocal_204 = joaat("BGZ_LOGGINGC_NIGHT");
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGING"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGLOADERS"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGTREEFALLC2"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMAN_RUNNING"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_TENTS"), true);
					}
					else
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_STALLED"), true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_STALLED_TENTS"), true);
						iLocal_203 = joaat("BGZ_LOGGINGC_STALLED");
						iLocal_204 = joaat("BGZ_LOGGINGC_NIGHT");
					}
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGFOREMANC"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGHORSESA"), true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGC_ANIMALS"), true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_APPLESEED_C"), true);
			break;
		case 4:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGD_ANIMALS"), true);
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGE_ANIMALS"), true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[sLocal_1617.f_136 /*10*/].f_5);
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (func_22(&sLocal_1617, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_169(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&sLocal_1617, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&sLocal_1617, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_86();
}

void func_35(int iParam0)
{
	iLocal_102 |= iParam0;
}

void func_36()
{
	if (func_22(&sLocal_1617, 32))
	{
		iLocal_75[0] = VOLUME::CREATE_VOLUME_BOX(-1398.447f, -246.3103f, 99.12786f, 0.0f, 0.0f, 0.0f, 5.212102f, 3.640974f, 2.867354f);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0], 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volHorseCorral");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1421.619f, -210.3775f, 102.9679f, 0.0f, 0.0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1412.1f, -211.0359f, 103.0456f, 0.0f, 0.0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1430.657f, -209.2033f, 103.0456f, 0.0f, 0.0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1416.509f, -217.112f, 102.5954f, 0.0f, 0.0f, 0.0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[11], 256, 0, joaat("SPECIES_HORSE"), -1, -1, 2);
	}
}

int func_37()
{
	func_172((1 << 10));
	func_173();
	if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		func_58((1 << 23));
		func_174();
	}
	if (func_22(&sLocal_1617, 32) && !(iLocal_98 == 4 && !func_19((1 << 18))))
	{
		func_175(&sLocal_614);
		return 1;
	}
	else
	{
		func_85();
	}
	switch (iLocal_98)
	{
		case 1:
			sLocal_614.f_0 = 5;
			func_176(&sLocal_614);
			break;
		case 2:
			sLocal_614.f_0 = 5;
			func_177(&sLocal_614);
			iLocal_14 += 2;
			break;
		case 3:
			func_178();
			sLocal_614.f_0 = 5;
			func_179(&sLocal_614, func_9(sLocal_1617.f_136, (1 << 11)));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&sLocal_1617, 32))
	{
		if (iLocal_98 < 4)
		{
			func_180();
			func_181();
			func_182();
		}
		if (func_19((1 << 14)))
		{
			sLocal_614.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			sLocal_614.f_369[0 /*32*/] = 28;
			sLocal_614.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f /*3*/ };
			sLocal_614.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iLocal_605 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !func_5(sLocal_1617.f_136, 4))
	{
		return true;
	}
	if (!func_166(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(sLocal_1617.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_39(int iParam0)
{
	func_183(iParam0);
	func_184(iParam0, 10.0f, 1);
	func_185(iParam0, 1);
	func_186(iParam0, 1);
	func_187(iParam0, 1);
	func_188(iParam0, 1);
	func_189(iParam0, 0);
	func_40(iParam0, 0);
	func_190(iParam0, 1);
	func_191(iParam0, 1);
	func_192(iParam0, 1);
	func_193(iParam0, 1);
	func_194(iParam0, 1);
	func_195(iParam0, 1);
	func_196(iParam0, 1.25f);
	func_197(iParam0, 1);
	func_198(iParam0, 1);
	func_199(iParam0, 1);
	func_200(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), (1 << 10));
	}
	else
	{
		func_145(&(iParam0->f_1), (1 << 10));
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), (1 << 17));
	}
	else
	{
		func_145(&(iParam0->f_1), (1 << 17));
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 |= iParam1;
}

void func_43(int iParam0, int iParam1)
{
	if (func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 |= iParam1;
}

void func_44()
{
	bool bVar0;
	int iVar1;

	switch (iLocal_189)
	{
		case 0:
			func_202();
			if (func_19(128))
			{
				func_203();
			}
			if (func_22(&sLocal_1617, (1 << 14)))
			{
				if (!func_22(&sLocal_1617, (1 << 15)))
				{
					func_204(sLocal_1617.f_136);
				}
				else
				{
					func_10(sLocal_1617.f_136, (1 << 10));
				}
			}
			if (func_5(sLocal_1617.f_136, 128))
			{
				bVar0 = func_63(sLocal_1617.f_138);
				func_205(&bVar0);
			}
			func_96(&sLocal_433, &sLocal_1617, 0);
			func_206(sLocal_1617.f_136, (1 << 30));
			func_206(sLocal_1617.f_136, (1 << 29));
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (func_100(iLocal_154) && !((func_207(iLocal_154) || func_208(iLocal_154, 1)) || func_209(iLocal_154)))
			{
				func_102(iLocal_154, 0, 2);
			}
			if ((func_9(sLocal_1617.f_136, (1 << 14)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_2105[0], false)))
			{
				func_15(sLocal_1617.f_136, (1 << 14));
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_1913))
			{
				if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iLocal_1913))
				{
					PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_1913);
				}
				VOLUME::DELETE_VOLUME(iLocal_1913);
			}
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
			}
			func_210((1 << 10));
			func_211();
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 5, false);
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
			}
			func_212();
			func_213(1);
			func_214(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]) && !func_215(iLocal_2082[5], Global_1392194[sLocal_1617.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_2182[0] = iLocal_2082[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (func_9(sLocal_1617.f_136, 256) && !func_9(sLocal_1617.f_136, 32))
			{
				func_216("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_216("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			break;
		case 3:
			func_107();
			if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[sLocal_1617.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2082)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[iVar1]))
					{
						if (func_215(iLocal_2082[iVar1], Global_1392194[sLocal_1617.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2082[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2082[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_2082[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2082[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_2082[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2082[iVar1]));
						}
					}
					iVar1++;
				}
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_75[4]);
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				func_111(iLocal_75[iVar1]);
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_492[iVar1 /*7*/]))
				{
					func_217(&(sLocal_492[iVar1 /*7*/]));
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_1768[iVar1 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(sLocal_1768[iVar1 /*12*/].f_8));
				}
				iVar1++;
			}
			break;
		case 4:
			func_99();
			func_108(1);
			func_2();
			if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[sLocal_1617.f_136 /*10*/].f_5))
			{
				if (!func_22(&sLocal_1617, 4) && !func_22(&sLocal_1617, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[sLocal_1617.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[sLocal_1617.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2105[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_2105[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_2105[iVar1], Global_1392194[sLocal_1617.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2105[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(sLocal_1617.f_136, (1 << 30));
			func_218(sLocal_1617.f_136, &sLocal_614, &sLocal_1617);
			func_219(&sLocal_614);
			HUD::_TEXT_BLOCK_DELETE(func_220());
			HUD::_TEXT_BLOCK_DELETE(func_221());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_189++;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_222(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

void func_46()
{
	func_54((1 << 16), func_215(Global_35, Global_1392194[sLocal_1617.f_136 /*10*/].f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(iParam0);
	iParam1->f_3 += iParam0;
}

void func_48(var uParam0)
{
	func_223(uParam0, 0.0f);
}

bool func_49()
{
	if (func_224(&(vLocal_570[4 /*3*/]), 30.0f))
	{
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	switch (iLocal_2252)
	{
		case 0:
			func_225(&(sLocal_614.f_15));
			func_225(&(sLocal_614.f_369));
			func_226(&(sLocal_15[0 /*28*/].f_11));
			func_226(&(sLocal_15[1 /*28*/].f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_225(&(sLocal_614.f_369));
			}
			func_227();
			func_228();
			func_229(&(sLocal_614.f_690));
			func_229(&sLocal_1768);
			func_230();
			func_225(&(sLocal_614.f_304));
			if (func_19(256))
			{
				func_231(-1901305252);
			}
			func_232();
			HUD::TEXT_BLOCK_REQUEST(func_220());
			HUD::TEXT_BLOCK_REQUEST(func_221());
			if (iLocal_98 == 3 && !func_19((1 << 18)))
			{
				func_233();
			}
			iLocal_2252 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_68())
			{
			}
			if (!func_55())
			{
			}
			if (!func_234())
			{
			}
			if (!func_73())
			{
			}
			if (!func_74())
			{
			}
			if (!func_235())
			{
				func_233();
				return false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Appleseed_01"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_50(int iParam0)
{
	iLocal_101 -= iLocal_101 & iParam0;
}

bool func_51(int iParam0)
{
	return iLocal_101 & iParam0 != 0;
}

bool func_52()
{
	if (!func_236(&(sLocal_614.f_15)) || !func_236(&(sLocal_614.f_369)))
	{
		return false;
	}
	if (!func_236(&(sLocal_614.f_304)))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (func_22(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5 /*32*/].f_1 != 0)
			{
				(*iParam2)[*iParam5] = func_237(iParam0->f_15[*iParam5 /*32*/].f_1, &(iParam0->f_15[*iParam5 /*32*/]), iParam0->f_15[*iParam5 /*32*/].f_6, iParam0->f_15[*iParam5 /*32*/].f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0 /*32*/].f_1 != 0)
		{
			(*iParam3)[iVar0] = VEHICLE::CREATE_VEHICLE(iParam0->f_304[iVar0 /*32*/].f_1, iParam0->f_304[iVar0 /*32*/].f_6, iParam0->f_304[iVar0 /*32*/].f_9, true, true, false, false);
			(*iParam3)[0] = (*iParam3)[0];
		}
		iVar0++;
	}
	return true;
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0);
	}
	else
	{
		func_50(iParam0);
	}
}

bool func_55()
{
	if (func_19(256))
	{
		if (!func_231(-1901305252))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_56()
{
	return { -1326.96f, -232.96f, 99.72f };
}

void func_57(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_58(int iParam0)
{
	iLocal_101 |= iParam0;
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = sLocal_614.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (sLocal_614.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19((1 << 18)))
				{
					bLocal_2108[*iParam1] = func_237(sLocal_614.f_369[*iParam1 /*32*/].f_1, &(sLocal_614.f_369[*iParam1 /*32*/]), sLocal_614.f_369[*iParam1 /*32*/].f_6, sLocal_614.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(bLocal_2108[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_2108[*iParam1], true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Vector3 vVar0;
	int iVar3;

	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_239(func_238(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		func_240(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 /*3*/ };
	if (!func_241(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_242(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_243(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_169(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_169(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_169(iParam0), false);
	}
	if (!func_243(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_169(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	func_244(iParam0, 0, 0, 0, 1, 1);
	bVar0 = func_63(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		PED::SET_PED_CONFIG_FLAG(bVar0, 178, !bParam1);
		PED::SET_PED_CONFIG_FLAG(bVar0, 168, false);
		PED::SET_PED_CONFIG_FLAG(bVar0, 259, true);
		PED::SET_PED_CONFIG_FLAG(bVar0, 297, bParam2);
		PERSCHAR::_0x6759BEE6762E140B(func_169(iParam0));
		if (!bParam1)
		{
			func_245(bVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_63(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (func_239(func_238(iParam0)))
	{
		return func_246(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_247(iParam0), 0);
}

int func_64(int iParam0)
{
	return func_66(func_65(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

Vector3 func_65()
{
	return { 0.0f, 0.0f, 0.0f };
}

int func_66(Vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	Vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_248((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) /*3*/ };
					if (func_248((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_248((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) /*3*/ };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) /*3*/ };
					}
					if (!func_248((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_249(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_248((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_243((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0.0f, 0.0f, (iParam3[iVar0 /*12*/])->f_3 /*3*/ };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 /*3*/ };
					}
					if (func_248((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_250((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_248((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((iParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_248((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_248((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, true);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_SET_ENTITY_FADE_IN((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) /*3*/ };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_67(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_251(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

bool func_68()
{
	if (!func_252(sLocal_15[0 /*28*/].f_11) || !func_252(sLocal_15[1 /*28*/].f_11))
	{
		return false;
	}
	return true;
}

int func_69(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false) && !VEHICLE::IS_VEHICLE_STOPPED(*uParam0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2.0f, -1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4.0f, 0, 0, 67633207, 5.0f, 10.0f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (func_253(uParam2))
				{
					*uParam0 = VEHICLE::CREATE_VEHICLE(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_254(*uParam1, 0, 1))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam1, *uParam0, -1);
						DECORATOR::DECOR_SET_BOOL(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_255(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3.0f, bParam3, 20.0f, 0, 1092616192, 1) || !uParam2->f_22))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4.0f, 0, 0, 67633207, 5.0f, 20.0f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_256(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
					{
						func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD"), true) == 8)
			{
				if (uParam2->f_23)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(*uParam1, *uParam0, 5.0f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(*uParam0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2.0f, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, uParam2->f_7, 1.0f, 0, false, 524419, -1.0f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
			{
				if ((!uParam2->f_26 && func_256(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
				{
					func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					uParam2->f_26 = 1;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 2000);
				if (!MISC::IS_STRING_NULL(uParam2->f_13))
				{
					TASK::TASK_PLAY_ANIM(0, uParam2->f_13, uParam2->f_14, 8.0f, -8.0f, -1, 1, 0.0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(0, iParam5, 0, 0, 0);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 20.0f, 10.0f, 60.0f, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_70(int iParam0)
{
	return iLocal_100 & iParam0 != 0;
}

void func_71(int iParam0)
{
	iLocal_100 |= iParam0;
}

void func_72(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (bParam1)
	{
		func_143(iVar0, 8);
		func_145(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
	else
	{
		func_257(iVar0, 8);
		func_201(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
}

bool func_73()
{
	if (!func_258(&uLocal_2017))
	{
		return false;
	}
	if (!func_259())
	{
		return false;
	}
	return true;
}

bool func_74()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_220()))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_221()))
	{
		return false;
	}
	return true;
}

bool func_75()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(sLocal_1617.f_136, 256) && !func_5(sLocal_1617.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_76()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_63(sLocal_1617.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
		if (!func_260(bVar0, 1))
		{
			func_261(bVar0, "EA_LCMP_Foreman", 0);
		}
		PED::SET_PED_CONFIG_FLAG(bVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(sLocal_1617.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					iVar1 = TASK::FIND_SCENARIO_OF_TYPE_HASH(-1400.66f, -213.44f, 101.9f, func_262(), 1.5f, 0, false);
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::TASK_USE_SCENARIO_POINT(bVar0, iVar1, func_263(), -1, false, true, 0, false, -1.0f, false);
					}
					else
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, false, false, false, false);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
			}
			break;
		case 2:
			if (!func_5(sLocal_1617.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
			}
			break;
		case 3:
			if (!func_5(sLocal_1617.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					if (func_9(sLocal_1617.f_136, 256) || func_9(sLocal_1617.f_136, (1 << 18)))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bVar0, func_264(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_265(bVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, (1 << 30));
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_77(int iParam0, bool bParam1)
{
	bool bVar0;

	if (func_266(iParam0, 0))
	{
		bVar0 = func_63(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_CONFIG_FLAG(bVar0, 234, true);
			PED::SET_PED_CONFIG_FLAG(bVar0, 259, true);
		}
		func_267(iParam0, 0, 1, 0, 0);
		PERSCHAR::_0x6759BEE6762E140B(func_169(iParam0));
		if (bParam1)
		{
			func_245(bVar0, 1, 1);
		}
	}
}

void func_78(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_268(&(iParam0->f_18));
}

int func_79()
{
	int iVar0;

	func_269();
	if (iLocal_98 == 3 && !func_5(sLocal_1617.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			func_271(iLocal_2082[0], func_270(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2082[0], 10.0f, 50.0f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
			func_261(iLocal_2082[0], func_272(sLocal_1617.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2082[0], "HAS_VOICE", true);
			func_245(iLocal_2082[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[1]))
		{
			func_271(iLocal_2082[1], func_270(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_2082[1], 10.0f, 50.0f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[1], 146, false);
			func_261(iLocal_2082[1], func_272(sLocal_1617.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_2082[1], "HAS_VOICE", true);
			func_245(iLocal_2082[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2082[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2082[2], true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2082[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2082[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2082[3], true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2082[3], true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1.0f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1.0f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102.0f, 1.0f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2.0f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2082[0], iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
				func_245(iLocal_2082[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[0], func_273(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[0], 146, false);
			func_245(iLocal_2082[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[1], func_273(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[1], 146, false);
			func_245(iLocal_2082[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[2], func_273(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[2], 146, false);
				func_245(iLocal_2082[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[3], func_273(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_2082[3], 146, false);
				func_245(iLocal_2082[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[4]))
	{
		func_245(iLocal_2082[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[5]))
	{
		func_245(iLocal_2082[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < sLocal_614.f_0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_2082[iVar0], 178, true);
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), iLocal_2082[iVar0], 7, 0, true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_614.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_2108[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_2108[iVar0], 178, true);
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), bLocal_2108[iVar0], 7, 0, true);
		}
		iVar0++;
	}
	func_48(&(vLocal_570[0 /*3*/]));
	return 1;
}

bool func_80(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1;
}

void func_81(bool bParam0)
{
	int iVar0;

	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, (1 << 24)))
		{
			func_274(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_274(0, 0);
		}
		if (func_9(0, (1 << 15)))
		{
			func_274(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, (1 << 24)))
					{
						func_274(0, 0);
					}
					else if (func_9(0, (1 << 10)))
					{
						if (bParam0 || !func_5(0, (1 << 28)))
						{
							func_275(0);
							func_276(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, (1 << 28));
						}
					}
					else
					{
						func_274(0, 0);
					}
					break;
				case 2:
					func_274(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_274(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, (1 << 28)))
						{
							func_275(0);
							func_276(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, (1 << 28));
						}
					}
					else
					{
						func_274(0, 0);
					}
					break;
				default:
					func_274(0, 0);
					break;
			}
		}
	}
}

void func_82(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 -= iParam0->f_29 & iParam1;
}

void func_83()
{
	if (func_51((1 << 23)))
	{
		if (func_277((1 << 10)))
		{
			func_174();
		}
		else
		{
			func_211();
		}
	}
}

bool func_84(int iParam0, int iParam1)
{
	if (!Global_1935630.f_12 && func_215(Global_35, Global_1392194[iParam0->f_136 /*10*/].f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_43(iParam0, 64);
			func_278(iParam0->f_136, 1);
			return true;
		}
	}
	return false;
}

void func_85()
{
	bool bVar0;
	char[] cVar1[4][8];
	int iVar6[4];
	int iVar11;

	sLocal_2147.f_24 = 0;
	sLocal_2147.f_23 = 0;
	sLocal_2147.f_17 = 0;
	func_145(&(sLocal_2147.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(sLocal_1617.f_136, 4))
				{
					if (func_279(1) > 0)
					{
						cVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						cVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					cVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				cVar1[1] = "LOG_WRK02A";
				if (func_22(&sLocal_1617, 256))
				{
					cVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					cVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					cVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					cVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (func_19(128) && !func_19(2))
				{
					bVar0 = true;
				}
				Jump @1301; // curOff = 274
				if (func_5(sLocal_1617.f_136, 64))
				{
					cVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					cVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					cVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					cVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (func_19(128) && !func_19(2))
					{
						if (func_279(1) > 0)
						{
							cVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							cVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						cVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (func_22(&sLocal_1617, 256))
					{
						cVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						cVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						cVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						cVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						cVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						cVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (func_19(128) && !func_19(2))
					{
						bVar0 = true;
					}
				}
				Jump @1301; // curOff = 551
				if (!func_5(sLocal_1617.f_136, 128))
				{
					if (func_9(sLocal_1617.f_136, 8))
					{
						if (func_279(1) > 0)
						{
							cVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							cVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&sLocal_1617, 256))
						{
							cVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							cVar1[1] = "LOG_WRK02CH";
						}
						cVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						cVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (func_9(sLocal_1617.f_136, 32))
					{
						if (func_70(128))
						{
							iVar11 = func_280();
							if (PED::IS_PED_HUMAN(iVar11))
							{
								cVar1[0] = "LOG_WRK01CC";
								cVar1[1] = "LOG_WRK02CC";
								cVar1[2] = "LOG_WRK03CC";
								cVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								cVar1[0] = "LOG_WRK01CW";
								cVar1[1] = "LOG_WRK02CW";
								cVar1[2] = "LOG_WRK03CW";
								cVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							cVar1[0] = "LOG_WRK01CB";
							cVar1[1] = "LOG_WRK02CB";
							if (func_279(1) > 0)
							{
								cVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								cVar1[2] = "LOG_WRK03CB";
							}
							cVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (func_9(sLocal_1617.f_136, 256))
					{
						cVar1[0] = "LOG_WRK01CA";
						cVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						cVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_279(1) > 0)
						{
							cVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							cVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (func_19(128) && !func_19(2))
						{
							if (func_279(1) > 0)
							{
								cVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								cVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							cVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (func_22(&sLocal_1617, 256))
						{
							cVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							cVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							cVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							cVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							cVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							cVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (func_19(128) && !func_19(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (func_9(sLocal_1617.f_136, 8))
				{
					cVar1[0] = "LOG_WRK01CH";
					cVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					cVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					cVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_279(1) > 0)
				{
					cVar1[0] = "LOG_WRK01CN_P";
					cVar1[1] = "LOG_WRK02CN_P";
					cVar1[2] = "LOG_WRK03CN_P";
					cVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					cVar1[0] = "LOG_WRK01CN";
					cVar1[1] = "LOG_WRK02CN";
					cVar1[2] = "LOG_WRK03CN";
					cVar1[3] = "LOG_WRK04CN";
				}
			}
			else if (func_279(1) > 0)
			{
				cVar1[0] = "EA_WRKMD01_P";
				cVar1[1] = "EA_WRKMD02_P";
				cVar1[2] = "EA_WRKMD03_P";
				cVar1[3] = "EA_WRKMD04_P";
			}
			else
			{
				cVar1[0] = "EA_WRKMD01";
				cVar1[1] = "EA_WRKMD02";
				cVar1[2] = "EA_WRKMD03";
				cVar1[3] = "EA_WRKMD04";
			}
			sLocal_2147.f_33 = 15.0f;
			func_281(&cVar1, &iVar6, &sLocal_2147, bVar0);
		}

void func_86()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;

	if (func_22(&sLocal_1617, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(func_238(iVar2)), sVar0))
		{
			PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_238(iVar2), sVar0);
			iVar3 = func_63(iVar2);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar3, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = sLocal_1617.f_138;
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(func_238(iVar2)), sVar0))
	{
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_238(iVar2), sVar1);
	}
}

void func_87(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				bVar1 = func_63(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(bVar1))
				{
					if (PED::IS_PED_HUMAN(bVar1))
					{
						(*uParam0)[iVar2] = bVar1;
						(*uParam1)[iVar2] = func_282(bVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar1, true);
							PED::SET_PED_CONFIG_FLAG(bVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(bVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(bVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(bVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(bVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 171, true);
						PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), bVar1, 7, 0, true);
						func_283(uParam2, bVar1, 0);
						if (fParam8 >= 0.0f)
						{
							PED::SET_PED_SEEING_RANGE(bVar1, fParam8);
						}
					}
					else
					{
						func_284(uParam2, bVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_88(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*bParam0)[iVar0]))
		{
			PED::SET_PED_RESET_FLAG((*bParam0)[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_89()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;

	if ((iLocal_206 % 10) == 0 && iLocal_612 < 4)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[5]))
		{
			iVar5 = func_285(&uVar0, &uLocal_2182, 4, iLocal_75[5], 0, 0, 0, joaat("DOMESTIC_DRAFT_HORSE"), 1, 0, 1, 0);
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if ((((!func_286(uVar0[iVar6], &uLocal_607) && PED::_GET_LAST_MOUNT(Global_35) != uVar0[iVar6]) && func_287(0) != uVar0[iVar6]) && func_287(1) != uVar0[iVar6]) && !func_288(uVar0[iVar6]))
				{
					uLocal_607[iLocal_612] = uVar0[iVar6];
					iLocal_612++;
					if (iLocal_612 >= 4)
					{
					}
					else
					{
						iVar6++;
					}
					iVar7 = (iLocal_206 % 4);
					if (iVar7 < 4 && !ENTITY::IS_ENTITY_DEAD(uLocal_607[iVar7]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_607[iVar7]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_607[iVar7], true, false);
						}
						func_289(uLocal_607[iVar7], iLocal_75[5], 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 45, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 51, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_607[iVar7], 71, false);
						func_284(&sLocal_1617, uLocal_607[iVar7], 0);
						if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(uLocal_607[iVar7], false)))
						{
							if (!func_131(uLocal_607[iVar7], joaat("SCRIPT_TASK_USE_RANDOM_SCENARIO_IN_GROUP")))
							{
								if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("BGZ_LOGGINGHORSESA")))
								{
									TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uLocal_607[iVar7], joaat("BGZ_LOGGINGHORSESA"), 0, 0, 1);
								}
							}
						}
						else if (func_131(uLocal_607[iVar7], joaat("SCRIPT_TASK_ANY")))
						{
							TASK::CLEAR_PED_TASKS(uLocal_607[iVar7], true, false);
						}
					}
				}
			}
		}
	}
}

void func_90()
{
	int iVar0;
	struct<21> /*168*/ sVar1;
	char* sVar30;
	int iVar31;

	if (!func_70((1 << 28)))
	{
		if (func_70((1 << 27)) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			func_71((1 << 27));
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			sVar1.f_3 = 3;
			sVar1.f_4 = 30;
			sVar1.f_5 = -1;
			sVar1.f_9 = 3;
			sVar1.f_15 = -1;
			sVar1.f_16 = -1;
			sVar1.f_20 = 2;
			sVar1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_290(&sVar1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_71((1 << 28));
			}
		}
	}
}

float func_91()
{
	if ((iLocal_98 == 1 && func_19((1 << 9))) && !func_19((1 << 18)))
	{
		return 1.0f;
	}
	return 2.0f;
}

float func_92()
{
	if ((iLocal_98 == 1 && func_19((1 << 9))) && !func_19((1 << 18)))
	{
		return 1.0f;
	}
	return 1.75f;
}

void func_93(var uParam0, int iParam1, float fParam2, float fParam3)
{
	bool bVar0;

	if (func_291(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1392194[uParam0->f_136 /*10*/].f_6;
	}
	if (func_215(Global_35, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam2);
	}
	bVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (func_215(bVar0, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, fParam3);
	}
}

void func_94()
{
	if ((VOLUME::DOES_VOLUME_EXIST(iLocal_75[0]) && func_215(Global_35, iLocal_75[0], 1, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

int func_95()
{
	int iVar0;
	int iVar1;

	if (func_51((1 << 14)))
	{
		return 0;
	}
	iVar0 = iLocal_209;
	if ((((func_134(&sLocal_433, 2) || func_292(&sLocal_1617, &(sLocal_1617.f_28))) || func_293()) || func_294()) || func_295(func_63(sLocal_1617.f_138), 0, &sLocal_1617, &(sLocal_1617.f_28), 0, 0))
	{
		if (func_134(&sLocal_433, 2))
		{
		}
		else if (sLocal_1617.f_28 == (1 << 16))
		{
			func_296(&sLocal_1617, &(sLocal_1617.f_28));
			return 0;
		}
		else if (sLocal_1617.f_28 == 32)
		{
			return func_297();
		}
		else if (sLocal_1617.f_28 == (1 << 13) && func_298())
		{
			func_296(&sLocal_1617, &(sLocal_1617.f_28));
			return 0;
		}
		if (func_299(&(sLocal_1617.f_28)) && !func_70((1 << 26)))
		{
			if (!func_134(&sLocal_433, 1))
			{
				sLocal_433.f_0 = func_63(sLocal_1617.f_138);
				func_301(&sLocal_433, &sLocal_1617, sLocal_1617.f_28, 55626, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_290(&sLocal_433, 0)))
				{
					strcpy_s(&(sLocal_433.f_20[0 /*4*/]), 32, func_290(&sLocal_433, 0));
					strcpy_s(&(sLocal_433.f_20[1 /*4*/]), 32, func_290(&sLocal_433, 1));
					func_302(&sLocal_433, 32);
				}
			}
			else if (sLocal_433.f_13 > 2)
			{
				func_302(&sLocal_433, (1 << 9));
			}
			func_296(&sLocal_1617, &(sLocal_1617.f_28));
			return 0;
		}
		return 1;
	}
	else if (func_303(&uLocal_1923, &sLocal_1617, &(sLocal_1617.f_28), &iLocal_209, 0, (iLocal_190 - 1), 4) | func_303(&iLocal_2082, &sLocal_1617, &(sLocal_1617.f_28), &uLocal_207, 0, (sLocal_614.f_0 - 1), 1) | func_303(&bLocal_2108, &sLocal_1617, &(sLocal_1617.f_28), &uLocal_208, 0, func_59(func_19((1 << 14)), sLocal_614.f_1 + 1, (sLocal_614.f_1 - 1)), 1) | func_303(&uLocal_607, &sLocal_1617, &(sLocal_1617.f_28), &uLocal_613, 0, (iLocal_612 - 1), 3))
	{
		if (func_70((1 << 17)))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_2082[0] || PED::IS_PED_LASSOED(iLocal_2082[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_2082[0], 3))
			{
				func_130(iLocal_2082[0], 0, 0);
			}
		}
		if (func_299(&(sLocal_1617.f_28)))
		{
			if (sLocal_1617.f_28 == (1 << 13) && func_298())
			{
				return 0;
			}
			if (!func_134(&sLocal_433, 1) && !func_19(32))
			{
				if (sLocal_1617.f_28 == 8 && func_304())
				{
					return 1;
				}
				if (func_19(64) && sLocal_1617.f_10 == iLocal_2082[0])
				{
					if (sLocal_1617.f_28 != (1 << 16))
					{
						func_301(&sLocal_433, &sLocal_1617, sLocal_1617.f_28, 55626, 0, 0);
						func_302(&sLocal_433, 64);
						strcpy_s(&(sLocal_433.f_20[0 /*4*/]), 32, "LCMPF_IG_TFAIM");
						func_302(&sLocal_433, 32);
					}
				}
				else
				{
					func_301(&sLocal_433, &sLocal_1617, sLocal_1617.f_28, 55626, 0, 0);
				}
			}
			func_296(&sLocal_1617, &(sLocal_1617.f_28));
			return 0;
		}
		else if (sLocal_1617.f_28 == 32)
		{
			return func_297();
		}
		return 1;
	}
	else if (func_305(&sLocal_1617, &sLocal_433, 55626))
	{
		if (!func_134(&sLocal_433, 1))
		{
			func_301(&sLocal_433, &sLocal_1617, (1 << 10), 55626, 0, 0);
			if (sLocal_433.f_0 == func_63(sLocal_1617.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(func_290(&sLocal_433, 0)))
			{
				strcpy_s(&(sLocal_433.f_20[0 /*4*/]), 32, func_290(&sLocal_433, 0));
				strcpy_s(&(sLocal_433.f_20[1 /*4*/]), 32, func_290(&sLocal_433, 1));
				func_302(&sLocal_433, 32);
			}
			func_296(&sLocal_1617, &(sLocal_1617.f_28));
			return 0;
		}
		else
		{
			func_302(&sLocal_433, (1 << 9));
		}
	}
	else if (func_306())
	{
		sLocal_1617.f_28 = 2;
		return 1;
	}
	iVar1 = func_307(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_1985[iVar0] < sLocal_1617.f_19 && func_308(uLocal_1923[iVar0], &sLocal_1617, 0, uLocal_1985[iVar0]))
		{
			func_48(&(vLocal_570[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_224(&(vLocal_570[6 /*3*/]), 10.0f))
	{
		func_309(&sLocal_1617, &(sLocal_1617.f_28));
	}
	return 0;
}

void func_96(bool bParam0, var uParam1, bool bParam2)
{
	func_268(&(bParam0->f_6));
	bParam0->f_5 = -1;
	func_136(bParam0, 1);
	func_136(bParam0, 4);
	func_136(bParam0, 32);
	func_136(bParam0, 128);
	func_136(bParam0, 64);
	func_136(bParam0, 8);
	func_136(bParam0, 256);
	func_136(bParam0, (1 << 9));
	bParam0->f_13 = 0;
	bParam0->f_18 = 0;
	if (!bParam2)
	{
		*bParam0 = 0;
		strcpy_s(&(bParam0->f_20[0 /*4*/]), 32, "");
		strcpy_s(&(bParam0->f_20[1 /*4*/]), 32, "");
		bParam0->f_16 = -1;
	}
	if (bParam0->f_19 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(bParam0->f_19);
	}
	bParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_97(var uParam0)
{
	if (func_310(uParam0->f_32))
	{
		func_311(&(uParam0->f_32), 1, 1);
	}
	if (func_310(uParam0->f_33))
	{
		func_311(&(uParam0->f_33), 1, 1);
	}
	if (func_310(uParam0->f_34))
	{
		func_311(&(uParam0->f_34), 1, 1);
	}
}

void func_98(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_99()
{
	if (func_51(32))
	{
		func_312(0);
		func_313(11, 128);
		func_50(32);
	}
}

bool func_100(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_101(int iParam0)
{
	int iVar0;

	iVar0 = func_314(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_101(iParam0) && !func_315(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_316(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_101(iParam0))
	{
		iParam2 = -1;
	}
	if (func_317(iParam0) == 3 || (func_317(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_316(iParam0))))
	{
		func_319(func_318(iParam0), func_316(iParam0), iParam2);
		if ((!func_100(Global_1572864.f_8) && !func_146(0, 1, 0)) && !func_320(Global_1935630, (1 << 15)))
		{
			iVar0 = func_321(iParam0);
			if (iVar0 != -1)
			{
				func_322(0);
			}
			else if (func_318(iParam0) == 8)
			{
				iVar0 = func_323();
				if (iVar0 != -1)
				{
					func_322(0);
				}
			}
		}
	}
	func_324(iParam0, 0);
	if (func_325(0) == iParam0)
	{
		func_103(1);
		func_326(0);
		func_327(1);
	}
	func_328(iParam0, 1);
	func_329(iParam0);
}

void func_103(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_330(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_331(&Global_1935630, (1 << 22));
	}
	MISC::ENABLE_DISPATCH_SERVICE(15 /*DT_OnFoot*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6 /*DT_PoliceRiders*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1 /*DT_PoliceAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16 /*DT_PoliceDogs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2 /*DT_PoliceHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3 /*DT_FireDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4 /*DT_SwatAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5 /*DT_AmbulanceDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7 /*DT_PoliceVehicleRequest*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9 /*DT_PoliceAutomobileWaitPulledOver*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10 /*DT_PoliceAutomobileWaitCruising*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11 /*DT_Gangs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12 /*DT_SwatHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13 /*DT_PoliceBoat*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14 /*DT_ArmyVehicle*/, bParam0);
}

bool func_104(int iParam0)
{
	int iVar0;

	iVar0 = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iParam0);
	return iVar0 > 0;
}

void func_105()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_332(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19((1 << 18)) && !func_333())
				{
					func_217(&(sLocal_492[iVar0 /*7*/]));
				}
				break;
			case 6:
				if (func_334(&(sLocal_492[6 /*7*/])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[14 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(sLocal_614.f_690[14 /*12*/].f_8);
					func_336(&(sLocal_492[6 /*7*/]), func_63(func_335(6, 0, 0)), "PED1");
					func_336(&(sLocal_492[6 /*7*/]), func_63(func_335(6, 1, 0)), "PED2");
					func_217(&(sLocal_492[6 /*7*/]));
				}
				break;
			default:
				func_217(&(sLocal_492[iVar0 /*7*/]));
				break;
		}
		iVar0++;
	}
}

void func_106()
{
	if (!ENTITY::IS_ENTITY_DEAD(bLocal_2108[0]))
	{
		func_337(&(bLocal_2108[0]));
		PED::SET_PED_CONFIG_FLAG(bLocal_2108[0], 136, false);
		TASK::TASK_FLEE_PED(bLocal_2108[0], Global_35, 4, 0, -1.0f, -1, 0);
	}
}

void func_107()
{
	PLAYER::_0xC6366A585659D15C(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0x98CD760DE43B612E(PLAYER::GET_PLAYER_INDEX(), "");
	PED::_0x8AF46E5159A5B620(Global_35, 0);
}

void func_108(bool bParam0)
{
	if (func_70((1 << 9)) || bParam0)
	{
		if (func_254(bLocal_606, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_606, 136, false);
			func_338(bLocal_606, 0);
		}
		func_339((1 << 9));
	}
}

void func_109(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_310((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_311(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_110(bool bParam0)
{
	func_268(&uLocal_0);
	func_340(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_341();
}

void func_111(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_112()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_75[4]);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[4]);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[4]);
	}
	func_111(iLocal_75[4]);
	func_111(iLocal_75[9]);
	func_111(iLocal_75[10]);
	func_111(iLocal_75[20]);
}

void func_113(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98(uParam0[iVar0]);
		iVar0++;
	}
}

void func_114(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = Global_40.f_9096[iParam0 /*12*/];
	Global_40.f_9096[iParam0 /*12*/].f_10 = Global_40.f_9096[iParam0 /*12*/].f_3;
	func_342(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, (1 << 15));
	func_15(iParam0, (1 << 24));
	func_206(iParam0, (1 << 22));
}

void func_115(int iParam0)
{
	func_296(iParam0, &(iParam0->f_28));
	func_343(iParam0, 1);
	func_191(iParam0, 0);
	func_344(iParam0, 0);
	func_345(iParam0, 0);
	func_41(iParam0, 0);
}

bool func_116(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_346(bParam0, bParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_117(int iParam0)
{
	return iLocal_102 & iParam0 != 0;
}

int func_118(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return joaat("CRIME_TRESPASSING");
		case 1024:
			return joaat("CRIME_THEFT");
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return joaat("CRIME_THREATEN");
		case 512:
			return joaat("CRIME_ROBBERY");
		case 2:
		case 32:
		case 2048:
			if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_10, Global_35, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
			{
				return joaat("CRIME_HIT_AND_RUN");
			}
			else if (WEAPON::IS_PED_ARMED(Global_35, 6))
			{
				return joaat("CRIME_ASSAULT");
			}
			else
			{
				return joaat("CRIME_UNARMED_ASSAULT");
			}
			break;
		case 4096:
			return joaat("CRIME_VANDALISM");
		case 1:
		case 128:
			return joaat("CRIME_MURDER");
		case 16384:
			return 0;
	}
	return joaat("CRIME_TRESPASSING");
}

void func_119()
{
	if (func_19(64))
	{
		func_347();
	}
	func_348(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19((1 << 18))))
	{
		func_9(1, 2);
		func_349();
	}
	if (iLocal_98 == 3)
	{
		func_350();
	}
}

int func_120(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_351(iParam0, (1 << 24)) && func_351(iParam0, (1 << 25))) && func_351(iParam0, (1 << 28)))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_PISTOL"), fParam1, fParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REVOLVER"), fParam1, fParam2, 0);
	iVar2 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!func_351(iParam0, (1 << 25)))
	{
		iVar3 = iVar1;
	}
	if (!func_351(iParam0, (1 << 24)))
	{
		if (!func_352(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_351(iParam0, (1 << 28)) && func_353(iVar2))
	{
		if (!func_352(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_352(iVar3))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

void func_121(int iParam0, bool bParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = joaat("BLIP_STYLE_FRIENDLY");
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = joaat("BLIP_STYLE_ENEMY");
	}
	bParam3 = (bParam3 || func_22(iParam0, (1 << 12)));
	if (WEAPON::IS_PED_ARMED(bParam1, 4))
	{
		bParam3 = false;
	}
	func_354(bParam1);
	func_98(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(bParam1, Global_1392194[iParam0->f_136 /*10*/].f_5, false, false, false);
		PED::SET_PED_CONFIG_FLAG(bParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(bParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(bParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(bParam1, true);
		if (bParam3)
		{
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam1, joaat("REL_PLAYER_DISLIKE"));
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FLEE_PED(0, iParam5, 4, 0, -1.0f, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(bParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam1, joaat("REL_PLAYER_ENEMY"));
			}
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(bParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 46, true);
			func_355(bParam1, iParam2, iVar0, joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
			if (func_356(bParam1))
			{
				iParam4 = func_357(bParam1);
			}
			if (PED::IS_PED_HUMAN(bParam1))
			{
				bVar2 = func_358(bParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::GIVE_WEAPON_TO_PED(bParam1, iParam4, 100, false, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
				}
			}
			if (func_352(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(bParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(bParam1))
			{
				if (func_352(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(bParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0.0f, 0.0f, 0.0f, func_359(), 0.5f, 0.0f, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(bParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, iParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, iParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

int func_122(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bParam7 = (bParam7 || func_22(iParam0, (1 << 12)));
	iVar2 = 0;
	while (iVar2 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar2]))
		{
			if (!func_286((*iParam1)[iVar2], &(iParam0->f_140)))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 146, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 277, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 178, true);
				PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[iVar2], true);
				iVar3 = func_360((*iParam1)[iVar2], 0);
				if (func_157(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				PED::SET_PED_DEFENSIVE_AREA_VOLUME((*iParam1)[iVar2], Global_1392194[iParam0->f_136 /*10*/].f_5, false, false, false);
				if (func_361((*iParam1)[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_ENEMY"));
					func_355((*iParam1)[iVar2], uParam2[iVar2], joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 31, true);
					if (func_356((*iParam1)[iVar2]))
					{
						iVar4 = func_357((*iParam1)[iVar2]);
					}
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (func_362(iParam1[iVar2], iVar4, (bParam8 || bParam7)))
						{
							WEAPON::GIVE_WEAPON_TO_PED((*iParam1)[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
							if (func_352(iVar4))
							{
								WEAPON::SET_CURRENT_PED_WEAPON((*iParam1)[iVar2], iVar4, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (func_352(iVar4))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_356((*iParam1)[iVar2]))
						{
							TASK::TASK_REACT(0, Global_35, 0.0f, 0.0f, 0.0f, func_359(), 0.5f, 0.0f, 4);
						}
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iVar1++;
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_DISLIKE"));
					if (bParam6)
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					else
					{
						PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 1);
					}
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], (1 << 20), false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], (1 << 16), false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4160);
						TASK::TASK_FLEE_PED(0, Global_35, 4, 1, -1.0f, -1, 0);
					}
					else
					{
						TASK::TASK_FLEE_PED(0, Global_35, 4, 0, -1.0f, -1, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK((*iParam1)[iVar2], true);
					func_363(iParam1[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam1)[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;

	if (iParam5 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_22(iParam0, (1 << 12)));
	if (iParam0->f_136 == 1)
	{
		func_162(&iVar4, &iVar5, func_9(1, (1 << 20)));
	}
	else
	{
		func_163(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (func_23(iVar3, 32))
		{
		}
		else
		{
			bVar6 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar6) && !func_286(bVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = bVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(bVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(bVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(bVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(bVar6, true);
				func_62(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(bVar6, 277, false);
				PED::SET_PED_DEFENSIVE_AREA_VOLUME(bVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, false, false, false);
				if ((func_361(bVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(bVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar6, joaat("REL_PLAYER_ENEMY"));
					func_355(bVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 31, true);
					if (func_356(bVar6))
					{
						iVar7 = func_357(bVar6);
					}
					if (PED::IS_PED_HUMAN(bVar6))
					{
						if (func_362(&bVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::GIVE_WEAPON_TO_PED(bVar6, iParam4, 100, false, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
							if (func_352(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(bVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (func_352(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(bVar6) && !func_356(bVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0.0f, 0.0f, 0.0f, func_359(), 0.5f, 0.0f, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(bVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || func_282(bVar6, 1, 1) < 15.0f) || func_364())
					{
						TASK::CLEAR_PED_TASKS(bVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(bVar6, 178, false);
						TASK::TASK_FLEE_PED(bVar6, Global_35, 4, 0, -1.0f, -1, 0);
						PED::SET_PED_KEEP_TASK(bVar6, true);
						func_363(&bVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0.0f, 0.0f, 0.0f, func_359(), 0.5f, 0.0f, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(bVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(bVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_124(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_254((*uParam0)[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar0], "bCowering"))
			{
				if ((func_295((*uParam0)[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_365((*uParam0)[iVar0], iParam1, &(iParam1->f_28), 0)) || func_366((*uParam0)[iVar0], Global_35, 1, 1) < 8.0f)
				{
					if (iParam1->f_28 != 32 || func_367(uParam0[iVar0], iParam1, 1097859072))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0], joaat("REL_PLAYER_DISLIKE"));
						TASK::TASK_FLEE_PED((*uParam0)[iVar0], Global_35, 4, 0, -1.0f, -1, 0);
						PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
						DECORATOR::DECOR_REMOVE((*uParam0)[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_125()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_205)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(sLocal_1617.f_140[iVar0]) && !func_131(sLocal_1617.f_140[iVar0], joaat("SCRIPT_TASK_FLEE"))) && !TASK::GET_IS_TASK_ACTIVE(sLocal_1617.f_140[iVar0], 3))
		{
			TASK::TASK_FLEE_PED(sLocal_1617.f_140[iVar0], Global_35, 4, 0, -1.0f, -1, 0);
		}
		iVar0++;
	}
}

bool func_126(int iParam0, bool bParam1, int* iParam2, bool bParam3)
{
	switch (iParam0->f_31)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(bParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(bParam1, 3))
			{
				iParam0->f_31 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(bParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if ((!TASK::GET_IS_TASK_ACTIVE(bParam1, 3) || ENTITY::HAS_ANIM_EVENT_FIRED(bParam1, 277966886)) || PED::IS_PED_USING_ANY_SCENARIO(bParam1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(bParam1))
				{
					PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bParam1, Global_36, 3, false);
					TASK::CLEAR_PED_TASKS(bParam1, true, false);
				}
				func_121(iParam0, bParam1, iParam2, bParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
				iParam0->f_31 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_127()
{
	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_492[2 /*7*/]) || func_368(&(sLocal_492[2 /*7*/]))) || func_369(&(sLocal_492[2 /*7*/]), "COWER_R_LOOP")) || func_369(&(sLocal_492[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

void func_128(int iParam0)
{
	iLocal_99 -= iLocal_99 & iParam0;
}

bool func_129()
{
	float fVar0;

	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(sLocal_614.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(sLocal_614.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(sLocal_614.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(sLocal_614.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(sLocal_614.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(sLocal_614.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(sLocal_614.f_690[24 /*12*/].f_8, true, false);
			func_370(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(sLocal_614.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(sLocal_614.f_690[24 /*12*/].f_8, true, false);
			func_371(joaat("DES_TREEFALL_ACCIDENT"));
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_130(bool bParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(bParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 243, true);
		}
		if (Global_35 == bParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(bParam0, 0, 0);
	}
}

bool func_131(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == joaat("SCRIPT_TASK_DRIVE_BY") && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_132(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (iParam0->f_136 == 1)
	{
		func_162(&iVar1, &iVar2, func_9(1, (1 << 20)));
	}
	else
	{
		func_163(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_157(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			bVar3 = func_63(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(bVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(bVar3))
				{
					if (func_372(iParam0, bVar3))
					{
						DECORATOR::DECOR_SET_BOOL(bVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(iParam0, (1 << 15)))
						{
							func_43(iParam0, (1 << 15));
						}
					}
				}
				else if (!func_22(iParam0, (1 << 15)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar3, Global_35, true, true))
					{
						func_43(iParam0, (1 << 15));
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam5) && !DECORATOR::DECOR_EXIST_ON(bParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(bParam5))
		{
			if (func_372(iParam0, bParam5))
			{
				DECORATOR::DECOR_SET_BOOL(bParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(iParam0, (1 << 15)))
				{
					func_43(iParam0, (1 << 15));
				}
			}
		}
		else if (!func_22(iParam0, (1 << 15)))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam5, Global_35, true, true))
			{
				func_43(iParam0, (1 << 15));
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar4]))
			{
				if (func_372(iParam0, (*iParam1)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam1)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, (1 << 15)))
					{
						func_43(iParam0, (1 << 15));
					}
				}
			}
			else if (!func_22(iParam0, (1 << 15)))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam1)[iVar4], Global_35, true, true))
				{
					func_43(iParam0, (1 << 15));
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*bParam2)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*bParam2)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*bParam2)[iVar4]))
			{
				if (func_372(iParam0, (*bParam2)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*bParam2)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, (1 << 15)))
					{
						func_43(iParam0, (1 << 15));
					}
				}
			}
			else if (!func_22(iParam0, (1 << 15)))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*bParam2)[iVar4], Global_35, true, true))
				{
					func_43(iParam0, (1 << 15));
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

void func_133(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_373(bParam0->f_9[0]))
	{
		return;
	}
	iVar1 = bParam0->f_9[0];
	func_374(&iVar1, 0, bParam0->f_4, 0, 0, 0, 0, 0);
	if (func_375(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < bParam0->f_3)
		{
			if (iVar0 < (bParam0->f_3 - 1))
			{
				bParam0->f_9[iVar0] = bParam0->f_9[iVar0 + 1];
			}
			else
			{
				bParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		bParam0->f_1--;
		if (bParam0->f_1 <= 0)
		{
			bParam0->f_1 = 0;
			func_136(bParam0, 16);
			bParam0->f_4 = 30;
		}
	}
}

bool func_134(bool bParam0, int iParam1)
{
	return func_376(bParam0->f_17, iParam1);
}

void func_135(var uParam0, bool bParam1, int* iParam2, var uParam3)
{
	int iVar0;
	char* sVar1;

	if (ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		func_96(bParam1, uParam0, 0);
		return;
	}
	func_377(bParam1);
	if (func_134(bParam1, 4))
	{
		if (bParam1->f_13 < 7)
		{
			func_378(bParam1, 7);
		}
		func_136(bParam1, 4);
	}
	if (func_134(bParam1, 256))
	{
		func_379(bParam1, iParam2, uParam3, 0);
	}
	if (func_134(bParam1, (1 << 9)) && bParam1->f_13 > 2)
	{
		if (bParam1->f_2 > 2)
		{
			bParam1->f_2 = 0;
			func_48(&(bParam1->f_6));
			func_378(bParam1, 2);
		}
		bParam1->f_2++;
		func_136(bParam1, (1 << 9));
	}
	switch (bParam1->f_13)
	{
		case 0:
			func_48(&(bParam1->f_6));
			if (*bParam1 == 0)
			{
				func_378(bParam1, 9);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_378(bParam1, 9);
				return;
			}
			bParam1->f_5 = func_360(*bParam1, 0);
			if (bParam1->f_5 != -1)
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if (bParam1->f_5 == -1 && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*bParam1, true, false);
			}
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(*bParam1, 250);
			AUDIO::STOP_PED_SPEAKING(*bParam1, true);
			PED::_0xA7DC9266ED6A4E51(*bParam1);
			EVENT::_SET_DECISION_MAKER_DEFAULT(*bParam1);
			if (PED::IS_PED_RAGDOLL(*bParam1))
			{
				func_302(bParam1, 8);
			}
			if (!func_260(*bParam1, 1))
			{
				sVar1 = func_381(uParam0->f_136, -1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					func_261(*bParam1, sVar1, 0);
				}
			}
			if (func_134(bParam1, 64))
			{
			}
			else if (bParam1->f_16 == 5)
			{
			}
			else if (func_382(*bParam1))
			{
				TASK::TASK_DISMOUNT_ANIMAL(*bParam1, (1 << 24), 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*bParam1, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(*bParam1, 0, 0);
			}
			func_378(bParam1, 1);
			break;
		case 1:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if (func_383(&(bParam1->f_6)) < 5.0f && ((func_131(*bParam1, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")) || func_131(*bParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"))) || func_131(*bParam1, joaat("SCRIPT_TASK_LEAVE_VEHICLE"))))
			{
				return;
			}
			func_48(&(bParam1->f_6));
			if (bParam1->f_16 == 5)
			{
				func_378(bParam1, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam1, false);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_378(bParam1, 9);
				return;
			}
			if (!func_134(bParam1, 64))
			{
				PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(*bParam1, Global_36, 3, false);
				TASK::CLEAR_PED_TASKS(*bParam1, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_384(bParam1) && (func_385(*bParam1, Global_35, 1) > 9.0f || WEAPON::IS_PED_ARMED(*bParam1, 4)))
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5.0f, (1 << 30), (1 << 30), 0);
					TASK::TASK_STAND_STILL(0, 500);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1.0f, -1.0f, -1.0f);
					TASK::TASK_STAND_STILL(0, 500);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*bParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_386(249295937, *bParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam1->f_20[0 /*4*/])))
			{
				if (func_134(bParam1, 32))
				{
					func_387(&(uParam0->f_35), &(bParam1->f_20[0 /*4*/]), *bParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*bParam1, Global_35, &(bParam1->f_20[0 /*4*/]), 0, -1082130432, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
				}
			}
			else
			{
				func_116(*bParam1, Global_35, func_388(bParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
			}
			if (bParam1->f_16 == 5)
			{
				func_378(bParam1, 3);
			}
			else
			{
				func_378(bParam1, 2);
			}
			break;
		case 3:
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1)) || func_389(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_390(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(bParam1->f_6)) < 10.0f)
				{
					return;
				}
				else
				{
					func_302(bParam1, 2);
					func_378(bParam1, 9);
					return;
				}
			}
			func_378(bParam1, 5);
			break;
		case 4:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1)) || func_389(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_390(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(bParam1->f_6)) < 10.0f)
				{
					return;
				}
				else
				{
					func_302(bParam1, 2);
					func_378(bParam1, 9);
					return;
				}
			}
			func_378(bParam1, 5);
			break;
		case 5:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1)) || func_389(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_390(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(bParam1->f_6)) < 10.0f)
				{
					func_378(bParam1, 3);
					return;
				}
				else
				{
					func_302(bParam1, 2);
					func_378(bParam1, 9);
					return;
				}
			}
			func_48(&(bParam1->f_6));
			func_378(bParam1, 7);
			break;
		case 2:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1)) || func_389(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (((bParam1->f_16 != 5 && func_383(&(bParam1->f_6)) < 25.0f) && func_131(*bParam1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) && func_385(*bParam1, Global_35, 1) > 9.0f)
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_378(bParam1, 9);
				return;
			}
			if (!func_134(bParam1, 64))
			{
				switch (bParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						TASK::CLEAR_PED_TASKS(*bParam1, true, false);
						if (!func_134(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
						{
							TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_134(bParam1, 16))
						{
							TASK::CLEAR_PED_TASKS(*bParam1, true, false);
							if (!func_134(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
							{
								TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
							}
						}
						else
						{
							switch (bParam1->f_1)
							{
								case 1:
									TASK::CLEAR_PED_TASKS(*bParam1, true, false);
									break;
								case 2:
									TASK::CLEAR_PED_TASKS(*bParam1, true, false);
									if (!func_134(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
									{
										TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						TASK::CLEAR_PED_TASKS(*bParam1, true, false);
						if (func_134(bParam1, 16))
						{
							TASK::TASK_AIM_AT_ENTITY(*bParam1, Global_35, -1, 0, 0);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam1, Global_35, -1, -1.0f, -1.0f, -1.0f);
						}
						break;
				}
			}
			func_48(&(bParam1->f_6));
			func_386(249295937, *bParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam1->f_20[1 /*4*/])))
			{
				if (func_134(bParam1, 32))
				{
					func_387(&(uParam0->f_35), &(bParam1->f_20[1 /*4*/]), *bParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*bParam1, Global_35, &(bParam1->f_20[1 /*4*/]), 0, -1082130432, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
			}
			else
			{
				func_116(*bParam1, Global_35, func_388(bParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			switch (bParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_378(bParam1, 6);
					break;
				default:
					func_378(bParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1))
			{
				return;
			}
			if ((!func_134(bParam1, 4) && func_131(*bParam1, joaat("SCRIPT_TASK_CONFRONT"))) && func_383(&(bParam1->f_6)) < 5.0f)
			{
				return;
			}
			if (func_383(&(bParam1->f_6)) < 15.0f)
			{
				return;
			}
			func_48(&(bParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_378(bParam1, 9);
				return;
			}
			func_378(bParam1, 7);
			break;
		case 7:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_256(0, 1, *bParam1, 1))
			{
				return;
			}
			if ((!func_134(bParam1, 4) && func_131(*bParam1, joaat("SCRIPT_TASK_CONFRONT"))) && func_383(&(bParam1->f_6)) < 5.0f)
			{
				return;
			}
			if (bParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(func_391(Global_35)))
			{
				func_302(bParam1, 2);
			}
			func_48(&(bParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_378(bParam1, 9);
				return;
			}
			if (!func_134(bParam1, 64))
			{
				TASK::CLEAR_PED_TASKS(*bParam1, true, false);
			}
			func_378(bParam1, 8);
			break;
		case 8:
			if (func_157(bParam1->f_5))
			{
				if (!func_266(bParam1->f_5, 0))
				{
					func_380(bParam1->f_5);
				}
			}
			if (func_393(&(bParam1->f_6), func_392(bParam1)))
			{
				AUDIO::STOP_PED_SPEAKING(*bParam1, false);
				if (!func_134(bParam1, 64) && !func_134(bParam1, 128))
				{
					if (bParam1->f_5 != -1)
					{
						func_77(bParam1->f_5, 1);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam1);
					}
				}
				func_378(bParam1, 9);
			}
			break;
		case 9:
			func_394(bParam1, iParam2, uParam3);
			func_96(bParam1, uParam0, 0);
			break;
	}
}

void func_136(bool bParam0, int iParam1)
{
	func_201(&(bParam0->f_17), iParam1);
}

int func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (iLocal_98 >= 4)
	{
		return func_395();
	}
	if (func_22(&sLocal_1617, 32))
	{
		if (iLocal_98 == 3 && !func_9(sLocal_1617.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < sLocal_614.f_1)
			{
				func_396(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_397(&uLocal_195, 2);
	if (func_19((1 << 13)))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_398(iLocal_605, func_7(iVar1));
			if (bVar3)
			{
				func_399(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_117((1 << 9)))
	{
		func_400();
		func_401();
	}
	if (!func_51((1 << 26)))
	{
		func_402(0);
		func_403(0, 1, 1);
		func_58((1 << 26));
	}
	bVar4 = func_63(sLocal_1617.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(bVar4))
	{
		if (bVar4 != bLocal_155)
		{
			bLocal_155 = bVar4;
			func_78(&(sLocal_211[0 /*21*/]), 0);
		}
		func_67(&(sLocal_1617.f_35), bVar4, "EA_LCMP_Foreman", 0);
		func_404(&bVar4);
		PED::SET_PED_RESET_FLAG(bVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(sLocal_1617.f_136, 128)))
	{
		func_405(&bVar4);
	}
	if (iLocal_98 < 4)
	{
		func_406();
	}
	func_407();
	func_408(&bVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(sLocal_1617.f_136, 128))
		{
			func_409();
		}
		func_410();
		return 0;
	}
	func_411();
	if (func_19((1 << 14)))
	{
		func_412(&(bLocal_2108[0]));
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_414(bVar4, &(uLocal_2102[0]), &sLocal_1617, func_19((1 << 18)), &bVar5, 1, func_413());
		func_13(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(iLocal_2105[0]))
	{
		PROPSET::_ADD_PROP_SET_FOR_VEHICLE(iLocal_2105[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	func_415();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_416(&bVar4, &(iLocal_2082[0])));
		return 0;
	}
	if (func_19(64) && func_19(4))
	{
		func_417(&bVar4);
		func_418(&(iLocal_2082[0]));
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_2105[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2105[0], sLocal_614.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2105[0], true);
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_2105[0], 0, true);
		}
	}
	if (!func_19(32))
	{
		if (func_19((1 << 18)))
		{
			sLocal_2147.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19((1 << 31)) && func_9(1, 2))
						{
							return func_419(&bVar4);
						}
						else
						{
							return func_420(&bVar4);
						}
						break;
					default:
						return func_420(&bVar4);
				}
			}
			else
			{
				return func_421(&bVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_422(&bVar4);
					}
					else
					{
						return func_421(&bVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19((1 << 31)) && func_9(1, 2))
						{
							return func_419(&bVar4);
						}
						else
						{
							return func_420(&bVar4);
						}
					}
					else
					{
						return func_421(&bVar4);
					}
					break;
				case 3:
					func_423(&(iLocal_2082[0]), 0);
					func_423(&(iLocal_2082[1]), 1);
					func_424();
					func_425();
					if (func_9(sLocal_1617.f_136, 256) || func_426(&bVar4))
					{
						return func_427(&bVar4);
					}
					break;
				case 4:
				case 5:
					return func_395();
			}
		}
	}
	return 0;
}

void func_138()
{
	int iVar0;
	float fVar1;
	bool bVar2;

	func_428();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0) && !func_430(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar0]))
			{
				if (!(iVar0 == 0 && func_19((1 << 9))))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_466[iVar0]);
				if (fVar1 >= (func_431(iVar0) - 0.007544f) && fVar1 <= func_432(iVar0))
				{
					func_433();
				}
				switch (iLocal_603)
				{
					case 0:
						if (fVar1 >= func_431(iVar0) && fVar1 < func_432(iVar0))
						{
							PAD::SET_CONTROL_SHAKE(0, 400, func_434(iVar0));
							func_435(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", func_436(iVar0));
							bVar2 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(bVar2) && func_438(bVar2, func_437(iVar0), 1) < 10.0f)
							{
								PED::_HORSE_AGITATE(bVar2, func_364());
							}
							iLocal_603 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_432(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), func_436(iVar0), -1.0f, 100.0f, 100.0f, -1.0f, (30.0f + 5.0f), -1, -1);
							func_58((1 << 13));
							PAD::SET_CONTROL_SHAKE(0, 300, (func_434(iVar0) / 2));
							iLocal_603 = 2;
						}
						break;
					case 2:
						func_111(iLocal_75[2]);
						func_111(iLocal_75[3]);
						iLocal_603 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_139()
{
	if (func_22(&sLocal_1617, (1 << 10)))
	{
		return true;
	}
	if (bLocal_2254)
	{
		return true;
	}
	if (iLocal_2251 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return false;
	}
	if (func_439(bLocal_2254))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_141(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_142(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

void func_143(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] |= iParam1;
	}
	else
	{
		Global_1058888.f_40545[iParam0 /*11*/] |= iParam1;
	}
}

Vector3 func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return { -1410.538f, -223.0142f, 100.0121f };
		case 1:
			return { -439.4129f, 498.0963f, 97.94115f };
		case 3:
			return { -1577.892f, -915.5556f, 82.73499f };
		case 2:
			switch (iParam1)
			{
				case 1:
					return { 2226.756f, 666.0685f, 94.00805f };
				case 2:
					return { 2195.606f, 794.7285f, 106.9675f };
				case 3:
					return { 1951.033f, 934.2983f, 116.3355f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_145(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_440())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_441(Global_1898164.f_1[0 /*5*/]);
		if (func_442(iVar0) && func_443(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_100(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if (Global_1935630 & 40959 & (-1 - iParam0) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & (1 << 9) == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_147()
{
	return func_444(64);
}

bool func_148(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_445(iVar0) | func_446(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_149()
{
	return Global_1310750.f_16077 != 0;
}

int func_150()
{
	return Global_1310750.f_16071;
}

void func_151(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_447(iParam0, Global_40.f_9096[iParam0 /*12*/].f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_152(int iParam0)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_10;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_158(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_159(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_201(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_160(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_161(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_162(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

bool func_163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_164(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_239(func_238(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_169(iParam0));
	return 1;
}

int func_165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_448(iParam0))
	{
		return 1;
	}
	if (func_142(iParam0, 16))
	{
		return 1;
	}
	if (func_449(iParam0) && !func_450(iParam0))
	{
	}
	if (func_163(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_157(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_157(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_449(iParam0) || func_450(iParam0)) || func_451(Global_1897950))
			{
				func_240(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_166(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_453(func_452());
	if (func_376(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_376(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_376(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_376(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_376(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_376(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_376(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_376(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_376(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_167(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_454(iVar0))
		{
			fVar3 = func_455(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_168(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_170(int iParam0)
{
	int iVar0;

	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_169(iParam0);
	func_456(iParam0);
	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
	PERSCHAR::_DELETE_PERSCHAR(iVar0);
}

void func_171(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_172(int iParam0)
{
	Global_1898092.f_1 |= iParam0;
}

void func_173()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (func_19(64))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.451f, -274.8033f, 102.3449f, 0.0f, 0.0f, 0.0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !func_19((1 << 18)))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1430.557f, -357.1499f, 111.7085f, 0.0f, 0.0f, 0.0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_174()
{
	Vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (!func_51((1 << 22)) && !func_277((1 << 11)))
		{
			vVar0 = { VOLUME::GET_VOLUME_SCALE(iLocal_75[16]) /*3*/ };
			func_458(VOLUME::GET_VOLUME_COORDS(iLocal_75[16]), func_457(vVar0.x, vVar0.y), 0, 0, 4);
			PATHFIND::_0xB03944057FD735BA(iLocal_75[16], 4, 0);
			func_58((1 << 22));
		}
	}
}

void func_175(int iParam0)
{
	if (iLocal_98 == 3)
	{
		iParam0->f_1 = 2;
		iParam0->f_369[0 /*32*/].f_6 = { -1403.06f, -269.28f, 98.71f /*3*/ };
		iParam0->f_369[0 /*32*/].f_9 = -49.0f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1414.56f, -182.0f, 99.63f /*3*/ };
		iParam0->f_369[1 /*32*/].f_9 = 40.7f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
	}
}

void func_176(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1413.793f, -240.7767f, 98.87817f /*3*/ };
		iParam0->f_15[0 /*32*/].f_9 = 251.3227f;
		iParam0->f_15[0 /*32*/].f_1 = func_459();
		iParam0->f_15[0 /*32*/].f_3 = 1842387010;
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f /*3*/ };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = func_459();
		iParam0->f_15[2 /*32*/].f_6 = { -1407.91f, -252.1218f, 99.3026f /*3*/ };
		iParam0->f_15[2 /*32*/].f_9 = 354.953f;
		iParam0->f_15[2 /*32*/].f_21 = 0;
		iParam0->f_15[2 /*32*/].f_1 = func_459();
		iParam0->f_15[3 /*32*/].f_6 = { -1415.464f, -251.052f, 100.0263f /*3*/ };
		iParam0->f_15[3 /*32*/].f_9 = 323.5956f;
		iParam0->f_15[3 /*32*/].f_21 = 1;
		iParam0->f_15[3 /*32*/].f_1 = func_459();
	}
	iParam0->f_1 = 0;
	if (func_19((1 << 14)))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && func_19((1 << 17)))
	{
		sLocal_15[0 /*28*/].f_4 = { -1376.811f, -220.7483f, 100.515f /*3*/ };
		sLocal_15[0 /*28*/].f_10 = -22.2f;
	}
	else
	{
		sLocal_15[0 /*28*/].f_4 = { -1261.942f, -304.2063f, 97.9132f /*3*/ };
		sLocal_15[0 /*28*/].f_10 = 59.8051f;
	}
	if (func_19((1 << 15)))
	{
		sLocal_15[0 /*28*/].f_11 = joaat("LOGWAGON");
		if (iLocal_98 == 1 && !func_19((1 << 17)))
		{
			sLocal_15[0 /*28*/].f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	sLocal_15[0 /*28*/] = { -1372.528f, -209.3416f, 100.5443f /*3*/ };
	sLocal_15[0 /*28*/].f_3 = 349.7721f;
	sLocal_15[0 /*28*/].f_23 = 0;
	sLocal_15[0 /*28*/].f_22 = 0;
	sLocal_15[0 /*28*/].f_7 = { -1381.927f, -210.7938f, 102.3367f /*3*/ };
	iParam0->f_15[4 /*32*/].f_6 = { -1416.878f, -211.8701f, 104.7347f /*3*/ };
	iParam0->f_15[4 /*32*/].f_9 = 309.938f;
	if (func_19((1 << 15)))
	{
		*iParam0++;
		iParam0->f_15[4 /*32*/].f_1 = func_459();
	}
	else
	{
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_177(int iParam0)
{
	func_176(iParam0);
	if (func_19(64))
	{
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f /*3*/ };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = func_459();
	}
	sLocal_15[1 /*28*/].f_4 = { -1377.5f, -200.4f, 102.6f /*3*/ };
	sLocal_15[1 /*28*/].f_10 = 77.9f;
	if (func_19((1 << 16)))
	{
		sLocal_15[1 /*28*/].f_11 = joaat("LOGWAGON");
		iLocal_14 += 2;
	}
	sLocal_15[1 /*28*/] = { -1400.617f, -124.2774f, 96.3551f /*3*/ };
	sLocal_15[1 /*28*/].f_3 = 89.0f;
	sLocal_15[1 /*28*/].f_23 = 1;
	sLocal_15[1 /*28*/].f_25 = 1;
	if (func_19((1 << 16)))
	{
		sLocal_15[1 /*28*/].f_12 = "LOG_WAGON02C";
	}
	if (func_19((1 << 15)))
	{
		sLocal_15[0 /*28*/].f_12 = "LOG_WAGON01B";
	}
	sLocal_15[0 /*28*/] = { -1373.148f, -219.672f, 99.51241f /*3*/ };
	iParam0->f_15[5 /*32*/].f_6 = { -1376.0f, -197.6f, 102.1f /*3*/ };
	iParam0->f_15[5 /*32*/].f_9 = 55.8f;
	if (func_19((1 << 16)))
	{
		*iParam0++;
		iParam0->f_15[5 /*32*/].f_1 = func_459();
	}
	else
	{
		iParam0->f_15[5 /*32*/].f_1 = 0;
	}
}

void func_178()
{
}

void func_179(int iParam0, bool bParam1)
{
	func_176(iParam0);
	func_177(iParam0);
	if (func_5(0, 128))
	{
		if (func_19((1 << 16)))
		{
			sLocal_15[1 /*28*/].f_12 = "LOG_WAGON02C";
		}
		if (func_19((1 << 15)))
		{
			sLocal_15[0 /*28*/].f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1389.931f, -265.0812f, 98.29932f /*3*/ };
		iParam0->f_15[0 /*32*/].f_9 = -161.23f;
		iParam0->f_15[0 /*32*/].f_1 = func_459();
		iParam0->f_15[1 /*32*/].f_6 = { -1431.474f, -269.5809f, 102.2202f /*3*/ };
		iParam0->f_15[1 /*32*/].f_9 = -148.66f;
		iParam0->f_15[1 /*32*/].f_1 = func_459();
		if (!bParam1)
		{
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f /*3*/ };
			iParam0->f_15[2 /*32*/].f_9 = 49.7f;
			iParam0->f_15[2 /*32*/].f_21 = 1;
			iParam0->f_15[2 /*32*/].f_1 = func_459();
			iParam0->f_15[2 /*32*/].f_3 = -1149853461;
			func_460(&(iParam0->f_15[2 /*32*/].f_22));
			func_461(&(iParam0->f_15[2 /*32*/].f_22));
			func_462(&(iParam0->f_15[2 /*32*/].f_22));
			func_463(&(iParam0->f_15[2 /*32*/].f_22));
			func_464(&(iParam0->f_15[2 /*32*/].f_22));
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f /*3*/ };
			iParam0->f_15[3 /*32*/].f_9 = -145.8f;
			iParam0->f_15[3 /*32*/].f_21 = 1;
			iParam0->f_15[3 /*32*/].f_1 = func_459();
			iParam0->f_15[3 /*32*/].f_3 = 307318431;
			func_460(&(iParam0->f_15[3 /*32*/].f_22));
			func_461(&(iParam0->f_15[3 /*32*/].f_22));
			func_462(&(iParam0->f_15[3 /*32*/].f_22));
			func_463(&(iParam0->f_15[3 /*32*/].f_22));
			func_464(&(iParam0->f_15[3 /*32*/].f_22));
		}
		else
		{
			iParam0->f_15[2 /*32*/].f_1 = 0;
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f /*3*/ };
			iParam0->f_15[3 /*32*/].f_1 = 0;
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f /*3*/ };
		}
		iParam0->f_369[0 /*32*/].f_6 = { -1468.629f, -379.8213f, 125.2618f /*3*/ };
		iParam0->f_369[0 /*32*/].f_9 = -45.42f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1459.213f, -380.2958f, 122.0884f /*3*/ };
		iParam0->f_369[1 /*32*/].f_9 = -6.39f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[2 /*32*/].f_6 = { -1449.054f, -341.1028f, 118.9559f /*3*/ };
		iParam0->f_369[2 /*32*/].f_9 = -124.44f;
		iParam0->f_369[2 /*32*/].f_1 = joaat("A_C_WOLF");
		*iParam0 = 4;
		iParam0->f_1 = 3;
		sLocal_15[1 /*28*/].f_11 = 0;
		sLocal_15[0 /*28*/].f_11 = 0;
		iParam0->f_15[5 /*32*/].f_1 = 0;
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_180()
{
	int iVar0;

	if (!iLocal_98 == 3 || func_5(sLocal_1617.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(sLocal_1617.f_136, (1 << 9)) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_465(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; // curOff = 96
			}
			else if (!func_466(iVar0))
			{
				func_467(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_181()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_182()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_364();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(sLocal_1617.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		func_469(&iLocal_605, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_183(int iParam0)
{
	func_345(iParam0, 0);
	func_190(iParam0, 0);
	func_188(iParam0, 1);
	func_193(iParam0, 1);
	func_189(iParam0, 0);
	func_198(iParam0, 1);
	func_470(iParam0, 1, 1, 1);
}

void func_184(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_471(iParam0, fParam1);
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 4);
	}
	else
	{
		func_145(&(iParam0->f_1), 4);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 2);
	}
	else
	{
		func_145(&(iParam0->f_1), 2);
	}
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 1);
	}
	else
	{
		func_145(&(iParam0->f_1), 1);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 256);
	}
	else
	{
		func_145(&(iParam0->f_1), 256);
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 128);
	}
	else
	{
		func_145(&(iParam0->f_1), 128);
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), (1 << 11));
	}
	else
	{
		func_145(&(iParam0->f_1), (1 << 11));
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 32);
	}
	else
	{
		func_201(iParam0, 32);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 8);
	}
	else
	{
		func_145(&(iParam0->f_1), 8);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 16);
	}
	else
	{
		func_201(iParam0, (1 << 26));
		func_201(iParam0, 16);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 8);
	}
	else
	{
		func_201(iParam0, 8);
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, (1 << 10));
	}
	else
	{
		func_201(iParam0, (1 << 10));
	}
}

void func_196(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_197(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 128);
	}
	else
	{
		func_201(iParam0, 128);
	}
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 256);
	}
	else
	{
		func_201(iParam0, 256);
	}
}

void func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 2);
	}
	else
	{
		func_201(iParam0, 2);
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, (1 << 17));
	}
	else
	{
		func_201(iParam0, (1 << 17));
	}
}

void func_201(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_202()
{
	int iVar0;

	if (func_117((1 << 9)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_472[iVar0]))
		{
			ENTITY::_UNPIN_MAP_ENTITY(iLocal_472[iVar0]);
		}
		iVar0++;
	}
}

void func_203()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_204(int iParam0)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = -1;
	Global_40.f_9096[iParam0 /*12*/].f_10 = -1;
	func_15(iParam0, (1 << 15));
}

void func_205(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		iVar0 = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(*bParam0, &iVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), iVar1, iVar0);
	}
}

void func_206(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 -= Global_40.f_9096[iParam0 /*12*/].f_4 & iParam1;
}

bool func_207(int iParam0)
{
	return func_314(iParam0) == 0;
}

bool func_208(int iParam0, bool bParam1)
{
	switch (func_314(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_209(int iParam0)
{
	return func_314(iParam0) == 7;
}

void func_210(int iParam0)
{
	Global_1898092.f_1 -= Global_1898092.f_1 & iParam0;
}

void func_211()
{
	Vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (func_51((1 << 22)))
		{
			vVar0 = { VOLUME::GET_VOLUME_SCALE(iLocal_75[16]) /*3*/ };
			func_472(VOLUME::GET_VOLUME_COORDS(iLocal_75[16]), func_457(vVar0.x, vVar0.y), 4);
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_75[16], 4, 0);
		}
	}
}

void func_212()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_473(func_436(iVar0), 0);
		iLocal_466[iVar0] = 0;
		iVar0++;
	}
}

void func_213(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_474(iVar0, bParam0);
		iVar0++;
	}
}

void func_214(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	func_185(&sLocal_1617, bParam0);
	func_188(&sLocal_1617, bParam0);
}

bool func_215(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(bParam0, iParam1, bParam2, iParam3);
}

int func_216(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_217(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_43(iParam2, 128);
	func_72(iParam0, 0);
	func_158(iParam2->f_137, 0);
	func_475(iParam2);
	func_42(iParam0, (1 << 11));
	func_82(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_162(&iVar0, &iVar1, func_9(1, (1 << 20)));
	}
	else
	{
		func_163(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(func_63(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = iVar0;
	Global_1898092.f_26.f_8 = iParam2->f_29;
	Global_1898092.f_26.f_2 = iParam2->f_136;
	Global_1898092.f_26.f_1 = iParam2->f_137;
	func_172((1 << 9));
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(iParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (func_310(iParam2->f_32))
	{
		func_311(&(iParam2->f_32), 1, 1);
	}
	if (func_310(iParam2->f_33))
	{
		func_311(&(iParam2->f_33), 1, 1);
	}
	if (func_310(iParam2->f_34))
	{
		func_311(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS((*iParam1 + iParam1->f_1));
	}
	if (func_398(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		func_42(iParam2->f_136, (1 << 22));
	}
	func_476();
	if (func_22(iParam2, (1 << 16)))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_219(int iParam0)
{
	int iVar0;

	iVar0 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	PED::_UNRESERVE_AMBIENT_PEDS(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_220()
{
	return "LOGCMP";
}

char* func_221()
{
	return "LCMPAUD";
}

bool func_222(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_477(iVar0))
	{
		return false;
	}
	if (func_478(iVar0, 1) || func_478(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_223(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_479() - fParam1);
	func_480(uParam0, 1);
	func_481(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_224(var uParam0, float fParam1)
{
	if (func_393(uParam0, fParam1))
	{
		func_268(uParam0);
		return true;
	}
	return false;
}

void func_225(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_226(&((uParam0[iVar0 /*32*/])->f_1));
		func_226(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_226(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_227()
{
	int iVar0;

	if (func_19((1 << 13)))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_483(&(sLocal_492[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", func_482(9), 0);
			iVar0++;
		}
	}
	if (func_19((1 << 14)))
	{
		func_483(&(sLocal_492[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", func_482(6), 0);
	}
	if (func_19(256))
	{
		func_483(&(sLocal_492[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", func_482(7), 0);
		func_483(&(sLocal_492[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", func_482(8), 0);
	}
	if (func_19(64))
	{
		func_483(&(sLocal_492[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", func_482(2), 0);
		func_483(&(sLocal_492[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", func_482(3), 0);
		func_483(&(sLocal_492[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", func_482(4), 0);
	}
	if (func_19((1 << 18)))
	{
		if (func_19(16))
		{
			func_484();
		}
		else if (func_9(1, 2) && !func_9(sLocal_1617.f_136, (1 << 14)))
		{
			func_483(&(sLocal_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
			func_483(&(sLocal_492[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
		}
		else
		{
			func_484();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_484();
				}
				else
				{
					func_483(&(sLocal_492[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_482(5), 0);
					func_483(&(sLocal_492[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(0), 0);
					func_483(&(sLocal_492[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_484();
				}
				else if (func_9(1, 2) && !func_9(sLocal_1617.f_136, (1 << 14)))
				{
					func_483(&(sLocal_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
					func_483(&(sLocal_492[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
				}
				else
				{
					func_484();
				}
				break;
			case 3:
				func_483(&(sLocal_492[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", func_482(0), 0);
				func_483(&(sLocal_492[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_482(1), 0);
				func_483(&(sLocal_492[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", func_482(2), 0);
				func_483(&(sLocal_492[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", func_482(3), 0);
				break;
		}
	}
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2[2];
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	Vector3 vVar10;

	if (func_19(256))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 12);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (iVar1 <= iVar0)
			{
				sLocal_1768[iVar1 /*12*/].f_7 = func_485();
			}
			else
			{
				sLocal_1768[iVar1 /*12*/].f_7 = 0;
			}
			sLocal_1768[iVar1 /*12*/] = { func_486(iVar1) /*3*/ };
			if (func_364())
			{
				sLocal_1768[iVar1 /*12*/].f_3 = 25.0f;
			}
			else
			{
				sLocal_1768[iVar1 /*12*/].f_3 = (180.0f + 25.0f);
			}
			sLocal_1768[iVar1 /*12*/].f_10 = 0;
			func_487(&(sLocal_1768[iVar1 /*12*/].f_11), 67);
			iVar1++;
		}
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			sLocal_614.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			sLocal_614.f_690[7 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[7 /*12*/] = { func_488() /*3*/ };
		sLocal_614.f_690[7 /*12*/].f_3 = 89.0f;
		sLocal_614.f_690[7 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			sLocal_614.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			sLocal_614.f_690[8 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[8 /*12*/] = { func_488() /*3*/ };
		sLocal_614.f_690[8 /*12*/].f_3 = 89.0f;
		sLocal_614.f_690[8 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			sLocal_614.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			sLocal_614.f_690[9 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[9 /*12*/] = { func_488() /*3*/ };
		sLocal_614.f_690[9 /*12*/].f_3 = 89.0f;
		sLocal_614.f_690[9 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			sLocal_614.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			sLocal_614.f_690[10 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[10 /*12*/] = { func_488() /*3*/ };
		sLocal_614.f_690[10 /*12*/].f_3 = 89.0f;
		sLocal_614.f_690[10 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			sLocal_614.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			sLocal_614.f_690[24 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f /*3*/ };
		sLocal_614.f_690[24 /*12*/].f_3 = 74.57f;
		sLocal_614.f_690[24 /*12*/].f_10 = 0;
		func_487(&(sLocal_614.f_690[24 /*12*/].f_11), 64);
		if (func_19(64))
		{
			sLocal_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			sLocal_614.f_690[6 /*12*/] = { func_489() /*3*/ };
			sLocal_614.f_690[6 /*12*/].f_3 = 89.0f;
			sLocal_614.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			sLocal_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			sLocal_614.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f /*3*/ };
			sLocal_614.f_690[12 /*12*/].f_3 = 27.0f;
			sLocal_614.f_690[12 /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[12 /*12*/].f_11), 75);
			if (func_19(128))
			{
				sLocal_614.f_690[0 /*12*/].f_7 = 0;
				sLocal_614.f_690[0 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[0 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[0 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					sLocal_614.f_690[4 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[4 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[4 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[4 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					sLocal_614.f_690[3 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[3 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[3 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			sLocal_614.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			sLocal_614.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f /*3*/ };
			sLocal_614.f_690[13 /*12*/].f_3 = 24.0f;
			sLocal_614.f_690[13 /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[13 /*12*/].f_11), 75);
			sLocal_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			sLocal_614.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f /*3*/ };
			sLocal_614.f_690[12 /*12*/].f_3 = 25.0f;
			sLocal_614.f_690[12 /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[12 /*12*/].f_11), 75);
			sLocal_614.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			sLocal_614.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f /*3*/ };
			sLocal_614.f_690[25 /*12*/].f_3 = 19.95f;
			sLocal_614.f_690[25 /*12*/].f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					sLocal_614.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					sLocal_614.f_690[3 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[3 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[3 /*12*/].f_4 = { 90.0f, 0.0f, -5.99f /*3*/ };
				sLocal_614.f_690[3 /*12*/].f_10 = 0;
				if (func_9(1, 2))
				{
					sLocal_614.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					sLocal_614.f_690[4 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f /*3*/ };
				sLocal_614.f_690[4 /*12*/].f_3 = -153.92f;
				sLocal_614.f_690[4 /*12*/].f_10 = 0;
				func_487(&(sLocal_614.f_690[4 /*12*/].f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					sLocal_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					sLocal_614.f_690[6 /*12*/] = { func_489() /*3*/ };
					sLocal_614.f_690[6 /*12*/].f_3 = 89.0f;
					sLocal_614.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			sLocal_614.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			sLocal_614.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f /*3*/ };
			sLocal_614.f_690[13 /*12*/].f_3 = 24.0f;
			sLocal_614.f_690[13 /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[13 /*12*/].f_11), 75);
			sLocal_614.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			sLocal_614.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f /*3*/ };
			sLocal_614.f_690[12 /*12*/].f_3 = 25.0f;
			sLocal_614.f_690[12 /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[12 /*12*/].f_11), 75);
			sLocal_614.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			sLocal_614.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f /*3*/ };
			sLocal_614.f_690[25 /*12*/].f_3 = 19.95f;
			sLocal_614.f_690[25 /*12*/].f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(sLocal_1617.f_136, 128) || (func_5(sLocal_1617.f_136, 128) && func_9(1, 2)))
				{
					sLocal_614.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					sLocal_614.f_690[3 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[3 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[3 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[3 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128) || (func_5(sLocal_1617.f_136, 128) && func_9(1, 2)))
				{
					sLocal_614.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					sLocal_614.f_690[4 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f /*3*/ };
				sLocal_614.f_690[4 /*12*/].f_3 = -153.92f;
				sLocal_614.f_690[4 /*12*/].f_10 = 0;
				func_487(&(sLocal_614.f_690[4 /*12*/].f_11), 2);
				if (!func_5(sLocal_1617.f_136, 128) || func_9(1, 2))
				{
					sLocal_614.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					sLocal_614.f_690[6 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[6 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[6 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[6 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					sLocal_614.f_690[7 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[7 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[7 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[7 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					sLocal_614.f_690[8 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[8 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[8 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[8 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					sLocal_614.f_690[9 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[9 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[9 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[9 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					sLocal_614.f_690[10 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[10 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[10 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[10 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					sLocal_614.f_690[11 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[11 /*12*/] = { func_488() /*3*/ };
				sLocal_614.f_690[11 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[11 /*12*/].f_10 = 0;
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					sLocal_614.f_690[0 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[0 /*12*/] = { func_490(0, 2) /*3*/ };
				sLocal_614.f_690[0 /*12*/].f_2 -= 5.0f;
				sLocal_614.f_690[0 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[0 /*12*/].f_10 = 0;
				func_487(&(sLocal_614.f_690[0 /*12*/].f_11), 67);
				if (!func_5(sLocal_1617.f_136, 128))
				{
					sLocal_614.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					sLocal_614.f_690[1 /*12*/].f_7 = 0;
				}
				sLocal_614.f_690[1 /*12*/] = { func_490(0, 3) /*3*/ };
				sLocal_614.f_690[1 /*12*/].f_2 -= 5.0f;
				sLocal_614.f_690[1 /*12*/].f_3 = 89.0f;
				sLocal_614.f_690[1 /*12*/].f_10 = 0;
				func_487(&(sLocal_614.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		bVar7 = func_398(iLocal_605, func_7(iVar5));
		if (bVar7)
		{
			iVar2[iVar6] = iVar5;
			iVar6++;
		}
		if (iVar6 >= 2)
		{
		}
		else
		{
			iVar5++;
		}
	}
	iVar8 = 0;
	while (iVar8 < iVar6)
	{
		iVar9 = iVar8 * 4;
		if (iVar9 + 18 >= sLocal_614.f_690 || iVar9 < 0)
		{
		}
		else
		{
			iVar5 = iVar2[iVar8];
			if (func_19((1 << 13)))
			{
				sLocal_614.f_690[(15 + iVar9) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				sLocal_614.f_690[(16 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				sLocal_614.f_690[(17 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				sLocal_614.f_690[(18 + iVar9) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				sLocal_614.f_690[(15 + iVar9) /*12*/].f_7 = 0;
				sLocal_614.f_690[(16 + iVar9) /*12*/].f_7 = 0;
				sLocal_614.f_690[(17 + iVar9) /*12*/].f_7 = 0;
				sLocal_614.f_690[(18 + iVar9) /*12*/].f_7 = 0;
			}
			sLocal_614.f_690[(15 + iVar9) /*12*/] = { func_491(iVar5) /*3*/ };
			sLocal_614.f_690[(15 + iVar9) /*12*/].f_3 = func_492(iVar5);
			sLocal_614.f_690[(15 + iVar9) /*12*/].f_10 = 0;
			sLocal_614.f_690[(16 + iVar9) /*12*/] = { func_493(iVar5) /*3*/ };
			sLocal_614.f_690[(16 + iVar9) /*12*/].f_4 = { func_494(iVar5) /*3*/ };
			sLocal_614.f_690[(16 + iVar9) /*12*/].f_10 = 0;
			func_487(&(sLocal_614.f_690[(16 + iVar9) /*12*/].f_11), 2);
			vVar10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(sLocal_614.f_690[(16 + iVar9) /*12*/], sLocal_614.f_690[(16 + iVar9) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) /*3*/ };
			sLocal_614.f_690[(17 + iVar9) /*12*/] = { vVar10 /*3*/ };
			sLocal_614.f_690[(17 + iVar9) /*12*/].f_3 = sLocal_614.f_690[(16 + iVar9) /*12*/].f_3;
			sLocal_614.f_690[(17 + iVar9) /*12*/].f_10 = 0;
			vVar10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(sLocal_614.f_690[(16 + iVar9) /*12*/], sLocal_614.f_690[(16 + iVar9) /*12*/].f_3, 0.0f, 6.3529f, -0.077f) /*3*/ };
			sLocal_614.f_690[(18 + iVar9) /*12*/] = { vVar10 /*3*/ };
			sLocal_614.f_690[(18 + iVar9) /*12*/].f_3 = sLocal_614.f_690[(16 + iVar9) /*12*/].f_3;
			sLocal_614.f_690[(18 + iVar9) /*12*/].f_10 = 0;
			iVar8++;
		}
	}
	if (func_19(128))
	{
		if (func_19((1 << 14)))
		{
			sLocal_614.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			sLocal_614.f_690[2 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f /*3*/ };
		sLocal_614.f_690[2 /*12*/].f_3 = 100.36f;
		sLocal_614.f_690[2 /*12*/].f_10 = 0;
		if (func_19((1 << 14)))
		{
			sLocal_614.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			sLocal_614.f_690[14 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f /*3*/ };
		sLocal_614.f_690[14 /*12*/].f_3 = 94.76f;
		sLocal_614.f_690[14 /*12*/].f_10 = 0;
		if (func_19((1 << 14)))
		{
			sLocal_614.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			sLocal_614.f_690[23 /*12*/].f_7 = 0;
		}
		sLocal_614.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f /*3*/ };
		sLocal_614.f_690[23 /*12*/].f_3 = 129.6f;
		sLocal_614.f_690[23 /*12*/].f_10 = 1;
	}
	if ((func_19((1 << 18)) || func_19(16)) && func_333())
	{
		if (iLocal_98 != 3)
		{
			sLocal_614.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			sLocal_614.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0.0f, 0.0f, 18.85407f, 1.0f, 1.0f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		sLocal_614.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				sLocal_614.f_690[11 /*12*/].f_7 = 0;
				sLocal_614.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f /*3*/ };
				break;
			case 2:
				sLocal_614.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f /*3*/ };
				break;
			case 3:
				sLocal_614.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f /*3*/ };
				break;
		}
		sLocal_614.f_690[11 /*12*/].f_3 = 5.0f;
		sLocal_614.f_690[11 /*12*/].f_10 = 0;
		func_487(&(sLocal_614.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		sLocal_614.f_690[5 /*12*/].f_7 = 0;
	}
	sLocal_614.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f /*3*/ };
	sLocal_614.f_690[5 /*12*/].f_3 = 22.0f;
	sLocal_614.f_690[5 /*12*/].f_10 = 0;
	func_487(&(sLocal_614.f_690[5 /*12*/].f_11), 2);
}

void func_229(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

void func_230()
{
	sLocal_614.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			sLocal_614.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			sLocal_614.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f /*3*/ };
			sLocal_614.f_304[0 /*32*/].f_9 = 27.0f;
			func_487(&(sLocal_614.f_304[0 /*32*/].f_22), 129);
			sLocal_614.f_2 = 1;
			break;
		case 2:
			if (!func_22(&sLocal_1617, 32))
			{
				if (func_19(256))
				{
					sLocal_614.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(sLocal_1617.f_136, (1 << 14)))
			{
				sLocal_614.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f /*3*/ };
				sLocal_614.f_304[0 /*32*/].f_9 = 298.1611f;
				sLocal_614.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				sLocal_614.f_2++;
				if (func_19((1 << 18)))
				{
					sLocal_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19((1 << 18)) && func_9(1, 2)) || func_9(sLocal_1617.f_136, (1 << 14)))
			{
				sLocal_614.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f /*3*/ };
				sLocal_614.f_304[0 /*32*/].f_9 = 298.1611f;
				sLocal_614.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				sLocal_614.f_2++;
				if (func_19((1 << 18)))
				{
					sLocal_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&sLocal_1617, 32))
			{
				if (func_19(256))
				{
					sLocal_614.f_2++;
				}
			}
			break;
	}
}

bool func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(iParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_232()
{
	char* sVar0;

	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_495(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_495(sVar0, &uLocal_2017);
	}
	if (func_19((1 << 13)))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_495(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_495(sVar0, &uLocal_2017);
	}
	if (func_19((1 << 18)))
	{
		sVar0 = func_496();
		func_495(sVar0, &uLocal_2017);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_495(sVar0, &uLocal_2017);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				func_495(sVar0, &uLocal_2017);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_495(sVar0, &uLocal_2017);
				break;
		}
	}
}

void func_233()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(func_497());
}

bool func_234()
{
	if (!func_498(&(sLocal_614.f_690)))
	{
		return false;
	}
	return true;
}

bool func_235()
{
	if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		return ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(func_497());
	}
	return true;
}

bool func_236(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_499(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_237(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	bool bVar0;

	if (bParam6)
	{
		func_500(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_501(uParam1))
	{
		bVar0 = PED::_CREATE_METAPED_OUTFIT_PED(uParam1->f_5, vParam2, bParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
		{
			bVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		bVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(bVar0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(bVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(bVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_503(bVar0))
		{
			func_261(bVar0, &(uParam1->f_23), 0);
		}
		if (func_503(bVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(bVar0, 307, true);
		}
		if (func_504(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(bVar0, true);
			PED::SET_PED_TO_RAGDOLL(bVar0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(bVar0, 186, !func_505(&(uParam1->f_22)));
			func_130(bVar0, func_506(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(bVar0);
		}
		if (func_507(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(bVar0, true);
		}
		if (func_508(&(uParam1->f_22)))
		{
			func_509(bVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(bVar0);
		PED::SET_PED_CONFIG_FLAG(bVar0, 6, func_510(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(bVar0, 393, true);
		if (!func_248(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(bVar0, true);
		}
		if (!func_503(bVar0))
		{
			func_512(bVar0, !func_511(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 4, func_513(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 297, !func_514(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 317, !func_514(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (PED::IS_PED_HUMAN(bVar0))
		{
			DECORATOR::DECOR_SET_BOOL(bVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(bVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return bVar0;
}

int func_238(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_239(int iParam0)
{
	return iParam0 != 0;
}

int func_240(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_515(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_238(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_169(iParam0));
				func_171(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_169(iParam0));
		}
		return 0;
	}
	if (!func_516(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		func_171(iParam0, 128);
		return 1;
	}
	func_515(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_238(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_169(iParam0));
	if (func_23(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_169(iParam0));
		func_171(iParam0, (1 << 11));
	}
	return 1;
}

bool func_241(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_246(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_169(iParam0));
}

bool func_242(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_169(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_169(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_243(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_244(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_517(iParam0, 1))
	{
		return 0;
	}
	if (func_239(func_238(iParam0)))
	{
		iVar1 = func_169(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_518(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_519(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_245(bool bParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(bParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 317, bParam1);
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = func_169(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

int func_247(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

bool func_248(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_249(var uParam0, bool bParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	vVar0.f_2 = (vVar0.z + 5.0f);
	if (bParam1)
	{
		if (!func_520(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 /*3*/ };
		}
	}
}

float func_250(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0.0f)
	{
		fVar0 += 360.0f;
	}
	else if (fParam0 >= 360.0f)
	{
		fVar0 -= 360.0f;
	}
	return fVar0;
}

bool func_251(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			strcpy_s(&((uParam0[uParam0->f_97 /*4*/])->f_1), 24, sParam2);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_252(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_253(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_521(uParam0->f_4, 1) > 120.0f)
	{
		iVar0 = 1;
	}
	else if (func_521(uParam0->f_4, 1) > 65.0f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 4.0f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_254(bool bParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_522(bParam0, iParam1);
}

bool func_255(bool bParam0, var uParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, bool bParam9)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_385(PLAYER::PLAYER_PED_ID(), bParam0, 1) < (fParam8 * fParam8))
	{
		*bParam2 = 0.0f;
		return true;
	}
	if (fParam6 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_523(bParam0, bParam5))
	{
		if (func_524(vVar0, bParam0, uParam1, bParam2, bParam3, fParam4, bParam5, bParam7, bParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*bParam2 = 0.0f;
	}
	return false;
}

bool func_256(float fParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		if (!func_525(bParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_526(fParam0))
	{
		return false;
	}
	return true;
}

void func_257(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= Global_23118[iParam0 /*11*/] & iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= Global_1058888.f_40545[iParam0 /*11*/] & iParam1;
}

bool func_258(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_259()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_492[iVar1 /*7*/]))
		{
			if (!func_527(&(sLocal_492[iVar1 /*7*/])))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

bool func_260(bool bParam0, bool bParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(bParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (bParam1 && AUDIO::_0xF0EE69F500952FA5(bParam0))
	{
		return true;
	}
	return false;
}

void func_261(bool bParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_254(bParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(bParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(bParam0, sParam1);
	}
}

int func_262()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE");
}

char* func_263()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_264()
{
	return { -1400.832f, -205.7252f, 101.8838f };
}

void func_265(bool bParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (bParam0 == func_528(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_503(bParam0))
	{
		if (func_529(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(bParam0);
		}
	}
	if (func_248(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 -= iParam5 & 4;
				func_265(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 -= iParam5 & 4;
				func_265(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_248(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_248(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_248(iParam5, 129))
	{
		if (func_248(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_248(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_248(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_503(bParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_248(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_248(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

bool func_266(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_518(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_267(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_23(iParam0, 1))
	{
		return;
	}
	if (!func_23(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_518(iParam0)) && func_530(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_531(iParam0);
	if (func_239(func_238(iParam0)))
	{
		iVar0 = func_169(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_171(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_532(iParam0, 0);
	}
}

void func_268(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_269()
{
}

int func_270(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_351(iParam0, (1 << 23)) && func_351(iParam0, (1 << 20))) && func_351(iParam0, (1 << 21))) && func_351(iParam0, (1 << 22)))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), fParam1, fParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), fParam1, fParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), fParam1, fParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), fParam1, fParam2, 0);
	while (func_533(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; // curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), fParam1, fParam2, 0);
		}
	}
	if (!func_353(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!func_351(iParam0, (1 << 23)))
	{
		iVar5 = iVar0;
	}
	if (!func_351(iParam0, (1 << 20)))
	{
		if (!func_352(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_351(iParam0, (1 << 21)))
	{
		if (!func_352(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_351(iParam0, (1 << 22)))
	{
		if (!func_352(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_352(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

int func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				strcpy_s(&cVar5, 128, WEAPON::_GET_WEAPON_NAME(iVar0));
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					strcpy_s(&cVar5, 128, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))));
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_352(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_352(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_1() == -1 && !func_353(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_353(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_352(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_534(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_535(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_536(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, bParam4);
	}
	return iVar0;
}

char* func_272(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_273()
{
	if (func_166(64))
	{
		return iLocal_203;
	}
	return iLocal_204;
}

void func_274(int iParam0, bool bParam1)
{
	if (bParam1 || func_5(iParam0, (1 << 13)))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, func_537(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, func_537(iParam0));
		func_206(iParam0, (1 << 13));
	}
}

void func_275(int iParam0)
{
	if (!func_5(iParam0, (1 << 13)))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, func_537(iParam0), func_144(iParam0, func_4(iParam0)), func_538(iParam0), func_539(iParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, func_537(iParam0), func_540(iParam0), func_541());
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, func_537(iParam0), func_542(iParam0), func_543());
		func_42(iParam0, (1 << 13));
	}
}

void func_276(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, func_537(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_545(func_544(iParam0), sParam2, func_541(), func_540(iParam0), joaat("PLAYER_MENU"), 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_277(int iParam0)
{
	return Global_1898092.f_1 & iParam0 != 0;
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_546(iParam0))
	{
		iVar0 = func_141(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_547(iVar0, 0);
				break;
			case 1:
				MAP::_MAP_DISCOVER_REGION(-238119963);
				break;
		}
		if (bParam1)
		{
			func_548(iParam0, 0);
		}
	}
}

int func_279(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_549(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_550(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_550(), iVar3);
		if (func_551(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_280()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_552(Global_35))
		{
			iVar1 = func_553(Global_35);
		}
		else if (func_554(Global_35))
		{
			iVar1 = func_555(Global_35);
		}
		else if (func_556(Global_35))
		{
			iVar1 = func_557(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	return iVar0;
}

void func_281(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	var uVar11;
	int iVar12;

	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_558(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (uVar1[iVar10] == 0)
			{
				uVar1[0] = uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = uVar1[iVar10];
		uParam2->f_2[iVar10] = (*sParam0)[iVar12];
		uParam2->f_7[iVar10] = (*iParam1)[iVar12];
		iVar10++;
	}
}

float func_282(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1.0f;
	}
	return func_366(Global_35, bParam0, bParam1, bParam2);
}

void func_283(var uParam0, bool bParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_284(var uParam0, bool bParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(bParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(bParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

int func_285(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			bVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_559(bVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreThisPed"))
				{
					if (!func_286(bVar2, bParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(bVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = bVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

bool func_286(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *bParam1)
	{
		if (bParam0 == (*bParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_287(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_288(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), iVar0))
	{
		return false;
	}
	iVar1 = joaat("META_HORSE_SADDLE_ONLY");
	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(iParam0, iVar1))
	{
		return true;
	}
	return false;
}

void func_289(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0, iParam1, bParam2, bParam3, false);
	}
}

char* func_290(bool bParam0, int iParam1)
{
	if (func_134(bParam0, 16))
	{
		switch (bParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (bParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (bParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

int func_291(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_561(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &sVar0);
		if ((bParam3 || sVar0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &sVar18))
		{
			if (sVar18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(sVar18.f_0, sVar18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_292(int iParam0, var uParam1)
{
	if (func_19((1 << 20)))
	{
		if (((((func_365(func_63(sLocal_1617.f_138), iParam0, uParam1, 0) || ((iLocal_206 % 3) == 1 && func_562(&uLocal_1923, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_206 % 3) == 2 && func_562(&uLocal_1923, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_206 % 3) == 0 && func_562(&uLocal_1923, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || func_562(&iLocal_2082, iParam0, uParam1, 0, -1)) || func_562(&bLocal_2108, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_293()
{
	if (func_9(1, 2) || func_9(sLocal_1617.f_136, (1 << 14)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[0]) && func_563(Global_35, iLocal_2105[0], 0))
		{
			if (func_9(sLocal_1617.f_136, (1 << 14)))
			{
				func_98(&(uLocal_2102[1]));
				return false;
			}
			else
			{
				func_565(3, 0, 0, func_564(), func_63(sLocal_1617.f_138), 0, 1065353216, 0);
				func_58((1 << 15));
				return true;
			}
		}
	}
	if (func_19((1 << 16)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && func_563(Global_35, uLocal_72[1], 1))
		{
			func_565(3, 0, 0, func_564(), func_63(sLocal_1617.f_138), 0, 1065353216, 0);
			func_58((1 << 15));
			return true;
		}
	}
	if (func_19((1 << 15)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && func_563(Global_35, uLocal_72[0], 1))
		{
			func_565(3, 0, 0, func_564(), func_63(sLocal_1617.f_138), 0, 1065353216, 0);
			func_58((1 << 15));
			return true;
		}
	}
	return false;
}

bool func_294()
{
	int iVar0;

	iVar0 = (iLocal_206 % iLocal_612);
	if (iVar0 < 4)
	{
		if (!func_215(uLocal_607[iVar0], iLocal_75[5], 1, 0) && PED::_GET_RIDER_OF_MOUNT(uLocal_607[iVar0], false) == Global_35)
		{
			func_35((1 << 28));
			return true;
		}
	}
	return false;
}

bool func_295(bool bParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_566(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0.0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_567(bParam0, iParam2))
			{
				*uParam3 = 128;
				func_568(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_569(bParam0, iParam2))
				{
					*uParam3 = 8;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_570(bParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_571(bParam0, iParam2))
				{
					*uParam3 = 64;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_291(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*uParam3 = (1 << 14);
				func_568(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_572(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_573(Global_35, bParam0, iParam2))
					{
						*uParam3 = 4;
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_574(Global_35, bParam0, iParam2))
					{
						*uParam3 = 256;
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_575(Global_35, bParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_575(Global_35, bParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_568(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_576(bParam0, iParam2))
				{
					*uParam3 = 32;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_577(&bParam0, iParam2))
				{
					*uParam3 = (1 << 12);
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_578(iParam2, 4000))
				{
					if (func_579(bParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_580(iParam2, bParam0) && func_581(iParam2, bParam0))
					{
						*uParam3 = 2;
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_579(bParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_580(iParam2, bParam0) && func_581(iParam2, bParam0))
				{
					*uParam3 = 2;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_582(bParam0, Global_1935630.f_41))
							{
								func_583();
								*uParam3 = 2;
								func_568(bParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & (1 << 17) == 0)
					{
						if (func_582(bParam0, Global_1935630.f_41))
						{
							func_583();
							*uParam3 = 2;
							func_568(bParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_584(iParam2, bParam0) || (iParam2->f_9 > 0 && (func_585() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_583();
						*uParam3 = 2;
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_586())
					{
						if (func_582(bParam0, Global_1935630.f_42))
						{
							func_583();
							*uParam3 = 2;
							func_568(bParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_587(iParam2, bParam0))
			{
				*uParam3 = (1 << 10);
				func_568(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_588(bParam0, iParam1, iParam2))
				{
					*uParam3 = (1 << 11);
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_589(bParam0, iParam2))
					{
						*uParam3 = (1 << 13);
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_590(bParam0, iParam2))
				{
					*uParam3 = (1 << 15);
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_591(iParam2, 4000))
				{
					if (func_592(&bParam0, iParam2))
					{
						*uParam3 = (1 << 9);
						func_568(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_593(bParam0, iParam2))
				{
					*uParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_568(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_372(iParam2, bParam0))
			{
				*uParam3 = 1;
				func_568(bParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_296(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_585();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_594(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_297()
{
	if (!func_595(&sLocal_1617))
	{
		if (!func_596(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		func_43(&sLocal_1617, (1 << 12));
	}
	return 1;
}

bool func_298()
{
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (func_19((1 << 18)))
	{
		return false;
	}
	return false;
}

bool func_299(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return true;
		default:
			break;
	}
	return false;
}

int func_300(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)))
	{
		if (func_597())
		{
			(*bParam0)[iVar0] = func_63(sLocal_1617.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]))
		{
			(*bParam0)[iVar0] = iLocal_2082[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_2108[0]))
		{
			(*bParam0)[iVar0] = bLocal_2108[0];
			iVar0++;
		}
	}
	if (func_19((1 << 13)))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_398(iLocal_605, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_335(9, iVar1, iVar6);
					bVar4 = func_63(iVar3);
					if (!ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						(*bParam0)[iVar0] = bVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !func_5(sLocal_1617.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_335(6, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_19(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_335(7, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(sLocal_1617.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_335(0, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(sLocal_1617.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_335(3, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < bLocal_2108)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_2108[iVar1]))
		{
			(*bParam0)[iVar0] = bLocal_2108[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19((1 << 18)))
	{
		(*bParam0)[iVar0] = iLocal_2082[2];
		iVar0++;
		(*bParam0)[iVar0] = iLocal_2082[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_301(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	func_302(bParam0, 1);
	iVar0 = PED::_GET_LASSO_TARGET(Global_35);
	if (bParam5 || bParam0->f_1 < bParam0->f_3)
	{
		if (bParam0->f_1 >= 2)
		{
			func_302(bParam0, 16);
			bParam0->f_4 = 45;
		}
		if (bParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					bParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_10))
					{
						func_302(bParam0, 2);
						return;
					}
					if (func_598(bParam0, &(uParam1->f_10)))
					{
						func_302(bParam0, 2);
					}
					else
					{
						func_136(bParam0, 1);
					}
					return;
				case 64:
					if (func_598(bParam0, &(uParam1->f_10)))
					{
						func_302(bParam0, 2);
					}
					else
					{
						func_136(bParam0, 1);
					}
					return;
				case 2048:
					bParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(func_391(Global_35)))
					{
						bParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							bParam0->f_18 = 1;
						}
						else
						{
							bParam0->f_18 = 2;
						}
						bParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						bParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					bParam0->f_16 = 7;
					break;
			}
		}
		if (*bParam0 != 0)
		{
		}
		else if (bParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*bParam0 = uParam1->f_10;
		}
		else if (!func_601(bParam0, iParam3, Global_36, 50.0f, func_599(bParam0), func_600(bParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*bParam0) || !PED::IS_PED_HUMAN(*bParam0))
		{
			return;
		}
		if (bParam0->f_1 < 3)
		{
			bParam0->f_9[bParam0->f_1] = func_452();
		}
		if (!bParam4)
		{
			bParam0->f_1++;
		}
	}
	else
	{
		func_302(bParam0, 2);
	}
}

void func_302(bool bParam0, int iParam1)
{
	func_145(&(bParam0->f_17), iParam1);
}

int func_303(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_307(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_295((*bParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_304()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_334(&(sLocal_492[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_602(6))
		{
			bVar1 = func_63(func_335(6, iVar0, 0));
			if (bVar1 == sLocal_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(&(sLocal_492[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_602(3))
		{
			bVar1 = func_63(func_335(3, iVar0, 0));
			if (bVar1 == sLocal_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(&(sLocal_492[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_602(7))
		{
			bVar1 = func_63(func_335(7, iVar0, 0));
			if (bVar1 == sLocal_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(&(sLocal_492[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_602(8))
		{
			bVar1 = func_63(func_335(8, iVar0, 0));
			if (bVar1 == sLocal_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (func_334(&(sLocal_492[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_602(9))
			{
				bVar1 = func_63(func_335(9, iVar0, iVar4));
				if (bVar1 == sLocal_1617.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_305(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (func_134(bParam1, 1))
	{
		return false;
	}
	if (!func_215(Global_35, Global_1392194[uParam0->f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if ((func_603(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		if (func_601(&uVar1, iParam2, Global_36, 12.5f, 1, 120.0f))
		{
			*bParam1 = uVar1;
			bParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_306()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	bVar0 = false;
	bVar1 = false;
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 9)) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iVar2, (1 << 9));
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				bVar0 = false;
				bVar1 = false;
				iVar5 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (func_215(bVar6, Global_1392194[sLocal_1617.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (bVar6 == func_63(sLocal_1617.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_286(bVar6, &uLocal_1923))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_286(bVar6, &iLocal_2082))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!func_596(&bVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (bVar0 && !bVar1)
					{
						func_43(&sLocal_1617, (1 << 12));
					}
					return bVar0;
				}
			}
		}
	}
}

int func_307(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_308(bool bParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return false;
		}
	}
	if (fParam3 < 0.0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90.0f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return true;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_309(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_310(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_311(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_310(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_604(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_605(iVar0);
	*uParam0 = 0;
}

void func_312(bool bParam0)
{
	int iVar0;

	iVar0 = 11;
	if (!func_606())
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iVar0 /*446*/].f_25))
	{
		if (bParam0)
		{
			VOLUME::DELETE_VOLUME(Global_1914319.f_3[iVar0 /*446*/].f_25);
		}
		else
		{
			Global_1914319.f_3[iVar0 /*446*/].f_25 = 0;
		}
	}
	Global_1914319.f_3[iVar0 /*446*/].f_23 = 0;
	func_607(11);
	func_608(101, 0);
	func_313(11, 4);
}

void func_313(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 -= Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1;
}

int func_314(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_317(iParam0);
}

bool func_315(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_317(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_316(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_317(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_318(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

void func_319(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_1() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_320(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_321(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_318(iParam0))
	{
		case 1:
			iVar0 = func_441(iParam0);
			return func_613(iVar0);
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_614(iVar1);
			}
			break;
	}
	return -1;
}

void func_322(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_615(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_616();
		Global_1898077.f_9 = func_617(Global_1894899.f_2);
		func_618(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_323()
{
	if (!func_208(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_208(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_208(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_208(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_208(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_208(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_208(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_324(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_619(iParam0, iParam1);
}

int func_325(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_326(bool bParam0)
{
	if (!bParam0 && func_620(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_327(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_328(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_325(0) != iParam0)
	{
		return;
	}
	if (func_621(iParam0))
	{
		if (bParam1)
		{
			func_622(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_623(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_329(int iParam0)
{
	return func_625(func_624(iParam0));
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (func_19(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (func_19(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_333()
{
	return (iLocal_597 == 0 || iLocal_597 == 1);
}

bool func_334(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
}

int func_335(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 += (iParam1 + iParam2);
	return iVar0;
}

void func_336(var uParam0, bool bParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, sParam2, bParam1);
}

void func_337(bool bParam0)
{
	if (iLocal_205 < 10)
	{
		if (!func_286(*bParam0, &(sLocal_1617.f_140)))
		{
			sLocal_1617.f_140[iLocal_205] = *bParam0;
			iLocal_205++;
		}
	}
}

void func_338(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (!func_627(bParam0))
	{
		return;
	}
	iVar0 = func_628(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_629(iVar0);
	func_630(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_631(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_632(iVar0))
		{
			return;
		}
	}
	func_633(iVar0);
	PED::SET_PED_KEEP_TASK(bParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
		}
	}
}

void func_339(int iParam0)
{
	iLocal_100 -= iLocal_100 & iParam0;
}

void func_340(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_341()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_634(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_344(iParam0, 1);
		func_194(iParam0, 1);
		func_193(iParam0, 1);
		func_191(iParam0, 1);
		func_635(iParam0, 1);
		func_195(iParam0, 1);
		func_636(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_344(iParam0, 0);
		func_194(iParam0, 0);
		func_193(iParam0, 0);
		func_191(iParam0, 0);
		func_635(iParam0, 0);
		func_195(iParam0, 0);
		func_636(iParam0, 0);
	}
}

void func_344(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 4);
	}
	else
	{
		func_201(iParam0, 4);
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), (1 << 14));
	}
	else
	{
		func_145(&(iParam0->f_1), (1 << 14));
	}
}

int func_346(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1.0f)
	{
		if (func_637())
		{
			fParam4 = 50.0f;
		}
		else
		{
			fParam4 = 75.0f;
		}
	}
	if (bParam9)
	{
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_282(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL_ALLOWPLAYAFTERDEATH")) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_366(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_48(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_638(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				sVar3.f_5 = 1;
				sVar3.f_6 = 1;
				sVar3.f_0 = sParam2;
				sVar3.f_3 = iParam11;
				sVar3.f_4 = bParam1;
				sVar3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				sVar3.f_6 = iParam15;
				sVar3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(sVar3.f_7), 3);
					MISC::SET_BIT(&(sVar3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &sVar3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_59(func_639(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_347()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;

	if (func_334(&(sLocal_492[2 /*7*/])))
	{
		fVar0 = func_640(&(sLocal_492[2 /*7*/]));
		func_641(&(sLocal_492[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_2082[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2082[0], false);
			func_642(&(sLocal_492[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			func_643(&(sLocal_492[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((func_644(&(sLocal_492[2 /*7*/]), "PBL_IMPATIENT") || (func_644(&(sLocal_492[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_644(&(sLocal_492[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_642(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_L", 1);
				func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				func_642(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_R", 1);
				func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
			}
			func_14((1 << 10));
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)))
			{
				func_336(&(sLocal_492[2 /*7*/]), func_63(sLocal_1617.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_63(810)))
			{
				func_336(&(sLocal_492[2 /*7*/]), func_63(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
			{
				func_336(&(sLocal_492[2 /*7*/]), iLocal_2082[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
			{
				func_336(&(sLocal_492[2 /*7*/]), iLocal_2082[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[7 /*12*/].f_8))
			{
				func_336(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[8 /*12*/].f_8))
			{
				func_336(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[9 /*12*/].f_8))
			{
				func_336(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[10 /*12*/].f_8))
			{
				func_336(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (func_19((1 << 9)))
			{
				if (Global_36 < fVar1)
				{
					func_642(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_L", 1);
					func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					func_642(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_R", 1);
					func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			func_128((1 << 10));
		}
	}
}

void func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_334(&(sLocal_492[(9 + iVar0) /*7*/])))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			bVar3 = func_63(func_335(9, 0, iVar2));
			bVar4 = func_63(func_335(9, 1, iVar2));
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				bVar5 = bVar4;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				bVar5 = bVar3;
				bVar6 = true;
			}
			else
			{
				func_336(&(sLocal_492[(9 + iVar0) /*7*/]), sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
				func_217(&(sLocal_492[(9 + iVar0) /*7*/]));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar3))
				{
					func_337(&bVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(bVar4))
				{
					func_337(&bVar4);
				}
				iVar7 = func_645(bVar5, Global_35, 1060437492);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar3))
					{
						func_336(&(sLocal_492[(9 + iVar0) /*7*/]), bVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						func_336(&(sLocal_492[(9 + iVar0) /*7*/]), bVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_646(iVar8, iVar7)))
				{
					func_642(&(sLocal_492[(9 + iVar0) /*7*/]), func_646(iVar8, iVar7), 1);
					func_643(&(sLocal_492[(9 + iVar0) /*7*/]), "bBreakInternalLoop");
				}
				func_336(&(sLocal_492[(9 + iVar0) /*7*/]), sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_349()
{
	if (ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)))
	{
		return;
	}
	if (!func_334(&(sLocal_492[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(sLocal_1617.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(sLocal_1617.f_138), sLocal_614.f_690[25 /*12*/].f_8, false);
	func_642(&(sLocal_492[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_643(&(sLocal_492[0 /*7*/]), "bBreakInternalLoop");
	func_14((1 << 10));
}

void func_350()
{
	if (!ENTITY::IS_ENTITY_DEAD(func_63(sLocal_1617.f_138)) && func_334(&(sLocal_492[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(func_63(sLocal_1617.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(sLocal_1617.f_138), sLocal_614.f_690[25 /*12*/].f_8, false);
			func_642(&(sLocal_492[1 /*7*/]), "PBL_COMBAT", 1);
			func_643(&(sLocal_492[1 /*7*/]), "bBreakInternalLoop");
			func_14((1 << 10));
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(sLocal_1617.f_138), sLocal_614.f_690[5 /*12*/].f_8, false);
			func_217(&(sLocal_492[1 /*7*/]));
		}
	}
	if (func_334(&(sLocal_492[3 /*7*/])))
	{
		func_217(&(sLocal_492[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(sLocal_614.f_690[7 /*12*/].f_8);
	}
	if (func_334(&(sLocal_492[0 /*7*/])))
	{
		func_217(&(sLocal_492[0 /*7*/]));
	}
}

bool func_351(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_352(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_353(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_354(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
	func_98(&iVar0);
}

void func_355(bool bParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, bParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

bool func_356(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_357(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_358(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_359()
{
	return "Default_Shocked";
}

int func_360(bool bParam0, bool bParam1)
{
	return func_647(bParam0, Global_1894899.f_2, bParam1);
}

bool func_361(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (func_356(bParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(bParam0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (!PED::IS_PED_MALE(bParam0))
	{
		return false;
	}
	fVar1 = func_282(bParam0, 1, 1);
	if (fVar1 < 30.0f)
	{
		fVar0 = 1.0f;
	}
	else if (fVar1 < 75.0f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150.0f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	if (fVar2 <= fVar0)
	{
		return true;
	}
	return false;
}

bool func_362(bool bParam0, int iParam1, bool bParam2)
{
	if (func_352(iParam1))
	{
		return true;
	}
	if (bParam2 && PED::IS_PED_IN_COMBAT(*bParam0, 0))
	{
		return false;
	}
	return true;
}

void func_363(bool bParam0, int iParam1, float fParam2)
{
	float fVar0;

	if (PED::IS_PED_HUMAN(*bParam0))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
		if (fVar0 < fParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 146, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 148, false);
			PED::_0xC6C4E15CF7D52FEA(*bParam0, 1000.0f);
			LAW::_LAW_WITNESS_RESPONSE_TASK(*bParam0, Global_35, *bParam0, Global_36, iParam1);
		}
	}
}

bool func_364()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

bool func_365(bool bParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_566(iParam1, 0, iVar0);
	}
	if (fParam3 > 0.0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_578(iParam1, 4000))
				{
					if (func_579(bParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) & func_580(iParam1, bParam0) && func_581(iParam1, bParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(bParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4.0f)
			{
				if (func_578(iParam1, 4000))
				{
					if (func_579(bParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) & func_580(iParam1, bParam0) && func_581(iParam1, bParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(bParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & (1 << 17) == 0)
						{
							if (func_582(bParam0, Global_1935630.f_41))
							{
								func_583();
								*uParam2 = 2;
								func_568(bParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & (1 << 17) == 0)
					{
						if (func_582(bParam0, Global_1935630.f_41))
						{
							func_583();
							*uParam2 = 2;
							func_568(bParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & (1 << 17) == 0)
				{
					if (func_586())
					{
						if (func_582(bParam0, Global_1935630.f_42))
						{
							func_583();
							*uParam2 = 2;
							func_568(bParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_572(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_573(Global_35, bParam0, iParam1))
					{
						func_583();
						*uParam2 = 4;
						func_568(bParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_574(Global_35, bParam0, iParam1))
					{
						func_583();
						*uParam2 = 256;
						func_568(bParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & (1 << 17) != 0)
		{
			if (func_648(bParam0, iParam1))
			{
				func_583();
				*uParam2 = (1 << 17);
				func_568(bParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_649(bParam0, iParam1))
			{
				func_583();
				*uParam2 = (1 << 18);
				func_568(bParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_366(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

bool func_367(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935630.f_34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
		{
			if (func_366(Global_1935630.f_34[iVar0], *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_368(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	return ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam0, false);
}

bool func_369(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam0, sParam1, true);
}

void func_370(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_371(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

bool func_372(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_373(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_651(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_453(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_652(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_653(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_654(iParam0);
	if (iVar5 < 1 || iVar5 > func_655(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_652(*iParam0);
	iVar1 = func_653(*iParam0);
	iVar2 = func_654(*iParam0);
	iVar3 = func_453(*iParam0);
	iVar4 = func_651(*iParam0);
	iVar5 = func_650(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_655(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_655(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	if (!bParam7)
	{
		iVar0 += iParam6;
	}
	func_656(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_375(int iParam0, bool bParam1)
{
	return func_657(func_452(), iParam0, bParam1);
}

bool func_376(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_377(bool bParam0)
{
	if (bParam0->f_19 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_391(Global_35)))
		{
			bParam0->f_19 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), Global_35, 999.0f, 5.0f, 5.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(func_391(Global_35)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(bParam0->f_19);
	}
}

void func_378(bool bParam0, int iParam1)
{
	bParam0->f_13 = iParam1;
}

void func_379(bool bParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	if (bParam0->f_14 > 0)
	{
		iVar1 = func_659(bParam0, iParam1, 15.0f, uParam2, &uVar0, 0, 1, 0, 0, func_658(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (iVar1 != -1)
		{
			bParam0->f_15 = iVar1;
		}
	}
	switch (bParam0->f_14)
	{
		case 0:
			if (bParam3 || bParam0->f_13 > 0)
			{
				if (!DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(*bParam0, "bScriptedILO", true);
				}
				func_661(uParam2[0 /*17*/], func_660(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_662(uParam2[0 /*17*/], 1, 0);
				func_663(uParam2[0 /*17*/], 0);
				func_661(uParam2[1 /*17*/], func_660(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_662(uParam2[1 /*17*/], 1, 0);
				func_663(uParam2[1 /*17*/], 0);
				func_661(uParam2[2 /*17*/], func_660(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				func_662(uParam2[2 /*17*/], 0, 0);
				func_663(uParam2[2 /*17*/], 1);
				func_664(bParam0, 1);
			}
			break;
		case 1:
			if (!func_256(0, 1, Global_35, 1) || !func_256(0, 1, *bParam0, 1))
			{
				func_665(uParam2);
			}
			if (bParam0->f_15 != -1)
			{
				func_78(iParam1, 0);
				func_662(uParam2[0 /*17*/], 0, 0);
				func_662(uParam2[1 /*17*/], 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_666(bParam0)))
				{
					func_116(Global_35, *bParam0, func_666(bParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_664(bParam0, 2);
			}
			break;
		case 2:
			if (func_256(0, 1, Global_35, 1) && func_256(0, 1, *bParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_667(bParam0)))
				{
					func_116(*bParam0, Global_35, func_667(bParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_664(bParam0, 3);
			}
			break;
		case 3:
			if (func_256(0, 1, Global_35, 1) && func_256(0, 1, *bParam0, 1))
			{
				func_664(bParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_380(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_381(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_382(bool bParam0)
{
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(bParam0);
}

float func_383(var uParam0)
{
	if (!func_668(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_669(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_479() - uParam0->f_1);
}

bool func_384(bool bParam0)
{
	return true;
}

float func_385(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0.0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_670(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

void func_386(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

int func_387(char[4] cParam0, char* sParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	Vector3 vVar0[24];
	int iVar3;

	bParam3 = bParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(bParam2) && (func_366(bParam2, bParam3, 1, 1) < 70.0f || bParam5))
	{
		strcpy_s(&cVar0, 24, sParam1);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(bParam2, bParam3, 7000, 0, 51, 0);
			if (func_366(bParam2, bParam3, 1, 1) < 25.0f)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam3, bParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_48(&uLocal_0);
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
		{
			if (func_671(sParam1))
			{
				return 1;
			}
		}
		else if (func_672(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_388(bool bParam0, int iParam1)
{
	char cVar0[32];

	if (iParam1 == 1)
	{
		if (bParam0->f_16 == 8 && func_364())
		{
			switch (bParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (bParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_134(bParam0, 16))
	{
		strcpy_s(&cVar0, 32, "GET_LOST");
	}
	else
	{
		switch (bParam0->f_16)
		{
			case -1:
			case default:
				strcpy_s(&cVar0, 32, "PLAYER_ACTING_WEIRD");
				break;
			case 1:
				strcpy_s(&cVar0, 32, "GENERIC_ANGRY_REACTION");
				break;
			case 2:
				strcpy_s(&cVar0, 32, "PLEAD_HOGTIED");
				break;
			case 3:
				switch (bParam0->f_1)
				{
					case 1:
						strcpy_s(&cVar0, 32, "PLAYER_ACTING_WEIRD");
						break;
					case 2:
					default:
						strcpy_s(&cVar0, 32, "GENERIC_ANGRY_REACTION");
						break;
				}
				break;
			case 4:
				strcpy_s(&cVar0, 32, "WHATS_YOUR_PROBLEM");
				break;
			case 6:
				strcpy_s(&cVar0, 32, "PLAYER_AIMING_NOBODY");
				break;
			case 5:
				strcpy_s(&cVar0, 32, "GUN");
				break;
			case 8:
				switch (bParam0->f_1)
				{
					case 1:
					case default:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								strcpy_s(&cVar0, 32, "WHATS_YOUR_PROBLEM");
								break;
							case 1:
								strcpy_s(&cVar0, 32, "STOP_THAT");
								break;
						}
						break;
					case 2:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								strcpy_s(&cVar0, 32, "CUT_THAT_OUT");
								break;
							case 1:
								strcpy_s(&cVar0, 32, "SHAME_ON_YOU");
								break;
							case 2:
								strcpy_s(&cVar0, 32, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT");
								break;
						}
						break;
					case 3:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								strcpy_s(&cVar0, 32, "FINAL_WARNING");
								break;
							case 1:
								strcpy_s(&cVar0, 32, "GUARD_FINAL_WARNING");
								break;
							case 2:
								strcpy_s(&cVar0, 32, "WARNED_ALREADY");
								break;
							case 3:
								strcpy_s(&cVar0, 32, "GUARD_WARNED_ALREADY");
								break;
							case 4:
								strcpy_s(&cVar0, 32, "GUARD_WARNING");
								break;
						}
						break;
				}
				break;
			case 7:
				switch (bParam0->f_1)
				{
					case 1:
					case default:
						strcpy_s(&cVar0, 32, "STOP_THAT");
						break;
					case 2:
						strcpy_s(&cVar0, 32, "CUT_THAT_OUT");
						break;
					case 3:
						strcpy_s(&cVar0, 32, "CHALLENGE_THREATEN");
						break;
				}
				break;
		}
	}
	return func_673(cVar0);
}

bool func_389(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

bool func_390(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_366(bVar0, bParam0, 1, 1) <= 4.0f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_674(bVar0, 0)))
		{
			if (func_675(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_391(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_392(bool bParam0)
{
	switch (bParam0->f_16)
	{
		case 1:
		case 2:
			return 5.0f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

bool func_393(var uParam0, float fParam1)
{
	if (!func_668(uParam0))
	{
		return false;
	}
	if (func_383(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_394(bool bParam0, int* iParam1, var uParam2)
{
	func_676(bParam0, iParam1, uParam2, 1, 1);
	func_109(uParam2, 0, 1, 1, 1);
	if (DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_REMOVE(*bParam0, "bScriptedILO");
	}
	bParam0->f_14 = 0;
	bParam0->f_15 = -1;
}

int func_395()
{
	return 0;
}

int func_396(int iParam0)
{
	return 0;
}

int func_397(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_398(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_399(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= sLocal_614.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	bVar3 = func_63(func_335(9, 0, iVar1));
	bVar4 = func_63(func_335(9, 1, iVar1));
	if (iLocal_599[iParam1] < 11)
	{
		func_677(&iVar1, &iVar0, &bVar3, &bVar4, iParam1);
		func_678(iParam1, &bVar3);
		func_679(&bVar3, &bVar4, iParam1);
	}
	switch (iLocal_599[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(16 + iVar0) /*12*/].f_8, 500.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, -1.0f, 0.0f, -1.0f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(17 + iVar0) /*12*/].f_8, 750.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, -1.0f, 0.0f, -1.0f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(18 + iVar0) /*12*/].f_8, 1000.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, -1.0f, 0.0f, -1.0f);
				ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::CREATE_VOLUME_BOX(sLocal_614.f_690[(17 + iVar0) /*12*/], 0.0f, 0.0f, sLocal_614.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_75[(12 + iVar2)], sLocal_614.f_690[(17 + iVar0) /*12*/].f_8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::CREATE_VOLUME_BOX(sLocal_614.f_690[(18 + iVar0) /*12*/], 0.0f, 0.0f, sLocal_614.f_690[(18 + iVar0) /*12*/].f_3, 1.0f, 7.3475f, 5.0f);
				PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_75[(13 + iVar2)], sLocal_614.f_690[(18 + iVar0) /*12*/].f_8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[(13 + iVar2)], 7);
				func_47(func_602(9), &sLocal_614);
				iLocal_599[iParam1] = 1;
			}
			break;
		case 1:
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iVar5 = func_680(9, iVar1);
				if (iVar5 == func_602(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar3) && !ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar3, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar4, false, true);
						iLocal_599[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(bVar3) || ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				iLocal_599[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_614.f_690[(15 + iVar0) /*12*/].f_8, func_491(iParam0), func_492(iParam0), true, false, true);
				func_683(&(sLocal_492[(9 + iParam1) /*7*/]), func_681(iParam0), func_682(iParam0));
				func_684(&(sLocal_492[(9 + iParam1) /*7*/]), bVar3, "PED1", 1);
				func_684(&(sLocal_492[(9 + iParam1) /*7*/]), bVar4, "PED2", 1);
				strcpy_s(&(sLocal_492[(9 + iParam1) /*7*/].f_4), 24, "bBreakInternalLoop");
				func_685(&(sLocal_492[(9 + iParam1) /*7*/]), sLocal_614.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				func_685(&(sLocal_492[(9 + iParam1) /*7*/]), sLocal_614.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				func_685(&(sLocal_492[(9 + iParam1) /*7*/]), sLocal_614.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				func_685(&(sLocal_492[(9 + iParam1) /*7*/]), sLocal_614.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_599[iParam1] = 3;
			}
			break;
		case 3:
			if (func_527(&(sLocal_492[(9 + iParam1) /*7*/])))
			{
				func_686(&(sLocal_492[(9 + iParam1) /*7*/]));
				iLocal_599[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && func_687(bVar3, 40.0f, -1082130432, -1082130432, -1082130432)) || (!ENTITY::IS_ENTITY_DEAD(bVar4) && func_687(bVar4, 40.0f, -1082130432, -1082130432, -1082130432)))
			{
				func_643(&(sLocal_492[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_599[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1817629992))
				{
					func_111(iLocal_75[(13 + iVar2)]);
					iLocal_599[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1817629992))
				{
					func_111(iLocal_75[(12 + iVar2)]);
					iLocal_599[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1202392137))
			{
				iLocal_599[iParam1] = 8;
			}
			break;
		case 8:
			if (func_688(bVar4, sLocal_492[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(bVar4, 330, false);
				if (sLocal_433.f_0 != bVar4)
				{
					func_689(9, 1, iVar1, 0);
				}
				iLocal_599[iParam1] = 9;
			}
			break;
		case 9:
			if (func_688(bVar3, sLocal_492[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(bVar3, 330, false);
				if (sLocal_433.f_0 != bVar3)
				{
					func_689(9, 0, iVar1, 0);
				}
				iLocal_599[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_492[(9 + iParam1) /*7*/]) || func_368(&(sLocal_492[(9 + iParam1) /*7*/])))
			{
				func_217(&(sLocal_492[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(16 + iVar0) /*12*/].f_8, 500.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.0f, -1.0f, -1.0f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(17 + iVar0) /*12*/].f_8, 750.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.0f, -1.0f, -1.0f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(sLocal_614.f_690[(18 + iVar0) /*12*/].f_8, 1000.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, 0.5f, -1.0f, -1.0f, -1.0f);
				iLocal_599[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_400()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	Vector3 vVar4;

	if (iLocal_604 > 0)
	{
		func_690();
	}
	switch (iLocal_604)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, func_459(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_691(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_266(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					bVar3 = func_63(iVar2);
					if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && func_254(bVar3, 0, 1)) && !func_117(func_692(iVar0)))
					{
						func_261(bVar3, func_381(sLocal_1617.f_136, 4), 0);
						if (func_166(64))
						{
							if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(func_437(iVar1), func_693(), 4.0f, false) && !func_430(iVar1))
							{
								vVar4 = { func_437(iVar1) /*3*/ };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_478[iVar1]))
								{
									TASK::TASK_USE_SCENARIO_POINT(0, iLocal_478[iVar1], 0, 0, false, true, 0, false, -1.0f, false);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5.0f, 0, false, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
								TASK::_TASK_PERFORM_SEQUENCE_2(bVar3, iLocal_196, 0.0f, 2.0f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
								PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
							}
							else
							{
								func_77(iVar2, 1);
								PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
							}
						}
						else
						{
							func_77(iVar2, 1);
							PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
						}
						func_35(func_692(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_694(func_692(iVar0));
						iVar0++;
					}
					iLocal_604 = 2;
					Jump @719; // curOff = 426
					func_695();
					func_138();
					iVar0 = (iLocal_206 % 4);
					iVar1 = func_691(iVar0);
					if (!func_466(iVar1) && !func_117(func_696(iVar0)))
					{
						func_697(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_266(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						bVar3 = func_63(iVar2);
						func_698(&bVar3);
						func_699(iVar0);
						func_700(&bVar3, iVar0);
						if (func_254(bVar3, 0, 1))
						{
							if (!func_19((1 << 12)) && func_701(&bVar3, &(sLocal_2184[iVar0 /*5*/]), &(uLocal_2210[iVar0]), iVar0))
							{
								func_702(&bVar3, iVar0);
								iLocal_604 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_206 % 10) == 1 && !func_166(64)) && !func_19((1 << 12))) && !func_19((1 << 9)))
					{
						func_703();
						iLocal_604 = 1;
						return 0;
					}
					Jump @719; // curOff = 664
					if ((iLocal_206 % 10) == 1 && func_166(64))
					{
						func_703();
						iLocal_604 = 2;
					}
					Jump @719; // curOff = 696
					func_48(&(vLocal_570[0 /*3*/]));
					iLocal_604 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_401()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		bVar3 = func_63(iVar2);
		iVar1 = func_691(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(bVar3) || !PED::IS_PED_USING_ANY_SCENARIO(bVar3))) && !func_430(iVar1))
		{
			func_704(iVar1);
			func_474(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_267(iVar2, 0, 1, 0, 0);
			}
			func_705();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_402(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_661(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), func_660(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_661(&(sLocal_275[iParam0 /*52*/][1 /*17*/]), func_660(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_661(&(sLocal_275[iParam0 /*52*/][2 /*17*/]), func_660(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_403(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_78(&(sLocal_211[iParam0 /*21*/]), 0);
	func_706(iParam0, 0);
	if (!bParam2)
	{
		if (iParam0 == 1)
		{
			func_339((1 << 19));
		}
		else
		{
			func_50((1 << 28));
		}
	}
	if (bParam1)
	{
		iLocal_432 = -1;
	}
}

void func_404(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (!func_51((1 << 26)))
	{
		return;
	}
	if (func_70((1 << 29)))
	{
		if (DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
		{
			DECORATOR::DECOR_REMOVE(*bParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_658(1, 0, 0);
	if (func_51((1 << 27)))
	{
		iVar0 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		if (func_19((1 << 12)))
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 49, true);
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
			}
		}
		else if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		}
		PED::SET_PED_RESET_FLAG(*bParam0, 49, true);
	}
	if (iLocal_98 == 1 && !func_5(sLocal_1617.f_136, 128))
	{
		fLocal_210 = 8.0f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*bParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || func_707()) || func_708()) || func_709())
	{
		func_48(&(vLocal_570[7 /*3*/]));
	}
	if (func_668(&(vLocal_570[7 /*3*/])) && !func_393(&(vLocal_570[7 /*3*/]), 0.25f))
	{
		func_665(&(sLocal_275[0 /*52*/]));
	}
	iVar2 = func_659(bParam0, &(sLocal_211[0 /*21*/]), fLocal_210, &(sLocal_275[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	if (iLocal_432 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_432 = iVar2;
	}
	if (!func_51((1 << 31)))
	{
		if (!func_51((1 << 28)))
		{
			if (func_256(-3.5f, 1, 0, 0))
			{
				if (iLocal_432 == 1 && !func_51((1 << 29)))
				{
					func_116(*bParam0, Global_35, func_710(), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_58((1 << 20));
				}
				func_403(0, 1, 0);
				func_58((1 << 28));
			}
		}
		else
		{
			switch (iLocal_432)
			{
				case 0:
					func_387(&(sLocal_1617.f_35), "LCMP_GOODBYE", Global_35, *bParam0, 0, 0, 1, 1);
					func_58((1 << 30));
					func_403(0, 1, 0);
					break;
				case 1:
					if (func_51((1 << 29)))
					{
						func_50((1 << 29));
						func_387(&(sLocal_1617.f_35), "LCMP_QUIT", Global_35, *bParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(sLocal_1617.f_136, (1 << 18));
						func_15(sLocal_1617.f_136, 256);
						func_403(0, 1, 0);
					}
					else
					{
						sVar3 = func_711();
						func_116(Global_35, *bParam0, sVar3, 0, -1082130432, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
						func_403(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_405(bool bParam0)
{
	switch (iLocal_598)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[12 /*12*/].f_8))
			{
				if (func_166(64))
				{
					iLocal_598 = 2;
				}
				else
				{
					iLocal_598 = 1;
				}
			}
			break;
		case 1:
			if (func_166(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 2;
			}
			break;
		case 2:
			if (!func_166(64))
			{
				if (iLocal_98 == 1)
				{
					func_387(&(sLocal_1617.f_35), "LCMP_FMN_EOS", *bParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_406()
{
	int iVar0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_485))
	{
		iVar0 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_264(), joaat("PROP_HUMAN_SEAT_CHAIR"), 1.0f, 0, false);
		iLocal_485 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(sLocal_614.f_690[25 /*12*/].f_8, joaat("PROP_HUMAN_SEAT_CHAIR_DESK_WRITING"), TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true), 0, 0, false);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_485))
		{
		}
	}
}

void func_407()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_63(func_335(7, 0, 0));
	bVar1 = func_63(func_335(7, 1, 0));
	if (iLocal_602 > 0 && iLocal_602 < 15)
	{
		func_712();
	}
	switch (iLocal_602)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1913))
			{
				iLocal_1913 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1357.609f, -184.4249f, 102.2077f, 0.0f, 0.0f, -25f, 18.26119f, 3.749432f, 8.0f, "volLoaderLogBlocker");
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_1913, 7);
			}
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				bVar2 = true;
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[13 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[13 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[12 /*12*/].f_8))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[12 /*12*/].f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2105[1]))
					{
						iVar3 = VEHICLE::GET_DRIVER_OF_VEHICLE(iLocal_2105[1]);
						func_713(&iVar3);
						VEHICLE::_0x2BB2B5BCF0DF8008(iLocal_2105[1], 1);
						VEHICLE::_0xA72B1BF3857B94D7(iLocal_2105[1], true);
					}
					if (func_19(256))
					{
						func_47(func_602(7), &sLocal_614);
						iLocal_602 = 1;
					}
					else
					{
						iLocal_602 = 15;
					}
				}
			}
			else
			{
				iLocal_602 = 15;
			}
			break;
		case 1:
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iVar4 = func_680(7, 0);
				if (iVar4 == func_602(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, false, true);
						func_245(bVar0, 1, 1);
						func_245(bVar1, 1, 1);
						func_684(&(sLocal_492[7 /*7*/]), bVar0, "OPERATOR", 1);
						func_684(&(sLocal_492[8 /*7*/]), bVar1, "SPOTTER", 1);
						func_686(&(sLocal_492[7 /*7*/]));
						func_686(&(sLocal_492[8 /*7*/]));
						func_643(&(sLocal_492[7 /*7*/]), "bBreakInternalLoop");
						func_643(&(sLocal_492[8 /*7*/]), "bBreakInternalLoop");
						iLocal_602 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_369(&(sLocal_492[7 /*7*/]), "IDLE_LOOP"))
			{
				func_643(&(sLocal_492[7 /*7*/]), "bBreakInternalLoop");
				func_643(&(sLocal_492[8 /*7*/]), "bBreakInternalLoop");
			}
			else if (func_714(&(sLocal_492[7 /*7*/]), "bBreakInternalLoop"))
			{
				func_715(&(sLocal_492[7 /*7*/]), "bBreakInternalLoop");
				func_715(&(sLocal_492[8 /*7*/]), "bBreakInternalLoop");
			}
			if (!ENTITY::IS_ENTITY_DEAD(bVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(bVar0, joaat("STARTLOOP")))
			{
				if (!func_19((1 << 28)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[13 /*12*/].f_8))
					{
						ENTITY::PLAY_ENTITY_ANIM(sLocal_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 8.0f, false, true, false, 0.0f, 0);
						TASK::SET_ANIM_RATE(sLocal_614.f_690[13 /*12*/].f_8, 0.4f, 0, false);
						func_14((1 << 28));
					}
				}
				iLocal_602 = 3;
			}
			break;
		case 3:
			func_716(&bVar0, &bVar1);
			break;
		case 14:
			if (!func_51(256))
			{
				if (func_688(bVar0, sLocal_492[7 /*7*/], "OPERATOR", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(bVar0, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar0))
					{
						PED::SET_PED_CONFIG_FLAG(bVar0, 330, false);
						func_336(&(sLocal_492[7 /*7*/]), bVar0, "OPERATOR");
						TASK::TASK_GO_STRAIGHT_TO_COORD(bVar0, -1349.967f, -202.9536f, 100.4027f, 1.0f, 20000, 40000.0f, 0.5f, 0);
						func_689(7, 0, 0, 0);
					}
					func_217(&(sLocal_492[7 /*7*/]));
					func_58(256);
				}
			}
			if (!func_51((1 << 9)))
			{
				if (func_688(bVar1, sLocal_492[8 /*7*/], "SPOTTER", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(bVar1, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar1))
					{
						PED::SET_PED_CONFIG_FLAG(bVar1, 330, false);
						func_336(&(sLocal_492[8 /*7*/]), bVar1, "SPOTTER");
						func_689(7, 1, 0, 0);
					}
					func_217(&(sLocal_492[8 /*7*/]));
					func_58((1 << 9));
				}
			}
			if (func_51(256) && func_51((1 << 9)))
			{
				iLocal_602 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_408(bool bParam0)
{
	bool bVar0[9];
	var uVar10[9];
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_134(&sLocal_433, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iLocal_206 % 5) != 0)
	{
		return 0;
	}
	if (!func_215(Global_35, Global_1392194[sLocal_1617.f_136 /*10*/].f_5, 1, 0))
	{
		return 0;
	}
	if (func_282(*bParam0, 1, 1) < (15.0f + 10.0f))
	{
		func_14((1 << 25));
		return 1;
	}
	if (func_19((1 << 12)))
	{
		return 0;
	}
	uVar24 = 30;
	func_300(&uVar24);
	iVar22 = func_717(&uVar10, &uVar24, 9, Global_36, 15.0f, 0, 1, 1, sLocal_614.f_13, 1, 0, -1082130432, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			bVar20 = uVar10[iVar21];
			if (!ENTITY::IS_ENTITY_DEAD(bVar20) && PED::IS_PED_HUMAN(bVar20))
			{
				if (!DECORATOR::DECOR_EXIST_ON(bVar20, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(bVar20, "HAS_VOICE"))
				{
					func_261(bVar20, func_381(sLocal_1617.f_136, -1), 0);
				}
				bVar0[iVar23] = bVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_718(&sLocal_2147, &bVar0, &uLocal_2182, 1, func_19(2)))
	{
		func_201(&(sLocal_2147.f_34), 1);
		func_14(2);
		func_14((1 << 25));
		return 1;
	}
	return 0;
}

void func_409()
{
}

void func_410()
{
	if (func_719() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_12(sLocal_1617.f_136))
		{
			func_14(128);
		}
	}
}

void func_411()
{
	if (!func_5(sLocal_1617.f_136, 4))
	{
		if (func_51((1 << 16)))
		{
			func_42(sLocal_1617.f_136, 4);
		}
	}
}

void func_412(var uParam0)
{
}

char* func_413()
{
	return "LOG_BLIP_FM";
}

void func_414(bool bParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	int iVar0;

	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_215(Global_35, Global_1392194[uParam2->f_136 /*10*/].f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (bParam5)
				{
					iVar0 = joaat("BLIP_MODIFIER_URGENT_ALERT");
				}
				else
				{
					iVar0 = 0;
				}
				func_355(bParam0, iParam1, joaat("BLIP_STYLE_FRIENDLY"), iVar0, 0, sParam6);
			}
		}
	}
}

void func_415()
{
	if (func_19(64))
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_720(), 10.0f);
	}
}

bool func_416(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	Vector3 vVar3;
	bool bVar6;
	char* sVar7;
	int iVar8;

	func_721();
	func_722();
	func_723();
	func_724();
	iVar0 = func_691(0);
	iVar1 = 810;
	bVar2 = func_63(iVar1);
	func_725(bParam0, bParam1, &bVar2, &(iLocal_2082[2]), &(iLocal_2082[3]));
	switch (iLocal_1920)
	{
		case 0:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*bParam1) && iLocal_604 >= 2)
			{
				func_726(*bParam1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[24 /*12*/].f_8, true);
				ENTITY::SET_ENTITY_VISIBLE(sLocal_614.f_690[24 /*12*/].f_8, false);
				ENTITY::SET_ENTITY_COLLISION(sLocal_614.f_690[24 /*12*/].f_8, false, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(sLocal_614.f_690[24 /*12*/].f_8, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_614.f_690[24 /*12*/].f_8, sLocal_614.f_690[24 /*12*/], sLocal_614.f_690[24 /*12*/].f_3, true, false, true);
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0.0f, 0.0f, 84.9909f, 12.74726f, 17.5874f, 14.0f, "volAccident");
				iLocal_75[10] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0.0f, 0.0f, 84.99091f, 24.8216f, 45.0f, 14.0f, "volAccidentTrot");
				iLocal_75[9] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0.0f, 0.0f, 84.99091f, 44.1305f, 80.0f, 14.0f, "volAccidentCanter");
				iLocal_75[20] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1391.962f, -270.2142f, 99.82114f, 0.0f, 0.0f, 15.0005f, 1.639143f, 1.521353f, 1.523817f);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[4], 534496, 0, 0, -1, -1, 2);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[4], 0, 0, 0, -1, -1, 0);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[4], 7);
				iLocal_75[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.082f, -270.6321f, 98.77602f, 0.0f, 0.0f, -4.499413f, 22.57252f, 0.586106f, 4.0f, "Appleseed - volAccidentBlocking");
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[17], 7);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[17], 534496, 0, 0, -1, -1, 2);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[17], 0, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam0, false, true);
				func_727(*bParam0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam1, false, true);
				func_727(*bParam1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar2, false, true);
				func_727(bVar2, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2082[2], false, true);
				func_727(iLocal_2082[2], 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2082[3], false, true);
				func_727(iLocal_2082[3], 1);
				func_403(0, 1, 1);
				func_684(&(sLocal_492[2 /*7*/]), *bParam0, "FOREMAN", 1);
				func_684(&(sLocal_492[2 /*7*/]), *bParam1, "VICTIM", 1);
				func_684(&(sLocal_492[2 /*7*/]), bVar2, "PED1", 1);
				func_684(&(sLocal_492[2 /*7*/]), iLocal_2082[2], "PED2", 1);
				func_684(&(sLocal_492[2 /*7*/]), iLocal_2082[3], "PED3", 1);
				func_684(&(sLocal_492[2 /*7*/]), Global_35, "player", 1);
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[6 /*12*/].f_8, "MONEY");
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[7 /*12*/].f_8, "AXE1");
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[8 /*12*/].f_8, "AXE2");
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[9 /*12*/].f_8, "AXE3");
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[10 /*12*/].f_8, "CIGARETTE");
				func_685(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[24 /*12*/].f_8, "TREE");
				func_728(&(sLocal_492[2 /*7*/]), "PBL_LIFT_SUCCESS");
				func_728(&(sLocal_492[2 /*7*/]), "PBL_IMPATIENT");
				func_728(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_L");
				func_728(&(sLocal_492[2 /*7*/]), "PBL_COMBAT_R");
				func_728(&(sLocal_492[2 /*7*/]), "PB_VIC_BRKOUT");
				func_67(&(sLocal_1617.f_35), *bParam0, "EA_LCMP_Foreman", 0);
				func_67(&(sLocal_1617.f_35), bVar2, "LOG_WORKER_3", 0);
				func_67(&(sLocal_1617.f_35), iLocal_2082[2], "LCMP_WITNESS1", 0);
				func_67(&(sLocal_1617.f_35), *bParam1, "LOGGING_VICTIM", 0);
				func_729(&(sLocal_1617.f_35), "LCMPF_IG3", 0);
				func_729(&(sLocal_1617.f_35), "LCMP_IG_TREE_P2", 0);
				AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_APPLESEED_2_START");
				func_128(1);
				if (iLocal_98 == 2 && func_9(1, 2))
				{
					ENTITY::PLAY_ENTITY_ANIM(sLocal_614.f_690[4 /*12*/].f_8, func_730(), func_731(), 0.3f, true, true, false, 0.0f, 0);
				}
				func_686(&(sLocal_492[2 /*7*/]));
				func_71((1 << 26));
				iLocal_1920 = 2;
			}
			break;
		case 2:
			if (func_732(bParam1, iVar0))
			{
				vVar3 = { func_733(Global_35, 2.0f) /*3*/ };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_720(), false) < 60.0f)
				{
					func_734(1048576000, 1028443341, 0, 106);
					func_14((1 << 12));
					func_128(2);
					func_14(32);
					func_48(&(vLocal_570[4 /*3*/]));
					func_387(&(sLocal_1617.f_35), "LCMPF_IG3", bVar2, *bParam0, 0, 0, 1, 1);
					func_702(&bVar2, 0);
					func_697(0);
					iLocal_1920 = 1;
				}
			}
			else if (func_521(func_437(iVar0), 1) <= 63.0f)
			{
				if (!func_668(&(vLocal_570[4 /*3*/])))
				{
					func_48(&(vLocal_570[4 /*3*/]));
				}
				else if (func_669(&(vLocal_570[4 /*3*/])))
				{
					func_735(&(vLocal_570[4 /*3*/]));
				}
				if (func_393(&(vLocal_570[4 /*3*/]), 7.5f))
				{
					func_58((1 << 21));
					iLocal_1920 = 10;
				}
			}
			else if (func_668(&(vLocal_570[4 /*3*/])) && !func_669(&(vLocal_570[4 /*3*/])))
			{
				func_736(&(vLocal_570[4 /*3*/]));
			}
			break;
		case 1:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_224(&(vLocal_570[4 /*3*/]), 2.0f))
			{
				func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar2, -1318036203))
			{
				func_216("SP_EVENT_AREA_APPLESEED_2_START", 0);
				PED::SET_PED_CONFIG_FLAG(*bParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*bParam1, 146, true);
				func_715(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
				func_737();
				iLocal_604 = 3;
				iLocal_1920 = 4;
			}
			break;
		case 4:
			func_734(1048576000, 1028443341, 0, 106);
			func_129();
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, 935159765))
			{
				func_71((1 << 17));
				PED::_0x735662994E60A710(*bParam1, true);
				PED::_0x897934E868EDDD6C(*bParam1, 55120, 0.2f, 0.0f, 0.0f);
				PED::_0x91BAB9E064F036CD(*bParam1, 0.5f);
				func_337(bParam1);
				func_639(*bParam1, "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(-890428877, *bParam1);
			}
			if (!func_19((1 << 9)) && ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, 442538763))
			{
				func_355(*bParam1, &(uLocal_2092[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, "LOG_BLIP_VICT");
				PED::_0x735662994E60A710(*bParam1, true);
				PED::_SET_PED_ACTIVATE_WOUND_EFFECT(*bParam1, 0, 55120, 0.2f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.5f);
				PED::_UPDATE_PED_WOUND_EFFECT(*bParam1, 0.5f);
				func_14((1 << 9));
				PED::SET_PED_LASSO_HOGTIE_FLAG(*bParam1, 0, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(*bParam1, 319570);
				ENTITY::FREEZE_ENTITY_POSITION(*bParam1, true);
				PED::_EQUIP_META_PED_OUTFIT(*bParam1, 306062959);
				PED::_UPDATE_PED_VARIATION(*bParam1, false, true, true, true, false);
				func_387(&(sLocal_1617.f_35), "LCMP_IG_TFHEL", *bParam0, *bParam1, 0, 0, 1, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(-890428877, *bParam1);
				func_639(*bParam1, "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 265434504))
			{
				PED::APPLY_DAMAGE_TO_PED(*bParam1, 50, 0, 55120, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1836246720))
			{
				func_111(iLocal_75[20]);
				iLocal_75[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.421f, -270.6241f, 99.11503f, 0.0f, 0.0f, -4.797453f, 21.93634f, 0.903251f, 1.400946f, "Appleseed - volTreeNav");
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[6], 7);
				func_98(&(uLocal_2092[0]));
				func_48(&(vLocal_570[3 /*3*/]));
				iLocal_1920 = 5;
			}
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			func_129();
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_714(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop"))
			{
				func_715(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
			}
			func_739(&(sLocal_1617.f_32), &(sLocal_1617.f_33));
			if (func_741(&(sLocal_1617.f_32), "LOG_CTXTHLP", func_740(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				func_268(&(vLocal_570[3 /*3*/]));
			}
			else if (func_741(&(sLocal_1617.f_33), "LOG_CTXTHLP", func_742(), 0, joaat("INPUT_CONTEXT_Y"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, joaat("MEDIUM_TIMED_EVENT"), 0))
			{
				func_71(256);
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				func_268(&(vLocal_570[3 /*3*/]));
			}
			if (func_224(&(vLocal_570[3 /*3*/]), 7.5f))
			{
				iLocal_1920 = 6;
				func_48(&(vLocal_570[1 /*3*/]));
				func_743();
			}
			if (func_224(&(vLocal_570[1 /*3*/]), 7.5f))
			{
				iLocal_1920 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > func_744())
				{
					func_71(256);
				}
				func_311(&(sLocal_1617.f_32), 1, 1);
				func_311(&(sLocal_1617.f_33), 1, 1);
				func_98(&iLocal_2016);
				func_48(&(vLocal_570[3 /*3*/]));
				func_268(&(vLocal_570[1 /*3*/]));
				func_10(sLocal_1617.f_136, 128);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4352, false);
				func_43(&sLocal_1617, (1 << 16));
				PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_75[4]);
				func_58((1 << 14));
				func_745(&sLocal_156);
				sLocal_156.f_1 = Global_35;
				if (func_70(256))
				{
					sLocal_156.f_8 = { func_746(&(sLocal_492[4 /*7*/]), "ARTHUR", func_482(4)) /*3*/ };
					sLocal_156.f_19 = func_747(&(sLocal_492[4 /*7*/]), "ARTHUR", func_482(4));
				}
				else
				{
					sLocal_156.f_8 = { func_746(&(sLocal_492[3 /*7*/]), "ARTHUR", func_482(3)) /*3*/ };
					sLocal_156.f_19 = func_747(&(sLocal_492[3 /*7*/]), "ARTHUR", func_482(3));
				}
				sLocal_156.f_17 = 0.15f;
				sLocal_156.f_18 = 0.2f;
				func_145(&(sLocal_156.f_23), 17425);
				func_43(&sLocal_1617, (1 << 16));
				func_748(&sLocal_156, 129);
				func_302(&sLocal_433, 4);
				iLocal_1920 = 7;
			}
			break;
		case 6:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			func_642(&(sLocal_492[2 /*7*/]), "PBL_IMPATIENT", 1);
			func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
			func_387(&(sLocal_1617.f_35), "LCMP_IG_TFSOM", *bParam0, Global_35, 0, 0, 1, 1);
			iLocal_1920 = 5;
			break;
		case 7:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_748(&sLocal_156, 129))
			{
				if (func_70(256))
				{
					func_684(&(sLocal_492[4 /*7*/]), Global_35, "ARTHUR", 1);
					func_686(&(sLocal_492[4 /*7*/]));
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[4], 7);
					iLocal_1920 = 8;
				}
				else
				{
					func_684(&(sLocal_492[3 /*7*/]), Global_35, "ARTHUR", 1);
					func_686(&(sLocal_492[3 /*7*/]));
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[4], 7);
					iLocal_1920 = 8;
				}
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_369(&(sLocal_492[2 /*7*/]), "LIFT_LOOP") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 331855897))
			{
				if (!func_310(sLocal_1617.f_32))
				{
					sLocal_1617.f_32 = func_749("LOG_CTXTHLP", joaat("INPUT_CONTEXT_ACTION"), 1, 0, 0, 9, 570, 4000, 10, (1 << 30), joaat("SHORT_TIMED_EVENT"), 0);
					func_750("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					func_10(sLocal_1617.f_136, 64);
					func_204(sLocal_1617.f_136);
					func_128(16);
					func_48(&(vLocal_570[3 /*3*/]));
				}
				if (func_751(sLocal_1617.f_32, 1))
				{
					func_752(sLocal_1617.f_32, 1);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
				{
					PAD::SET_CONTROL_SHAKE(0, 250, 50);
				}
				if (func_753(sLocal_1617.f_32, 1) || func_393(&(vLocal_570[3 /*3*/]), 15.0f))
				{
					func_268(&(vLocal_570[3 /*3*/]));
					func_754(1);
					func_565(13, 0, 0, 0, *bParam0, 0, 1065353216, 0);
					func_311(&(sLocal_1617.f_32), 1, 1);
					func_50((1 << 14));
					sLocal_433.f_3 = 3;
					iLocal_1920 = 9;
				}
			}
			break;
		case 9:
			func_311(&(sLocal_1617.f_32), 1, 1);
			func_311(&(sLocal_1617.f_33), 1, 1);
			func_98(&iLocal_2016);
			func_743();
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_334(&(sLocal_492[3 /*7*/])))
			{
				func_643(&(sLocal_492[3 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_82(&sLocal_1617, (1 << 16));
			}
			if (func_334(&(sLocal_492[4 /*7*/])))
			{
				func_643(&(sLocal_492[4 /*7*/]), "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_82(&sLocal_1617, (1 << 16));
			}
			if (func_334(&(sLocal_492[2 /*7*/])))
			{
				func_642(&(sLocal_492[2 /*7*/]), "PBL_LIFT_SUCCESS", 1);
				func_643(&(sLocal_492[2 /*7*/]), "bBreakInternalLoop");
				func_387(&(sLocal_1617.f_35), "LCMP_IG_TFHLS", *bParam0, *bParam1, 0, 0, 1, 1);
				PED::SET_PED_LASSO_HOGTIE_FLAG(*bParam1, 0, true);
				AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_LIFT", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				func_339((1 << 17));
			}
			func_128((1 << 9));
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0.0f, 0.0f, 0.0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_1920 = 11;
			break;
		case 10:
			if (func_738(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			func_336(&(sLocal_492[2 /*7*/]), *bParam1, "Victim");
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(*bParam1, func_273(), 0, 0, 0);
			func_217(&(sLocal_492[2 /*7*/]));
			OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[7 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[8 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[9 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[10 /*12*/].f_8));
			OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[24 /*12*/].f_8));
			iLocal_1920 = 11;
			break;
		case 11:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("RUMBLE")))
			{
				PAD::SET_CONTROL_SHAKE(0, 250, 100);
			}
			func_108(1);
			if (((func_70(1) && func_70(2)) && func_70(4)) && func_70(8))
			{
				iLocal_1920 = 14;
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[24 /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[24 /*12*/].f_8, -1545720465))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("LOG_PUT_DOWN", ENTITY::GET_ENTITY_COORDS(sLocal_614.f_690[24 /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
					func_216("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[24 /*12*/].f_8, 745376786))
				{
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(sLocal_614.f_690[24 /*12*/].f_8, true);
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[24 /*12*/].f_8, true);
					func_336(&(sLocal_492[2 /*7*/]), sLocal_614.f_690[24 /*12*/].f_8, "TREE");
				}
			}
			if (!func_70(1))
			{
				if (func_688(*bParam0, sLocal_492[2 /*7*/], "FOREMAN", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
					{
						func_336(&(sLocal_492[2 /*7*/]), *bParam0, "FOREMAN");
						func_727(*bParam0, 0);
					}
					func_128((1 << 12));
					func_71(1);
					if (!func_51((1 << 21)))
					{
						iLocal_1920 = 12;
					}
				}
			}
			if (!func_70(2))
			{
				if (func_688(bVar2, sLocal_492[2 /*7*/], "PED1", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar2))
					{
						func_336(&(sLocal_492[2 /*7*/]), bVar2, "PED1");
						func_727(bVar2, 0);
						func_77(iVar1, 1);
					}
					func_71(2);
				}
			}
			if (!func_70(4))
			{
				if (func_688(iLocal_2082[2], sLocal_492[2 /*7*/], "PED2", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[2]))
					{
						func_336(&(sLocal_492[2 /*7*/]), iLocal_2082[2], "PED2");
						func_727(iLocal_2082[2], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[2], func_273(), 0, 0, 0);
					}
					func_71(4);
				}
			}
			if (!func_70(8))
			{
				if (func_688(iLocal_2082[3], sLocal_492[2 /*7*/], "PED3", joaat("ENDSINWALK"), 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2082[3]))
					{
						func_336(&(sLocal_492[2 /*7*/]), iLocal_2082[3], "PED3");
						func_727(iLocal_2082[3], 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_2082[3], func_273(), 0, 0, 0);
					}
					func_71(8);
				}
			}
			break;
		case 12:
			func_14(2);
			if (!ENTITY::IS_ENTITY_DEAD(*bParam0) && func_366(*bParam0, Global_35, 0, 1) < 40.0f)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam0, Global_35, -1, -1.0f, -1.0f, -1.0f);
				if (func_9(sLocal_1617.f_136, 64))
				{
					sVar7 = "LOG_ACCPH";
				}
				else
				{
					sVar7 = "LOG_ACCPN";
				}
				func_387(&(sLocal_1617.f_35), sVar7, *bParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_1920 = 11;
			break;
		case 14:
			if (func_256(-3.5f, 1, 0, 0))
			{
				func_128(32);
				func_128(2);
				if (func_266(sLocal_1617.f_138, 0))
				{
					func_77(sLocal_1617.f_138, 1);
					func_78(&(sLocal_211[0 /*21*/]), 0);
				}
				func_35(256);
				func_48(&(vLocal_570[0 /*3*/]));
				iVar8 = 0;
				while (iVar8 < iLocal_2146)
				{
					func_755(&iVar8);
					iLocal_2130[iVar8] = -1;
					iVar8++;
				}
				iLocal_2146 = 0;
				func_112();
				func_339((1 << 26));
				iLocal_1920 = 13;
			}
			break;
		case 13:
			func_245(bVar2, 1, 1);
			func_676(&bVar2, &(sLocal_211[1 /*21*/]), &(sLocal_275[1 /*52*/]), 0, 1);
			func_245(iLocal_2082[2], 1, 1);
			func_676(&(iLocal_2082[2]), &(sLocal_211[1 /*21*/]), &(sLocal_275[1 /*52*/]), 0, 1);
			func_245(iLocal_2082[3], 1, 1);
			func_676(&(iLocal_2082[3]), &(sLocal_211[1 /*21*/]), &(sLocal_275[1 /*52*/]), 0, 1);
			func_756(0, 0, 1);
			func_403(0, 1, 0);
			if (func_51((1 << 21)))
			{
				func_128(64);
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_417(bool bParam0)
{
	if (func_215(*bParam0, iLocal_75[0], 1, 0) && iLocal_1922 < 5)
	{
		iLocal_1922 = 5;
	}
	switch (iLocal_1922)
	{
		case 0:
			func_402(0);
			func_757(1, 0);
			func_403(0, 1, 0);
			func_758(0, 0);
			iLocal_1922 = 2;
			break;
		case 2:
			switch (iLocal_432)
			{
				case 1:
					func_387(&(sLocal_1617.f_35), "LCMP_IG_TFPLNF", Global_35, *bParam0, 0, 0, 1, 1);
					func_403(0, 1, 0);
					iLocal_1922 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_418(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_70((1 << 16)) && iLocal_1921 < 5)
	{
		func_403(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_1921 = 5;
	}
	if (iLocal_1921 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_659(bParam0, &(sLocal_211[1 /*21*/]), 8.0f, &(sLocal_275[1 /*52*/]), &iVar1, 0, 1, 0, 0, func_658(1, 0, 0) | (1 << 11), 0, 0, 2, 1, -1082130432, 0);
	}
	switch (iLocal_1921)
	{
		case 0:
			func_402(1);
			func_403(1, 0, 0);
			func_728(&(sLocal_492[2 /*7*/]), "PB_VIC_BRKOUT");
			func_728(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_R");
			func_728(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_L");
			func_728(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_N");
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[20]))
			{
				iLocal_75[20] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1391.903f, -269.6049f, 99.57925f, 0.0f, 0.0f, 0.0f, 0.702347f, 0.731577f, 1.200654f);
			}
			func_48(&(vLocal_570[1 /*3*/]));
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[19]))
			{
				iLocal_75[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.695f, -268.6573f, 99.66403f, 0.0f, 0.0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_1921 = 1;
			break;
		case 1:
			if ((func_256(0, 1, 0, 0) && func_393(&(vLocal_570[1 /*3*/]), 1.5f)) && func_282(*bParam0, 1, 1) < 10.0f)
			{
				func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
				func_734(1048576000, 1028443341, 0, 106);
				if (func_9(sLocal_1617.f_136, 128))
				{
					func_387(&(sLocal_1617.f_35), "LCMPF_IG_TFRSH", *bParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_387(&(sLocal_1617.f_35), "LCMPF_IG_TFRSN", *bParam0, Global_35, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(*bParam0, 277, false);
				iLocal_1921 = 2;
			}
			break;
		case 2:
			if (func_282(*bParam0, 1, 1) < 20.0f)
			{
				func_734(1048576000, 1028443341, 0, 106);
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*bParam0))
			{
				func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			}
			func_760(bParam0);
			switch (iVar0)
			{
				case 0:
					func_403(1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[6 /*12*/].f_8))
					{
						ENTITY::SET_ENTITY_COORDS(sLocal_614.f_690[6 /*12*/].f_8, func_489(), true, false, true, true);
					}
					func_745(&sLocal_2216);
					sLocal_2216.f_1 = Global_35;
					func_761(&(sLocal_2216.f_8), &(sLocal_156.f_19), bParam0);
					sLocal_2216.f_18 = 0.2f;
					sLocal_2216.f_17 = 0.15f;
					sLocal_2216.f_21 = 1.0f;
					func_145(&(sLocal_2216.f_23), 17920);
					strcpy_s(&(sLocal_492[2 /*7*/].f_4), 24, "RECOVERY_BOOL");
					func_43(&sLocal_1617, (1 << 16));
					func_748(&sLocal_2216, 106);
					iLocal_1921 = 3;
					break;
				case 1:
					func_387(&(sLocal_1617.f_35), "LCMPF_IG_TFPLRN", Global_35, *bParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_1921 = 6;
					break;
			}
			break;
		case 3:
			if (func_748(&sLocal_2216, 106) && func_763(&(sLocal_492[2 /*7*/])))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_82(&sLocal_1617, (1 << 16));
				func_764(&(sLocal_492[2 /*7*/]), 1, 1);
				func_387(&(sLocal_1617.f_35), "LCMPF_IG_TFPLRP", Global_35, *bParam0, 0, 0, 1, 1);
				iLocal_1921 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				func_765(&(sLocal_492[2 /*7*/]));
				func_766(500, 0, 0, 1, 1);
				func_565(13, 0, 0, 0, 0, 0, 1065353216, 0);
				func_767(*bParam0, 500);
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[6 /*12*/].f_8))
				{
					ENTITY::SET_ENTITY_COORDS(sLocal_614.f_690[6 /*12*/].f_8, func_488(), true, false, true, true);
				}
				func_728(&(sLocal_492[2 /*7*/]), "PB_VIC_BRKOUT");
				iLocal_1921 = 5;
			}
			break;
		case 5:
			if ((!func_70((1 << 19)) && iLocal_2249 < 2) && func_256(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					func_387(&(sLocal_1617.f_35), func_768(iVar0), Global_35, *bParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					iLocal_2249++;
					break;
				case 1:
					func_387(&(sLocal_1617.f_35), func_768(iVar0), Global_35, *bParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2249++;
					iLocal_1921 = 6;
					break;
			}
			break;
		case 6:
			if ((!func_70((1 << 19)) && iLocal_2249 < 2) && func_256(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					func_387(&(sLocal_1617.f_35), func_768(iVar0), Global_35, *bParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2249++;
					break;
			}
			break;
	}
}

int func_419(bool bParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;

	switch (iLocal_596)
	{
		case 0:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_98(&(uLocal_2102[0]));
			func_684(&(sLocal_492[0 /*7*/]), *bParam0, "FOREMAN", 1);
			func_685(&(sLocal_492[0 /*7*/]), sLocal_614.f_690[3 /*12*/].f_8, "PEN");
			func_685(&(sLocal_492[0 /*7*/]), sLocal_614.f_690[4 /*12*/].f_8, "BOOK");
			func_728(&(sLocal_492[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			func_641(&(sLocal_492[0 /*7*/]), &vVar0, &vVar3);
			func_685(&(sLocal_492[0 /*7*/]), sLocal_614.f_690[25 /*12*/].f_8, "p_chair04x");
			if (func_19(64) || func_51((1 << 21)))
			{
				ENTITY::PLAY_ENTITY_ANIM(sLocal_614.f_690[4 /*12*/].f_8, func_730(), func_731(), 0.3f, true, true, false, 0.0f, 0);
				func_745(&sLocal_156);
				sLocal_156.f_1 = *bParam0;
				sLocal_156.f_8 = { func_769() /*3*/ };
				sLocal_156.f_21 = 1.0f;
				sLocal_156.f_18 = 2.0f;
				func_145(&(sLocal_156.f_23), 128);
				func_748(&sLocal_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_403(0, 1, 1);
				func_686(&(sLocal_492[0 /*7*/]));
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_770(), 5.0f);
			if (func_748(&sLocal_156, 129))
			{
				func_745(&sLocal_156);
				sLocal_156.f_1 = *bParam0;
				sLocal_156.f_8 = { func_746(&(sLocal_492[0 /*7*/]), "FOREMAN", "PB_L_ENTER") /*3*/ };
				sLocal_156.f_21 = 1.0f;
				sLocal_156.f_18 = 0.25f;
				sLocal_156.f_17 = 0.2f;
				func_145(&(sLocal_156.f_23), 1152);
				func_748(&sLocal_156, 129);
				iLocal_596 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_770(), 5.0f);
			if (func_748(&sLocal_156, 129))
			{
				iLocal_596 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_686(&(sLocal_492[0 /*7*/]));
			iLocal_596 = 4;
			break;
		case 4:
			if (func_19((1 << 25)))
			{
				func_71((1 << 26));
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1.0f))
			{
				func_772("LOG_OBJ01", 1);
				func_355(*bParam0, &(uLocal_2102[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, func_413());
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (func_773(bParam0, 0, 0))
			{
				func_734(1048576000, 1028443341, 0, 106);
				func_203();
				func_759(bParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14((1 << 12));
				func_643(&(sLocal_492[0 /*7*/]), "bBreakInternalLoop");
				func_336(&(sLocal_492[0 /*7*/]), sLocal_614.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(sLocal_614.f_690[4 /*12*/].f_8, func_730(), func_731(), 0.3f, true, true, false, 0.0f, 0);
				if (func_19(64))
				{
					if (func_9(sLocal_1617.f_136, 64))
					{
						func_387(&(sLocal_1617.f_35), "LCMP_IG_ACK_ACP", *bParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_387(&(sLocal_1617.f_35), "LCMP_IG_ACK_ACN", *bParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(sLocal_1617.f_136, 2))
				{
					func_387(&(sLocal_1617.f_35), "LCMP_IG_ACK_2", *bParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_387(&(sLocal_1617.f_35), "LCMP_IG_S2ACK", *bParam0, Global_35, 0, 0, 1, 1);
					func_10(sLocal_1617.f_136, 2);
				}
				func_71((1 << 16));
				iLocal_596 = 8;
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_688(*bParam0, sLocal_492[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && func_256(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2.0f, -2.0f, 2113536, 0.0f, false, false, -1.0f, 0, 524297, -1.0f);
				func_387(&(sLocal_1617.f_35), "LCMP_IG_S2BFM", *bParam0, Global_35, 0, 0, 1, 1);
				func_48(&(vLocal_570[3 /*3*/]));
				func_403(0, 1, 0);
				func_757(1, 0);
				iLocal_596 = 9;
			}
			if (!func_773(bParam0, 0, 0))
			{
				func_403(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				iLocal_596 = 13;
			}
			break;
		case 9:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*bParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam0, Global_35, -1, -1.0f, -1.0f, -1.0f);
			}
			if (func_668(&(vLocal_570[3 /*3*/])) && func_774(&(vLocal_570[3 /*3*/])) > 30000)
			{
				iLocal_596 = 10;
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_256(0, 1, 0, 0))
			{
				if (!func_51((1 << 28)))
				{
					func_757(1, 1);
					func_403(0, 1, 0);
					func_775(0);
					func_58((1 << 28));
				}
				switch (iLocal_432)
				{
					case 0:
						func_403(0, 1, 0);
						func_757(0, 0);
						func_756(0, 0, 1);
						func_14((1 << 11));
						func_10(sLocal_1617.f_136, (1 << 14));
						func_776(&sLocal_1617);
						func_745(&sLocal_156);
						sLocal_156.f_8 = { -1400.12f, -207.92f, 101.88f /*3*/ };
						sLocal_156.f_14 = { func_777() /*3*/ };
						sLocal_156.f_1 = Global_35;
						sLocal_156.f_17 = 0.2f;
						sLocal_156.f_18 = 0.2f;
						sLocal_156.f_19 = 20.6f;
						sLocal_156.f_25 = sLocal_492[5 /*7*/];
						strcpy_s(&(sLocal_156.f_30), 24, "ARTHUR");
						strcpy_s(&(sLocal_156.f_26), 32, func_482(5));
						func_145(&(sLocal_156.f_23), 26624);
						func_43(&sLocal_1617, (1 << 16));
						func_748(&sLocal_156, 129);
						iLocal_596 = 11;
						break;
					case 1:
						func_403(0, 1, 1);
						func_757(0, 0);
						func_128((1 << 11));
						iLocal_596 = 13;
						break;
				}
			}
			if (!func_773(bParam0, 0, 0))
			{
				func_403(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				func_128((1 << 11));
				iLocal_596 = 13;
			}
			break;
		case 10:
			func_734(1048576000, 1028443341, 0, 106);
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			func_268(&(vLocal_570[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2.0f, -2.0f, 0, 0.0f, false, false, -1.0f, 0, 0, -1.0f);
			func_387(&(sLocal_1617.f_35), "LCMP_IG_S2WS", *bParam0, Global_35, 0, 0, 1, 1);
			iLocal_596 = 9;
			break;
		case 11:
			if (func_748(&sLocal_156, 129))
			{
				func_387(&(sLocal_1617.f_35), "LCMP_IG_S2AL", Global_35, *bParam0, 0, 0, 1, 1);
				func_684(&(sLocal_492[5 /*7*/]), Global_35, "ARTHUR", 1);
				func_685(&(sLocal_492[5 /*7*/]), sLocal_614.f_690[6 /*12*/].f_8, "MONEY");
				func_686(&(sLocal_492[5 /*7*/]));
				iLocal_596 = 12;
			}
			break;
		case 12:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					func_766(func_778(), 0, 0, 1, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("CONTINUE")))
				{
					func_98(&(uLocal_2102[0]));
					func_387(&(sLocal_1617.f_35), "LCMP_IG_S2VG", *bParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2.0f, -2.0f, 0, 0.0f, false, false, -1.0f, 0, 0, -1.0f);
					func_355(iLocal_2105[0], &(uLocal_2102[1]), joaat("BLIP_STYLE_PICKUP"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&sLocal_1617, 128);
					}
					iLocal_596 = 15;
				}
			}
			break;
		case 13:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_256(-3.5f, 1, *bParam0, 1))
			{
				func_98(&(uLocal_2102[0]));
				if (func_215(Global_35, iLocal_75[0], 1, 0))
				{
					if (func_358(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && func_358(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8.0f, -8.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
					}
					func_387(&(sLocal_1617.f_35), "LCMP_IG_S2OT", Global_35, *bParam0, 0, 0, 1, 1);
				}
				iLocal_596 = 14;
			}
			break;
		case 14:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_389("LCMP_IG_S2OT"))
			{
				func_387(&(sLocal_1617.f_35), "LCMP_IG_S2MNT", *bParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2.0f, -2.0f, 0, 0.0f, false, false, -1.0f, 0, 0, -1.0f);
				iLocal_596 = 15;
			}
			break;
		case 15:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19((1 << 11)) && !func_368(&(sLocal_492[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					func_82(&sLocal_1617, (1 << 16));
				}
				func_759(bParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*bParam0, 3) && func_256(-3.5f, 1, *bParam0, 1))
				{
					func_128((1 << 12));
					POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0]);
					POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0]);
					func_403(0, 1, 0);
					func_128((1 << 12));
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1400.86f, -205.41f, 102.34f, 2.0f, -1, false, false, false, false);
					func_779(bParam0);
					func_339((1 << 26));
					iLocal_596 = 17;
				}
			}
			break;
		case 17:
			if (func_266(sLocal_1617.f_138, 0))
			{
				if (func_780(sLocal_1617.f_138, &sLocal_1617, 60000, 1))
				{
					func_78(&(sLocal_211[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_420(bool bParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2[24];
	int iVar5;
	Vector3 vVar6[24];
	bool bVar9;
	Vector3 vVar10[24];

	if (func_134(&sLocal_433, 1) && sLocal_433.f_0 == *bParam0)
	{
		if (iLocal_596 < 17)
		{
			func_781();
			iLocal_596 = 17;
		}
	}
	func_722();
	switch (iLocal_596)
	{
		case 0:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_9(sLocal_1617.f_136, (1 << 17)))
			{
				iVar0 = iLocal_597;
				iLocal_597 = iVar0 + 1;
				func_15(sLocal_1617.f_136, (1 << 17));
			}
			else
			{
				func_10(sLocal_1617.f_136, (1 << 17));
			}
			if (func_9(sLocal_1617.f_136, (1 << 14)))
			{
				func_355(iLocal_2105[0], &(uLocal_2102[1]), joaat("BLIP_STYLE_PICKUP"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, "LOG_BLIP_WAG");
			}
			if (func_333())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_782(), 262209, func_783(), func_784());
				iLocal_484 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_785(), func_782(), 1.0f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_786(), 262209, func_783(), func_787());
				iLocal_484 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_788(), func_786(), 1.0f, 0, false);
			}
			if (func_19(64) || func_51((1 << 21)))
			{
				func_745(&sLocal_156);
				sLocal_156.f_8 = { func_769() /*3*/ };
				sLocal_156.f_1 = *bParam0;
				sLocal_156.f_21 = 1.0f;
				func_145(&(sLocal_156.f_23), 128);
				func_748(&sLocal_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_402(0);
				func_403(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam0, false, true);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_484, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1.0f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_748(&sLocal_156, 129))
			{
				func_402(0);
				func_403(0, 1, 1);
				func_14(1);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_484, func_791(func_333(), func_789(), func_790()), -1, true, false, 0, false, -1.0f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (func_19((1 << 25)))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(sLocal_1617.f_136, (1 << 12));
				}
				func_403(0, 1, 1);
				func_757(1, 0);
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1.0f))
			{
				func_98(&(uLocal_2102[0]));
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_773(bParam0, 0, func_333()) && func_795(bParam0, func_793(), 10.0f, 0, func_794(), 1, -1243035987))
			{
				func_734(1048576000, 1028443341, 0, 106);
				func_14((1 << 12));
				func_759(bParam0, 0, 0, 1, 0, 0, 0, !func_333());
				switch (iLocal_597)
				{
					case 2:
						strcpy_s(&cVar2, 24, "LCMP_IG_NIACT1");
						break;
					case 3:
						strcpy_s(&cVar2, 24, "LCMP_IG_NIBA");
						break;
					case 0:
						strcpy_s(&cVar2, 24, "LCMP_IG_NOG");
						break;
					case 1:
						strcpy_s(&cVar2, 24, "LCMP_IG_NOTI");
						break;
				}
				func_387(&(sLocal_1617.f_35), &cVar2, *bParam0, Global_35, 0, 0, 1, 1);
				iLocal_596 = 8;
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			func_759(bParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_333())
			{
				func_403(0, 1, 1);
				func_757(0, 0);
				iLocal_596 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*bParam0) && func_256(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, joaat("BREAKOUT")) || TASK::_PED_IS_IN_SCENARIO_BASE(*bParam0)))
			{
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam0, Global_35, 0, -1.0f, -1.0f, -1.0f);
				iLocal_596 = 2;
			}
			break;
		case 2:
			func_734(1048576000, 1028443341, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*bParam0))
			{
				if (iLocal_597 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_597)
				{
					case 2:
						strcpy_s(&cVar6, 24, "LCMP_IG_NIACTB");
						break;
					case 3:
						strcpy_s(&cVar6, 24, "LCMP_IG_NICL");
						break;
				}
				func_387(&(sLocal_1617.f_35), &cVar6, *bParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_496(), func_796(0), Global_35, iVar5, 8.0f, -8.0f, 0, 0.0f, false, true, -1.0f, 0, 0, -1.0f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
				TASK::TASK_PERFORM_SEQUENCE(*bParam0, iLocal_196);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
				func_403(0, 1, 1);
				func_757(0, 0);
				iLocal_596 = 5;
			}
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_759(bParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_797(bParam0))
			{
				func_757(1, 0);
				func_403(0, 1, 1);
				func_756(0, 0, 1);
				func_48(&(vLocal_570[3 /*3*/]));
			}
			if (func_51((1 << 31)))
			{
				switch (iLocal_432)
				{
					case 0:
						switch (iLocal_597)
						{
							case 2:
								strcpy_s(&cVar10, 24, "LCMP_IG_NIACT2");
								break;
							case 3:
								strcpy_s(&cVar10, 24, "LCMP_IG_NIFM");
								break;
							case 0:
								strcpy_s(&cVar10, 24, "LCMP_IG_NOSEE");
								break;
							case 1:
								strcpy_s(&cVar10, 24, "LCMP_IG_NOAIN");
								break;
						}
						func_387(&(sLocal_1617.f_35), &cVar10, Global_35, *bParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_597)
						{
							case 2:
								strcpy_s(&cVar10, 24, "LCMP_IG_NI2N");
								break;
							case 3:
								strcpy_s(&cVar10, 24, "LCMP_IG_NIFN");
								break;
							case 0:
								strcpy_s(&cVar10, 24, "LCMP_IG_NI2N");
								break;
							case 1:
								strcpy_s(&cVar10, 24, "LCMP_IG_NIFN");
								break;
						}
						func_387(&(sLocal_1617.f_35), &cVar10, Global_35, *bParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_224(&(vLocal_570[3 /*3*/]), 12.5f))
				{
					func_403(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_757(0, 0);
					if (!func_333())
					{
						TASK::CLEAR_PED_TASKS(*bParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 3.0f, -1, false, false, false, false);
					}
					func_128((1 << 12));
					func_98(&(uLocal_2102[0]));
					func_48(&(vLocal_570[3 /*3*/]));
					iLocal_596 = 16;
				}
			}
			break;
		case 16:
			if (func_224(&(vLocal_570[3 /*3*/]), 60.0f))
			{
				if (func_333())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				}
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0]);
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				func_779(bParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			if (!(func_134(&sLocal_433, 1) && sLocal_433.f_0 == *bParam0))
			{
				if (func_266(sLocal_1617.f_138, 0))
				{
					func_77(sLocal_1617.f_138, 1);
					func_78(&(sLocal_211[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_421(bool bParam0)
{
	char cVar0[64];
	bool bVar8;
	Vector3 vVar9[24];
	Vector3 vVar12[24];

	func_722();
	switch (iLocal_596)
	{
		case 0:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			func_58((1 << 30));
			if (!func_9(sLocal_1617.f_136, (1 << 17)))
			{
				func_10(sLocal_1617.f_136, (1 << 17));
			}
			else
			{
				func_15(sLocal_1617.f_136, (1 << 17));
			}
			if (func_333())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_782(), 262209, func_783(), func_784());
				iLocal_484 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_785(), func_782(), 1.0f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_786(), 262209, func_783(), func_787());
				iLocal_484 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_788(), func_786(), 1.0f, 0, false);
			}
			if (func_19(64) || func_51((1 << 21)))
			{
				func_745(&sLocal_156);
				sLocal_156.f_8 = { -1402.34f, -207.62f, 101.88f /*3*/ };
				sLocal_156.f_1 = *bParam0;
				sLocal_156.f_21 = 1.0f;
				func_145(&(sLocal_156.f_23), 128);
				func_748(&sLocal_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam0, false, true);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_484, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1.0f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				if (func_333())
				{
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_748(&sLocal_156, 129))
			{
				func_14(1);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_484))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_484, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1.0f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (func_19((1 << 25)))
			{
				func_42(sLocal_1617.f_136, (1 << 12));
				func_403(0, 1, 1);
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1.0f))
			{
				func_98(&(uLocal_2102[0]));
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_773(bParam0, 1, func_333()))
			{
				if (func_795(bParam0, func_798(bParam0), 10.0f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					func_14((1 << 12));
					func_799(bParam0, 0, 0);
					func_10(sLocal_1617.f_136, (1 << 24));
					sLocal_104.f_40 = *bParam0;
					sLocal_104.f_43 = 4.0f;
					sLocal_104.f_41 = 4.0f;
					sLocal_104.f_39 = Global_1392194[sLocal_1617.f_136 /*10*/].f_6;
					if (func_333())
					{
						strcpy_s(&cVar0, 64, "LCMPF_IG1_ALT");
					}
					else
					{
						strcpy_s(&cVar0, 64, "LCMPF_IG1");
					}
					func_387(&(sLocal_1617.f_35), &cVar0, *bParam0, Global_35, 0, 0, 1, 1);
					iLocal_596 = 5;
				}
			}
			break;
		case 5:
			func_800(bParam0);
			func_759(bParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_797(bParam0))
			{
				func_403(0, 1, 1);
				func_758(0, 0);
				func_757(1, 0);
				func_48(&(vLocal_570[3 /*3*/]));
			}
			if (func_51((1 << 31)))
			{
				switch (iLocal_432)
				{
					case 1:
						if (func_333())
						{
							strcpy_s(&cVar9, 24, "LCMP_ANGRRES2");
						}
						else
						{
							strcpy_s(&cVar9, 24, "LCMP_ANGRRES1");
						}
						func_387(&(sLocal_1617.f_35), &cVar9, Global_35, *bParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_224(&(vLocal_570[3 /*3*/]), 12.5f))
				{
					func_403(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_757(0, 0);
					iLocal_596 = 8;
				}
			}
			break;
		case 8:
			func_800(bParam0);
			func_799(bParam0, 0, 0);
			if (func_256(-3.5f, 1, 0, 0))
			{
				if (func_333())
				{
					func_77(sLocal_1617.f_138, 1);
					func_78(&(sLocal_211[0 /*21*/]), 0);
					func_779(bParam0);
					strcpy_s(&cVar12, 24, "LCMPF_IG1_ALTR");
					iLocal_596 = 17;
				}
				else
				{
					strcpy_s(&cVar12, 24, "LCMPF_IG1_R");
					iLocal_596 = 16;
				}
				func_387(&(sLocal_1617.f_35), &cVar12, *bParam0, Global_35, 0, 0, 1, 1);
				func_128((1 << 12));
				func_98(&(uLocal_2102[0]));
			}
			break;
		case 16:
			func_800(bParam0);
			if (func_224(&(vLocal_570[3 /*3*/]), 60.0f))
			{
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0]);
				func_77(sLocal_1617.f_138, 1);
				func_78(&(sLocal_211[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				func_779(bParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_422(bool bParam0)
{
	bool bVar0;

	func_801();
	switch (iLocal_595)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0.0f, 0.0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(sLocal_1617.f_136, (1 << 10)))
			{
				if (func_802(bParam0))
				{
					func_757(0, 1);
					func_403(0, 1, 0);
					func_756(0, 0, 1);
					func_71(256);
					func_779(bParam0);
					func_217(&(sLocal_492[1 /*7*/]));
					func_483(&(sLocal_492[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0]);
					POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					func_42(sLocal_1617.f_136, (1 << 12));
					iLocal_595 = 15;
				}
			}
			else if (func_803() & func_804(bParam0))
			{
				func_71((1 << 26));
				func_403(0, 1, 0);
				func_757(1, 1);
				func_805(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0.0f, 0.0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0.0f, 0.0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_595 = 1;
			}
			break;
		case 1:
			if (func_19((1 << 25)))
			{
				if (func_9(1, 2))
				{
					func_42(0, 16);
				}
				if (func_19(2))
				{
					iLocal_595 = 6;
				}
				else
				{
					iLocal_595 = 2;
				}
			}
			break;
		case 6:
			if (!func_771(0))
			{
				func_772("LOG_OBJ01", 1);
				func_355(*bParam0, &(uLocal_2102[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, func_413());
				if (!func_9(sLocal_1617.f_136, (1 << 10)))
				{
					iLocal_595 = 2;
				}
				else if (func_802(bParam0))
				{
					iLocal_595 = 8;
				}
			}
			break;
		case 2:
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (func_806(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*bParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[7 /*12*/].f_8));
					}
				}
				if (((func_131(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || func_131(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"))) || func_131(Global_35, joaat("SCRIPT_TASK_DISEMBARK_VEHICLE"))) || func_131(Global_35, joaat("SCRIPT_TASK_EXIT_TRANSPORT")))
				{
					MAP::DISPLAY_RADAR(false);
				}
			}
			break;
		case 3:
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			break;
		case 4:
			func_734(1048576000, 1028443341, 0, 106);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			func_807();
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			func_807();
			break;
		case 7:
			func_807();
			if (!func_266(sLocal_1617.f_138, 0))
			{
				func_62(sLocal_1617.f_138, 1, 1);
			}
			if (!func_19((1 << 12)))
			{
				func_128((1 << 9));
				func_203();
				func_14((1 << 12));
				func_302(&sLocal_433, 4);
			}
			break;
		case 8:
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			func_808(11, 2);
			if (func_310(sLocal_1617.f_32) && !func_809(101))
			{
				func_810(sLocal_1617.f_32, 0, 1);
			}
			if (bVar0)
			{
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[1]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[1]);
				func_111(iLocal_75[1]);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[0]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_75[0]);
			}
			break;
		case 9:
			if (func_714(&(sLocal_492[0 /*7*/]), "Internal_Loop"))
			{
				func_715(&(sLocal_492[0 /*7*/]), "Internal_Loop");
			}
			if (func_19((1 << 30)) && !func_811(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				func_43(&sLocal_1617, (1 << 16));
				func_808(11, 2);
				if (func_9(sLocal_1617.f_136, 4))
				{
					func_812(11, 128);
					iLocal_595 = 11;
				}
				else
				{
					func_387(&(sLocal_1617.f_35), "LOG_LCMP_INT_b0", Global_35, *bParam0, 0, 0, 1, 0);
					iLocal_595 = 13;
				}
			}
			break;
		case 10:
			if (func_748(&sLocal_156, 129))
			{
				iLocal_595 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[0 /*12*/].f_8))
			{
				if (!func_70(256))
				{
					func_684(&(sLocal_492[1 /*7*/]), Global_35, "arthur", 1);
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[3 /*12*/].f_8, "p_knife02x");
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					func_684(&(sLocal_492[1 /*7*/]), *bParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[0 /*12*/].f_8, "ITEM");
					func_642(&(sLocal_492[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					func_684(&(sLocal_492[1 /*7*/]), Global_35, "player", 1);
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[6 /*12*/].f_8, "MONEY");
					func_685(&(sLocal_492[1 /*7*/]), sLocal_614.f_690[0 /*12*/].f_8, "Item");
					func_684(&(sLocal_492[1 /*7*/]), *bParam0, "male", 1);
				}
				iLocal_595 = 13;
			}
			break;
		case 13:
			func_98(&(uLocal_2102[0]));
			if (func_9(sLocal_1617.f_136, 4))
			{
				if (!func_19((1 << 12)))
				{
					func_387(&(sLocal_1617.f_35), "LOG_LCMP_INT_a2", *bParam0, Global_35, 0, 0, 1, 1);
				}
				func_686(&(sLocal_492[1 /*7*/]));
				func_217(&(sLocal_492[0 /*7*/]));
				if (!func_70(256))
				{
					func_643(&(sLocal_492[1 /*7*/]), "Internal_Loop");
				}
				iLocal_595 = 14;
			}
			else if (!func_389("LOG_LCMP_INT_b0"))
			{
				func_642(&(sLocal_492[0 /*7*/]), "pbl_RefuseToSell", 1);
				func_643(&(sLocal_492[0 /*7*/]), "Internal_Loop");
				func_71((1 << 14));
				iLocal_595 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*bParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(sLocal_614.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					func_82(&sLocal_1617, (1 << 16));
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (func_368(&(sLocal_492[0 /*7*/])) && (func_70((1 << 14)) || func_368(&(sLocal_492[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_82(&sLocal_1617, (1 << 16));
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_43(&sLocal_1617, 128);
				func_313(11, 128);
				func_483(&(sLocal_492[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_128((1 << 11));
				func_339((1 << 14));
				func_813(11);
				func_71(256);
				func_128((1 << 29));
				func_128((1 << 12));
				func_108(1);
				func_339((1 << 26));
				func_757(0, 1);
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				func_814(11, 2);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				func_779(bParam0);
				iLocal_595 = 15;
			}
			break;
		case 15:
			func_808(11, 1);
			if (func_19((1 << 12)))
			{
				func_128((1 << 12));
			}
			break;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)
{
	if ((iLocal_206 % 5) != 0)
	{
		return;
	}
}

int func_424()
{
	return 0;
}

int func_425()
{
	return 0;
}

bool func_426(bool bParam0)
{
	return false;
}

int func_427(bool bParam0)
{
	return 0;
}

void func_428()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	if (func_51((1 << 13)))
	{
		iVar1 = iLocal_2250;
		iVar2 = iLocal_2250 + 4;
		if (iVar2 >= iLocal_2146)
		{
			iVar2 = (iLocal_2146 - 1);
		}
		iLocal_2250 = iVar1;
		while (iLocal_2250 <= iVar2)
		{
			if (!func_157(iLocal_2130[iLocal_2250]))
			{
			}
			else
			{
				bVar0 = func_63(iLocal_2130[iLocal_2250]);
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					func_244(iLocal_2130[iLocal_2250], 0, 1, 0, 1, 1);
					func_245(bVar0, 1, 1);
					if (!func_131(bVar0, joaat("SCRIPT_TASK_FLEE")))
					{
						if (!func_19(32))
						{
							func_755(&iLocal_2250);
						}
						else
						{
							vVar3 = { func_815(iLocal_75[4], 100, 1, 0) /*3*/ };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
							if (!func_243(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2.0f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30.0f / 2.0f), 30.0f), 0, 40000.0f);
							}
							func_816(0, iLocal_2082[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
							TASK::TASK_PERFORM_SEQUENCE(bVar0, iLocal_196);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
						}
					}
					if (!func_19(32))
					{
						iLocal_2130[iLocal_2250] = -1;
					}
				}
			}
			iLocal_2250++;
		}
		if (iLocal_2250 >= (iLocal_2146 - 1))
		{
			func_50((1 << 13));
			if (!func_19(32))
			{
				iLocal_2146 = 0;
			}
		}
	}
}

bool func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117((1 << 10));
		case 1:
			return func_117((1 << 11));
		case 2:
			return func_117((1 << 12));
		case 3:
			return func_117((1 << 13));
		case 4:
			return func_117((1 << 14));
		default:
			break;
	}
	return false;
}

bool func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117((1 << 15));
		case 1:
			return func_117((1 << 16));
		case 2:
			return func_117((1 << 17));
		case 3:
			return func_117((1 << 18));
		case 4:
			return func_117((1 << 19));
		default:
			break;
	}
	return false;
}

float func_431(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1.0f;
}

float func_432(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1.0f;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(iLocal_75[3], iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				bVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if ((func_19(32) && !func_22(&sLocal_1617, 2)) && bVar4 == iLocal_2082[0])
				{
				}
				else
				{
					func_130(bVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

int func_434(int iParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = func_521(func_436(iParam0), 1);
	if (fVar0 <= 15.0f)
	{
		return 255;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15.0f)) + 255.0f));
	return iVar1;
}

void func_435(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_2146)
	{
		if (!func_157(iLocal_2130[iVar1]))
		{
		}
		else
		{
			bVar0 = func_63(iLocal_2130[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				func_244(iLocal_2130[iVar1], 0, 1, 0, 1, 1);
				func_245(bVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_436(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return { -1387.583f, -272.6812f, 98.8f };
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1458.54f, -256.597f, 105.987f };
				case 1:
					return { -1415.835f, -186.908f, 99.722f };
				case 2:
					return { -1456.845f, -196.8082f, 104.6f };
				case 3:
					return { -1468.877f, -228.5962f, 106.9087f };
				case 4:
					return { -1419.583f, -199.3359f, 100.7483f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { -1387.583f, -272.6812f, 98.8f };
				case 1:
					return { -1450.445f, -165.3257f, 106.4f };
				case 2:
					return { -1472.47f, -253.4789f, 109.4271f };
				case 3:
					return { -1424.774f, -283.7422f, 105.2652f };
				case 4:
					return { -1424.774f, -283.7422f, 105.2652f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1402.2f, -292.7f, 102.7f };
				case 1:
					return { -1514.524f, -243.7657f, 118.7613f };
				case 2:
					return { -1453.848f, -127.2335f, 107.7073f };
				case 3:
					return { -1502.6f, -203.7f, 111.0f };
				case 4:
					return { -1402.2f, -292.7f, 102.7f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_437(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return { -1402.82f, -270.8668f, 98.5505f };
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1446.31f, -249.5183f, 101.6165f };
				case 1:
					return { -1421.7f, -190.4f, 99.7097f };
				case 2:
					return { -1467.4f, -185.8f, 104.3577f };
				case 3:
					return { -1454.5f, -226.7f, 102.8009f };
				case 4:
					return { -1429.321f, -195.9762f, 100.5673f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { -1402.82f, -270.8668f, 98.5505f };
				case 1:
					return { -1463.685f, -173.1668f, 106.0101f };
				case 2:
					return { -1457.906f, -252.8943f, 104.7849f };
				case 3:
					return { -1410.153f, -285.7408f, 100.6772f };
				case 4:
					return { -1410.153f, -285.7408f, 100.6772f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1413.484f, -292.4594f, 101.7033f };
				case 1:
					return { -1517.31f, -234.5498f, 115.9662f };
				case 2:
					return { -1470.0f, -127.0f, 118.0f };
				case 3:
					return { -1514.101f, -202.0088f, 110.2915f };
				case 4:
					return { -1413.484f, -292.4594f, 101.7033f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_438(bool bParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

bool func_439(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (!func_215(Global_35, Global_1898092.f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_140(Global_1898092.f_26.f_2) && func_9(Global_1898092.f_26.f_2, (1 << 25)))
	{
		return true;
	}
	return false;
}

bool func_440()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_441(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_817(func_611(iParam0));
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_443(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_444(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

int func_445(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;

	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0 /*12*/].f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 -= (*iParam2 * 86400);
	*iParam3 = (iVar0 / 3600);
	iVar0 -= *iParam3 * 3600;
	*uParam4 = (iVar0 / 60);
	iVar0 -= *uParam4 * 60;
	*uParam5 = iVar0;
}

bool func_448(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_449(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return func_142(iParam0, (1 << 25));
}

bool func_450(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_452()
{
	return Global_1899515;
}

int func_453(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_455(int iParam0, Vector3 vParam1)
{
	if (func_818(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

void func_456(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/].f_1 = func_452();
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		PERSCHAR::_0x0B3A99AB6713AA52(func_169(iParam0));
	}
}

float func_457(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_458(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_819(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_820(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

int func_459()
{
	return joaat("A_M_M_BIVWORKER_01");
}

void func_460(int iParam0)
{
	func_487(iParam0, 4);
}

void func_461(int iParam0)
{
	func_487(iParam0, 64);
}

void func_462(int iParam0)
{
	func_487(iParam0, 8);
}

void func_463(int iParam0)
{
	func_487(iParam0, 128);
}

void func_464(int iParam0)
{
	func_487(iParam0, 1);
}

void func_465(int iParam0)
{
	func_469(&(Global_40.f_9096[sLocal_1617.f_136 /*12*/].f_6), func_7(iParam0));
}

bool func_466(int iParam0)
{
	return func_398(Global_40.f_9096[sLocal_1617.f_136 /*12*/].f_6, func_7(iParam0));
}

void func_467(int iParam0)
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { func_821(*iParam0) /*3*/ };
	fVar3 = func_822(*iParam0);
	iLocal_478[*iParam0] = TASK::CREATE_SCENARIO_POINT_HASH(func_693(), vVar0, fVar3, 0.0f, 0.0f, false);
	TASK::_0xE69FDA40AAC3EFC0(iLocal_478[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(iLocal_478[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_478[*iParam0], 19, true);
	iLocal_197[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f, "Appleseed - volTreeBlock");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_197[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!func_823(&(iLocal_1914[*iParam0])))
	{
		iLocal_1914[*iParam0] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar0, 3.0f, 1, 36, 0);
	}
}

bool func_468(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		iLocal_472[iParam0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_824(iParam0), func_437(iParam0), 9);
		iLocal_466[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_437(iParam0), 5.0f, func_825(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		iLocal_472[iParam0] = iLocal_472[iParam0];
		if (((!func_826(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0]) != 4) && !func_429(iParam0)) && !func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 4);
		}
		else if (func_19(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 4);
		}
		else if (func_466(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0], 9);
			func_827(iParam0);
			func_704(iParam0);
		}
		if (func_826(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_469(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_145(iParam0, (1 << 28));
	}
	else
	{
		func_201(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_145(iParam0, (1 << 30));
	}
	else
	{
		func_201(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_145(iParam0, (1 << 29));
	}
	else
	{
		func_201(iParam0, (1 << 29));
	}
}

void func_471(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_472(Vector3 vParam0, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_819(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_820(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_473(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_243(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) /*3*/ };
			if (func_828(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_474(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_478[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_478[iParam0]);
		func_111(iLocal_197[iParam0]);
	}
	if (bParam1)
	{
		func_829(&(iLocal_1914[iParam0]), 1);
	}
}

void func_475(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_6);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_5);
	}
}

void func_476()
{
	CAM::_0x88544C0E3291DCAE(true);
	func_830();
}

bool func_477(int iParam0)
{
	if (((func_478(iParam0, 1) && func_478(iParam0, 2)) && func_478(iParam0, 8)) && func_478(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_479()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_480(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_481(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

char* func_482(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_19(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (func_19(64))
			{
				return "PB_L_ENTER";
			}
			else if (func_19((1 << 18)))
			{
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(sLocal_1617.f_136, (1 << 14)))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_333())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (func_19(16))
						{
							if (func_333())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (func_19(16))
						{
							if (func_333())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!func_5(sLocal_1617.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_483(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_831(uParam0, sParam1, sParam2, iParam3);
	func_832(uParam0);
}

void func_484()
{
	func_18(5, &sLocal_1617, 5);
	if (func_19(64))
	{
		iLocal_597 = 2;
	}
	else if (func_22(&sLocal_1617, 256))
	{
		iLocal_597 = 2;
	}
	else if (func_364())
	{
		iLocal_597 = 0;
	}
	else
	{
		iLocal_597 = 2;
	}
}

int func_485()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("P_CS_CEDARLOG01X");
		case 1:
			return joaat("P_CS_CEDARLOG03X");
		default:
			break;
	}
	return joaat("P_CS_CEDARLOG03X");
}

Vector3 func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -1330.243f, -215.0619f, 101.4806f };
		case 1:
			return { -1331.525f, -215.6111f, 101.4806f };
		case 2:
			return { -1332.405f, -216.0306f, 101.4806f };
		case 3:
			return { -1333.802f, -208.2314f, 101.4832f };
		case 4:
			return { -1334.693f, -208.649f, 101.4832f };
		case 5:
			return { -1335.645f, -209.0838f, 101.4832f };
		case 6:
			return { -1337.773f, -199.2836f, 101.4557f };
		case 7:
			return { -1338.676f, -199.7524f, 101.4558f };
		case 8:
			return { -1339.435f, -200.1282f, 101.4558f };
		case 9:
			return { -1341.268f, -192.0703f, 101.4249f };
		case 10:
			return { -1342.342f, -192.6443f, 101.425f };
		case 11:
			return { -1343.02f, -192.9443f, 101.4249f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_487(int iParam0, int iParam1)
{
	func_469(iParam0, iParam1);
}

Vector3 func_488()
{
	return { -1400.29f, -207.08f, 100.64f };
}

Vector3 func_489()
{
	return { -1392.202f, -270.137f, 96.51328f };
}

Vector3 func_490(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return { -1375.342f, -317.4534f, 100.8851f };
				case 1:
					return { -1378.65f, -317.2836f, 100.986f };
				case 2:
					return { -1381.161f, -321.5669f, 101.6531f };
				case 3:
					return { -1392.285f, -331.5669f, 104.1264f };
				case 4:
					return { -1401.689f, -338.5281f, 104.3909f };
				case 5:
					return { -1411.78f, -346.1456f, 105.0925f };
				case 6:
					return { -1420.203f, -351.6165f, 106.4329f };
				case 7:
					return { -1426.14f, -354.4086f, 107.5771f };
				case 8:
					return { -1437.277f, -359.1299f, 110.5854f };
				case 9:
					return { -1441.922f, -360.4134f, 111.6311f };
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return { -1374.965f, -314.8146f, 100.6431f };
						case 1:
							return { -1376.802f, -320.7141f, 101.263f };
						case 2:
							return { -1380.237f, -322.0409f, 101.6534f };
						case 3:
							return { -1393.833f, -333.3949f, 104.4031f };
						case 4:
							return { -1402.033f, -337.2408f, 104.2141f };
						case 5:
							return { -1414.284f, -346.9185f, 105.2396f };
						case 6:
							return { -1419.447f, -350.5371f, 106.1471f };
						case 7:
							return { -1430.102f, -356.533f, 108.7939f };
						case 8:
							return { -1436.11f, -357.8445f, 110.1643f };
						case 9:
							return { -1441.878f, -360.5837f, 111.6306f };
							break;
					}
					return { 0.0f, 0.0f, 0.0f };
				}

Vector3 func_491(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1421.283f, -204.5069f, 101.8864f };
				case 1:
					return { -1437.858f, -232.6483f, 101.4767f };
				case 2:
					return { -1346.592f, -223.6519f, 102.188f };
				case 3:
					return { -1357.959f, -211.2741f, 100.8586f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { -1471.427f, -212.0286f, 107.1219f };
				case 1:
					return { -1449.6f, -209.5491f, 105.0148f };
				case 2:
					return { -1346.592f, -223.6519f, 102.188f };
				case 3:
					return { -1357.959f, -211.2741f, 100.8586f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1471.427f, -212.0286f, 107.1219f };
				case 1:
					return { -1449.6f, -209.5491f, 105.0148f };
				case 2:
					return { -1346.592f, -223.6519f, 102.188f };
				case 3:
					return { -1357.959f, -211.2741f, 100.8586f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_492(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0.0f;
}

Vector3 func_493(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1421.44f, -207.25f, 101.2044f };
				case 1:
					return { -1440.13f, -230.94f, 101.25f };
				case 2:
					return { -1348.581f, -225.7415f, 101.7857f };
				case 3:
					return { -1355.598f, -209.7169f, 100.3746f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { -1471.914f, -209.3468f, 106.1706f };
				case 1:
					return { -1451.512f, -211.5973f, 104.6684f };
				case 2:
					return { -1348.581f, -225.7415f, 101.7857f };
				case 3:
					return { -1355.598f, -209.7169f, 100.3746f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1471.914f, -209.3468f, 106.1706f };
				case 1:
					return { -1451.512f, -211.5973f, 104.6684f };
				case 2:
					return { -1348.581f, -225.7415f, 101.7857f };
				case 3:
					return { -1355.598f, -209.7169f, 100.3746f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_494(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { 1.0f, 0.0f, 0.0f };
				case 1:
					return { 0.0f, 0.0f, -128.1f };
				case 2:
					return { 0.0f, 0.0f, -43.6f };
				case 3:
					return { -1.5f, 0.0f, 122.5f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { 4.4f, 0.0f, -176.64f };
				case 1:
					return { -1.5f, 0.0f, -40.56f };
				case 2:
					return { 0.0f, 0.0f, -43.6f };
				case 3:
					return { -1.5f, 0.0f, 122.5f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { 4.4f, 0.0f, -176.64f };
				case 1:
					return { -1.5f, 0.0f, -40.56f };
				case 2:
					return { 0.0f, 0.0f, -43.6f };
				case 3:
					return { -1.5f, 0.0f, 122.5f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_495(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			strcpy_s(uParam1[iVar0 /*8*/], 64, sParam0);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

char* func_496()
{
	if (func_333())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_497()
{
	return { -1442.024f, -359.4506f, 111.622f };
}

bool func_498(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_499(var uParam0)
{
	if (!func_252(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_252(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

int func_500(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_833(&uParam1))
	{
		return 1;
	}
	if (!func_520(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_501(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_502(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_834(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_503(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_504(var uParam0)
{
	return func_248(*uParam0, 4);
}

bool func_505(var uParam0)
{
	return func_248(*uParam0, 64);
}

bool func_506(var uParam0)
{
	return func_248(*uParam0, 8);
}

bool func_507(var uParam0)
{
	return func_248(*uParam0, 128);
}

bool func_508(var uParam0)
{
	return func_248(*uParam0, (1 << 11));
}

void func_509(bool bParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(bParam0, 178, bParam1);
}

bool func_510(var uParam0)
{
	return func_248(*uParam0, (1 << 10));
}

bool func_511(var uParam0)
{
	return func_248(*uParam0, 256);
}

void func_512(bool bParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(bParam0, 148, !bParam1);
}

bool func_513(var uParam0)
{
	return func_248(*uParam0, (1 << 9));
}

bool func_514(var uParam0)
{
	return func_248(*uParam0, (1 << 12));
}

void func_515(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_516(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_518(iParam0)) && func_530(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_241(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_518(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_519(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_520(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_835(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 /*3*/ };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + (float)iParam1);
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - (float)iParam1);
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - (float)iParam1);
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

float func_521(Vector3 vParam0, int iParam3)
{
	return func_438(Global_35, vParam0, iParam3);
}

bool func_522(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_248(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_523(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0) && ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
		{
			if (func_385(PLAYER::PLAYER_PED_ID(), bParam0, 1) < (bParam1 * bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_524(Vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(bParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam3);
			if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_836(iParam10);
				if (fVar2 < 0.0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_837(bParam4, PLAYER::PLAYER_PED_ID(), bParam3);
		}
	}
	else
	{
		bVar0 = func_838(bParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0.0f)
		{
		}
		if (*iParam5 <= 0.0f)
		{
			*iParam5 = func_479();
		}
		else if ((func_479() - *iParam5) > bParam7)
		{
			*iParam5 = 0.0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0.0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_525(bool bParam0, bool bParam1)
{
	if (func_254(bParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(bParam0)));
	}
	return false;
}

bool func_526(float fParam0)
{
	if (func_839(1))
	{
		return true;
	}
	if (func_668(&uLocal_0) && !func_224(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_527(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
}

bool func_528(var uParam0)
{
	return uParam0;
}

bool func_529(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_530(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_531(int iParam0)
{
	int iVar0;

	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_246(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_532(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_238(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_531(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_169(iParam0));
	func_515(iParam0, 0);
	return 1;
}

bool func_533(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return true;
		default:
			break;
	}
	return false;
}

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_840(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_841((398 + iVar28), 1);
			if (func_842(iParam0, &sVar0, iVar5, 0))
			{
				if (func_843(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_844(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_845(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_846(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_847(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_848(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return 1;
			}
		}
	}
}

void func_535(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0.0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_536(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LCMP");
		case 1:
			return joaat("EACAS");
		case 2:
			return joaat("EACUR");
		default:
			break;
	}
	return 0;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076;
		case 1:
			return 1776245965;
		case 2:
			return -228594924;
		default:
			break;
	}
	return 0;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063;
		case 1:
			return 111316232;
		case 2:
			return -96966750;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BLIP_EVENT_APPLESEED");
		case 1:
			return joaat("BLIP_EVENT_CASTOR");
		case 2:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		default:
			break;
	}
	return 0;
}

int func_541()
{
	return joaat("TOAST_LOG_BLIPS");
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_543()
{
	return joaat("SP_MISSIONS_2");
}

char* func_544(int iParam0)
{
	if (!func_140(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

int func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return func_849(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, bParam12, bParam13);
	}
	return func_850(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, bParam12, bParam13);
}

bool func_546(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_547(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_1() == 0)
	{
		return;
	}
	if (func_851(128))
	{
		return;
	}
	if (!func_852(iParam0))
	{
		return;
	}
	if (func_142(iParam0, 32))
	{
		return;
	}
	func_143(iParam0, 32);
	func_331(&Global_1935630, (1 << 13));
	func_854(func_853(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_855(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_854(func_853(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_854(func_853(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_854(func_853(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_854(func_853(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_854(func_853(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_854(func_853(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1822876181);
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(1092217275);
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(1855549007);
			MAP::_MAP_DISCOVER_REGION(1542246539);
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(-237206861);
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(276890716);
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(-353968602);
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(-496244122);
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(-678676588);
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(-732274047);
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(-12216052);
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(-1456731677);
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(-2086563810);
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(221661572);
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(222265732);
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(-1484929764);
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(1104975149);
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(235472255);
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(-1337880478);
			break;
		case 29:
			MAP::_MAP_DISCOVER_REGION(-1813267128);
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(-1941572412);
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(1006072805);
			break;
		case 121:
			MAP::_MAP_DISCOVER_REGION(929640770);
			break;
		case 122:
			MAP::_MAP_DISCOVER_REGION(1603579970);
			break;
		case 124:
			MAP::_MAP_DISCOVER_REGION(-1332669948);
			break;
		case 123:
			MAP::_MAP_DISCOVER_REGION(-1807212021);
			break;
		case 34:
			MAP::_MAP_DISCOVER_REGION(-1347759053);
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(-918096609);
			break;
		case 114:
			MAP::_MAP_DISCOVER_REGION(1728445882);
			break;
		case 37:
			MAP::_MAP_DISCOVER_REGION(-507075109);
			break;
		case 40:
			MAP::_MAP_DISCOVER_REGION(462373845);
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(-1727895786);
			break;
		case 43:
			MAP::_MAP_DISCOVER_REGION(1826504111);
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(1714554710);
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(-91026072);
			break;
		case 54:
			MAP::_MAP_DISCOVER_REGION(893855320);
			break;
		case 55:
			MAP::_MAP_DISCOVER_REGION(326709244);
			break;
		case 49:
			MAP::_MAP_DISCOVER_REGION(653799702);
			break;
		case 62:
			MAP::_MAP_DISCOVER_REGION(415864829);
			break;
		case 64:
			MAP::_MAP_DISCOVER_REGION(-1836330842);
			break;
		case 65:
			MAP::_MAP_DISCOVER_REGION(648073069);
			break;
		case 66:
			MAP::_MAP_DISCOVER_REGION(770074951);
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(-1276637644);
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(-431488293);
			break;
		case 72:
			MAP::_MAP_DISCOVER_REGION(-1101810198);
			break;
		case 74:
			MAP::_MAP_DISCOVER_REGION(-1344767066);
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(1472232821);
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(-1368676121);
			break;
		case 63:
			MAP::_MAP_DISCOVER_REGION(-33677540);
			break;
		case 80:
			MAP::_MAP_DISCOVER_REGION(1602161184);
			MAP::_MAP_DISCOVER_REGION(-443207523);
			MAP::_MAP_DISCOVER_REGION(-683043834);
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(147256338);
			MAP::_MAP_DISCOVER_REGION(-134804027);
			MAP::_MAP_DISCOVER_REGION(2027689141);
			break;
		case 83:
			MAP::_MAP_DISCOVER_REGION(-161135375);
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(1625008147);
			break;
		case 86:
			MAP::_MAP_DISCOVER_REGION(121074776);
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(1876184276);
			break;
		case 89:
			MAP::_MAP_DISCOVER_REGION(458479023);
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
		case 96:
			MAP::_MAP_DISCOVER_REGION(-1150244084);
			break;
		case 98:
			MAP::_MAP_DISCOVER_REGION(759314201);
			break;
		case 99:
			MAP::_MAP_DISCOVER_REGION(2063457042);
			break;
		case 100:
			MAP::_MAP_DISCOVER_REGION(1877776161);
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(2143316225);
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(-1623232489);
			MAP::_MAP_DISCOVER_REGION(-1393093729);
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(1354284392);
			break;
		case 107:
			MAP::_MAP_DISCOVER_REGION(-1430883057);
			break;
		case 109:
			MAP::_MAP_DISCOVER_REGION(820139809);
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(1561007383);
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	}
	if (bParam1)
	{
		func_143(iParam0, 64);
	}
}

void func_548(int iParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = func_856(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_857(iParam0) /*3*/ };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_858(iParam0, iParam1);
		iParam1--;
		if (func_9(iParam0, (1 << 26)))
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(iVar0);
		}
		MAP::_ADD_PROP_TO_MINIMAP(iVar0, vVar1.x, vVar1.y, 0.0f, iParam1);
		func_10(iParam0, (1 << 26));
	}
}

int func_549(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_8(&iVar1, (1 << 31));
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 &= (iVar1 - 1);
		iVar0++;
	}
	return iVar0;
}

int func_550()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_551(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_552(int iParam0)
{
	return func_859(iParam0, 6);
}

int func_553(int iParam0)
{
	int iVar0;

	iVar0 = func_860(iParam0, 6);
	return iVar0;
}

int func_554(int iParam0)
{
	return func_859(iParam0, 7);
}

int func_555(int iParam0)
{
	int iVar0;

	iVar0 = func_860(iParam0, 7);
	return iVar0;
}

int func_556(int iParam0)
{
	return func_859(iParam0, 4) | func_859(iParam0, 5);
}

int func_557(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_860(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_860(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_558(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 += -1;
	}
}

bool func_559(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_861(bParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_360(bParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

int func_560(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_561(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == joaat("LAW_DISPATCH_PENDING"))
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_562(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= *bParam0)
	{
		iParam4 = (*bParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_365((*bParam0)[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_563(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

char* func_564()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_565(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	if (Global_36616 & func_862(iParam1) != 0)
	{
		return;
	}
	iVar0 = func_863(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_864(iVar0, 0, iParam0, iParam1, sParam3, bParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_865(iVar1, iVar0, iParam0, iParam1, bParam4, bParam5);
		}
		else
		{
			func_864(iVar0, 1, iParam0, iParam1, sParam3, bParam4, bParam5, 0);
		}
	}
}

void func_566(int iParam0, bool bParam1, int iParam2)
{
	func_866(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1224589.f_6)
		{
			return;
		}
		if (Global_1224589.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_867(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & (1 << 25) != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_145(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_868(1))
						{
							func_145(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_868(1) || *iParam0 & (1 << 13) != 0))
				{
					func_201(iParam0, (1 << 25));
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & (1 << 10) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_869(iParam0))
			{
				iParam0->f_15 = func_585();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_585() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_870(iParam0);
}

bool func_567(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_871(bParam0, iParam1, bVar2))
			{
				return false;
			}
			if (func_872(bParam0, bVar2) <= func_873(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_568(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = bParam0;
	}
	if (func_874(iParam2, 1, 1, 1, 0))
	{
		func_145(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_594(iParam1, 1);
	func_830();
}

bool func_569(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_390(bParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_875(iParam1);
			if (func_876(iParam1, bParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_877(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_594(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_594(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_570(bool bParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85.0f;
	if (func_878(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_875(iParam2);
		if (func_876(iParam2, bParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_877(iParam2)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_571(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_871(bParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_877(iParam1)
		{
			fVar3 = func_875(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, fVar3, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, iVar1, -1.0f, fVar3, -1.0f, -1.0f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_572(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_573(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_879(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5.0f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)))
		{
			fVar2 = 3.0f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1.0f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_581(iParam2, bParam1))
			{
				func_594(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_574(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_880(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_581(iParam2, bParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_575(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) /*3*/ };
	iVar3 = func_881(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_882(bParam1, vVar0, vVar4))
					{
						func_594(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_882(bParam1, vVar0, vVar7))
					{
						func_594(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_576(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) /*3*/ };
	bVar12 = *iParam1 & (1 << 12) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_871(bParam0, iParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_883(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_884(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35.0f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
						vVar2[1 /*3*/] = { vVar9 /*3*/ };
						iParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_885(iParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = bParam0;
				return true;
			}
			else if (func_886(iParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = bParam0;
				return true;
			}
			else if (func_887(iParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_577(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*bParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) /*3*/ };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) /*3*/ };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return true;
	}
	return false;
}

bool func_578(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_579(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar0, true, true))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_888(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_889(iVar0, bParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_581(int iParam0, bool bParam1)
{
	if (func_890(iParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(bParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return true;
	}
	return false;
}

bool func_582(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, true, true))
		{
			return true;
		}
		if (func_366(bParam0, bParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_583()
{
}

bool func_584(int iParam0, bool bParam1)
{
	bool bVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) /*3*/ };
		if (func_891(bVar0, bParam1, vVar1))
		{
			iParam0->f_9 = func_585();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(bVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_438(bVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								iParam0->f_9 = func_585();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_585()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_586()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_585() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return false;
	}
	fVar0 = func_873(iParam0);
	if (iParam0->f_12 > func_892(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_893(bParam1);
	iVar1 = func_894(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_588(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & (1 << 19) != false;
	bVar2 = *iParam2 & 128 != false;
	return func_895(bParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_589(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (*iParam1 & (1 << 26) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & (1 << 25) != 0)
	{
		if (func_896(bParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, bVar4, -1.0f, -1.0f, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_897(iParam1, bParam0))
					{
						if (func_438(bVar4, Global_36, 1) < 7.0f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_590(bool bParam0, int iParam1)
{
	if (!func_898(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90.0f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_591(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_592(bool bParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*bParam0, PLAYER::PLAYER_ID(), false);
}

bool func_593(bool bParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_585();
	}
	else if (func_585() - iParam1->f_4) > func_899(iParam1)
	{
		return func_308(bParam0, iParam1, 0, -1082130432);
	}
	return false;
}

void func_594(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, (1 << 27));
	}
	else
	{
		func_201(iParam0, (1 << 27));
	}
}

bool func_595(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1935630.f_34[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1935630.f_34[0], true))
	{
		return true;
	}
	iVar0 = func_360(Global_1935630.f_34[0], 0);
	if (func_157(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_162(&iVar1, &iVar2, 0);
		}
		else
		{
			func_163(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_596(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*bParam0, Global_35, false, false))
	{
		return false;
	}
	if (!ENTITY::_0x3EC28DA1FFAC9DDD(*bParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!func_522(*bParam0, 75))
	{
		return true;
	}
	iVar0 = func_358(Global_35, 0, 1, 0);
	if (func_352(iVar0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(*bParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_358(Global_35, 1, 1, 0);
	if (func_352(iVar0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(*bParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_597()
{
	if (func_19(32))
	{
		return true;
	}
	if (func_9(1, 2))
	{
		return true;
	}
	if (!func_19((1 << 18)))
	{
		return true;
	}
	if (func_19((1 << 12)))
	{
		return true;
	}
	if (func_266(sLocal_1617.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_598(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_FLEEING(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_599(bool bParam0)
{
	if (((bParam0->f_16 == 3 || bParam0->f_16 == 1) || bParam0->f_16 == 6) || bParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_600(bool bParam0)
{
	switch (bParam0->f_16)
	{
		case 1:
		case 3:
			return 180.0f;
		case 5:
		case 6:
			return 120.0f;
		default:
			break;
	}
	return 90.0f;
}

bool func_601(bool bParam0, int iParam1, Vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;

	uVar10 = 30;
	Stack.Invoke(iParam1, &uVar10);
	iVar41 = func_717(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_900(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*bParam0 = iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(iVar0[iVar42], Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_900(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_603(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	iVar0 = func_901(iParam0, 4, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		return true;
	}
	iVar1 = func_901(iParam0, 5, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		return true;
	}
	return false;
}

int func_604(int iParam0)
{
	return iParam0;
}

void func_605(int iParam0)
{
	if (!func_902(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);
	}
	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = 0.0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1.0f;
}

bool func_606()
{
	return VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[11 /*446*/].f_25);
}

void func_607(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_157(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_518(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_267(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1914319.f_3[iParam0 /*446*/].f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);
	}
	func_903(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_313(iParam0, (1 << 29));
	iVar1 = func_904(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_905(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = 0.0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1914319.f_3[iParam0 /*446*/].f_440, false);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_906(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_907(iParam0, 0);
}

void func_608(int iParam0, bool bParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_909(iParam0, 1);
	}
	else
	{
		func_910(iParam0, 1);
	}
	func_912(func_911(iParam0), bParam1);
}

bool func_609(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40431 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40431 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40431.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40431.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_611(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_615(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_616()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_617(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_618(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_619(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_913(iParam0);
	}
	else
	{
		func_914(iParam0, iParam1);
	}
	func_915();
}

bool func_620(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_916(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_621(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	switch (func_318(iParam0))
	{
		case 1:
			switch (func_441(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_441(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_622(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_917(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_918(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_920(func_919(iParam0), 6);
}

void func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_917(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_918(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_921(func_919(iParam0), 6);
}

int func_624(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_625(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { sVar0 /*5*/ };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { sVar0 /*5*/ };
	Global_1898164.f_162--;
	func_922(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_626(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1);
}

bool func_627(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_628(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_628(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_629(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_923(iParam0, 32);
	func_924();
}

void func_630(int iParam0)
{
	int iVar0;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_631(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_633(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_633(iParam0);
	}
}

int func_631(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_632(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_633(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

void func_634(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (!func_140(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = Global_40.f_9096[iParam0 /*12*/].f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 += iVar0;
	}
}

void func_635(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 64);
	}
	else
	{
		func_201(iParam0, 64);
	}
}

void func_636(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, (1 << 20));
	}
	else
	{
		func_201(iParam0, (1 << 20));
	}
}

bool func_637()
{
	return (Global_1894899 & 1 != 0 && func_925() != -1);
}

bool func_638(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25.0f)
	{
		return false;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_639(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = bParam3;
	sVar0.f_5 = bParam4;
	sVar0.f_6 = iParam7;
	return func_926(bParam0, &sVar0);
}

float func_640(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0.0f;
	}
	return ANIMSCENE::GET_ANIM_SCENE_PHASE(*uParam0);
}

void func_641(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam2, 2);
}

void func_642(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_927(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, bParam2);
}

void func_643(var uParam0, char* sParam1)
{
	func_928(uParam0, sParam1, 1);
}

bool func_644(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam0, sParam1);
}

int func_645(bool bParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_929(bParam0, vVar0, iParam2);
}

char* func_646(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_647(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_163(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_930(bParam0, iVar0, iVar1, bParam2);
}

bool func_648(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_931(iParam1);
	if (iParam1->f_12 > (fVar0 + 5.0f))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		fVar1 = -1.0f;
		fVar2 = func_932(PED::_0x2BA9D7BF629F920C(bParam0), (fVar0 + 5.0f));
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, fVar2, -1.0f, fVar1) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5.0f)
				{
					if (func_933())
					{
						if (PED::IS_PED_FACING_PED(Global_35, bParam0, 110.0f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_649(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (func_934(bParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & (1 << 21) != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, bParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4.0f)
	{
		if (*iParam1 & (1 << 9) != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8.0f) && *iParam1 & (1 << 21) != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8.0f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_650(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_651(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_652(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_59(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_653(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_654(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_655(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_935(iParam0, iParam6);
	func_936(iParam0, iParam5);
	func_937(iParam0, iParam4);
	func_938(iParam0, iParam3);
	func_939(iParam0, iParam2);
	func_940(iParam0, iParam1);
}

bool func_657(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_373(iParam1) || !func_373(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_658(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= (1 << 24);
	if (iParam1 != 0)
	{
		iVar0 |= iParam1;
	}
	if (iParam2 != 0)
	{
		iVar0 -= iVar0 & iParam2;
	}
	return iVar0;
}

int func_659(bool bParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_941(&iVar0);
	if (func_376(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_942(bParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_376(iVar0, (1 << 27)))
	{
		func_943(iParam1, uParam3, bParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_944(558))
				{
					func_945(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_660(int iParam0)
{
	if (func_946(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_661(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_310(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_947(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_948(iParam0->f_6, iParam0->f_5, 0);
			}
			func_810(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_949(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_662(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_950(iParam0, 13))
	{
		func_951(iParam0, 0);
	}
	else
	{
		func_952(iParam0, 0);
	}
	if (func_310(iParam0->f_6))
	{
		if (bParam2)
		{
			func_311(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_663(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_950(iParam0, 4))
		{
			func_311(&(iParam0->f_6), 1, 1);
			func_951(iParam0, 4);
		}
	}
	else if (func_950(iParam0, 4))
	{
		func_952(iParam0, 4);
		func_951(iParam0, 14);
	}
}

void func_664(bool bParam0, int iParam1)
{
	bParam0->f_14 = iParam1;
}

void func_665(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_951(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

char* func_666(bool bParam0)
{
	char cVar0[32];
	char cVar4[32];

	switch (bParam0->f_15)
	{
		case 0:
			if (func_134(bParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_134(bParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (bParam0->f_16)
			{
				case 0:
					strcpy_s(&cVar4, 32, "INSULT_MALE_CONV");
					strcat_s(&cVar4, 32, "_PART");
					MISC::_INT_TO_STRING(1, "%d", &cVar0);
					strcat_s(&cVar4, 32, &cVar0);
					return func_673(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_667(bool bParam0)
{
	switch (bParam0->f_15)
	{
		case 0:
			if (func_134(bParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_134(bParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

bool func_668(var uParam0)
{
	return func_953(*uParam0, 1);
}

bool func_669(var uParam0)
{
	return func_953(*uParam0, 2);
}

float func_670(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_671(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_672(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_954(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

char* func_673(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_674(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_675(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_955(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_676(bool bParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_956(bParam0);
		func_957(iParam1, uParam2);
	}
	func_245(*bParam0, 1, bParam4);
}

void func_677(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (iLocal_599[iParam4] > 3 && iLocal_599[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*bParam3) && !TASK::GET_IS_TASK_ACTIVE(*bParam3, 3)))
		{
			iVar0 = -1;
			if (!func_134(&sLocal_433, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam2, 3))
				{
					sLocal_433.f_0 = func_63(func_335(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam3, 3))
				{
					sLocal_433.f_0 = *bParam3;
					iVar0 = 1;
				}
				if (func_958(func_63(func_335(9, iVar0, *iParam0)), Global_35, 0, 5.0f, 0))
				{
					func_301(&sLocal_433, &sLocal_1617, (1 << 11), 55626, 0, 0);
				}
			}
			func_336(&(sLocal_492[(9 + iParam4) /*7*/]), *bParam2, "PED1");
			func_689(9, 0, *iParam0, 0 == iVar0);
			func_336(&(sLocal_492[(9 + iParam4) /*7*/]), *bParam3, "PED2");
			func_689(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8, true);
				}
				else
				{
					func_336(&(sLocal_492[(9 + iParam4) /*7*/]), sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(sLocal_614.f_690[(15 + *iParam1) /*12*/].f_8);
				}
			}
			func_217(&(sLocal_492[(9 + iParam4) /*7*/]));
			iLocal_599[iParam4] = 10;
		}
	}
}

void func_678(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!func_927(&(sLocal_492[(9 + iParam0) /*7*/]), func_646(iVar1, iVar2)) && !func_959(&(sLocal_492[(9 + iParam0) /*7*/]), func_646(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_728(&(sLocal_492[(9 + iParam0) /*7*/]), func_646(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_927(&(sLocal_492[(9 + iParam0) /*7*/]), func_646(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_960(&(sLocal_492[(9 + iParam0) /*7*/]), func_646(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_679(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	Vector3 vVar2[24];

	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		return;
	}
	if (func_334(&(sLocal_492[(9 + iParam2) /*7*/])))
	{
		func_961(bParam0, bParam1, iParam2);
		if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam0;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*bParam0, 330, true);
		}
		else if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam0;
		}
		else if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam1;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*bParam1, 330, true);
		}
		else if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam1;
		}
		if (sLocal_433.f_0 == *bParam0 || sLocal_433.f_0 == *bParam1)
		{
			func_348(iParam2);
			iLocal_599[iParam2] = 8;
			return;
		}
		if (func_70(func_962(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_492[(9 + iParam2) /*7*/].f_1)) && func_763(&(sLocal_492[(9 + iParam2) /*7*/])))
			{
				func_764(&(sLocal_492[(9 + iParam2) /*7*/]), 1, 1);
				strcpy_s(&(sLocal_492[(9 + iParam2) /*7*/].f_1), 24, "");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_339(func_962(iParam2));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_71(func_962(iParam2));
			}
			if (func_70(func_962(iParam2)))
			{
				cVar2 = { func_963(bParam0, iLocal_489[iParam2], bVar1) /*3*/ };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					func_964(&(sLocal_492[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

int func_680(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_602(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_335(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_681(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1420.942f, -208.586f, 101.032f };
				case 1:
					return { -1438.671f, -232.235f, 100.8f };
				case 2:
					return { -1341.562f, -241.489f, 102.385f };
				case 3:
					return { -1357.351f, -210.654f, 100.106f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { -1471.529f, -213.686f, 106.224f };
				case 1:
					return { -1458.017f, -203.588f, 104.849f };
				case 2:
					return { -1341.562f, -241.489f, 102.385f };
				case 3:
					return { -1357.351f, -210.654f, 100.106f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1471.529f, -213.686f, 106.224f };
				case 1:
					return { -1458.017f, -203.588f, 104.849f };
				case 2:
					return { -1341.562f, -241.489f, 102.385f };
				case 3:
					return { -1357.351f, -210.654f, 100.106f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_682(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { 1.325f, 0.462f, 0.828f };
				case 1:
					return { -3.665f, -3.93f, -126.538f };
				case 2:
					return { 0.108f, 4.907f, 65.588f };
				case 3:
					return { -1.141f, -1.304f, 121.306f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { 2.356f, -4.206f, -176.376f };
				case 1:
					return { 0.695f, 11.828f, 47.142f };
				case 2:
					return { 0.108f, 4.907f, 65.588f };
				case 3:
					return { -1.141f, -1.304f, 121.306f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { 2.356f, -4.206f, -176.376f };
				case 1:
					return { 0.695f, 11.828f, 47.142f };
				case 2:
					return { 0.108f, 4.907f, 65.588f };
				case 3:
					return { -1.141f, -1.304f, 121.306f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_683(var uParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam4, 2);
}

void func_684(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, bParam1, 0);
}

void func_685(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_686(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam0);
}

bool func_687(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_438(bParam0, Global_36, 1);
	}
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(bParam0))
		{
			if (fParam4 > 0.0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_688(bool bParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_965(bParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_335(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_77(iVar0, 1);
		func_966(1, &sLocal_614);
	}
}

void func_690()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_117(func_692(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	bVar2 = func_63(iVar1);
	if (func_967(&bVar2, iVar1))
	{
		func_77(iVar1, 1);
		func_474(func_691(iVar0), 0);
		func_694(func_692(iVar0));
	}
}

int func_691(int iParam0)
{
	if ((!func_19(64) && func_5(sLocal_1617.f_136, (1 << 29))) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19((1 << 18)))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_693()
{
	return joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW");
}

void func_694(int iParam0)
{
	iLocal_102 -= iLocal_102 & iParam0;
}

void func_695()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_691(iVar0);
		if (func_429(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_968(iVar0);
		}
		iVar0++;
	}
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (1 << 24);
		case 1:
			return (1 << 25);
		case 2:
			return (1 << 26);
		case 3:
			return (1 << 27);
		default:
			break;
	}
	return 0;
}

void func_697(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = (810 + iParam0);
	bVar1 = func_63(iVar0);
	iVar2 = func_691(iParam0);
	if (func_969(iVar2, &bVar1))
	{
		if (func_826(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar2]) == 4)
		{
		}
		else
		{
			func_468(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iVar2]))
	{
		func_468(iVar2);
		return;
	}
	if (func_970(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iVar2], 6);
		if (!func_429(iVar2))
		{
			func_827(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_116(bVar1, Global_35, "LOG_TIMBER", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_694(func_692(iParam0));
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(348490638, func_437(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_465(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_698(bool bParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(*bParam0, "interactNeg"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(*bParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 330, true);
	}
}

void func_699(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_157(iVar0))
	{
		return;
	}
	bVar1 = func_63(iVar0);
	if (ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		return;
	}
	iVar2 = func_691(iParam0);
	if (func_430(iVar2))
	{
		return;
	}
	if (func_429(iVar2))
	{
		return;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_478[iVar2]))
	{
		return;
	}
	if (!func_131(bVar1, joaat("SCRIPT_TASK_ANY")))
	{
		TASK::TASK_USE_SCENARIO_POINT(bVar1, iLocal_478[iVar2], 0, -1, true, false, 0, false, -1.0f, false);
	}
}

void func_700(bool bParam0, int iParam1)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (!func_117(func_971(iParam1)))
	{
		if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()) || PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_35(func_971(iParam1));
		}
	}
	else if (!(PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()) || PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		fVar0 = func_383(&(vLocal_570[0 /*3*/]));
		if ((60.0f - fVar0) < 15.0f)
		{
			if (fVar0 >= 60.0f)
			{
				fVar0 = (60.0f - 15.0f);
			}
			else
			{
				fVar0 -= 15.0f;
			}
			func_223(&(vLocal_570[0 /*3*/]), fVar0);
		}
		func_694(func_971(iParam1));
	}
}

bool func_701(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0) && !DECORATOR::DECOR_EXIST_ON(*bParam0, "bChopDown"))
	{
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(*bParam0) != func_693())
		{
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(*bParam0, 0))
		{
			return false;
		}
		bVar0 = func_19((1 << 19));
		if (iParam3 == func_6() && func_5(sLocal_1617.f_136, (1 << 30)))
		{
			func_13((1 << 19), bVar0);
			func_694(256);
			return true;
		}
		if (func_19(64) && !func_430(0))
		{
			return false;
		}
		if (func_117(func_971(iParam3)))
		{
			return false;
		}
		if (func_668(&(vLocal_570[0 /*3*/])))
		{
			fVar1 = func_383(&(vLocal_570[0 /*3*/]));
			if (func_117(256))
			{
				fVar2 = 90.0f;
			}
			else if (func_282(*bParam0, 1, 1) < 5.0f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_972())
			{
				fVar2 = 15.0f;
			}
			else
			{
				fVar2 = 60.0f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (func_19(32))
		{
			return false;
		}
		else if (func_19(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !func_51((1 << 12))) && !func_19((1 << 18)))
		{
			return false;
		}
		if (func_5(sLocal_1617.f_136, (1 << 29)) && iParam3 == func_6())
		{
			return false;
		}
		if (func_255(*bParam0, uParam1, iParam2, &bVar0, 1.0f, 45.0f, 0.0f, 0, 25.0f, 1))
		{
			func_13((1 << 19), bVar0);
			func_694(256);
			return true;
		}
		func_13((1 << 19), bVar0);
	}
	return false;
}

void func_702(bool bParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;

	if (func_254(*bParam0, 0, 1) && !DECORATOR::DECOR_EXIST_ON(*bParam0, "bChopDown"))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(1515458263, *bParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_116(*bParam0, Global_35, func_973(), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		iVar0 = func_691(iParam1);
		func_974(iParam1);
		iLocal_75[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_436(iVar0), func_975(iVar0), 5.0f, 30.0f, 5.0f, "volTreeFall");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[2], 534496, 0, 0, -1, -1, 2);
		func_976(iVar0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75[2], 0, 0, 0, -1, -1, 2);
		DECORATOR::DECOR_SET_BOOL(*bParam0, "bChopDown", true);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 389, true);
		vVar1 = { ENTITY::GET_ENTITY_COORDS(*bParam0, true, false) /*3*/ };
	}
}

void func_703()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_977(iVar1);
		iVar0++;
	}
}

void func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35((1 << 15));
			return;
		case 1:
			func_35((1 << 16));
			return;
		case 2:
			func_35((1 << 17));
			return;
		case 3:
			func_35((1 << 18));
			return;
		case 4:
			func_35((1 << 19));
			return;
	}
}

void func_705()
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_430(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_35((1 << 9));
	}
}

void func_706(int iParam0, bool bParam1)
{
	func_762(iParam0, 0, bParam1);
	func_762(iParam0, 1, bParam1);
	func_762(iParam0, 2, bParam1);
}

bool func_707()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_708()
{
	return Global_1935689.f_1;
}

bool func_709()
{
	return Global_1357517;
}

char* func_710()
{
	return "INSULT_RESPONSE";
}

char* func_711()
{
	char cVar0[32];
	char cVar4[32];

	strcpy_s(&cVar4, 32, "INSULT_MALE_CONV");
	strcat_s(&cVar4, 32, "_PART");
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	strcat_s(&cVar4, 32, &cVar0);
	return func_673(cVar4);
}

void func_712()
{
	if (ENTITY::IS_ENTITY_DEAD(sLocal_614.f_690[12 /*12*/].f_8))
	{
		return;
	}
	if (!OBJECT::CREATE_OBJECT_SKELETON(sLocal_614.f_690[13 /*12*/].f_8))
	{
		return;
	}
	if (!func_70((1 << 13)))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, 1656474583) && !ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, -1064143891))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(sLocal_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
			{
				ENTITY::PLAY_ENTITY_ANIM(sLocal_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 8.0f, false, false, false, 0.0f, 1);
			}
			func_71((1 << 13));
			TASK::SET_ANIM_RATE(sLocal_614.f_690[12 /*12*/].f_8, 1.0f, 0, false);
		}
	}
	else if (!ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, 1656474583) || ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, -1064143891))
	{
		func_339((1 << 13));
		TASK::SET_ANIM_RATE(sLocal_614.f_690[12 /*12*/].f_8, 0.0f, 0, false);
	}
}

void func_713(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

bool func_714(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(*uParam0, sParam1);
	}
	return false;
}

void func_715(var uParam0, char* sParam1)
{
	func_928(uParam0, sParam1, 0);
}

void func_716(bool bParam0, bool bParam1)
{
	func_978(bParam0, 0);
	func_978(bParam1, 1);
}

int func_717(int iParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0.0f)
	{
		iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_285(iParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_111(iVar0);
	return iVar1;
}

bool func_718(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;

	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *bParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (func_979(uParam0, (*bParam1)[uParam0->f_25], uParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN((*bParam1)[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED((*bParam1)[uParam0->f_25])) && PED::CAN_PED_SEE_ENTITY(Global_35, (*bParam1)[uParam0->f_25], false, false) == 1)
					{
						uParam0->f_31 = (*bParam1)[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1216; // curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && func_958(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_980(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) /*3*/ };
							if (!uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_376(uParam0->f_34, 8))
								{
									TASK::REACT_LOOK_AT(uParam0->f_31, Global_35, 2, 1, 100.0f, 1, 0, 0, 0);
									func_145(&(uParam0->f_34), 16);
								}
								else if (!func_376(uParam0->f_34, 4) && !PED::IS_PED_SITTING(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1.0f, -1.0f, -1.0f);
										TASK::TASK_ACHIEVE_HEADING(0, 90.0f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 8.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
									{
										uParam0->f_30 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_31, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (func_438(uParam0->f_31, Global_36, 0) > 12.0f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0.0f, 0.0f, 0.0f, 1.0f, 1000, 5.0f, true, true, false, false, true, false);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1.0f, -1.0f, -1.0f);
										if (bParam3)
										{
											if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_30))
											{
												TASK::TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, true, false, 0, false, -1.0f, false);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30.0f, 0, false, false, false, false);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1.0f, -1.0f, -1.0f);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30.0f, 0, false, false, false, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							func_980(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*bParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1216; // curOff = 886
						if (func_376(uParam0->f_34, 1))
						{
							func_110(0);
						}
						func_759(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_981() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && func_256(0, 1, uParam0->f_31, 1))
						{
							if (func_376(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_116(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return true;
						}
						Jump @1216; // curOff = 1079
						if ((func_376(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::REACT_LOOK_AT_END(uParam0->f_31, 1, false);
							func_201(&(uParam0->f_34), 16);
						}
						if (func_393(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_360(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_266(iVar4, 0))
							{
								func_267(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_719()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			break;
	}
	return false;
}

Vector3 func_720()
{
	return { -1402.82f, -270.8668f, 98.5585f };
}

void func_721()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!func_51((1 << 23)) && VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_GET_ENTITIES_IN_VOLUME(iLocal_75[4], iVar0, 2);
		if (iVar1 > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_GET_ENTITIES_IN_VOLUME(iLocal_75[4], iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			if (func_503(bVar3))
			{
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return;
			}
			iVar2++;
		}
		func_58((1 << 23));
		func_174();
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
}

void func_722()
{
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_614.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(sLocal_614.f_690[5 /*12*/].f_8))
		{
			if (!func_51((1 << 16)))
			{
				ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (func_51((1 << 16)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(sLocal_614.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(sLocal_614.f_690[5 /*12*/].f_8);
		}
	}
}

void func_723()
{
	if (!func_51((1 << 24)))
	{
		if (func_982())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_462))
			{
				func_983(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			func_984(iLocal_2016, 0);
			func_58((1 << 24));
		}
	}
	else if (!func_982())
	{
		func_984(iLocal_2016, 1);
		func_203();
		func_50((1 << 24));
	}
}

void func_724()
{
	if (iLocal_1920 >= 2 && (iLocal_1920 < 5 || func_19((1 << 9))))
	{
		if (!func_19((1 << 9)))
		{
			func_985();
		}
		if (func_215(Global_35, iLocal_75[4], 1, 0))
		{
			func_986(0);
			if (!func_70((1 << 9)))
			{
				func_988((1 << 9), func_987(Global_35, &bLocal_606, func_65(), iLocal_75[4], 1097859072, 2, 1, 129, 0, 0, 1071644672));
				if (ENTITY::DOES_ENTITY_EXIST(bLocal_606))
				{
					PED::SET_PED_CONFIG_FLAG(bLocal_606, 136, true);
				}
			}
		}
		else
		{
			func_108(0);
		}
	}
}

void func_725(bool bParam0, bool bParam1, bool bParam2, var uParam3, var uParam4)
{
	var uVar0[5];
	int iVar6;

	uVar0[iVar6] = *bParam0;
	iVar6++;
	uVar0[iVar6] = *bParam1;
	iVar6++;
	uVar0[iVar6] = *bParam2;
	iVar6++;
	uVar0[iVar6] = *uParam3;
	iVar6++;
	uVar0[iVar6] = *uParam4;
	iVar6++;
	func_989(&uVar0, 0, (iVar6 - 1), 1, 1, 1, 1);
}

void func_726(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_727(bool bParam0, bool bParam1)
{
	func_990(&bParam0, !bParam1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bParam0, bParam1);
	AUDIO::STOP_PED_SPEAKING(bParam0, bParam1);
}

bool func_728(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
}

int func_729(char[4] cParam0, char* sParam1, int iParam2)
{
	Vector3 vVar0[24];
	int iVar3;

	strcpy_s(&cVar0, 24, sParam1);
	if (iParam2 > 0)
	{
		iVar3 = 1;
	}
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
	{
		return 1;
	}
	else if (func_672(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

char* func_730()
{
	return "desk_loop_book";
}

char* func_731()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

bool func_732(bool bParam0, int iParam1)
{
	if (!func_51((1 << 23)))
	{
		return false;
	}
	if (func_19((1 << 12)))
	{
		return false;
	}
	if (!func_254(*bParam0, 0, 1))
	{
		return false;
	}
	if (!func_334(&(sLocal_492[2 /*7*/])))
	{
		return false;
	}
	if (func_521(func_437(iParam1), 1) > 63.0f)
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		if (func_468(iParam1))
		{
			return true;
		}
	}
	else if (func_826(iParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_733(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	func_991(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

int func_734(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;

	if (Global_1935630.f_12)
	{
		return 1;
	}
	if (!PED::_IS_PED_DRUNK(Global_35))
	{
		return 1;
	}
	fVar0 = func_992();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_993(0);
		}
		else
		{
			func_993(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_993(0);
	}
	else
	{
		func_993(1);
	}
	return 0;
}

void func_735(var uParam0)
{
	if (!func_668(uParam0))
	{
	}
	if (func_669(uParam0))
	{
		uParam0->f_1 = (func_479() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_481(uParam0, 2);
	}
}

void func_736(var uParam0)
{
	if (!func_668(uParam0))
	{
	}
	if (!func_669(uParam0))
	{
		uParam0->f_2 = (func_479() - uParam0->f_1);
		func_480(uParam0, 2);
	}
}

void func_737()
{
	func_42(sLocal_1617.f_136, 64);
	func_10(sLocal_1617.f_136, (1 << 9));
}

bool func_738(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[iParam0]))
	{
		return VOLUME::IS_POINT_IN_VOLUME(iLocal_75[iParam0], Global_36);
	}
	return false;
}

void func_739(var uParam0, var uParam1)
{
	if (func_215(Global_35, iLocal_75[17], 1, 0))
	{
		if (func_310(*uParam0) && func_994(*uParam0, 0))
		{
			func_810(*uParam0, 0, 1);
		}
		if (func_310(*uParam1) && func_994(*uParam1, 0))
		{
			func_810(*uParam1, 0, 1);
		}
	}
	else if (Global_36.f_1 < func_744())
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_2016))
		{
			func_995(func_740(), &iLocal_2016, joaat("BLIP_STYLE_NEUTRAL_OBJECTIVE"), 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_310(*uParam0) && !func_994(*uParam0, 0))
		{
			func_810(*uParam0, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2016, func_740());
		}
		if (func_310(*uParam1) && func_994(*uParam1, 0))
		{
			func_810(*uParam1, 0, 1);
		}
	}
	else
	{
		if (func_310(*uParam0) && func_994(*uParam0, 0))
		{
			func_810(*uParam0, 0, 1);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_2016))
		{
			func_995(func_742(), &iLocal_2016, joaat("BLIP_STYLE_NEUTRAL_OBJECTIVE"), 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_310(*uParam1) && !func_994(*uParam1, 0))
		{
			func_810(*uParam1, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2016, func_742());
		}
	}
}

Vector3 func_740()
{
	return { -1391.3f, -271.25f, 98.57f };
}

bool func_741(var uParam0, char* sParam1, Vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_310(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_996(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, (1 << 30), 0, iParam18, 0, 0);
			func_997(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_998(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		else
		{
			if (func_243(vParam2))
			{
				return false;
			}
			*uParam0 = func_999(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		if (fParam8 != 0.0f)
		{
			func_947(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1000(1))
			{
				func_810(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_1001(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_994(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_810(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_810(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0.0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1000(1))
		{
			func_810(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_310(*uParam0))
			{
				func_311(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1002(*uParam0, 1)) || (bParam17 && func_753(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0.0f)
			{
				func_766(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0.0f)
			{
				func_1003(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_311(uParam0, 1, 1);
		return true;
	}
	return false;
}

Vector3 func_742()
{
	return { -1392.7f, -269.93f, 98.65f };
}

void func_743()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		bVar1 = func_63(iLocal_2130[iVar0]);
		PED::_PED_CLEAR_LOCO_MOTION(bVar1);
		iVar0++;
	}
}

float func_744()
{
	return -270.6f;
}

void func_745(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_268(&(uParam0->f_5));
	uParam0->f_8 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_11 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_14 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000.0f;
	uParam0->f_20 = 10.0f;
	uParam0->f_21 = 1.0f;
	uParam0->f_22 = 0.0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	strcpy_s(&(uParam0->f_30), 24, "");
	strcpy_s(&(uParam0->f_26), 32, "");
}

Vector3 func_746(var uParam0, char* sParam1, char* sParam2)
{
	Vector3 vVar0;
	bool bVar12;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_747(var uParam0, char* sParam1, char* sParam2)
{
	Vector3 vVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 40000.0f;
	}
	vVar0 = { func_1004(uParam0, sParam1, sParam2) /*3*/ };
	if (!func_243(vVar0))
	{
		return vVar0.z;
	}
	return 40000.0f;
}

bool func_748(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_376(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_48(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (func_376(uParam0->f_23, (1 << 11)))
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!func_376(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_376(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_382(uParam0->f_1))
					{
						func_1005(uParam0->f_1);
						iVar0 = func_929(uParam0->f_1, uParam0->f_8, 1.0f);
						switch (iVar0)
						{
							case 3:
								iVar1 = (1 << 17);
								break;
							case 2:
								iVar1 = (1 << 18);
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5.0f, -1, false);
						iVar3 = func_929(uParam0->f_1, uParam0->f_8, 1.0f);
						switch (iVar3)
						{
							case 3:
								iVar4 = (1 << 17);
								break;
							case 2:
								iVar4 = (1 << 18);
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_145(&(uParam0->f_23), 2);
					}
				}
				if (func_243(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 /*3*/ };
				}
				func_1006(uParam0, 1, iParam1);
			}
			else
			{
				func_1006(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1007(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_1008(uParam0, iParam1))
				{
					func_1009();
				}
				func_1006(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1008(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_376(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_376(uParam0->f_23, (1 << 9)), 0, 0);
				}
				func_1006(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1010(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
				}
				if (func_376(uParam0->f_23, (1 << 12)) && !PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
					bVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (func_366(bVar6, uParam0->f_1, 1, 1) < 5.0f)
					{
						iVar5 = func_1011(bVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_376(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_1006(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1012(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_376(uParam0->f_23, (1 << 13)))
				{
					if (func_376(uParam0->f_23, (1 << 10)))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, false, iVar7, 20000, -1.0f);
				}
				else
				{
					if (!func_243(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_376(uParam0->f_23, (1 << 10)))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_243(uParam0->f_11))
					{
						if (func_376(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_376(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_376(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_1013(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_1006(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_376(uParam0->f_23, (1 << 13)))
			{
				if (ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_376(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_376(uParam0->f_23, 128) && func_224(&(uParam0->f_5), 15.0f))
			{
				iVar10 = 1;
			}
			if (!func_376(uParam0->f_23, (1 << 13)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_243(uParam0->f_11) || !func_131(uParam0->f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1014(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_376(uParam0->f_23, 8)) && (!func_376(uParam0->f_23, 64) || MISC::ABSF(func_1015(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if (iVar11 & iVar12 | iVar10)
			{
				if (func_376(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_268(&(uParam0->f_5));
				func_1006(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_749(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1016(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1017(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_750(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&sVar0, &sVar13, bParam5);
	return iVar15;
}

bool func_751(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return HUD::_UI_PROMPT_HAS_MASH_MODE_FAILED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_752(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_753(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_754(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_755(int iParam0)
{
	bool bVar0;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(iLocal_2130[*iParam0])))
	{
		bVar0 = func_63(iLocal_2130[*iParam0]);
	}
	else
	{
		return;
	}
	PED::_PED_CLEAR_LOCO_MOTION(bVar0);
	func_1018(&bVar0, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(bVar0))
	{
		TASK::REACT_LOOK_AT_END(bVar0, 1, false);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(bVar0, true, false);
		if (func_1019(iLocal_2130[*iParam0]))
		{
			func_977(iLocal_2130[*iParam0]);
		}
		else
		{
			func_267(iLocal_2130[*iParam0], 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(bVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(bVar0, 130, false);
		}
	}
	func_245(bVar0, 1, 1);
}

void func_756(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, func_660(7));
	sLocal_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_952(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, !func_51((1 << 30)));
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58((1 << 28));
	}
	else if (iParam0 == 1)
	{
		func_71((1 << 19));
	}
}

void func_757(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_58((1 << 31));
		func_54((1 << 27), bParam1);
	}
	else
	{
		func_50((1 << 31));
		func_54((1 << 27), bParam1);
	}
}

void func_758(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, func_660(7));
	sLocal_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_952(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 0);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58((1 << 28));
	}
	else if (iParam0 == 1)
	{
		func_71((1 << 19));
	}
}

void func_759(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> /*112*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	sVar0.f_4 = -1;
	sVar0.f_8 = 2;
	sVar0.f_9 = 1;
	sVar0.f_10 = 1;
	sVar0.f_11 = 1;
	sVar0.f_13 = 1;
	sVar0.f_14 = 2;
	sVar0.f_15 = 2;
	sVar0.f_16 = 3;
	sVar0.f_19 = 3;
	sVar0.f_20 = 1;
	sVar0.f_21 = 3;
	sVar0.f_22 = 3;
	sVar0.f_4 = 21030;
	sVar0.f_3 = iParam2;
	sVar0.f_8 = 4;
	if (bParam7)
	{
		sVar0.f_17 = 4;
		sVar0.f_18 = 1;
	}
	else
	{
		sVar0.f_17 = 0;
		sVar0.f_18 = 0;
	}
	sVar0.f_19 = 4;
	sVar0.f_20 = 2;
	sVar0.f_21 = 4;
	sVar0.f_22 = 3;
	sVar0 = { iParam4, iParam5, iParam6 /*3*/ };
	sVar0.f_12 = 0;
	sVar0.f_9 = 1;
	sVar0.f_10 = 1;
	sVar0.f_11 = 1;
	if (bParam3)
	{
		func_487(&(sVar0.f_5), 1);
	}
	sVar0.f_13 = 0;
	sVar0.f_7 = iParam1;
	func_1022(&(sVar0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*bParam0, &sVar0);
	}
}

void func_760(bool bParam0)
{
	if (!func_1023(&(sLocal_275[1 /*52*/][1 /*17*/]), 0, 0))
	{
		if ((func_256(0, 1, *bParam0, 1) && !func_389("LCMPF_IG_TFRSH")) && !func_389("LCMPF_IG_TFRSN"))
		{
			func_1024(1, 0);
		}
	}
	else if (func_1023(&(sLocal_275[1 /*52*/][0 /*17*/]), 0, 0))
	{
		if (!func_215(Global_35, iLocal_75[19], 1, 0))
		{
			func_762(1, 0, 0);
		}
	}
	else if (func_215(Global_35, iLocal_75[19], 1, 1))
	{
		func_762(1, 0, 1);
	}
}

void func_761(var uParam0, var uParam1, bool bParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;

	vVar0 = { func_746(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_L") /*3*/ };
	fVar9 = func_747(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_L");
	vVar3 = { func_746(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_R") /*3*/ };
	fVar10 = func_747(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_R");
	vVar6 = { func_746(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_N") /*3*/ };
	fVar11 = func_747(&(sLocal_492[2 /*7*/]), "player", "PB_HANDOVER_N");
	fVar12 = func_521(vVar0, 1);
	fVar13 = func_521(vVar3, 1);
	fVar14 = func_521(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 /*3*/ };
		*uParam1 = fVar10;
		func_964(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 /*3*/ };
		*uParam1 = fVar9;
		func_964(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 /*3*/ };
		*uParam1 = fVar11;
		func_964(&(sLocal_492[2 /*7*/]), "PB_HANDOVER_N");
	}
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_662(&(sLocal_275[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

bool func_763(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_764(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (func_927(uParam0, &(uParam0->f_1)))
	{
		func_642(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_643(uParam0, &(uParam0->f_4));
		}
	}
}

void func_765(var uParam0)
{
	func_715(uParam0, &(uParam0->f_4));
}

void func_766(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1025(iParam0);
	if (bParam3)
	{
		func_1026(iParam0, sParam1, iParam2);
	}
}

bool func_767(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_1027(iParam0);
		return func_1028(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

char[] func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_2249)
			{
				case 0:
					return "LCMPF_IG_TFR1P";
				case 1:
					return "LCMPF_IG_TFR2P";
				default:
					break;
			}
			break;
		case 1:
			switch (iLocal_2249)
			{
				case 0:
					return "LCMPF_IG_TFR1N";
				case 1:
					return "LCMPF_IG_TFR2N";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_769()
{
	return { -1397.791f, -214.2272f, 101.3653f };
}

Vector3 func_770()
{
	return { -1406.475f, -213.2691f, 101.3333f };
}

bool func_771(float fParam0)
{
	return !func_256(fParam0, 1, 0, 0);
}

void func_772(char* sParam0, bool bParam1)
{
	strcpy_s(&cLocal_462, 32, sParam0);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_462))
		{
			func_983(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_773(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	bVar0 = true;
	if (bParam1 && iLocal_98 == 1)
	{
		bVar0 = false;
	}
	if (bVar0 && func_215(*bParam0, iLocal_75[0], 1, 0))
	{
		if (func_215(Global_35, iLocal_75[0], 1, 0))
		{
			return true;
		}
	}
	else if (func_366(Global_35, *bParam0, 1, 1) < func_1029(bParam1, 18.0f, 12.5f) && (!bParam2 || PED::IS_PED_FACING_PED(*bParam0, Global_35, 165.0f)))
	{
		return true;
	}
	return false;
}

int func_774(var uParam0)
{
	if (!func_668(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_669(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_585() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTBUY");
	sLocal_275[0 /*52*/][0 /*17*/].f_14 = func_778();
	func_951(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_947(sLocal_275[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTBUY", sLocal_275[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	func_58((1 << 28));
	func_339((1 << 29));
}

void func_776(int iParam0)
{
	if (!func_140(iParam0->f_136))
	{
		return;
	}
	func_42(iParam0->f_136, 128);
	func_10(iParam0->f_136, (1 << 16));
	func_43(iParam0, 128);
	func_1030(30, 0, 1);
}

Vector3 func_777()
{
	return { -1398.998f, -208.266f, 101.8822f };
}

int func_778()
{
	int iVar0;

	if (func_9(1, 2) && iLocal_98 > 1)
	{
		iVar0 = func_1031(joaat("EA_APPLESEED_WAGON_DEFAULT_COST"));
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = func_1031(joaat("EA_APPLESEED_SUPPLIES_INITIAL_VALUE"));
	}
	return iVar0;
}

void func_779(bool bParam0)
{
	var uVar0[1];

	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(*bParam0, &uVar0);
}

bool func_780(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_668(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_774(&(uParam1->f_133)) > iParam2)
	{
		func_268(&(uParam1->f_133));
		if (func_266(iParam0, 0))
		{
			func_77(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_781()
{
	int iVar0;
	Vector3 vVar1[24];

	iVar0 = 0;
	while (iVar0 < 14)
	{
		cVar1 = { func_1032(iVar0) /*3*/ };
		func_1033(&cVar1, 0);
		iVar0++;
	}
}

int func_782()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR");
}

int func_783()
{
	return joaat("U_M_M_BIVFOREMAN_01");
}

int func_784()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A");
}

Vector3 func_785()
{
	return { -1399.903f, -211.2283f, 102.3423f };
}

int func_786()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED");
}

int func_787()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B");
}

Vector3 func_788()
{
	return { -1402.626f, -207.791f, 101.897f };
}

char* func_789()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_790()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

char* func_791(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

Vector3 func_792(bool bParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_793()
{
	switch (iLocal_597)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
			return joaat("EAFOR_GOOD_TO_SEE");
		case 1:
			return joaat("EAFOR_MORE_TIME");
	}
	return 0;
}

char* func_794()
{
	switch (iLocal_597)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

bool func_795(bool bParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_1034(*bParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, iParam6)))
	{
		return true;
	}
	return false;
}

char* func_796(bool bParam0)
{
	if (iLocal_597 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iLocal_597 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_797(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	if (func_51((1 << 31)))
	{
		return false;
	}
	if (func_839(1))
	{
		return false;
	}
	if (!func_256(-3.5f, 1, *bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_798(bool bParam0)
{
	int iVar0;
	Vector3 vVar1;

	switch (iLocal_597)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
		case 1:
			vVar1 = { func_733(Global_35, 2.0f) /*3*/ };
			iVar0 = func_929(*bParam0, vVar1, 1060437492);
			switch (iVar0)
			{
				case 0:
					return joaat("EAFOR_A_F");
				case 2:
					return joaat("EAFOR_A_R_ANGRY");
				case 3:
					return joaat("EAFOR_A_L_ANGRY");
			}
			break;
	}
	return 0;
}

void func_799(bool bParam0, int iParam1, int iParam2)
{
	struct<23> /*184*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	sVar0.f_4 = -1;
	sVar0.f_8 = 2;
	sVar0.f_9 = 1;
	sVar0.f_10 = 1;
	sVar0.f_11 = 1;
	sVar0.f_13 = 1;
	sVar0.f_14 = 2;
	sVar0.f_15 = 2;
	sVar0.f_16 = 3;
	sVar0.f_19 = 3;
	sVar0.f_20 = 1;
	sVar0.f_21 = 3;
	sVar0.f_22 = 3;
	sVar0.f_4 = 21030;
	sVar0.f_3 = iParam2;
	sVar0.f_8 = 4;
	sVar0.f_17 = 4;
	sVar0.f_18 = 4;
	sVar0.f_19 = 4;
	sVar0.f_20 = 4;
	sVar0.f_21 = 4;
	sVar0.f_22 = 4;
	func_487(&(sVar0.f_5), 1);
	sVar0.f_13 = 3;
	sVar0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*bParam0, &sVar0);
	}
}

void func_800(bool bParam0)
{
	int iVar0;

	if (func_51((1 << 16)))
	{
		if (!func_266(sLocal_1617.f_138, 0))
		{
			func_62(sLocal_1617.f_138, 1, 1);
		}
		if (!func_70((1 << 21)))
		{
			func_71((1 << 21));
			PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(*bParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_71((1 << 20));
			}
		}
		if (func_668(&(vLocal_570[3 /*3*/])))
		{
			func_268(&(vLocal_570[3 /*3*/]));
		}
		if (func_256(-3.5f, 1, 0, 0) && !func_668(&(vLocal_570[5 /*3*/])))
		{
			func_48(&(vLocal_570[5 /*3*/]));
		}
		if (func_224(&(vLocal_570[5 /*3*/]), 10.0f))
		{
			func_387(&(sLocal_1617.f_35), func_1035(), *bParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*bParam0, true, false);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1.0f, -1.0f, -1.0f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::_TASK_PERFORM_SEQUENCE_2(*bParam0, iLocal_196, 2.0f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					sLocal_104.f_0 = 0;
					break;
				case 2:
					iVar0 = func_120((1 << 28), 1056964608, 1065353216);
					WEAPON::GIVE_WEAPON_TO_PED(*bParam0, iVar0, 99, false, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*bParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::TASK_PERFORM_SEQUENCE(*bParam0, iLocal_196);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					sLocal_104.f_0 = 0;
					break;
				case 3:
					func_71((1 << 20));
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_668(&(vLocal_570[5 /*3*/])))
		{
			func_268(&(vLocal_570[5 /*3*/]));
		}
		if (func_70((1 << 21)))
		{
			if (!func_668(&(vLocal_570[3 /*3*/])))
			{
				func_48(&(vLocal_570[3 /*3*/]));
			}
			if (func_224(&(vLocal_570[3 /*3*/]), 15.0f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					PED::_PED_CLEAR_LOCO_MOTION(*bParam0);
					func_77(sLocal_1617.f_138, 1);
					func_78(&(sLocal_211[0 /*21*/]), 0);
				}
				func_339((1 << 21));
			}
		}
	}
	if (func_70((1 << 21)))
	{
		if (!func_131(*bParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			func_1036(&sLocal_104, 0);
		}
	}
}

void func_801()
{
}

bool func_802(bool bParam0)
{
	return true;
}

int func_803()
{
	return 0;
}

int func_804(bool bParam0)
{
	if (!func_70((1 << 12)))
	{
		func_988((1 << 12), STREAMING::_REQUEST_SCENARIO_TYPE(func_262(), 15, func_247(sLocal_1617.f_138), func_1037()));
	}
	return 1;
}

void func_805(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, func_660(7));
	sLocal_275[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_952(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	func_58((1 << 28));
}

bool func_806(int iParam0)
{
	return true;
}

void func_807()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1038(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_201(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

bool func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_911(iParam0) == 4 && func_1039(iParam0, joaat("SLOTID_WATCH")))
	{
		return true;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = func_1040(iVar0);
					if (func_1041(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return func_1039(iParam0, joaat("SLOTID_SATCHEL"));
}

void func_810(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (bParam1)
	{
		func_1042(iParam0, 4);
		func_1043(iVar0, 1);
		func_1044(iVar0, 1);
	}
	else
	{
		func_1045(iParam0, 4);
		func_1044(iVar0, 0);
	}
}

bool func_811(int iParam0)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return func_1046(iParam0, (1 << 23));
}

void func_812(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 |= iParam1;
}

void func_813(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_1 = 0;
}

void func_814(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1038(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_145(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

Vector3 func_815(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	Vector3 vVar8;

	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	fVar6 = (func_457(vVar3.x, func_457(vVar3.y, vVar3.z)) / 2.0f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_1047(vVar0, fVar6) /*3*/ };
		}
		else
		{
			vVar8 = { func_1048(vVar0, fVar6, iParam3) /*3*/ };
		}
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_816(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3.0f, 0.25f, -1.0f);
	return 1;
}

int func_817(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_818(int iParam0)
{
	if (func_168(iParam0))
	{
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

Vector3 func_819(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_820(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

Vector3 func_821(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -1447.046f, -248.2112f, 101.8532f };
				case 1:
					return { -1421.375f, -191.8643f, 100.0484f };
				case 2:
					return { -1468.509f, -186.8103f, 104.7422f };
				case 3:
					return { -1454.64f, -225.2065f, 103.411f };
				case 4:
					return { -1428.337f, -197.121f, 100.9558f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return { -1462.903f, -174.4467f, 105.4205f };
				case 2:
					return { -1457.676f, -251.4121f, 104.5611f };
				case 3:
					return { -1409.899f, -284.2626f, 100.9278f };
				case 4:
					return { -1409.899f, -284.2626f, 100.9278f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { -1413.63f, -293.9522f, 102.1136f };
				case 1:
					return { -1518.762f, -234.9279f, 116.6115f };
				case 2:
					return { -1468.601f, -126.4598f, 117.0678f };
				case 3:
					return { -1514.415f, -203.4755f, 110.9043f };
				case 4:
					return { -1413.63f, -293.9522f, 102.1136f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_822(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0.0f;
}

bool func_823(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

int func_824(int iParam0)
{
	int iVar0;

	if (func_19(64) && iParam0 == 0)
	{
		iVar0 = joaat("DES_TREEFALL_ACCIDENT");
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_ACCIDENT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_DOWN15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
	}
	return iVar0;
}

char* func_825(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_826(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_466[iParam0]) == 5;
}

void func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35((1 << 10));
			return;
		case 1:
			func_35((1 << 11));
			return;
		case 2:
			func_35((1 << 12));
			return;
		case 3:
			func_35((1 << 13));
			return;
		case 4:
			func_35((1 << 14));
			return;
	}
}

bool func_828(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0.0f)
	{
		fParam6 = 0.0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_829(int iParam0, int iParam1)
{
	if (func_823(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_830()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_831(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam2, false, true);
}

void func_832(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

bool func_833(var uParam0)
{
	return func_248(*uParam0, 1);
}

void func_834(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1049(iParam1))
		{
			func_1050(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1051(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1052(iParam0, 0);
			bVar0 = true;
		}
		func_1053(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_835(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_836(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.0f;
		case 1:
			return 30.0f;
		case 2:
			return 80.0f;
		default:
			break;
	}
	return -1.0f;
}

int func_837(bool bParam0, int iParam1, bool bParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return 0;
	}
	vVar0 = { func_1054(iParam1) /*3*/ };
	vVar3 = { func_1054(bParam2) /*3*/ };
	return func_1055(bParam0, vVar0, vVar3, bParam2);
}

int func_838(bool bParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1054(iParam1) /*3*/ };
	return func_1055(bParam0, vVar0, vParam2, 0);
}

bool func_839(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

struct<5> /*40*/ func_840(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_1056(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_1057(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_844(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_1058(bParam1) /*4*/ };
			if (bParam2 && func_1059(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_842(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_842(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_843(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_1060(bParam1) /*4*/ };
			switch (func_918(iParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case 2020212423:
					sVar0.f_4 = -1756997214;
					break;
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_GREET");
					break;
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_TAUNT");
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_1061(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_844(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1061(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_844(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_1062(sVar0, &sVar27, bParam1, 0))
				{
					sVar0.f_4 = 0;
				}
				else
				{
					sVar0 = { sVar27.f_5 /*4*/ };
					sVar0.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_841(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -1783281882;
		case 2:
			return 1704602624;
		case 3:
			return 1214181762;
		case 4:
			return 1520605650;
		case 5:
			return 551482925;
		case 6:
			return 843929315;
		case 7:
			return 1974334822;
		case 8:
			return -1963435638;
		case 9:
			return -430578371;
		case 10:
			return -730381952;
		case 11:
			return -1500304973;
		case 12:
			return -253503777;
		case 13:
			return 1352275534;
		case 14:
			return 1666399168;
		case 15:
			return joaat("SLOTID_CAMP_DOG");
		case 16:
			return joaat("SLOTID_CAMP_DOG_COAT");
		case 17:
			return -1774867076;
		case 18:
			return joaat("SLOTID_CAMP_FLAG");
		case 19:
			return joaat("SLOTID_CAMP_FOLLOWER");
		case 20:
			return joaat("SLOTID_CAMP_FOLLOWER_OUTFIT");
		case 21:
			return joaat("SLOTID_CAMP_LOCKBOX");
		case 22:
			return joaat("SLOTID_CAMP_MUSIC");
		case 23:
			return joaat("SLOTID_CAMP_TENT");
		case 24:
			return joaat("SLOTID_CAMP_THEME");
		case 25:
			return joaat("SLOTID_CAMP_UPGRADE");
		case 26:
			return -6605744;
		case 27:
			return 953047564;
		case 28:
			return 769706682;
		case 29:
			return 1635590003;
		case 30:
			return -2047978619;
		case 31:
			return -586319254;
		case 32:
			return 249896112;
		case 33:
			return joaat("SLOTID_CARDS");
		case 34:
			return joaat("SLOTID_CARDS_DEADEYE");
		case 35:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_1");
		case 36:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_2");
		case 37:
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_3");
		case 38:
			return joaat("SLOTID_CARRIED_WEAPONS");
		case 39:
			return joaat("SLOTID_CARRIED_WEAPONS_MODS");
		case 40:
			return 1158805436;
		case 41:
			return -559473670;
		case 42:
			return -797147251;
		case 43:
			return -382216265;
		case 44:
			return joaat("SLOTID_CHIPS_GAME");
		case 45:
			return 1704297235;
		case 46:
			return -1139016418;
		case 47:
			return 897705377;
		case 48:
			return 17961769;
		case 49:
			return 205582207;
		case 50:
			return 900740963;
		case 51:
			return -1369589344;
		case 52:
			return -1695823795;
		case 53:
			return -41453074;
		case 54:
			return 539767227;
		case 55:
			return 1210490314;
		case 56:
			return -399684751;
		case 57:
			return 2138893455;
		case 58:
			return -1617010487;
		case 59:
			return -832377028;
		case 60:
			return -428040245;
		case 61:
			return 1279288897;
		case 62:
			return -594897905;
		case 63:
			return -1360459240;
		case 64:
			return 1838428396;
		case 65:
			return -1467846997;
		case 66:
			return -490610263;
		case 67:
			return -1885413079;
		case 68:
			return 708884155;
		case 69:
			return -134459952;
		case 70:
			return -1912136700;
		case 71:
			return -1268031552;
		case 72:
			return 1177953227;
		case 73:
			return 2130805296;
		case 74:
			return 38093490;
		case 75:
			return -269153218;
		case 76:
			return -1995068011;
		case 77:
			return -164284834;
		case 78:
			return 1446463345;
		case 79:
			return 1501315823;
		case 80:
			return -750379482;
		case 81:
			return -929560937;
		case 82:
			return 608323241;
		case 83:
			return 1030796013;
		case 84:
			return 1915057434;
		case 85:
			return -1582276476;
		case 86:
			return 692059311;
		case 87:
			return 2062839241;
		case 88:
			return -1884531872;
		case 89:
			return -866434534;
		case 90:
			return -1252192421;
		case 91:
			return 1243288963;
		case 92:
			return -1953772189;
		case 93:
			return 754411745;
		case 94:
			return 545309006;
		case 95:
			return -1089810811;
		case 96:
			return 1957869400;
		case 97:
			return -241412332;
		case 98:
			return -1548010959;
		case 99:
			return 550150488;
		case 100:
			return 946565453;
		case 101:
			return 434443248;
		case 102:
			return -1709914938;
		case 103:
			return 366686112;
		case 104:
			return -1370063350;
		case 105:
			return 2126829550;
		case 106:
			return 226552910;
		case 107:
			return 721193431;
		case 108:
			return -315672460;
		case 109:
			return 623544501;
		case 110:
			return 259556714;
		case 111:
			return -2125361825;
		case 112:
			return 1078230356;
		case 113:
			return 1885364811;
		case 114:
			return 1630382737;
		case 115:
			return 1738245512;
		case 116:
			return 1540262216;
		case 117:
			return 1016871472;
		case 118:
			return 13829069;
		case 119:
			return 737051352;
		case 120:
			return 1734614610;
		case 121:
			return -208715295;
		case 122:
			return 1435062936;
		case 123:
			return 1483055553;
		case 124:
			return 380335002;
		case 125:
			return -1079385677;
		case 126:
			return 676610411;
		case 127:
			return 2145419552;
		case 128:
			return 657238733;
		case 129:
			return 1850579281;
		case 130:
			return -1923957384;
		case 131:
			return -1142828108;
		case 132:
			return -1400618531;
		case 133:
			return -1433857135;
		case 134:
			return 209987206;
		case 135:
			return joaat("SLOTID_COACH_INSURANCE");
		case 136:
			return joaat("SLOTID_COACH_LIVERY");
		case 137:
			return -59178517;
		case 138:
			return 2134884601;
		case 139:
			return 651707517;
		case 140:
			return -633788535;
		case 141:
			return 116394463;
		case 142:
			return -1196973875;
		case 143:
			return 801752086;
		case 144:
			return 184475332;
		case 145:
			return -1880922659;
		case 146:
			return -898138634;
		case 147:
			return -2107418444;
		case 148:
			return -679970099;
		case 149:
			return -1531392549;
		case 150:
			return 1612483376;
		case 151:
			return 463930900;
		case 152:
			return -632148238;
		case 153:
			return 55303249;
		case 154:
			return 2108322089;
		case 155:
			return -1358896714;
		case 156:
			return 74475632;
		case 157:
			return -28710953;
		case 158:
			return -1791599168;
		case 159:
			return 1605938169;
		case 160:
			return 1255242276;
		case 161:
			return 636467727;
		case 162:
			return -1567688525;
		case 163:
			return -77886679;
		case 164:
			return -1057900679;
		case 165:
			return -1960888134;
		case 166:
			return -1719717295;
		case 167:
			return -1779244911;
		case 168:
			return joaat("SLOTID_COACH_STALL_01");
		case 169:
			return 223362311;
		case 170:
			return 1150824567;
		case 171:
			return 974471191;
		case 172:
			return 1989683968;
		case 173:
			return 254804477;
		case 174:
			return 192057609;
		case 175:
			return 1553957817;
		case 176:
			return 2099829015;
		case 177:
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC");
		case 178:
			return -1948423372;
		case 179:
			return 981083654;
		case 180:
			return 1283289876;
		case 181:
			return -606884489;
		case 182:
			return -100418572;
		case 183:
			return 663645231;
		case 184:
			return 1442217033;
		case 185:
			return 1410986244;
		case 186:
			return 847409839;
		case 187:
			return 923926911;
		case 188:
			return 109995826;
		case 189:
			return -747412737;
		case 190:
			return 1114341727;
		case 191:
			return -539456939;
		case 192:
			return 45887121;
		case 193:
			return 913271624;
		case 194:
			return -1652812715;
		case 195:
			return -1791365775;
		case 196:
			return -979299941;
		case 197:
			return 713062001;
		case 198:
			return -575045963;
		case 199:
			return 1852965262;
		case 200:
			return -1398836354;
		case 201:
			return -1829885298;
		case 202:
			return -1773850357;
		case 203:
			return -564258009;
		case 204:
			return 2016532685;
		case 205:
			return -1070563798;
		case 206:
			return -1619221343;
		case 207:
			return -345571691;
		case 208:
			return 544288390;
		case 209:
			return 159578294;
		case 210:
			return -76852849;
		case 211:
			return 1110295244;
		case 212:
			return 2104563477;
		case 213:
			return 1947827651;
		case 214:
			return -933072766;
		case 215:
			return 2104388648;
		case 216:
			return -1677140601;
		case 217:
			return -2133097881;
		case 218:
			return -826678792;
		case 219:
			return -513522325;
		case 220:
			return 1970588249;
		case 221:
			return -2080032591;
		case 222:
			return 1758847745;
		case 223:
			return 895010282;
		case 224:
			return joaat("SLOTID_COMPENDIUM");
		case 225:
			return joaat("SLOTID_COMPENDIUM_PAGE");
		case 226:
			return joaat("SLOTID_COMPENDIUM_STAMP");
		case 227:
			return joaat("SLOTID_COUPONS");
		case 228:
			return joaat("SLOTID_CURRENCY");
		case 229:
			return joaat("SLOTID_DEFAULT_STABLE");
		case 230:
			return joaat("SLOTID_DEFAULT_STABLE_STALLS");
		case 231:
			return -1578397674;
		case 232:
			return joaat("SLOTID_EMOTE_ACTION");
		case 233:
			return joaat("SLOTID_EMOTE_GREET");
		case 234:
			return joaat("SLOTID_EMOTE_ITEM");
		case 235:
			return joaat("SLOTID_EMOTE_REACT");
		case 236:
			return joaat("SLOTID_EMOTE_TAUNT");
		case 237:
			return joaat("SLOTID_EMOTE_TWIRL_GUN");
		case 238:
			return joaat("SLOTID_FEES");
		case 239:
			return joaat("SLOTID_FME_HERBS_EXPAND");
		case 240:
			return joaat("SLOTID_HANDGUN_BARREL");
		case 241:
			return 24047176;
		case 242:
			return joaat("SLOTID_HANDGUN_HAMMER");
		case 243:
			return joaat("SLOTID_HONOR");
		case 244:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 245:
			return joaat("SLOTID_HORSE_BLANKET");
		case 246:
			return joaat("SLOTID_HORSE_CANTLE");
		case 247:
			return joaat("SLOTID_HORSE_FENDER");
		case 248:
			return joaat("SLOTID_HORSE_HORN");
		case 249:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 250:
			return joaat("SLOTID_HORSE_LANTERN");
		case 251:
			return joaat("SLOTID_HORSE_MANE");
		case 252:
			return joaat("SLOTID_HORSE_MASK");
		case 253:
			return joaat("SLOTID_HORSE_MOUSTACHE");
		case 254:
			return joaat("SLOTID_HORSE_REINS");
		case 255:
			return joaat("SLOTID_HORSE_SADDLE");
		case 256:
			return joaat("SLOTID_HORSE_SADDLE_01");
		case 257:
			return joaat("SLOTID_HORSE_SADDLE_02");
		case 258:
			return joaat("SLOTID_HORSE_SADDLE_03");
		case 259:
			return joaat("SLOTID_HORSE_SADDLE_04");
		case 260:
			return joaat("SLOTID_HORSE_SADDLE_05");
		case 261:
			return joaat("SLOTID_HORSE_SADDLE_06");
		case 262:
			return joaat("SLOTID_HORSE_SADDLE_07");
		case 263:
			return joaat("SLOTID_HORSE_SADDLE_08");
		case 264:
			return joaat("SLOTID_HORSE_SADDLE_09");
		case 265:
			return joaat("SLOTID_HORSE_SADDLE_10");
		case 266:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 267:
			return joaat("SLOTID_HORSE_SATCHEL");
		case 268:
			return joaat("SLOTID_HORSE_SEAT");
		case 269:
			return joaat("SLOTID_HORSE_SEX");
		case 270:
			return joaat("SLOTID_HORSE_SKIRT");
		case 271:
			return joaat("SLOTID_HORSE_STALL_01");
		case 272:
			return joaat("SLOTID_HORSE_STALL_02");
		case 273:
			return joaat("SLOTID_HORSE_STALL_03");
		case 274:
			return joaat("SLOTID_HORSE_STALL_04");
		case 275:
			return joaat("SLOTID_HORSE_STALL_05");
		case 276:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 277:
			return joaat("SLOTID_HORSE_TAIL");
		case 278:
			return joaat("SLOTID_HUNTING_WAGON");
		case 279:
			return 1132377945;
		case 280:
			return 739936401;
		case 281:
			return 1201880974;
		case 282:
			return 819728896;
		case 283:
			return 1746010219;
		case 284:
			return 1433393959;
		case 285:
			return -1287636759;
		case 286:
			return -706917073;
		case 287:
			return -2166805;
		case 288:
			return -1391602433;
		case 289:
			return 1782075221;
		case 290:
			return 1282544585;
		case 291:
			return 1732594027;
		case 292:
			return -1058817012;
		case 293:
			return joaat("SLOTID_MINIGAME");
		case 294:
			return joaat("SLOTID_MISSION_TIMERS");
		case 295:
			return -1783120823;
		case 296:
			return -1535745896;
		case 297:
			return joaat("SLOTID_MOONSHINE_COOK");
		case 298:
			return joaat("SLOTID_MOONSHINE_RECIPE");
		case 299:
			return joaat("SLOTID_MOONSHINE_STILL");
		case 300:
			return joaat("SLOTID_MOONSHINER_BAR_PHOTO");
		case 301:
			return joaat("SLOTID_MOONSHINER_CRAFT_FLAVOR");
		case 302:
			return joaat("SLOTID_MOONSHINER_CRAFT_INPUT");
		case 303:
			return 1111816631;
		case 304:
			return joaat("SLOTID_MOONSHINER_LOCATION");
		case 305:
			return joaat("SLOTID_MOONSHINER_THEME");
		case 306:
			return joaat("SLOTID_MOONSHINER_UPGRADE");
		case 307:
			return joaat("SLOTID_NOTORIETY");
		case 308:
			return joaat("SLOTID_OWNED_CONTENT");
		case 309:
			return joaat("SLOTID_PLAYER_BODY_TYPE");
		case 310:
			return joaat("SLOTID_PLAYER_GENDER");
		case 311:
			return joaat("SLOTID_PLAYER_VOICE");
		case 312:
			return -708312114;
		case 313:
			return 688823508;
		case 314:
			return -1622147240;
		case 315:
			return 830292162;
		case 316:
			return 226276782;
		case 317:
			return -678416628;
		case 318:
			return -1098528034;
		case 319:
			return -629387103;
		case 320:
			return 316207340;
		case 321:
			return -1909200748;
		case 322:
			return -939652363;
		case 323:
			return joaat("SLOTID_PROGRESSION");
		case 324:
			return 2011227407;
		case 325:
			return joaat("SLOTID_PROPERTY");
		case 326:
			return joaat("SLOTID_PURCHASED_CONTENT");
		case 327:
			return joaat("SLOTID_ROLE_ITEMS");
		case 328:
			return joaat("SLOTID_SAMPLE");
		case 329:
			return joaat("SLOTID_SATCHEL");
		case 330:
			return -1045471300;
		case 331:
			return 1617414719;
		case 332:
			return -787761753;
		case 333:
			return -490616606;
		case 334:
			return joaat("SLOTID_STABLE");
		case 335:
			return -1360128126;
		case 336:
			return joaat("SLOTID_UPGRADE");
		case 337:
			return joaat("SLOTID_VOUCHERS");
		case 338:
			return joaat("SLOTID_WARDROBE");
		case 339:
			return joaat("SLOTID_WARDROBE_AGEING");
		case 340:
			return joaat("SLOTID_WARDROBE_BEARD");
		case 341:
			return joaat("SLOTID_WARDROBE_BLUSH");
		case 342:
			return joaat("SLOTID_WARDROBE_COMPLEXION");
		case 343:
			return joaat("SLOTID_WARDROBE_COMPLEXION_2");
		case 344:
			return joaat("SLOTID_WARDROBE_EYEBROWS");
		case 345:
			return joaat("SLOTID_WARDROBE_EYELINER");
		case 346:
			return joaat("SLOTID_WARDROBE_EYES");
		case 347:
			return joaat("SLOTID_WARDROBE_EYESHADOW");
		case 348:
			return joaat("SLOTID_WARDROBE_EYEWEAR");
		case 349:
			return 892816668;
		case 350:
			return -1994943603;
		case 351:
			return 603133554;
		case 352:
			return -30160144;
		case 353:
			return joaat("SLOTID_WARDROBE_FOUNDATION");
		case 354:
			return joaat("SLOTID_WARDROBE_FRECKLES");
		case 355:
			return 755611221;
		case 356:
			return joaat("SLOTID_WARDROBE_GLOVES");
		case 357:
			return joaat("SLOTID_WARDROBE_GRIME");
		case 358:
			return joaat("SLOTID_WARDROBE_GUNBELT");
		case 359:
			return joaat("SLOTID_WARDROBE_HAIR");
		case 360:
			return joaat("SLOTID_WARDROBE_HEAD");
		case 361:
			return -246340825;
		case 362:
			return -1410671073;
		case 363:
			return joaat("SLOTID_WARDROBE_LIPSTICK");
		case 364:
			return joaat("SLOTID_WARDROBE_LOADOUT_1");
		case 365:
			return joaat("SLOTID_WARDROBE_LOADOUT_2");
		case 366:
			return joaat("SLOTID_WARDROBE_LOADOUT_3");
		case 367:
			return joaat("SLOTID_WARDROBE_LOADOUT_4");
		case 368:
			return joaat("SLOTID_WARDROBE_LOADOUT_5");
		case 369:
			return joaat("SLOTID_WARDROBE_LOADOUT_6");
		case 370:
			return joaat("SLOTID_WARDROBE_LOADOUT_7");
		case 371:
			return joaat("SLOTID_WARDROBE_LOADOUT_8");
		case 372:
			return joaat("SLOTID_WARDROBE_LOADOUT_9");
		case 373:
			return joaat("SLOTID_WARDROBE_LOWER_BODY");
		case 374:
			return joaat("SLOTID_WARDROBE_LOWER_GARB");
		case 375:
			return -1384685096;
		case 376:
			return -2026728113;
		case 377:
			return joaat("SLOTID_WARDROBE_MOLES");
		case 378:
			return joaat("SLOTID_WARDROBE_NECKWEAR_1");
		case 379:
			return joaat("SLOTID_WARDROBE_NECKWEAR_2");
		case 380:
			return joaat("SLOTID_WARDROBE_OUTFIT");
		case 381:
			return joaat("SLOTID_WARDROBE_SATCHEL");
		case 382:
			return joaat("SLOTID_WARDROBE_SCAR");
		case 383:
			return joaat("SLOTID_WARDROBE_SKIN_MOTTLING");
		case 384:
			return joaat("SLOTID_WARDROBE_SPOTS");
		case 385:
			return joaat("SLOTID_WARDROBE_TEETH");
		case 386:
			return joaat("SLOTID_WARDROBE_UPPER_BODY");
		case 387:
			return joaat("SLOTID_WARDROBE_UPPER_GARB");
		case 388:
			return -1034549620;
		case 389:
			return -1293064293;
		case 390:
			return -1540142553;
		case 391:
			return -1769886012;
		case 392:
			return -1983081126;
		case 393:
			return -1106117124;
		case 394:
			return -1873108338;
		case 395:
			return -2097543219;
		case 396:
			return 155413195;
		case 397:
			return joaat("SLOTID_WATCH");
		case 398:
			return joaat("SLOTID_WEAPON_0");
		case 399:
			return joaat("SLOTID_WEAPON_1");
		case 400:
			return joaat("SLOTID_WEAPON_2");
		case 401:
			return joaat("SLOTID_WEAPON_3");
		case 402:
			return 1570861011;
		case 403:
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
		case 404:
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
		case 405:
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
		case 406:
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
		case 407:
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
		case 408:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
		case 409:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
		case 410:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
		case 411:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
		case 412:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
		case 413:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
		case 414:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
		case 415:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
		case 416:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
		case 417:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
		case 418:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
		case 419:
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
		case 420:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
		case 421:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
		case 422:
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
		case 423:
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
		case 424:
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
		case 425:
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
		case 426:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
		case 427:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
		case 428:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
		case 429:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
		case 430:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
		case 431:
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
		case 432:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
		case 433:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
		case 434:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
		case 435:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
		case 436:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
		case 437:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
		case 438:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
		case 439:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
		case 440:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
		case 441:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
		case 442:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
		case 443:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
		case 444:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
		case 445:
			return 61132362;
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return 1136146715;
		case 451:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
		case 452:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
		case 453:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
		case 454:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
		case 455:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
		case 456:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
		case 457:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
		case 458:
			return 1471419228;
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return 526744654;
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return 853355463;
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return -585289073;
		case 475:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
		case 476:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
		case 477:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
		case 478:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
		case 479:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
		case 480:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
		case 481:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
		case 482:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
		case 483:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
		case 484:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
		case 485:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
		case 486:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
		case 487:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
		case 488:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
		case 489:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
		case 490:
			return -2145069367;
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return -2117214398;
		case 493:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
		case 494:
			return -62390436;
		case 495:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
		case 496:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
		case 497:
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
		case 498:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
		case 499:
			return 302954672;
		case 500:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
		case 501:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
		case 502:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
		case 503:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
		case 504:
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
		case 505:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
		case 506:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
		case 507:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
		case 508:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
		case 509:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
		case 510:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
		case 511:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
		case 512:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
		case 513:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
		case 514:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
		case 515:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
		case 516:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
		case 517:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
		case 518:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
		case 519:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
		case 520:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
		case 521:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
		case 522:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
		case 523:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
		case 524:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
		case 525:
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
		case 526:
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
		case 527:
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
		case 528:
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
		case 529:
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
		case 530:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
		case 531:
			return 293062146;
		case 532:
			return 95360094;
		case 533:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
		case 534:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
		case 535:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
		case 536:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
		case 537:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
		case 538:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
		case 539:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
		case 540:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
		case 541:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
		case 542:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
		case 543:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
		case 544:
			return 1670843243;
		case 545:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
		case 546:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
		case 547:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
		case 548:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
		case 549:
			return -1150323212;
		case 550:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
		case 551:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
		case 552:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
		case 553:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
		case 554:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
		case 555:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
		case 556:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
		case 557:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return joaat("SLOTID_WEB_INBOX");
		case 570:
			return joaat("SLOTID_WEB_INBOX_AMMO");
		case 571:
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
		case 572:
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
		case 573:
			return joaat("SLOTID_WEB_INBOX_GIFTS");
		case 574:
			return 1084576580;
		case 575:
			return joaat("SLOTID_WEB_INBOX_HORSES");
		case 576:
			return joaat("SLOTID_WEB_INBOX_KIT");
		case 577:
			return joaat("SLOTID_WEB_INBOX_OFFERS");
		case 578:
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
		case 579:
			return -386012962;
		case 580:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		case 581:
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
		case 582:
			return -352578118;
		case 583:
			return 1426626782;
		case 584:
			return -714081520;
		case 585:
			return 74547781;
		case 586:
			return 1271463052;
		case 587:
			return 1983140194;
		case 588:
			return 677262775;
		case 589:
			return -832337898;
		case 590:
			return -319249747;
		case 591:
			return -16955722;
		case 592:
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
		case 593:
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
		case 594:
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
		case 595:
			return 1380479304;
		case 596:
			return joaat("SLOTID_WARDROBE_LOADOUT");
		case 597:
			return joaat("SLOTID_WARDROBE_MISC");
		case 598:
			return 1843035435;
		case 599:
			return -304127320;
		case 600:
			return 122470371;
		case 601:
			return 0;
		case 602:
			return joaat("SLOTID_NONE");
		case 603:
			return joaat("SLOTID_ANY");
		case 604:
			return -1150938404;
		case 605:
			return -1756997214;
		case 606:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_842(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1063(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_843(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1064(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_844(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_1065(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_917(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_845(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1066(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(*uParam1, &sVar0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = sVar0.f_11;
	}
	else if (iParam3 > sVar0.f_11)
	{
		iParam3 = sVar0.f_11;
	}
	if (!func_846(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_917(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_846(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_917(bParam0));
}

int func_847(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1067(iParam0))
	{
		return 0;
	}
	if (!func_846(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_848(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_307(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_849(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam7;
	sVar0.f_1 = iParam8;
	sVar0.f_2 = iParam9;
	sVar0.f_3 = iParam11;
	sVar0.f_4 = iParam4;
	sVar0.f_4.f_1 = iParam6;
	sVar0.f_4.f_2 = sParam5;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam10;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

int func_850(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam7;
	sVar0.f_1 = iParam8;
	sVar0.f_2 = iParam9;
	sVar0.f_3 = iParam11;
	sVar0.f_4 = iParam4;
	sVar0.f_4.f_1 = iParam6;
	sVar0.f_4.f_2 = sParam5;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam10;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_0x18D6869FBFFEC0F8(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

bool func_851(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_852(int iParam0)
{
	int iVar0;

	if (func_1068(iParam0))
	{
		if (!func_1069(45))
		{
			return false;
		}
	}
	iVar0 = func_855(iParam0);
	if (func_1070())
	{
		if (!func_208(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> /*16*/ func_853(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_854(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_855(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENTAREA_APPLESEEDTIMBER");
		case 1:
			return joaat("EVENTAREA_CASTORSPOND");
		case 2:
			return joaat("EVENTAREA_CENTRALUNION");
		default:
			break;
	}
	return 0;
}

Vector3 func_857(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -1400.0f, -200.0f, 0.0f };
		case 1:
			return { -440.0f, 500.0f, 0.0f };
		case 2:
			return { 2100.0f, 770.0f, 0.0f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_858(int iParam0, int iParam1)
{
	int iVar0;

	func_1071(iParam0);
	iVar0 = func_1072(iParam0, iParam1);
	if (iVar0 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
	{
		MAP::_MAP_DISCOVER_REGION(iVar0);
	}
}

int func_859(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_860(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_861(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_550(), true))
	{
		return true;
	}
	return false;
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return (1 << 9);
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return (1 << 10);
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return (1 << 11);
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return (1 << 12);
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return (1 << 13);
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return (1 << 14);
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return (1 << 15);
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return (1 << 16);
		case joaat("HONOR_EVENT_THEFT"):
			return (1 << 17);
		case joaat("HONOR_EVENT_INTERVENED"):
			return (1 << 18);
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return (1 << 19);
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return (1 << 20);
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return (1 << 21);
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return (1 << 22);
		default:
			break;
	}
	return 0;
}

int func_863(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_864(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_1073();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1074(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(bParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(bParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(bParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(bParam5, "honor_bank"))
			{
				iParam0 -= DECORATOR::DECOR_GET_INT(bParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(bParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1.0f;
	if (func_1069(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1075())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL(((float)iParam0 * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(((float)iParam0 * fVar4));
	}
	Global_40.f_11095.f_35 += iVar5;
	Global_40.f_11095.f_35 = func_1076(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1073();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1077(iVar1);
		func_1079(func_1078(), 0, 4000);
		func_1080(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1081(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_854(func_1082(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(bParam5))
			{
				DECORATOR::DECOR_SET_INT(bParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_863(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1083(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1084(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1084(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_854(func_1082(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_863(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1083(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1084(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1084(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_1082(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1085(10, 1);
	}
}

void func_865(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = bParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_866(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_1086();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1087(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3.0f;
					}
					else
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_867(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_868(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_1088(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_869(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_1() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_1089(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_1089(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_894(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_870(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1090(iParam0);
	}
}

bool func_871(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_894(bParam2);
	}
	else
	{
		iVar1 = func_893(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_894(bParam0);
	}
	else
	{
		iVar0 = func_893(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_376(*iParam1, (1 << 23)))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_872(bool bParam0, bool bParam1)
{
	return func_366(bParam0, bParam1, 1, 1);
}

float func_873(int iParam0)
{
	return iParam0->f_26;
}

bool func_874(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

float func_875(int iParam0)
{
	return iParam0->f_17;
}

bool func_876(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_376(*iParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if (*iParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_877(int iParam0)
{
	return iParam0->f_18;
}

bool func_878(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_674(bVar0, 0)))
		{
			if (func_955(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_879(int iParam0)
{
	return iParam0->f_23;
}

int func_880(int iParam0)
{
	return iParam0->f_21;
}

int func_881(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & (1 << 24) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_882(bool bParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_1091(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(bParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5.0f)
	{
		return true;
	}
	return false;
}

int func_883(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_1092(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_884(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_885(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_934(bParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_934(bParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_887(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_934(bParam1))
	{
		return false;
	}
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam1, Global_1935630.f_34[iParam3], -1.0f, -1.0f, -1.0f, -1.0f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_888(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_889(int iParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == bParam1)
	{
		return true;
	}
	if (func_1093(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == bParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_890(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_891(bool bParam0, bool bParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_438(bParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_892(int iParam0)
{
	return iParam0->f_24;
}

int func_893(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_894(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_895(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630.f_40, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_888(Global_35, &iVar1))
			{
				if (fParam4 < 4.0f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0.0f)
	{
		fVar2 = func_366(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_366(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_896(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_1088(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_897(iParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(bParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_897(iParam1, bVar1))
				{
					if (func_438(bVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_897(int iParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_898(int iParam0)
{
	if (func_1075())
	{
		return false;
	}
	return func_208(Global_1347702[58 /*49*/].f_15, 1);
}

int func_899(int iParam0)
{
	return iParam0->f_20;
}

int func_900(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != (*iParam0)[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_901(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_902(int iParam0)
{
	return func_1016(iParam0, 2);
}

void func_903(int iParam0, bool bParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1094(iParam0, (1 << 10)))
		{
			func_910(iParam0, (1 << 10));
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_1094(iParam0, (1 << 10)))
	{
		func_909(iParam0, (1 << 10));
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_1095(iParam0);
}

int func_904(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_905(int iParam0)
{
	if (func_1096(iParam0) && func_1097())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_906(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_907(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
}

bool func_908(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_909(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= Global_1914319.f_15614[iParam0] & iParam1;
}

void func_910(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

int func_911(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_912(int iParam0, bool bParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1046(iParam0, (1 << 9))) || (!bParam1 && !func_1046(iParam0, (1 << 9))))
	{
		return;
	}
	if (bParam1)
	{
		func_812(iParam0, (1 << 9));
	}
	else
	{
		func_313(iParam0, (1 << 9));
	}
	if (func_1098(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_913(int iParam0)
{
	int iVar0;

	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1099(iVar0);
}

int func_914(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (Global_1058888.f_40431 >= 32)
	{
		return -1;
	}
	sVar0 = -1;
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	if (Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			func_1100(iVar2);
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
	}
	if (Global_1058888.f_40431 < 31)
	{
		iVar2 = Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		if (Global_1058888.f_40431 > 32)
		{
			Global_1058888.f_40431 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_915()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_916(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MICAH_HIDEOUT_ABANDON"):
			return 292;
		case joaat("WS_RIDE_THE_LIGHTNING_CHAIR"):
			return 104;
		case joaat("WS_FAST_TRAVEL_MARKERS"):
			return 195;
		case joaat("WS_RHODES_SADIE3_COVER_ON"):
			return 59;
		case joaat("WS_SHOWS_SD_MOV_01"):
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case joaat("WS_CLAY_EXIST"):
			return 197;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
			return 49;
		case joaat("WS_HIDEOUT_SIX_POINT_LIGHTS"):
			return 92;
		case joaat("WS_GRAND_KORRIGAN_LOW_RAILING"):
			return 265;
		case joaat("WS_NBX_BUILDING_FUNDED"):
			return 112;
		case joaat("WS_RHODES_BANK_WALL_INTACT"):
			return 278;
		case joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON"):
			return 208;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01_END"):
			return 165;
		case joaat("WS_DEWCLM_DOMINOES_SEATS"):
			return 276;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case joaat("WS_SHOWS_SD_VAUD_02"):
			return 10;
		case joaat("WS_SAINT_DENIS_BOATS_FOUND"):
			return 376;
		case joaat("WS_SWA_CHAIRS_CINEMATIC"):
			return 289;
		case joaat("WS_SHOWS_SD_MOV_02"):
			return 26;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			return 57;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			return 56;
		case joaat("WS_VALENTINE_BANK_WINDOWS"):
			return 123;
		case joaat("WS_ANTENOR_DOCKED"):
			return 266;
		case joaat("WS_GRZ_WEST_CAMP_SITE"):
			return 277;
		case joaat("WS_FIN1_DISABLE_VANHORN_FIRE"):
			return 253;
		case joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"):
			return 257;
		case joaat("WS_FEUD1_WATER_TOWER_UP"):
			return 372;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS"):
			return 141;
		case joaat("WS_RHODES_BANK_LIGHTS_OFF"):
			return 64;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			return 3;
		case joaat("WS_SHOWS_SD_MAG_04"):
			return 23;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			return 61;
		case joaat("WS_SHOWS_SD_VAUD_05"):
			return 13;
		case joaat("WS_INDUSTRY3_POKER_TABLES"):
			return 233;
		case joaat("WS_MP_PROPERTY_LOCATIONS"):
			return 53;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			return 55;
		case joaat("WS_GUARMA_RUIN1_FLOOR_INTACT"):
			return 33;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON"):
			return 146;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS"):
			return 147;
		case joaat("WS_THOMAS_DOWNES"):
			return 301;
		case -1556423728:
			return 218;
		case joaat("WS_BEAVER_HOLLOW_HIDEOUT"):
			return 116;
		case joaat("WS_CRD_CHIMNEY_OFF"):
			return 311;
		case joaat("WS_STRAWBERRY_JAIL_INTACT"):
			return 209;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS"):
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case joaat("WS_MP_LAKAY"):
			return 215;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"):
			return 172;
		case joaat("WS_SHOWS_SD_VAUD_04"):
			return 12;
		case joaat("WS_ROCKY_SEVEN_ENDLESS"):
			return 32;
		case joaat("WS_SHOWS_SD_MAG_03"):
			return 22;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			return 73;
		case joaat("WS_RIDE_THE_LIGHTNING_WAGON"):
			return 105;
		case joaat("WS_MP_HIDEOUT_HANGING_DOG"):
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON"):
			return 140;
		case -1318987693:
			return 222;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case joaat("WS_ON_THE_RUN_SHACK_HELPED_CONVICT"):
			return 270;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"):
			return 171;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			return 98;
		case joaat("WS_SHOWS_SD_MAG_02"):
			return 21;
		case joaat("WS_GRAVE_SUSAN"):
			return 300;
		case joaat("WS_VALENTINE_JAIL_INTACT"):
			return 235;
		case joaat("WS_STD_GALA_BALCONY_HIGH_MEM"):
			return 113;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"):
			return 170;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			return 126;
		case joaat("WS_VALENTINE_LOCKDOWN_BANK"):
			return 131;
		case joaat("WS_MP_HIDEOUT_TWIN_ROCKS"):
			return 333;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON"):
			return 156;
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
			return 45;
		case joaat("WS_VALENTINE_LOCKDOWN_JAIL"):
			return 136;
		case joaat("WS_COLTER_STAGE_FIRES_LIT"):
			return 46;
		case joaat("WS_RHODES_JAIL_INTACT"):
			return 234;
		case joaat("WS_VALENTINE_SALOON_WINDOWS"):
			return 124;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			return 100;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			return 242;
		case joaat("WB_DISCO_ALCHEMIST_HOUSE"):
			return 29;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			return 378;
		case joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED"):
			return 194;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS"):
			return 151;
		case joaat("WS_ORCHIDS_APPLESEED"):
			return 79;
		case joaat("WS_CHELONIAN_CAMP"):
			return 239;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
			return 176;
		case joaat("WS_RHODES_GRAYS3_COVER_ON"):
			return 58;
		case joaat("WS_RIDE_THE_LIGHTNING_BARRELS"):
			return 106;
		case joaat("WS_SWA_CHAIRS_REGULAR"):
			return 288;
		case joaat("WS_THIEVES_LANDING_BOAT"):
			return 251;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			return 36;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS"):
			return 152;
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
			return 44;
		case -939114198:
			return 221;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"):
			return 236;
		case joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"):
			return 84;
		case joaat("WS_HIDEOUT_HANGING_DOG_INACTIVE"):
			return 83;
		case joaat("WS_RHODES_SHERIFF_LOCKED"):
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case joaat("WS_BACCHUS_BRIDGE_DESTROYED"):
			return 260;
		case joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER"):
			return 245;
		case joaat("WS_HIDEOUT_TWIN_ROCKS_INACTIVE"):
			return 88;
		case joaat("WS_SHADY_BELLE_DOMINO_SEATS"):
			return 254;
		case joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"):
			return 262;
		case joaat("WS_SAINTDENIS_BOAT"):
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case joaat("WS_NEW_COM_BANK_VAULT_RF"):
			return 228;
		case joaat("WS_TAXIDERMY_NOTICES"):
			return 78;
		case joaat("WS_RHODES_SALOON_POST_BRAITHWAITES"):
			return 60;
		case joaat("WS_SEAN_1_TENT"):
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case joaat("WS_BRAITHWAITES_3_ACTIVE"):
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case joaat("WS_RARE_FISH_CABIN_END"):
			return 80;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS"):
			return 157;
		case joaat("WS_RHODES_ENDLESS_SUMMER"):
			return 67;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			return 191;
		case joaat("WS_RHODES_FENCE_OPEN"):
			return 261;
		case joaat("WS_MP_EVENT_AREAS"):
			return 214;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
			return 185;
		case joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF"):
			return 71;
		case joaat("WS_NATIVE1_ARMY_CAMP"):
			return 370;
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
			return 187;
		case joaat("WS_BGV_SHACK_LADDER_DOWN"):
			return 377;
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
			return 175;
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			return 174;
		case joaat("WS_VALENTINE_SALOON_BED_BLOODY"):
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			return 117;
		case joaat("WS_POST_CARAVAN_SHADY"):
			return 364;
		case joaat("WS_VALENTINE_SHOOTOUT"):
			return 238;
		case joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING"):
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			return 8;
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
			return 186;
		case joaat("WS_NBX_MAUSOLEUM_PLUNDERED"):
			return 111;
		case joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN"):
			return 268;
		case joaat("WS_MP_HIDEOUT_MILLESANI_CLAIM"):
			return 316;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			return 225;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			return 205;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 143;
		case joaat("WS_WAPITI_TENT_OPEN"):
			return 272;
		case joaat("WS_MOB3_TROLLEY_DAMAGE"):
			return 368;
		case joaat("WS_SERIAL_KILLER_CABIN_OPEN"):
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case joaat("WS_BOOBY_TRAP_GUAMA_01"):
			return 162;
		case joaat("WS_POST_CARAVAN_HORSESHOE"):
			return 362;
		case joaat("WS_WATSON_GRAVE"):
			return 69;
		case joaat("WS_SISIKA_WINDOW_COVER"):
			return 361;
		case joaat("WS_MP_SDS_WELL_COVER"):
			return 360;
		case joaat("WS_VANHORN_BOATS_FOUND"):
			return 375;
		case joaat("WS_MP_STRAWBERRY_DR_MILO"):
			return 213;
		case joaat("WS_NEW_MRK_04_HIDEFORIND3"):
			return 267;
		case joaat("WS_DISCO_DEAD_SNAKE"):
			return 30;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			return 244;
		case joaat("WS_VALENTINE_LOCKDOWN_DOCTOR"):
			return 132;
		case joaat("WS_VALENTINE_WAGON"):
			return 121;
		case joaat("WS_CLM_DOMINOES_LANTERN"):
			return 273;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			return 204;
		case joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT"):
			return 139;
		case joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS"):
			return 149;
		case joaat("WS_PRONGHORN_RANCH_BURNED"):
			return 177;
		case joaat("WS_RID_CHIMNEY_OFF"):
			return 309;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			return 97;
		case -144653976:
			return 219;
		case joaat("WS_SHOWS_SD_VAUD_03"):
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"):
			return 28;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02_END"):
			return 167;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON_DOORS"):
			return 145;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON"):
			return 154;
		case joaat("WS_TRAINROB1_SHOOTOUT"):
			return 373;
		case joaat("WS_VALENTINE_GENSTORE_ACTIVE"):
			return 258;
		case joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS"):
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case joaat("WS_SHOWS_SD_MAG_05"):
			return 24;
		case joaat("WS_FIN2_EXT_P19_FRAMES"):
			return 290;
		case joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3"):
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 153;
		case joaat("WS_GRAVE_HOSEA"):
			return 297;
		case joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING"):
			return 248;
		case joaat("WS_VALENTINE_SHOOTOUT_START"):
			return 237;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			return 74;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			return 243;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case joaat("WS_MICAH_HIDEOUT"):
			return 291;
		case joaat("WS_UTP1_COVER01"):
			return 101;
		case joaat("WS_STD_DOCTORS_OFFICE"):
			return 114;
		case joaat("WS_HIDEOUT_SMUGGLER_DOCKS_INACTIVE"):
			return 86;
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
			return 183;
		case 171107021:
			return 381;
		case joaat("WS_ROANOKE_BOOBY_TRAP_HOLES"):
			return 283;
		case joaat("WS_SHOWS_VAL_MAG_03"):
			return 16;
		case joaat("WS_SHOWS_VAL_MAG_01"):
			return 14;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			return 241;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			return 62;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS"):
			return 142;
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case joaat("WS_CRN1_BURNT_BARN"):
			return 286;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01"):
			return 164;
		case joaat("WS_CARMODY_DELL_ABANDONED"):
			return 54;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"):
			return 81;
		case joaat("WS_MICAH_CAMP"):
			return 95;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			return 119;
		case joaat("WS_SHB_DOMINOES_LANTERN"):
			return 275;
		case joaat("WS_VALENTINE_LOCKDOWN_RENT"):
			return 138;
		case joaat("WS_MP_BLACKWATER"):
			return 216;
		case joaat("WS_SADIE_BEDROLL"):
			return 198;
		case joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE"):
			return 133;
		case joaat("WS_RHODES_GUNSMITH_FIRE_OFF"):
			return 66;
		case joaat("WS_FIN1_BURNT_LADDER"):
			return 287;
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
			return 47;
		case joaat("WS_FUSSAR2_LIGHTING"):
			return 281;
		case joaat("WS_GUARMA_EXISTS"):
			return 188;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS"):
			return 90;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			return 34;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"):
			return 173;
		case joaat("WS_GRAVE_EAGLE_FLIES"):
			return 293;
		case joaat("WS_SHOWS_VAL_MAG_04"):
			return 17;
		case joaat("WS_HSO_TABLE_SEATS"):
			return 303;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			return 42;
		case joaat("WS_SHOWS_VAL_MAG_02"):
			return 15;
		case joaat("WS_TANNERSREACH_BURNT"):
			return 199;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			return 108;
		case joaat("WS_DROUGHT_ENDED"):
			return 31;
		case joaat("WS_HSO_DOMINOES_SEATS"):
			return 302;
		case joaat("WS_NEW_COM_BANK_POST"):
			return 227;
		case joaat("WS_COLTER_STAGE_MP"):
			return 52;
		case joaat("WS_RE_MUC_ROCK_SCENE"):
			return 231;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			return 2;
		case joaat("WS_RE_MUC_KNIFE_SCENE"):
			return 232;
		case joaat("WS_RHODES_LOCKDOWN_SALOON"):
			return 148;
		case joaat("WS_COOTS_GRAVE_2_DUG"):
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE"):
			return 246;
		case joaat("WS_SAINT_DENIS_DOCK_TRAINS"):
			return 279;
		case joaat("WS_MP_FETCH_OTH_MAC"):
			return 355;
		case joaat("WS_BLACKWATER_BURIAL"):
			return 159;
		case joaat("WS_STD_GAMBLING_DEN"):
			return 115;
		case joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES"):
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
			return 179;
		case joaat("WS_TAXIDERMY_MARITAL"):
			return 77;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			return 128;
		case joaat("WS_GRAVE_KIERAN"):
			return 294;
		case 657241756:
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case 682839815:
			return 327;
		case joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH"):
			return 134;
		case joaat("WS_WAR_VETERAN_FISH_TROPHY_ON"):
			return 207;
		case joaat("WS_BEECHERS_SHACK"):
			return 178;
		case joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR"):
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
			return 48;
		case joaat("WS_FOR_MY_ART_NOBARPROPS"):
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case joaat("WS_SHOWS_VAL_MAG_05"):
			return 18;
		case joaat("WS_ANNES_SETTLERS_CLOSED_OFF"):
			return 240;
		case joaat("WS_RE_SP_SAVAGEWARNING_02"):
			return 285;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case joaat("WS_MP_HIDEOUT_MANTECA_FALLS"):
			return 335;
		case joaat("WS_NEW_COM_BANK_START"):
			return 224;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			return 298;
		case joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS"):
			return 247;
		case joaat("WS_SHOWS_VAL_MAG_CLOSED"):
			return 19;
		case joaat("WS_PAI_CHIMNEY_OFF"):
			return 310;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			return 7;
		case joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR"):
			return 122;
		case joaat("WS_RE_SP_SAVAGEWARNING_01"):
			return 284;
		case joaat("WS_NBX_ART_RC_MASON_PASSED"):
			return 110;
		case 1067254646:
			return 319;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON"):
			return 144;
		case joaat("WS_SHOWS_SD_MOV_05"):
			return 27;
		case joaat("WS_VALENTINE_RES_CURTAINS_CLOSED"):
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case joaat("WS_VALENTINE_LOCKDOWN_HOTEL"):
			return 135;
		case joaat("WS_RHODES_BURIAL"):
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case joaat("WS_MFR_CHIMNEY_OFF"):
			return 307;
		case joaat("WS_CINCO_TORRES_DOOR_INTACT"):
			return 38;
		case joaat("WS_RE_MUC_TREE_SCENE"):
			return 230;
		case joaat("WS_BEECHERS_BARN_FINISHED"):
			return 184;
		case joaat("WS_HSO_DOMINOES_LANTERN"):
			return 274;
		case joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"):
			return 85;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"):
			return 169;
		case joaat("WS_HORSESHOE_BARREL"):
			return 160;
		case 1216784232:
			return 269;
		case joaat("WS_PHONOGRAPH_BOAT_FOUND"):
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case joaat("WS_VALENTINE_BUTCHER_ACTIVE"):
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case joaat("WS_SHOWS_SD_MAG_01"):
			return 20;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			return 75;
		case joaat("WS_ON_THE_RUN_SHACK_REWARD_FOUND"):
			return 271;
		case joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED"):
			return 263;
		case joaat("WS_HIDEOUT_FORT_MERCER_INACTIVE"):
			return 82;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			return 223;
		case joaat("WS_STRAWBERRY_JAIL_IGNORE"):
			return 210;
		case joaat("WS_HUNTING_2_ABANDONED_CAMP"):
			return 217;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02"):
			return 166;
		case joaat("WS_TRELAWNY_1_HOUSE_TRASHED"):
			return 211;
		case 1446719356:
			return 380;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			return 125;
		case joaat("WS_SHADY_BELLE_EXTRA_BLOCKER"):
			return 120;
		case joaat("WS_SEAN_1_CAMP"):
			return 367;
		case joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR"):
			return 50;
		case joaat("WS_NATIVE_SON2_TREE_FALLEN"):
			return 102;
		case joaat("WS_GRAVE_SEAN"):
			return 295;
		case joaat("WS_MP_VALENTINE_AMBIENT"):
			return 212;
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			return 5;
		case joaat("WS_VALENTINE_AUCTION_GATES_OPEN"):
			return 72;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			return 35;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"):
			return 168;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			return 206;
		case joaat("WS_SAINT_DENIS_DOCK_BOATS"):
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case joaat("WS_BOOBY_TRAP_GUAMA_01_END"):
			return 163;
		case joaat("WS_NEW_GAR_BRON_MPCOVER_01"):
			return 359;
		case joaat("WS_COOTS_GRAVE_1_DUG"):
			return 304;
		case joaat("WS_POST_CARAVAN_BEAVERHOLLOW"):
			return 365;
		case joaat("WS_SHOWS_SD_VAUD_01"):
			return 9;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			return 107;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			return 118;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			return 127;
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
			return 181;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON"):
			return 150;
		case joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4"):
			return 93;
		case 1672143046:
			return 383;
		case joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"):
			return 68;
		case joaat("WS_MP_HIDEOUT_MOSSY_FLATS"):
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE"):
			return 137;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			return 94;
		case joaat("WS_POST_CARAVAN_CLEMENS"):
			return 363;
		case 1804403874:
			return 382;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			return 200;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			return 99;
		case joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"):
			return 196;
		case joaat("WS_VALENTINE_POKER_LESS_CHAIRS"):
			return 70;
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			return 51;
		case joaat("WS_MICAH_CAMP_POST"):
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case joaat("WS_CLEMENS_POINT_BARREL"):
			return 161;
		case joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR"):
			return 229;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			return 203;
		case joaat("WS_POISONED_WELL_BLOCKED_ENTRY"):
			return 371;
		case joaat("WS_HIDEOUT_SIX_POINT_TABLE"):
			return 91;
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			return 180;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			return 6;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			return 190;
		case joaat("WS_GUARMA3_GUARDS_DISABLED"):
			return 193;
		case joaat("WS_NATIVE1_COH_DESTROYED"):
			return 369;
		case joaat("WS_MAC_CHIMNEY_OFF"):
			return 308;
		case joaat("WS_RHODES_SALOON2_GRAVE"):
			return 63;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			return 299;
		case joaat("WS_COOTS_GRAVE_FILLED_IN"):
			return 306;
		case joaat("WS_FUSSAR2_NOCLIMB"):
			return 282;
		case joaat("WS_CRASHED_BOAT"):
			return 39;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED"):
			return 255;
		case joaat("WS_HIDEOUT_THIEVES_LANDING_INACTIVE"):
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_917(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_918(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_919(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return 2;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return 16;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return 4;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return 8;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return 32;
		default:
			break;
	}
	return 0;
}

void func_920(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= Global_1946054.f_2657.f_26.f_6 & iParam0;
}

void func_921(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_922(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1101((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1101(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_100(Global_1898164.f_1[0 /*5*/]))
	{
		func_324(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_923(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 -= Global_1900383[iParam0 /*45*/].f_24 & iParam1;
}

void func_924()
{
	if (func_1102(0))
	{
		func_1103(0);
	}
	if (func_1102(1))
	{
		func_1103(1);
	}
	if (func_1102(5))
	{
		func_1103(5);
	}
	if (func_1102(6))
	{
		func_1104(6);
	}
}

int func_925()
{
	return Global_1894899.f_2;
}

bool func_926(bool bParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(bParam0, uParam1);
}

bool func_927(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_928(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
}

int func_929(bool bParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) /*3*/ };
	}
	vVar6 = { vParam1 - vVar0 /*3*/ };
	fVar9 = func_1105(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0.0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_1106(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_930(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(bParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_238(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_169(iVar2)))
		{
			if (func_169(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_931(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_892(iParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 0.833f)
	{
		return func_1107(iParam0);
	}
	return func_892(iParam0);
}

float func_932(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_933()
{
	int iVar0;
	int iVar1;

	iVar0 = func_453(func_452());
	iVar1 = func_651(func_452());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_934(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(bParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

void func_935(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= *iParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= *iParam0 & (1 << 31);
	}
}

void func_936(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= *iParam0 & 62914560;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_937(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_653(*iParam0);
	iVar1 = func_652(*iParam0);
	if (iParam1 < 1 || iParam1 > func_655(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= *iParam0 & 4063232;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_938(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= *iParam0 & 126976;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_939(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 4032;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_940(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 63;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_941(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_942(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		func_941(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		fVar8 = func_1029(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		if (!iParam8 & (1 << 21) != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & (1 << 23) != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_48(&(iParam1->f_13));
		}
		if (func_1108(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1109(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_942(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_956(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							func_1110(*bParam0, 1, 1);
						}
					}
					else if (func_1111(iParam1, 22))
					{
						func_1110(*bParam0, 0, 1);
					}
				}
				if (func_1112(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1113(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1114(iParam8);
					if (func_1115(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_1116(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_1117(iParam1, uParam3, fVar8);
					if (func_1118(*bParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_109(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1119(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1112(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1120(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1115(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1113(bParam0, func_1112(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1114(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_109(uParam3, 0, 0, 1, 1);
					}
					func_1121(iParam1, 1);
				}
				func_1117(iParam1, uParam3, fVar8);
				if (func_1119(bParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & (1 << 9) != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & (1 << 10) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_957(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_943(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_1122(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_116(Global_35, *bParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_945(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1123(iParam0, &iVar0, &iVar1);
	if (!func_1124(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1125(iVar0, iVar1);
}

bool func_946(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_947(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_948(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_949(int* iParam0, char* sParam1)
{
	if (func_310(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_948(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_952(iParam0, 1);
}

bool func_950(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_951(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_952(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_953(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_954(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*cParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*cParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], &((cParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_955(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_956(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_957(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	sVar1.f_1 = -1;
	sVar1.f_3 = -1;
	sVar1.f_6 = -1;
	sVar1.f_12 = (1 << 30);
	sVar1.f_16 = 1;
	sVar22.f_2 = 570;
	sVar22.f_3 = 1065353216;
	sVar22.f_4 = -1082130432;
	sVar22.f_9 = 2;
	func_1126(iParam0, uParam1, 1);
	func_109(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

bool func_958(bool bParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1127(bParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_1128(bParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(bParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(bParam0, iParam1, bParam2, false) == 1;
}

bool func_959(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1);
}

bool func_960(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
}

void func_961(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		iVar0 = *bParam0;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		iVar0 = *bParam1;
	}
	else
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -137640087))
	{
		iLocal_489[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_489[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_489[iParam2] = 2;
	}
	else
	{
		iLocal_489[iParam2] = -1;
	}
}

int func_962(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (1 << 30);
		case 1:
			return (1 << 31);
		default:
			break;
	}
	return 0;
}

Vector3 func_963(bool bParam0, int iParam1, bool bParam2)
{
	Vector3 vVar0[24];
	int iVar3;

	strcpy_s(&cVar0, 24, "PB_");
	switch (iParam1)
	{
		case 0:
			strcat_s(&cVar0, 24, "PRE_");
			break;
		case 1:
			strcat_s(&cVar0, 24, "SAW_A_");
			break;
		case 2:
			strcat_s(&cVar0, 24, "SAW_B_");
			break;
		default:
			strcpy_s(&cVar0, 24, "");
			return cVar0;
	}
	strcat_s(&cVar0, 24, "ILO_");
	if (bParam2)
	{
		strcat_s(&cVar0, 24, "NEG_");
	}
	else
	{
		strcat_s(&cVar0, 24, "POS_");
	}
	iVar3 = func_645(*bParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			strcat_s(&cVar0, 24, "N");
			break;
		case 3:
			strcat_s(&cVar0, 24, "L");
			break;
		case 2:
			strcat_s(&cVar0, 24, "R");
			break;
		case 1:
			strcat_s(&cVar0, 24, "BACK");
			break;
	}
	return cVar0;
}

bool func_964(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	strcpy_s(&(uParam0->f_1), 24, sParam1);
	return func_728(uParam0, &(uParam0->f_1));
}

bool func_965(bool bParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0) && bParam5)
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1, sParam2) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(bParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0.0f && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

void func_966(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	PED::_UNRESERVE_AMBIENT_PEDS(iParam0);
	iParam1->f_3 -= iParam0;
}

bool func_967(bool bParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*bParam0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1407243653))
	{
		return false;
	}
	if (func_1129(iParam1))
	{
		return false;
	}
	return true;
}

void func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_691(iParam0);
	if (!func_117(func_1130(iParam0)) && !func_430(iVar0))
	{
		iVar1 = (810 + iParam0);
		bVar2 = func_63(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(bVar2))
		{
			if (!func_117(func_696(iParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(bVar2, 2009491632))
			{
				func_1034(bVar2, joaat("EXIT_TREE_FALL"), 10.0f, 0, "EXIT_TREE_FALL", 1, 129);
				TASK::CLEAR_PED_TASKS(bVar2, true, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(bVar2, false, false);
				func_35(func_696(iParam0));
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar2, 1407243653))
			{
				PED::SET_PED_CONFIG_FLAG(bVar2, 146, false);
				PED::SET_PED_CONFIG_FLAG(bVar2, 234, true);
				PED::SET_PED_CONFIG_FLAG(bVar2, 178, true);
				PED::SET_PED_CONFIG_FLAG(bVar2, 389, false);
				func_35(func_1130(iParam0));
				func_35(func_692(iParam0));
			}
		}
	}
}

bool func_969(int iParam0, bool bParam1)
{
	if (func_429(iParam0))
	{
		return false;
	}
	if (!func_254(*bParam1, 0, 1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(*bParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_970(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_466[iParam0]))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (func_19(64))
	{
		return true;
	}
	if (!func_668(&(vLocal_570[0 /*3*/])))
	{
		return false;
	}
	if (func_774(&(vLocal_570[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (1 << 20);
		case 1:
			return (1 << 21);
		case 2:
			return (1 << 22);
		case 3:
			return (1 << 23);
		default:
			break;
	}
	return 0;
}

bool func_972()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_973()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_974(int iParam0)
{
	bool bVar0[30];
	int iVar31;
	int iVar32;
	bool bVar33;

	iVar31 = 0;
	iVar31 = func_300(&bVar0);
	iVar32 = (810 + iParam0);
	bVar33 = func_63(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(bVar33))
	{
		bVar0[iVar31] = bVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1131(&bVar0, &iParam0, 1);
	}
	else
	{
		func_1132(iLocal_2082[0], &bVar0);
	}
}

Vector3 func_975(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return { 0.0f, 0.0f, 79.04118f };
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return { -15.0f, 0.0f, -60.62425f };
				case 1:
					return { 0.0f, 0.0f, 102.5155f };
				case 2:
					return { 0.0f, 0.0f, 42.34158f };
				case 3:
					return { -15.0f, 0.0f, -84.66344f };
				case 4:
					return { 0.0f, 0.0f, 60.87f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return { 0.0f, 0.0f, 79.04118f };
				case 1:
					return { 0.0f, 0.0f, 121.4344f };
				case 2:
					return { -15.0f, 0.0f, -98.84385f };
				case 3:
					return { -15.0f, 0.0f, -99.77609f };
				case 4:
					return { -15.0f, 0.0f, -99.77609f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return { 0.0f, 0.0f, 84.4f };
				case 1:
					return { -15.0f, 0.0f, 14.6f };
				case 2:
					return { 15.0f, 0.0f, -158.89f };
				case 3:
					return { 0.0f, 0.0f, 77.9f };
				case 4:
					return { 0.0f, 0.0f, 84.4f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_976(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_19(64))
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0.0f, 1.926056f, 1.0f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180.0f, 2.334879f, 1.0f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0.0f, 1.926056f, 1.0f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_977(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_63(iParam0);
	iVar1 = func_1133(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_691(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		if ((func_166(64) && !PED::IS_PED_USING_SCENARIO_HASH(bVar0, func_693())) && !func_466(iVar2))
		{
			if (!func_266(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_467(&iVar2);
			TASK::CLEAR_PED_TASKS(bVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_478[iVar1]))
			{
				TASK::TASK_USE_SCENARIO_POINT(0, iLocal_478[iVar1], 0, 0, true, false, 0, false, -1.0f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, func_1134(iVar1), 5.0f, 0, false, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
			TASK::_TASK_PERFORM_SEQUENCE_2(bVar0, iLocal_196, 1.0f, 3.0f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(bVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_77(iParam0, 1);
			func_474(iVar2, 0);
		}
	}
}

void func_978(bool bParam0, int iParam1)
{
	Vector3 vVar0;

	if (func_714(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop"))
	{
		func_715(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop");
	}
	func_1136(bParam0, iParam1);
	if (iLocal_191[iParam1] < 3)
	{
		if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 330, true);
			vVar0 = { func_1139(bParam0, func_1137(iParam1), func_1138(iParam1), iLocal_486[iParam1], 1) /*3*/ };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				TASK::TASK_PLAY_ANIM(*bParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2.0f, -2.0f, -1, 16, 0.0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
		else if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			vVar0 = { func_1139(bParam0, func_1137(iParam1), func_1138(iParam1), iLocal_486[iParam1], 0) /*3*/ };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				TASK::TASK_PLAY_ANIM(*bParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2.0f, -2.0f, -1, 16, 0.0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
	}
	switch (iLocal_191[iParam1])
	{
		case 0:
			iLocal_191[iParam1] = 1;
			break;
		case 1:
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(sLocal_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_492[func_1135(iParam1) /*7*/], 1.0f);
				func_643(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_492[func_1135(iParam1) /*7*/], func_1140(iParam1), true))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_492[func_1135(iParam1) /*7*/], -1.0f);
				func_643(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 2;
			}
			break;
		case 2:
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(sLocal_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, -1064143891))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_492[func_1135(iParam1) /*7*/], 1.0f);
				func_643(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_492[func_1135(iParam1) /*7*/], func_1141(iParam1), true))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_492[func_1135(iParam1) /*7*/], 1.0f);
				func_643(&(sLocal_492[func_1135(iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_191[iParam1] = 1;
			}
			break;
		case 3:
			if (!PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()) && !PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(*bParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(sLocal_614.f_690[13 /*12*/].f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_614.f_690[13 /*12*/].f_8, -1064143891))
				{
					iLocal_191[iParam1] = 4;
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_RATE(sLocal_492[func_1135(iParam1) /*7*/]) > 0.0f)
				{
					iLocal_191[iParam1] = 1;
				}
				else
				{
					iLocal_191[iParam1] = 2;
				}
			}
			break;
		case 4:
			iLocal_191[iParam1] = 5;
			if (iLocal_602 < 14)
			{
				iLocal_602 = 14;
			}
			break;
		case 5:
			break;
	}
}

bool func_979(var uParam0, bool bParam1, int iParam2)
{
	if (!func_254(bParam1, 0, 1))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1142(bParam1))
	{
		return false;
	}
	if (func_366(bParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_286(bParam1, iParam2))
	{
		return false;
	}
	if (func_1143(bParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

void func_980(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_981()
{
	return func_1144(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_982()
{
	if (!func_215(Global_35, iLocal_75[10], 1, 0))
	{
		return false;
	}
	if (iLocal_1920 != 5 && iLocal_1920 != 6)
	{
		return false;
	}
	return true;
}

int func_983(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_1145(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1146(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1145(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_984(int iParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return MAP::BLIP_ADD_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HIDDEN"));
	}
	return MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HIDDEN"));
}

void func_985()
{
	bool bVar0;

	bVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_215(bVar0, iLocal_75[4], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.0f);
		}
		else if (func_215(bVar0, iLocal_75[10], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.25f);
		}
		else if (func_215(bVar0, iLocal_75[9], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.501f);
		}
	}
}

void func_986(bool bParam0)
{
	if (bParam0)
	{
		func_1147(4);
	}
	func_1147(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

bool func_987(bool bParam0, bool bParam1, Vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	bool bVar0;
	var uVar1;
	struct<11> /*88*/ sVar2;
	int iVar13;

	if (!func_382(bParam0))
	{
		if (bParam11)
		{
			bVar0 = func_287(7);
		}
		else
		{
			bVar0 = PED::_GET_LAST_MOUNT(bParam0);
		}
		if (!func_522(bVar0, 1) || (!(VOLUME::DOES_VOLUME_EXIST(iParam5) && func_215(bVar0, iParam5, 1, 0)) && func_366(bParam0, bVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*bParam1))
		{
			if (func_627(bVar0) && func_628(bVar0) != 1)
			{
				sVar2.f_10 = 7;
				sVar2.f_1 = 1;
				*bParam1 = func_1148(&uVar1, &sVar2);
				if (!ENTITY::DOES_ENTITY_EXIST(*bParam1))
				{
					*bParam1 = bVar0;
				}
			}
			else
			{
				*bParam1 = bVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*bParam1))
		{
			return true;
		}
		if (func_522(*bParam1, 1))
		{
			if (!(func_131(*bParam1, joaat("SCRIPT_TASK_FLEE")) || func_131(*bParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"))))
			{
				TASK::CLEAR_PED_TASKS(*bParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*bParam1, 0);
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(*bParam1, 2);
				if (!func_243(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*bParam1, vParam2, fParam12, -1, 0.25f, 0, 40000.0f);
				}
				if (VOLUME::DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam5, (1 << 11), 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::TASK_FLEE_COORD(*bParam1, VOLUME::GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_243(vParam2))
				{
					TASK::TASK_FLEE_PED(*bParam1, bParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_988(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(iParam0);
	}
	else
	{
		func_339(iParam0);
	}
}

void func_989(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_1149(uParam0[iVar1], bParam3, bParam4, bParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_1150();
	}
}

void func_990(bool bParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(*bParam0, 301, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*bParam0, 315, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*bParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*bParam0, 178, bParam1);
}

Vector3 func_991(Vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		fVar1 = (1.0f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) /*3*/ };
	}
	else
	{
		vParam0.x = 0.0f;
		vParam0.f_1 = 0.0f;
		vParam0.f_2 = 0.0f;
	}
	return vParam0;
}

float func_992()
{
	return Global_1935436.f_9;
}

void func_993(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

bool func_994(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	return !func_1016(iParam0, 4);
}

void func_995(Vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::BLIP_ADD_FOR_COORDS(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

int func_996(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1016(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; // curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_1017(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_997(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	if (fParam1 <= 0.0f)
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_998(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1016(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1017(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_999(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_243(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0.0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1016(iVar0, 2))
		{
			if (func_828(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1017(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_1000(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_1001(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1043(iVar0, bParam1);
}

bool func_1002(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1003(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1151(iParam0, sParam4, iParam5);
	}
	func_1152(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1004(var uParam0, char* sParam1, char* sParam2)
{
	struct<4> /*32*/ sVar0;
	bool bVar12;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(*uParam0, sParam1, &sVar0, bVar12, sParam2, 2))
	{
		return sVar0.f_3;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_1005(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

void func_1006(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1007(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 5.0f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_382(uParam0->f_1) && !func_131(uParam0->f_1, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"))) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_131(uParam0->f_1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
	{
		return true;
	}
	return false;
}

bool func_1008(var uParam0, int iParam1)
{
	var uVar0;

	if (func_224(&(uParam0->f_5), 4.0f))
	{
		return true;
	}
	if (!func_376(uParam0->f_23, (1 << 14)))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1153(&uVar0))
	{
		return true;
	}
	return false;
}

int func_1009()
{
	int iVar0;

	if (!func_1154())
	{
		return 0;
	}
	if (!func_1155(&iVar0))
	{
		return 0;
	}
	if (!func_1156(iVar0))
	{
		return 0;
	}
	return func_1157(iVar0, 0);
}

bool func_1010(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_224(&(uParam0->f_5), 4.0f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_376(uParam0->f_23, (1 << 9)) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

int func_1011(bool bParam0)
{
	int iVar0;

	iVar0 = func_391(bParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_1012(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 15.0f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, (1 << 12)) && func_131(uParam0->f_1, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
	{
		return false;
	}
	if (func_376(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD"), true) == 8)
	{
		return true;
	}
	return false;
}

void func_1013(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0.0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_1014(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_250(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_250(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2.0f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_1015(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	return (vVar0.z - vParam1.z);
}

bool func_1016(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

void func_1017(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0.0f, 0.0f, 0.0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_1043(iParam0, 1);
	func_1044(iParam0, 1);
	func_1045(iParam0, 128);
}

void func_1018(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
		PED::_0x20C5459379D75C1C(*bParam0, "LOG_WRK_ACC_OBS");
		PED::_0xA3C53CDE922BC78B(*bParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, true);
		PED::_0x20C5459379D75C1C(*bParam0, "");
		PED::_0xA3C53CDE922BC78B(*bParam0, "");
	}
	PED::_0x8AF46E5159A5B620(*bParam0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"));
	func_245(*bParam0, 1, 1);
}

bool func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return true;
	}
	return false;
}

void func_1020(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_948(sLocal_275[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	sLocal_275[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_1021(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_663(&(sLocal_275[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_1022(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

bool func_1023(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_310(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_994(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1024(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTGIVE");
	sLocal_275[iParam0 /*52*/][0 /*17*/].f_14 = 500;
	func_951(&(sLocal_275[iParam0 /*52*/][0 /*17*/]), 1);
	func_947(sLocal_275[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTGIVE", sLocal_275[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	func_71((1 << 19));
}

void func_1025(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1000(1) < iParam0)
	{
		iParam0 = func_1000(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_1082(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_1026(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1084(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_1027(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST_OR_CHEST");
				}
				else
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST");
				}
			}
		}
	}
	return joaat("VISIBLELOOTSLOTREQUEST_ANY");
}

bool func_1028(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = iParam1;
	sVar0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

float func_1029(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1030(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_1158(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 /= 2;
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_1031(int iParam0)
{
	struct<5> /*40*/ sVar0;
	var uVar5;

	if (func_1159())
	{
		return 0;
	}
	if (!func_1160(3, &sVar0))
	{
	}
	sVar0.f_1 = 0;
	sVar0.f_2 = -2017996124;
	sVar0.f_3 = iParam0;
	sVar0.f_4 = 0;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0))
	{
	}
	return uVar5;
}

Vector3 func_1032(int iParam0)
{
	Vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIACT1");
			break;
		case 1:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIBA");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "LCMP_IG_NOG");
			break;
		case 3:
			strcpy_s(&cVar0, 24, "LCMP_IG_NOTI");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIACTB");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "LCMP_IG_NICL");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIACT2");
			break;
		case 7:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIFM");
			break;
		case 8:
			strcpy_s(&cVar0, 24, "LCMP_IG_NOSEE");
			break;
		case 9:
			strcpy_s(&cVar0, 24, "LCMP_IG_NOAIN");
			break;
		case 10:
			strcpy_s(&cVar0, 24, "LCMP_IG_NI2N");
			break;
		case 11:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIFN");
			break;
		case 12:
			strcpy_s(&cVar0, 24, "LCMP_IG_NI2N");
			break;
		case 13:
			strcpy_s(&cVar0, 24, "LCMP_IG_NIFN");
			break;
	}
	return cVar0;
}

void func_1033(char* sParam0, bool bParam1)
{
	func_1161(sParam0, bParam1, 0);
}

bool func_1034(bool bParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_254(bParam0, 0, 1))
	{
		PED::_GIVE_PED_HASH_COMMAND(bParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_GET_IS_PED_COMMAND_HASH_PRESENT(bParam0, iParam1) && (bParam5 || !TASK::_PED_IS_IN_SCENARIO_BASE(bParam0))) && (iParam3 == 0 || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(bParam0) == iParam3))
		{
			return true;
		}
	}
	return false;
}

char* func_1035()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

void func_1036(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_254(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1162(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, (1 << 30), 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::CREATE_VOLUME_CYLINDER(Global_36, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1163(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, true, false);
				}
				func_1162(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, (1 << 30), 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1164(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1164(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1163(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1.0f, -1.0f, -1.0f);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_1037()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C");
}

int func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return (1 << 15);
		case 11:
			return (1 << 16);
		case 12:
			return (1 << 17);
		case 13:
			return (1 << 18);
	}
	return 0;
}

bool func_1039(int iParam0, int iParam1)
{
	struct<10> /*80*/ sVar0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	sVar0.f_9 = joaat("SLOTID_NONE");
	iVar17 = 0;
	if (!func_1165("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1166(&sVar0, iVar16, iVar14, iVar15))
		{
			if (sVar0.f_4 != 0)
			{
				if (func_1041(sVar0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1167(iVar14);
				return iVar17;
			}
		}
	}
}

int func_1040(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		iVar0 = func_1168(iParam0);
		if (!func_1065(iVar0, 0))
		{
			iVar0 = func_1169(iParam0);
		}
	}
	else
	{
		iVar0 = func_1169(iParam0);
	}
	return iVar0;
}

int func_1041(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1170(iParam0);
	}
	if (func_1171(iParam0, iParam1))
	{
		return 0;
	}
	return func_1172(iParam0, iParam1);
}

void func_1042(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_1043(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_1016(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_1044(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_1045(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_1046(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1 != 0;
}

Vector3 func_1047(Vector3 vParam0, float fParam3)
{
	Vector3 vVar0;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f) /*3*/ };
	return { vParam0 + func_1173(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, fParam3)) };
}

Vector3 func_1048(Vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	Vector3 vVar1;

	if (bParam4)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f);
	}
	else
	{
		fVar0 = 0.0f;
	}
	vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 1.0f), fVar0 /*3*/ };
	return vParam0 + func_1173(vVar1, fParam3);
}

bool func_1049(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1050(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1174(iParam0, iParam1))
		{
			if (func_1175(iParam0, iParam1))
			{
				if (func_1176(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1177(iParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_1051(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_1052(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_1053(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

Vector3 func_1054(bool bParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(bParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bParam0, vVar3) /*3*/ };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bParam0, vVar6) /*3*/ };
			vVar0.x = ((vVar3.x + vVar6.x) / 2.0f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2.0f);
			vVar0.f_2 = func_1178(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_243(vVar0))
	{
	}
	return vVar0;
}

int func_1055(bool bParam0, Vector3 vParam1, Vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_980(bParam0);
			bParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, bParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

struct<4> /*32*/ func_1056(bool bParam0)
{
	return func_844(joaat("CHARACTER"), func_1179(), joaat("SLOTID_NONE"), bParam0);
}

int func_1057(int iParam0)
{
	Vector3 vVar0;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_1058(bool bParam0)
{
	int iVar0;

	iVar0 = func_917(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_844(joaat("CARRIED_WEAPONS"), func_1056(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_844(joaat("CARRIED_WEAPONS"), func_1056(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_844(joaat("CARRIED_WEAPONS"), func_1056(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_1059(int iParam0, bool bParam1)
{
	if (func_918(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1069(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1060(bool bParam0)
{
	int iVar0;

	iVar0 = func_917(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_844(joaat("EMOTE_ITEM"), func_1056(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_844(joaat("EMOTE_ITEM"), func_1056(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1061(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_918(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1062(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_917(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1063(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_844(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_917(bParam6), &sVar0, false);
	return iVar4;
}

bool func_1064(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_917(0);
	*uParam1 = { func_844(iParam0, func_1058(0), iParam3, 0) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_1065(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_1066(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1067(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_1068(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_1069(int iParam0)
{
	if (!func_1180(iParam0))
	{
		return false;
	}
	return func_1181(iParam0);
}

bool func_1070()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1071(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_1182(iParam0))
	{
		iVar1 = func_1072(iParam0, iVar0);
		if (iVar1 != 0 && MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			MAP::_MAP_DISCOVERY_SET_ENABLED(iVar1);
		}
		iVar0++;
	}
}

int func_1072(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_1073()
{
	int iVar0;

	iVar0 = func_1183();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1074(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1.0f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2.0f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1029(MISC::ABSF(fVar1) < 1.0f, func_1029(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_1075()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_1076(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1077(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1078()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1079(int iParam0, bool bParam1, int iParam2)
{
	func_1184((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_1185(iParam0);
}

void func_1080(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_1186(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_1081(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1187(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1188(iVar5, &iVar2, &iVar0))
			{
				if (!func_1065(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1189(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_1057(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1073() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_1073() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1190();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> /*16*/ func_1082(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

char* func_1083(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_1084(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	int iVar20;

	sVar0 = -2;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = sParam6;
	sVar0.f_3 = iParam7;
	sVar0.f_0 = 450;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = iParam2;
	sVar13.f_4 = iParam3;
	sVar13.f_5 = iParam4;
	sVar13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&sVar0, &sVar13, bParam8);
	func_1191(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_1085(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1192(iParam0))
	{
		return 0;
	}
	if (!func_1070())
	{
		return 0;
	}
	if (!func_1193(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_1086()
{
	if (func_1194())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_1087(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_1088(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*bParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_1089(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_1090(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_201(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_145(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1091(bool bParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_1092(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_1093(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_1094(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return false;
	}
	return Global_1914319.f_15614[iParam0] & iParam1 != 0;
}

void func_1095(int iParam0)
{
	func_1195(func_911(iParam0));
}

bool func_1096(int iParam0)
{
	if (func_1196(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_1097()
{
	return true;
}

bool func_1098(int iParam0)
{
	if (func_1197())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1099(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40431)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] /*2*/ };
		}
		iVar0++;
	}
	sVar1 = -1;
	if (Global_1058888.f_40431 < 32)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar1 /*2*/ };
	}
	Global_1058888.f_40431--;
	if (Global_1058888.f_40431 < 0)
	{
		Global_1058888.f_40431 = 0;
	}
	return 1;
}

int func_1100(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = (Global_1058888.f_40431 - 1);
	sVar1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 /*2*/] /*2*/ };
		}
		iVar0--;
	}
	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { sVar1 /*2*/ };
	Global_1058888.f_40431++;
	if (Global_1058888.f_40431 > 32)
	{
		Global_1058888.f_40431 = 32;
	}
	return 1;
}

void func_1101(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

bool func_1102(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

void func_1103(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	Vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_1198(iParam0, 64))
	{
		func_1104(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_1069(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_1199(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_1104(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1200(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_1201(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1198(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1202(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	fVar15 = func_1203(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1204(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1.0f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1.0f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1205(Global_1900383[iParam0 /*45*/].f_26);
		func_1206(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == joaat("BLIP_MODIFIER_OBJECTIVE"))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	if (func_529(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		}
		else if (iVar5 == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}
	iVar21 = func_1200(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_1104(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

float func_1105(Vector3 vParam0, Vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		vParam0.x /= fVar0;
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0.0f)
	{
		vParam3.x /= fVar0;
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_1106(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

var func_1107(int iParam0)
{
	return iParam0->f_25;
}

bool func_1108(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1207(iParam0, iParam1))
		{
			if (!func_376(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_109(uParam2, 0, 0, 1, 0);
				func_145(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_376(iParam1->f_10, 1))
		{
			func_1208(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_201(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1109(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5.0f))
	{
		return false;
	}
	strcpy_s(&cVar0, 32, sParam5);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*bParam0);
		bVar4 = func_376(iParam4, 32);
		func_1126(iParam1, uParam2, 0);
		iVar5 = func_1209(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		func_109(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_376(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_376(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_376(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_376(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_376(iParam4, (1 << 23)) || func_376(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_376(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_376(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_1111(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*bParam0, "IloGeneralEvents", 2);
		}
		if (!func_1111(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_376(iParam4, (1 << 26)))
		{
			iVar6 |= (1 << 14);
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1210(bParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (func_376(iParam4, (1 << 28)))
			{
				iVar8 = func_1211(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1212(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_1111(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (func_376(iParam4, 2) || func_376(iParam4, 16))
			{
				func_1110(*bParam0, 1, 1);
			}
			else
			{
				func_1110(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1110(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_1111(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_1112(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_1213(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1113(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_1214(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_376(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1114(int iParam0)
{
	if (func_376(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_376(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_376(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_1115(bool bParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_1000(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_556(Global_35)) || func_554(Global_35)) || func_552(Global_35));
	fVar12 = -1.0f;
	if (func_668(&(iParam1->f_13)))
	{
		fVar12 = func_383(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_310((uParam4[iVar0 /*17*/])->f_6);
		func_1215(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1216(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1217(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_109(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1218(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1126(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_1219(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1218(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_1220(iParam1, fParam2);
	}
	return bVar5;
}

void func_1116(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_1117(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1221(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1220(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1118(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_1222(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1223(iParam1, 0);
				func_1126(iParam1, uParam2, func_1111(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1119(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_48(&(iParam1->f_18));
			return false;
		}
		else if (func_668(&(iParam1->f_18)))
		{
			func_268(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_668(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_224(&(iParam1->f_18), fParam2);
	return true;
}

void func_1120(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1215(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1121(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1122(int* iParam0)
{
	if (func_1111(iParam0, 0))
	{
		if (func_1224(iParam0))
		{
			func_1121(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1124(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1225(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1226(iParam0))
	{
		return false;
	}
	if (func_1227(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_1228(iParam0, 1)) || func_851((1 << 15)))
	{
		if (!func_1228(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_1229())
	{
		return false;
	}
	return true;
}

void func_1125(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_1126(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_311(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_78(iParam0, 0);
		}
	}
}

bool func_1127(bool bParam0, int iParam1, float fParam2)
{
	return func_1091(bParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_1128(bool bParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_1129(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		if (iParam0 == iLocal_2130[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

void func_1131(bool bParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_163(sLocal_1617.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	bVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), func_437(*iParam1), -1.0f, 100.0f, 100.0f, -1.0f, (30.0f + 5.0f), -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(bVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			bVar7 = func_63(iVar3);
			if (func_286(bVar7, bParam0))
			{
			}
			else
			{
				if ((func_241(iVar3, 0) && !ENTITY::IS_ENTITY_DEAD(bVar7)) && PED::IS_PED_HUMAN(bVar7))
				{
					func_244(iVar3, 0, 1, 0, 1, 1);
					func_245(bVar7, 1, 1);
					if ((bParam2 && func_215(bVar7, iLocal_75[2], 1, 0)) && func_254(bVar7, 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(bVar7, 168, true);
						func_1230(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar7, false, true);
						PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar7, func_436(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
						TASK::TASK_FLEE_COORD(0, func_436(*iParam1), 4, 1, 30.0f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_437(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
						TASK::TASK_PERFORM_SEQUENCE(bVar7, iLocal_196);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					}
					else
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
						fVar2 = func_366(bVar7, bVar8, 1, 1);
						if (func_382(bVar7))
						{
							fVar1 = 0.0f;
						}
						else if (fVar2 < 35.0f)
						{
							fVar1 = 1.0f;
						}
						else if (fVar2 < 65.0f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120.0f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0.0f;
						}
						if (fVar0 < fVar1 && func_254(bVar7, 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(bVar7, 168, true);
							func_1230(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(bVar7))
							{
								TASK::REACT_LOOK_AT(bVar7, bVar8, 1, 1, 10.0f, 1, 0, 0, 0);
							}
							else
							{
								PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar7, func_436(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_437(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
								TASK::TASK_PERFORM_SEQUENCE(bVar7, iLocal_196);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
							}
							PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(bVar7, func_1231(), bVar7, -1, 4);
						}
					}
				}
				if (iLocal_2146 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}
}

void func_1132(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	float fVar7[15];
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;

	func_163(sLocal_1617.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	bVar6 = func_63(iVar5);
	if (ENTITY::IS_ENTITY_DEAD(bVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!func_157(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			bVar27 = func_63(iVar2);
			if (func_286(bVar27, bParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_241(iVar2, 0) && !ENTITY::IS_ENTITY_DEAD(bVar27)) && PED::IS_PED_HUMAN(bVar27))
				{
					func_244(iVar2, 0, 1, 0, 1, 1);
					func_245(bVar27, 1, 1);
					fVar23 = func_366(bVar27, bVar6, 1, 1);
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
					if (func_382(bVar27))
					{
						fVar1 = 0.0f;
					}
					else if (fVar23 < 35.0f)
					{
						fVar1 = 1.0f;
					}
					else if (fVar23 < 65.0f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120.0f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200.0f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0.0f;
					}
					if (iLocal_2146 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1232(&fVar7);
						}
						else
						{
							fVar1 = -1.0f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(bVar27))
					{
						func_1230(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_2146] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1233(813))
				{
					iVar26 = func_1232(&fVar7);
					func_1230(813, iVar26);
					func_474(func_691(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_2146)
				{
					bVar27 = func_63(iLocal_2130[iVar28]);
					PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bVar27, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2, false);
					TASK::CLEAR_PED_TASKS(bVar27, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_196);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1.0f, -1.0f, -1.0f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_196);
					TASK::_TASK_PERFORM_SEQUENCE_2(bVar27, iLocal_196, 0.0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_196);
					PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(bVar27, func_1231(), iParam0, -1, 4);
					PED::SET_PED_CONFIG_FLAG(bVar27, 178, false);
					PED::SET_PED_CONFIG_FLAG(bVar27, 130, true);
					func_1018(&bVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

int func_1133(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_1134(int iParam0)
{
	if (iParam0 == 0)
	{
		return { -1420.47f, -237.82f, 99.06f };
	}
	if (iParam0 == 1)
	{
		return { -1419.73f, -237.87f, 99.02f };
	}
	if (iParam0 == 2)
	{
		return { -1419.2f, -237.95f, 98.99f };
	}
	if (iParam0 == 3)
	{
		return { -1418.34f, -238.03f, 98.95f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_1136(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1234(bParam0);
			break;
		case 1:
			func_1235(bParam0);
			break;
	}
}

char* func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POSE_";
		case 1:
			return "FOREMAN_";
		default:
			break;
	}
	return "";
}

char* func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PED01";
		case 1:
			return "PED02";
		default:
			break;
	}
	return "";
}

Vector3 func_1139(bool bParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	Vector3 vVar0[24];
	int iVar3;

	strcpy_s(&cVar0, 24, sParam1);
	switch (iParam3)
	{
		case 0:
			strcat_s(&cVar0, 24, "A_");
			break;
		case 1:
			strcat_s(&cVar0, 24, "B_");
			break;
		case 2:
			strcat_s(&cVar0, 24, "C_");
			break;
		case 3:
			strcat_s(&cVar0, 24, "D_");
			break;
		default:
			strcpy_s(&cVar0, 24, "");
			return cVar0;
	}
	if (bParam4)
	{
		strcat_s(&cVar0, 24, "NEG_");
	}
	else
	{
		strcat_s(&cVar0, 24, "POS_");
	}
	iVar3 = func_645(*bParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			strcat_s(&cVar0, 24, "N_");
			break;
		case 3:
			strcat_s(&cVar0, 24, "L_");
			break;
		case 2:
			strcat_s(&cVar0, 24, "R_");
			break;
		case 1:
			iVar3 = func_645(*bParam0, Global_35, 1.0f);
			switch (iVar3)
			{
				case 3:
					strcat_s(&cVar0, 24, "L_");
					break;
				case 2:
					strcat_s(&cVar0, 24, "R_");
					break;
			}
			break;
	}
	strcat_s(&cVar0, 24, sParam2);
	return cVar0;
}

char* func_1140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DROP_LOOP";
		case 1:
			return "DROP_LOOP";
		default:
			break;
	}
	return "";
}

char* func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LIFT_LOOP";
		case 1:
			return "idle_loop";
		default:
			break;
	}
	return "";
}

bool func_1142(bool bParam0)
{
	if (func_934(bParam0))
	{
		return false;
	}
	return true;
}

bool func_1143(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]))
		{
			if (func_385((*uParam1)[iVar0], bParam0, 1) < 225.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1144(int iParam0)
{
	return iParam0 != 0;
}

int func_1145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&sVar0, &sVar13, bParam5);
	return iVar15;
}

char* func_1146(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_1236(sParam1));
}

void func_1147(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

int func_1148(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_560(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_243(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1070();
	if (*uParam1)
	{
		if (bVar0 && !func_208(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_1237(5))
			{
				func_1238(5);
				func_1239(5);
				func_1240(0);
				func_1241(0);
			}
		}
	}
	if (func_1242(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208(Global_1835011[37 /*74*/].f_1, 1)) && !func_208(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208(Global_1835011[43 /*74*/].f_1, 1)) && !func_208(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_287(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1102(iVar1))
	{
		bVar3 = true;
		if (func_1243(iVar1))
		{
			bVar4 = true;
		}
		if (func_1244(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_1245(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1237(0) && func_1237(1))
			{
				func_1246(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1247())
			{
				func_1248();
			}
			func_1240(0);
			func_1241(0);
			func_1249(uParam1->f_6);
		}
	}
	if (!func_1102(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1250(uParam1->f_10) == 0 || func_1251(uParam1->f_10) == 0) || func_1252(uParam1->f_10) == 0)
			{
				func_1253(uParam1->f_10);
			}
			func_1254(uParam1->f_10);
			func_1255(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_287(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1102(iVar1))
	{
		bVar3 = true;
		if (func_1243(iVar1))
		{
			bVar4 = true;
		}
		if (func_1244(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_243(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_1256(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			sVar8 = { func_1257(uParam1->f_10) /*2*/ };
			sVar10 = { func_1258() /*6*/ };
			func_1259(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_632(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1260(uParam1->f_10);
		if (uParam1->f_2 && !func_243(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_630(uParam1->f_10);
	if (func_632(uParam1->f_10))
	{
		iVar16 = func_631(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_1149(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (((PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, bParam6, bParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, bParam1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, bParam2);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, bParam3);
		return true;
	}
	if (bParam4)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, false);
	}
	return false;
}

void func_1150()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_1151(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1084(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1152(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1261())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_1084(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_1262(iVar0);
			func_1263(iVar0, 0, 0);
		}
		func_1084(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_854(func_1082(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_1153(int iParam0)
{
	if (-1829635046 == func_1264(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_1155(iParam0))
		{
			return true;
		}
	}
	else if (func_1265(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		if (func_1155(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1154()
{
	return Global_1946054.f_2792;
}

bool func_1155(int iParam0)
{
	if (func_1265(joaat("CI_CATEGORY_WARDROBE_MASK"), iParam0))
	{
		return true;
	}
	if (func_1265(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1156(int iParam0)
{
	if (func_1266())
	{
		return false;
	}
	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	if (!func_1267(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_1157(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1268(iParam0);
	if (func_1269(iParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1153(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1270();
			}
			else
			{
				iVar0 = func_1271();
			}
		}
		else if (func_248(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1272();
		}
		else
		{
			iVar0 = func_1273();
		}
	}
	else if (func_1155(&iVar2))
	{
		if (func_1269(iVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_1270();
		}
		else
		{
			iVar0 = func_1271();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1272();
	}
	else
	{
		iVar0 = func_1273();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

void func_1158(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_1274(iParam0, iParam1, bParam2);
}

bool func_1159()
{
	return false;
}

bool func_1160(int iParam0, var uParam1)
{
	if (!func_1275(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

void func_1161(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

void func_1162(int iParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> /*56*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1.0f);
		sVar0.f_1 = 1050253722;
		sVar0.f_2 = 1067030938;
		sVar0.f_5 = -1082130432;
		sVar0.f_6 = -1082130432;
		sVar0.f_3 = iParam16;
		sVar0.f_1 = iParam14;
		sVar0.f_2 = iParam15;
		sVar0.f_4 = iParam17;
		sVar0.f_5 = iParam20;
		sVar0.f_6 = iParam21;
		if (bParam8)
		{
			sVar0.f_0 = 0;
		}
		else
		{
			sVar0.f_0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &sVar0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, bParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1276(iParam0, bParam1, iParam18);
	}
}

bool func_1163(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_39))
	{
		return true;
	}
	if (func_282(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_215(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_215(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_1277(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

bool func_1165(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_917(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_1167(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1168(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1278(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1279(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1169(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_1280(iVar1);
		}
	}
	return iVar0;
}

int func_1170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_1171(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1269(iParam0, joaat("CI_TAG_ITEM_ALCOHOL")))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1172(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_911(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1160(6, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = -815325344;
	sVar0.f_3 = func_1281(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		iVar6 = iParam0;
		sVar0.f_2 = 549615901;
		sVar0.f_3 = iVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1173(Vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0.0f)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		return vParam0 * FloatToVector((fParam3 / fVar0));
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_1174(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_1175(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_1176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1174(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_METAPED_OUTFIT_LOADED(iVar1);
}

void func_1177(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_1178(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> /*32*/ func_1179()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_1180(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_1182(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_1183()
{
	return Global_40.f_11095.f_35;
}

void func_1184(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_1282(bParam1);
	}
}

void func_1185(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_1186(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1187(int iParam0)
{
	Vector3 vVar0;

	if (!func_1160(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_1188(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_1160(23, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -57097983;
		sVar0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			sVar0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1189(int iParam0)
{
	return iParam0;
}

int func_1190()
{
	int iVar0;

	iVar0 = func_1073();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_1191(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_1192(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1193(int iParam0, int iParam1, int iParam2)
{
	if (!func_1192(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

bool func_1194()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1195(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

bool func_1196(int iParam0)
{
	return iParam0 != 0;
}

bool func_1197()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

bool func_1198(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_24 & iParam1 != 0;
}

void func_1199(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_1284(func_1283(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_1285())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1075();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1200(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_1201(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_1284(func_1283(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1285())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1075())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1202(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_1203(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_1250(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_1200(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1200(iParam0) + 1;
	fVar6 = func_1286(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1178(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1205(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
}

void func_1206(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_1207(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1287((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1208(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1221(uParam0[iVar0 /*17*/]))
		{
			func_951(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1209(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1288(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_310((uParam2[iVar0 /*17*/])->f_6))
		{
			func_951(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_1210(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1289(*bParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_1211(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1212(int* iParam0, int* iParam1)
{
	if (!func_1111(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_951(iParam1, 19);
			func_1223(iParam0, 23);
			func_1290(iParam1, 2);
		}
	}
}

bool func_1213(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1291(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_1292(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_1214(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1288(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_1215(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1221(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1288(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1216(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1293(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_994(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_810(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_810(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1294(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1217(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_753(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1295(iParam1, 1))
	{
		func_1296(iParam1, 1);
		return true;
	}
	return false;
}

void func_1218(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_662(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1219(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0.0f)
		{
			return true;
		}
	}
	return false;
}

void func_1220(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_1221(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1223(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_1224(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1225(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_1226(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1228(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1228(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1228(iParam0, (1 << 16)) && !func_1228(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1228(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1228(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1228(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_1229()
{
	return Global_1905944.f_5694;
}

void func_1230(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2130[iParam1] = iParam0;
	}
	else
	{
		iLocal_2130[iLocal_2146] = iParam0;
		iLocal_2146++;
	}
}

char* func_1231()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
			default:
				break;
	}
}

int func_1232(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 0.0f;
	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		if ((*fParam0)[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = (*fParam0)[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1233(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_2146)
	{
		if (iLocal_2130[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1234(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1428722195))
		{
			iLocal_486[0] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1738422014))
		{
			iLocal_486[0] = 1;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, -1327707782))
		{
			iLocal_486[0] = 2;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, -1022661161))
		{
			iLocal_486[0] = 3;
		}
		else
		{
			iLocal_486[0] = -1;
		}
	}
}

void func_1235(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1428722195))
		{
			iLocal_486[1] = 0;
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1738422014))
		{
			iLocal_486[1] = 1;
		}
		else
		{
			iLocal_486[1] = -1;
		}
	}
}

char* func_1236(char* sParam0)
{
	return sParam0;
}

bool func_1237(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1252(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1238(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1102(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_1297(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_1298(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1299(iParam0, 0);
	func_633(iParam0);
}

void func_1239(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	strcpy_s(&(Global_40.f_1095.f_1[iParam0 /*436*/]), 64, "");
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_1300(&sVar0);
	func_1301(iParam0, sVar0);
	func_1302(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_1303(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_1304(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_1305(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1306(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1307(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_1308(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_1309(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_1310(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0.0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_31 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_34 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_1240(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1241(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1242(Vector3 vParam0)
{
	return func_1311(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_1243(int iParam0)
{
	int iVar0;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1102(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1244(int iParam0)
{
	int iVar0;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1102(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_1245(int iParam0)
{
	int iVar0;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1102(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1246(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_1104(iParam0);
	func_1104(iParam0);
	func_1312(iParam0, iParam1);
	func_1313(iParam0, iParam1);
	func_1314(iParam0, iParam1);
	bVar1 = func_287(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1315(bVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, bVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar1);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == bVar1)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == bVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	bVar3 = func_287(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1315(bVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, bVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar3);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == bVar3)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == bVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_924();
}

bool func_1247()
{
	int iVar0;

	iVar0 = func_1316();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_1248()
{
	int iVar0;

	iVar0 = func_1316();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1317(0);
}

void func_1249(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_1250(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_1251(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_1252(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_1253(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1318(&uVar0, &uVar1, &uVar2);
	func_1319(iParam0, uVar0);
	func_1320(iParam0, uVar1);
	func_1321(iParam0, uVar2);
	func_1322(iParam0, 1);
	func_1323(iParam0, 1);
}

void func_1254(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1324(iParam0, 1);
}

void func_1255(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_1256(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1198(iParam0, 1);
}

struct<2> /*16*/ func_1257(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_1325(iParam0, &uVar2))
	{
	}
	if (!func_1326(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_1258()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1327(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_1327(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_1327(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_1327(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_1327(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_1327(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_1259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_1328(iParam0);
	func_1329(iParam0, uParam1);
	func_1330(iParam0);
	func_1331(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1332(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_1260(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_1261()
{
	if (func_1333())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_1262(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1334((Global_40.f_4283.f_325 + iParam0));
}

void func_1263(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1261())
	{
		func_1084(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_1084(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

int func_1264(int iParam0)
{
	int iVar0;

	iVar0 = func_1336(func_1335(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_1265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1336(func_1335(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_918(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1266()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_1337())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1267(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1057(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_1338(iParam0, 1))
		{
			return false;
		}
	}
	return func_1339(iParam0, 0, bParam2) >= iParam1;
}

int func_1268(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1155(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1269(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_1270()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_1340())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1271()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_1340())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1272()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_1340())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1273()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_1340())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_1274(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 += iParam0 * 1000;
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 /*3*/ };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 += iParam0 * 500;
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_1275(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1276(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(bParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, bParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_1277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	func_986(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

void func_1278(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1279(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return bVar2;
}

int func_1280(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_1278(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_1279(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_1281(int iParam0)
{
	return func_1341(iParam0);
}

void func_1282(bool bParam0)
{
	func_1342(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
}

char* func_1283(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1343(37, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_1343(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_1284(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1344(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1285()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

float func_1286(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

int func_1287(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1288(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_310(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_311(&(iParam1->f_6), 0, 1);
	}
	if (!func_310(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1221(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_996(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_310(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1294(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1345(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1346(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_947(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1345(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_810(iParam1->f_6, 0, 1);
				}
				else
				{
					func_810(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1289(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_1290(int* iParam0, int iParam1)
{
	if (!func_950(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_951(iParam0, 14);
		}
	}
}

bool func_1291(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_1292(int iParam0)
{
	Global_22 |= iParam0;
}

bool func_1293(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1.0f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_1294(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1345(iParam0, 18, 0, 1);
	func_1345(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_1295(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1296(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1297(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_287(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1347(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar2, bVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = sVar2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1298(int iParam0)
{
	if (!func_1348(iParam0))
	{
		return false;
	}
	if (!func_1349())
	{
		return true;
	}
	return false;
}

void func_1299(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_1300(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_1301(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1350(iParam0, sParam1.f_0))
	{
	}
	if (!func_1351(iParam0, sParam1.f_1))
	{
	}
}

void func_1302(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1352(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1303(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1304(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1305(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0.0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_1306(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_1307(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_1308(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_1309(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1310(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1311(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1312(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_1313(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_1314(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_1353(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1353(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1354(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1355(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1356(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1315(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (func_1357(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, bParam0, false);
	PED::_0xB8B6430EAD2D2437(bParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(bParam0, false);
	if (func_627(bParam0))
	{
		iVar3 = func_628(bParam0);
		if (func_1358(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

int func_1316()
{
	return Global_1900383.f_393;
}

void func_1317(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_1318(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_1070())
	{
		if (func_1285())
		{
			bVar0 = false;
			if (!func_208(Global_1835011[15 /*74*/].f_1, 1) && !func_1069(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1359();
				*iParam1 = func_1360();
				*uParam2 = func_1361();
				return 1;
			}
			else
			{
				*uParam0 = func_1362();
				*iParam1 = func_1363();
				*uParam2 = func_1364();
				return 1;
			}
		}
		else if (func_1075())
		{
			if (!func_208(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_1365();
				*iParam1 = func_1366();
				*uParam2 = func_1367();
				return 1;
			}
			else
			{
				*uParam0 = func_1368();
				*iParam1 = func_1369();
				*uParam2 = func_1370();
				return 1;
			}
		}
	}
	else if (func_1285())
	{
		*uParam0 = func_1371();
		*iParam1 = func_1372();
		*uParam2 = func_1373();
		return 1;
	}
	else if (func_1075())
	{
		*uParam0 = func_1374();
		*iParam1 = func_1375();
		*uParam2 = func_1376();
		return 1;
	}
	return 0;
}

void func_1319(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_1320(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_1321(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_1322(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_1323(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1250(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1318(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_1377(iParam1);
	iVar5 = func_287(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

void func_1324(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

bool func_1325(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1353(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_1378(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1326(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1353(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_1378(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1327(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_1379(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_1380() /*4*/ };
	*uParam1 = func_1378(sVar0, iParam0, 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1328(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_1329(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1381(iParam0, *uParam1);
	func_1381(iParam0, uParam1->f_1);
}

void func_1330(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_1331(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1381(iParam0, *uParam1);
	func_1381(iParam0, uParam1->f_1);
	func_1381(iParam0, uParam1->f_2);
	func_1381(iParam0, uParam1->f_3);
	func_1381(iParam0, uParam1->f_4);
	func_1381(iParam0, uParam1->f_5);
}

int func_1332(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_1333()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_1334(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_1082(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_1335(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_1382(iVar0);
}

int func_1336(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_8"):
			return 32;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_9"):
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			return 22;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_3"):
			return 38;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5"):
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6"):
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3"):
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4"):
			return 18;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
			return 29;
		case joaat("MP_COMPONENT_TYPE_END"):
			return 39;
		case joaat("MP_COMPONENT_TYPE_EYEWEAR"):
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7"):
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1"):
			return 34;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			return 10;
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
			return 23;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2"):
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_2"):
			return 13;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1"):
			return 15;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			return 30;
		case joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE"):
			return 14;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			return 37;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2"):
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1337()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 += Global_1946054.f_529[4];
	iVar0 += Global_1946054.f_529[10];
	iVar0 += Global_1946054.f_529[1];
	iVar0 += Global_1946054.f_529[2];
	iVar0 += Global_1946054.f_529[6];
	iVar0 += Global_1946054.f_529[29];
	iVar0 += Global_1946054.f_529[26];
	iVar0 += Global_1946054.f_529[18];
	iVar0 += Global_1946054.f_529[19];
	return iVar0 > 0;
}

bool func_1338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_1383(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_1165("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1166(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_352(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_1167(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1167(iVar1);
	}
	return false;
}

int func_1339(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1057(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_1383(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_1384(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_917(bParam2), iParam0, false);
	return iVar2;
}

int func_1340()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_1385(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1385(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_1341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return joaat("ST_HORSE_FENCE_MP");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

void func_1342(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_1343(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1386(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_1387())
	{
		return func_1386(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_1386(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_1344(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_1345(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_1346(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_1348(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_1349()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_1350(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1353(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_844(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_1388(sVar29, 1);
}

bool func_1351(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1353(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_844(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_1388(sVar29, 1);
}

void func_1352(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_1353(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_1389(iParam0))
	{
		return false;
	}
	iVar0 = func_1354(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_1056(0) /*4*/ };
	if (!func_1390(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_1391(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_1355(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_846(bParam10))
	{
		return func_1392(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_1393(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_917(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1388(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_1356(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_846(bParam9))
	{
		return func_1394(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_1393(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar0, bParam9, 1) || !func_1062(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_1393(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_917(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &sParam0, &sParam4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam0, sVar14.f_10 | iParam8))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam4, sVar0.f_10 | iParam8))
	{
	}
	return true;
}

bool func_1357(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (func_1395(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1358(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1359()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1360()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1361()
{
	return 1;
}

int func_1362()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1363()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1364()
{
	return 1;
}

int func_1365()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_1366()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_1367()
{
	return 2;
}

int func_1368()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1369()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1370()
{
	return 1;
}

int func_1371()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_1372()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_1373()
{
	return 1;
}

int func_1374()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_1375()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_1376()
{
	return 1;
}

void func_1377(int iParam0)
{
	if (func_1396() < iParam0)
	{
		func_1397(iParam0);
	}
}

int func_1378(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_1398(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_1379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_918(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1399(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> /*32*/ func_1380()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_1056(0) /*4*/ };
	return func_844(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_1381(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == joaat("HORSE_EQUIPMENT_MANE_DEFAULT") || iParam1 == joaat("HORSE_EQUIPMENT_TAIL_DEFAULT"))
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, false, false);
}

int func_1382(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1400(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_1383(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1057(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_1269(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_1401(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1384(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_1402(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_1403(&sVar0, func_1058(0));
	}
	if (!func_1404(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1167(iVar18);
	return iVar19;
}

bool func_1385(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_1386(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1387()
{
	return Global_1109000.f_245;
}

bool func_1388(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_846(0))
	{
		return func_1405(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_917(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_1389(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_1354(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_1056(0) /*4*/ };
	if (func_1406(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1390(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_917(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1391(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_917(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1392(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_1393(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1063(sVar0.f_4, sParam4, iParam8, 0);
	iVar15 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(sVar0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + sVar0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			sVar0.f_11 = (iVar15 - iVar14);
		}
	}
	sVar16 = { func_1407(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_1408(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_1393(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1394(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	if (func_1393(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar0, 1, 0) || !func_1062(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_1393(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_1407(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_1407(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_1409(iVar62, joaat("MOVEITEMS"), &sVar28) && func_1409(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_1410(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_1408(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_1408(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_1395(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

int func_1396()
{
	return Global_40.f_1095.f_3135;
}

void func_1397(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1398(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_917(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_1062(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1399(int iParam0)
{
	int iVar0;

	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_918(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1400(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return joaat("MP_COMPONENT_TYPE_HEADWEAR");
		case 11:
			return joaat("MP_COMPONENT_TYPE_EYEWEAR");
		case 12:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		case 13:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_2");
		case 14:
			return joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE");
		case 15:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1");
		case 16:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2");
		case 17:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3");
		case 18:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4");
		case 19:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5");
		case 20:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6");
		case 21:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7");
		case 22:
			return joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE");
		case 23:
			return joaat("MP_COMPONENT_TYPE_HAND_ATTIRE");
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_5");
		case 30:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_6");
		case 31:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_7");
		case 32:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_8");
		case 33:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_9");
		case 34:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1");
		case 35:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2");
		case 36:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_1");
		case 37:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_2");
		case 38:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_3");
		case 39:
			return joaat("MP_COMPONENT_TYPE_END");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1401(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<18> /*144*/ func_1402(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<18> /*144*/ sVar0;

	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = -1;
	sVar0.f_5 = -1;
	sVar0.f_6 = -1;
	sVar0.f_7 = -1;
	sVar0.f_8 = -1;
	sVar0.f_13 = -1;
	sVar0.f_14 = -1;
	sVar0.f_15 = -1;
	sVar0.f_16 = -1;
	sVar0.f_17 = -1;
	if (iParam0 != 0)
	{
		sVar0.f_0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
	{
		sVar0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
	{
		sVar0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
	{
		sVar0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		sVar0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		sVar0.f_5 = iParam5;
	}
	return sVar0;
}

void func_1403(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_1404(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_917(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1405(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return iVar0;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	if (!func_1062(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_1057(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_1411(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_1412(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_1413(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_1414(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_1407(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_1408(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1406(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_917(bParam2), uParam0, iParam1);
}

struct<17> /*136*/ func_1407(var uParam0)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0 = { *uParam0 /*4*/ };
	sVar0.f_4 = { uParam0->f_5 /*4*/ };
	sVar0.f_8 = uParam0->f_4;
	sVar0.f_9 = uParam0->f_11;
	sVar0.f_11 = uParam0->f_9;
	sVar0.f_10 = uParam0->f_10;
	return sVar0;
}

int func_1408(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1409(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1410(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1410(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1410(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1409(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1410(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1415(iParam0, iParam1);
}

struct<29> /*232*/ func_1411(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_917(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1407(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_1412(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1416(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1410(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1410(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1410(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_1413(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar18.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_917(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1407(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_1414(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1417(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1410(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1410(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1410(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1415(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] /*9*/ };
			iVar0++;
		}
	}
	sVar1 = -1;
	sVar1.f_0 = iParam0;
	sVar1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { sVar1 /*9*/ };
}

bool func_1416(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_1417(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

