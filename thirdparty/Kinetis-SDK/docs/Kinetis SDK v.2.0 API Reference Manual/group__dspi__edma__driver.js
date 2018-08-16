var group__dspi__edma__driver =
[
    [ "dspi_master_edma_handle_t", "group__dspi__edma__driver.html#struct__dspi__master__edma__handle", [
      [ "bitsPerFrame", "group__dspi__edma__driver.html#aa34a1dcddc99d31bb4c4accfadd47783", null ],
      [ "command", "group__dspi__edma__driver.html#a22c10d4e7d97332d4e6ee090e4e32765", null ],
      [ "lastCommand", "group__dspi__edma__driver.html#a5273a137fd07ef8e8ff7be54ac7bd9e9", null ],
      [ "fifoSize", "group__dspi__edma__driver.html#a17fb6af3d2eb1786d55837ac3ecea4b0", null ],
      [ "isPcsActiveAfterTransfer", "group__dspi__edma__driver.html#a830c63cbcc569c14ffd322ee87874996", null ],
      [ "isThereExtraByte", "group__dspi__edma__driver.html#aa9f7db1d4c0f02fd60a2f6803332a393", null ],
      [ "txData", "group__dspi__edma__driver.html#a7e6908097dbe0c2d8fd40f029522f638", null ],
      [ "rxData", "group__dspi__edma__driver.html#a69c634adbbb4a6e25ad003f9871049f0", null ],
      [ "remainingSendByteCount", "group__dspi__edma__driver.html#ab09cda4cf72c5e8297bce291d49df013", null ],
      [ "remainingReceiveByteCount", "group__dspi__edma__driver.html#a48631feb535238985bf199600416e012", null ],
      [ "totalByteCount", "group__dspi__edma__driver.html#aa35ecf0103cc554b202106bb291ba6c9", null ],
      [ "rxBuffIfNull", "group__dspi__edma__driver.html#aa643799bbdb7573f03aebee994d2f6ad", null ],
      [ "txBuffIfNull", "group__dspi__edma__driver.html#ad84afee5df924451e262d5dad6a49af3", null ],
      [ "state", "group__dspi__edma__driver.html#ad85b09a5111558b283d1510c7beb2eca", null ],
      [ "callback", "group__dspi__edma__driver.html#a75a3010e997b524460749bb2c7c9cb0d", null ],
      [ "userData", "group__dspi__edma__driver.html#a357a1822ee2a808ad064f1694c20343c", null ],
      [ "edmaRxRegToRxDataHandle", "group__dspi__edma__driver.html#acae59674346e3ffa6354c8c2339a68c9", null ],
      [ "edmaTxDataToIntermediaryHandle", "group__dspi__edma__driver.html#a03e0f1b60617fffdfcecdf1742aa863b", null ],
      [ "edmaIntermediaryToTxRegHandle", "group__dspi__edma__driver.html#a9c2346b6b5ae8035601c1e5b3c8f2627", null ],
      [ "dspiSoftwareTCD", "group__dspi__edma__driver.html#ab7ff7b48e9c83c363b2c7f0e30dc02cc", null ]
    ] ],
    [ "dspi_slave_edma_handle_t", "group__dspi__edma__driver.html#struct__dspi__slave__edma__handle", [
      [ "bitsPerFrame", "group__dspi__edma__driver.html#a384a28e5d1ab2e29bac6b3f707a5d603", null ],
      [ "isThereExtraByte", "group__dspi__edma__driver.html#a7164390c5c4ef5748ff1f2fa2808b707", null ],
      [ "txData", "group__dspi__edma__driver.html#a8c23fb4d0252aad2e01bb7785b7717f0", null ],
      [ "rxData", "group__dspi__edma__driver.html#a2102064061e76991f43380e516c5ba25", null ],
      [ "remainingSendByteCount", "group__dspi__edma__driver.html#affbee7a72ee7a23b356def9017a86c2a", null ],
      [ "remainingReceiveByteCount", "group__dspi__edma__driver.html#a684b12c1432e8db244b968afdcac384a", null ],
      [ "totalByteCount", "group__dspi__edma__driver.html#aca11d9827c1461ccea30f57ca1e04e7a", null ],
      [ "rxBuffIfNull", "group__dspi__edma__driver.html#a6d2fb9fdc22b4bf35998b014a6c4a615", null ],
      [ "txBuffIfNull", "group__dspi__edma__driver.html#a2d755bce48437e4233b8af28b82e9428", null ],
      [ "txLastData", "group__dspi__edma__driver.html#a759f5735f65053b253bfa4157b1d0091", null ],
      [ "state", "group__dspi__edma__driver.html#acacb987daf8b314de1f2782c04adcd6e", null ],
      [ "errorCount", "group__dspi__edma__driver.html#ac9e9bbda63fabac44a957a28ac764384", null ],
      [ "callback", "group__dspi__edma__driver.html#a8b193c0a528ebe0e088b22f22bbeaf6e", null ],
      [ "userData", "group__dspi__edma__driver.html#a10e93fd44fc6c3ff82d06928845f8383", null ],
      [ "edmaRxRegToRxDataHandle", "group__dspi__edma__driver.html#a6cfcd85bfdb451a7b386d69286b926f8", null ],
      [ "edmaTxDataToTxRegHandle", "group__dspi__edma__driver.html#ac16dd98aa569be241ca62ed2952483a1", null ],
      [ "dspiSoftwareTCD", "group__dspi__edma__driver.html#a3f0a322cc985f768cadeaaf968d21b9f", null ]
    ] ],
    [ "dspi_master_edma_transfer_callback_t", "group__dspi__edma__driver.html#gab42b9728993882f00f22e122c73848e4", null ],
    [ "dspi_slave_edma_transfer_callback_t", "group__dspi__edma__driver.html#ga0299bb3ddcaa8ec04c8bac111c24aa0e", null ],
    [ "DSPI_MasterTransferCreateHandleEDMA", "group__dspi__edma__driver.html#ga34794523f1e77cc92a8a1178cbb9b33a", null ],
    [ "DSPI_MasterTransferEDMA", "group__dspi__edma__driver.html#gafe4bb5f502497827871de9b6f4dd4dce", null ],
    [ "DSPI_MasterTransferAbortEDMA", "group__dspi__edma__driver.html#gabe85748d3f4db13f83be48bed5b5cadf", null ],
    [ "DSPI_MasterTransferGetCountEDMA", "group__dspi__edma__driver.html#ga7d684de9e43d68c9cc51034ee8f35dc0", null ],
    [ "DSPI_SlaveTransferCreateHandleEDMA", "group__dspi__edma__driver.html#ga7a145bd365d3d6a94e5dab770e43aaa1", null ],
    [ "DSPI_SlaveTransferEDMA", "group__dspi__edma__driver.html#ga90229acb70adacc78d8053353593e33d", null ],
    [ "DSPI_SlaveTransferAbortEDMA", "group__dspi__edma__driver.html#ga6e824420a6ed903a240037a5a22aecaa", null ],
    [ "DSPI_SlaveTransferGetCountEDMA", "group__dspi__edma__driver.html#gac37b1d262906776028dab89138e921ed", null ]
];