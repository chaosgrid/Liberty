#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43550);

PROC_DECLARE(0x6f43550, internal_6f43550, public_6f43550);
extern "C" NAKED register_t __cdecl internal_6f43550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xC8], edx
        ret 4
        UNREACHABLE_TRAP(0x6f43550)
    }
}
