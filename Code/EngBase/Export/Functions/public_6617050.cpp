#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_6617092 _public_6617092

PROC_DECLARE(0x6617050, internal_6617050, public_6617050);
extern "C" NAKED register_t __cdecl internal_6617050()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+0xC]
        mov ecx, offset public_662acc4
        push eax
        call public_6627a70
        mov ecx, dword ptr ds : [public_662acc8]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6617092
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        cmp edx, esi
        pop esi
        jl public_6617092
        lea eax, ss:[esp]
        mov edx, dword ptr ds : [eax]
        cmp edx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        setne al
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop ecx
        ret 0xC
        public_6617092 : nop
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax]
        cmp edx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        setne al
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6617050)
    }
}

#undef public_6617092
