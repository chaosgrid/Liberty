#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38920, internal_6b38920, public_6b38920);
extern "C" NAKED register_t __cdecl internal_6b38920()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6b6bb50
        ret 4
        UNREACHABLE_TRAP(0x6b38920)
    }
}
