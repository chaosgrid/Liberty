#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240180);

PROC_DECLARE(0x6240180, internal_6240180, public_6240180);
extern "C" NAKED register_t __cdecl internal_6240180()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x44]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6240180)
    }
}
