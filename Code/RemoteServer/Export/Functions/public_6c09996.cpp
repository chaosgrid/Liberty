#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09996, internal_6c09996, public_6c09996);
extern "C" NAKED register_t __cdecl internal_6c09996()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b06c]
        UNREACHABLE_TRAP(0x6c09996)
    }
}
