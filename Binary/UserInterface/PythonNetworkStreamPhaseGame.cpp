// 1. Search inside "void CPythonNetworkStream::GamePhase()":
	const uint32_t MAX_RECV_COUNT = 8; // @warme669
	const uint32_t SAFE_RECV_BUFSIZE = 8192;
	uint32_t dwRecvCount = 0;

	while (ret)
	{
		if (dwRecvCount++ >= MAX_RECV_COUNT - 1 && GetRecvBufferSize() < SAFE_RECV_BUFSIZE
			&& m_strPhase == "Game") //phase_game ÀÌ ¾Æ´Ï¾îµµ ¿©±â·Î µé¾î¿À´Â °æ¿ì°¡ ÀÖ´Ù.
			break;

// 1. Replace:
#ifndef ENABLE_NO_RECV_GAME_LIMIT
	const uint32_t MAX_RECV_COUNT = 8; // @warme669
	const uint32_t SAFE_RECV_BUFSIZE = 8192;
	uint32_t dwRecvCount = 0;
#endif

	while (ret)
	{
#ifndef ENABLE_NO_RECV_GAME_LIMIT
		if (dwRecvCount++ >= MAX_RECV_COUNT - 1 && GetRecvBufferSize() < SAFE_RECV_BUFSIZE
			&& m_strPhase == "Game") //phase_game ÀÌ ¾Æ´Ï¾îµµ ¿©±â·Î µé¾î¿À´Â °æ¿ì°¡ ÀÖ´Ù.
			break;
#endif
