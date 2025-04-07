#include "Content-PCH.h"

PROC_DECLARE(0x6f38ee0, internal_6f38ee0, public_6f38ee0);
extern "C" NAKED register_t __cdecl internal_6f38ee0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6fb385c
        ret 4
        UNREACHABLE_TRAP(0x6f38ee0)
    }
}
