#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40f90);

PROC_DECLARE(0x6f40f90, internal_6f40f90, public_6f40f90);
extern "C" NAKED register_t __cdecl internal_6f40f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xD8], edx
        ret 4
        UNREACHABLE_TRAP(0x6f40f90)
    }
}
