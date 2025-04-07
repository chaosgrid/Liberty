#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e010);

PROC_DECLARE(0x63137b0, internal_63137b0, public_63137b0);
extern "C" NAKED register_t __cdecl internal_63137b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_630e010
        mov ecx, dword ptr ss : [esp+0x10]
        sub dword ptr ds : [ecx], eax
        add dword ptr ds : [esi], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63137b0)
    }
}
