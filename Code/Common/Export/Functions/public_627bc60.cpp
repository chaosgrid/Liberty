#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627bc60);

#define public_627bc96 _public_627bc96

PROC_DECLARE(0x627bc60, internal_627bc60, public_627bc60);
extern "C" NAKED register_t __cdecl internal_627bc60()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        test eax, eax
        pop esi
        je public_627bc96
        xor eax, eax
        pop ecx
        ret 
        public_627bc96 : nop
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627bc60)
    }
}

#undef public_627bc96
