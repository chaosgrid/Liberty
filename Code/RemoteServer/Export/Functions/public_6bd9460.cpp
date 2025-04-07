#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9460, internal_6bd9460, public_6bd9460);
extern "C" NAKED register_t __cdecl internal_6bd9460()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6c0b8ac
        ret 4
        UNREACHABLE_TRAP(0x6bd9460)
    }
}
