#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38930, internal_6b38930, public_6b38930);
extern "C" NAKED register_t __cdecl internal_6b38930()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b38930)
    }
}
