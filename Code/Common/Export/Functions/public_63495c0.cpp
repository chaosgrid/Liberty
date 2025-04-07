#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);
CLANG_FORWARD_PROC_SYMBOL(public_63495c0);

PROC_DECLARE(0x63495c0, internal_63495c0, public_63495c0);
extern "C" NAKED register_t __cdecl internal_63495c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6348b80
        mov ecx, esi
        call public_63487f0
        mov ecx, esi
        call public_6348aa0
        and dword ptr ds : [esi], 0xFFFFFCFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63495c0)
    }
}
