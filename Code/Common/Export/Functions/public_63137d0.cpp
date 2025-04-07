#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630df60);

PROC_DECLARE(0x63137d0, internal_63137d0, public_63137d0);
extern "C" NAKED register_t __cdecl internal_63137d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_630df60
        mov ecx, dword ptr ss : [esp+0x10]
        add dword ptr ds : [ecx], eax
        add dword ptr ds : [esi], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63137d0)
    }
}
