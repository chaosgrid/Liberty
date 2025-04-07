#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f324aa _public_6f324aa
#define public_6f324b2 _public_6f324b2
#define public_6f324be _public_6f324be

PROC_DECLARE(0x6f32480, internal_6f32480, public_6f32480);
extern "C" NAKED register_t __cdecl internal_6f32480()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov ecx, esi
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f324aa
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f324aa
        lea eax, ss:[esp+0xC]
        jmp public_6f324b2
        public_6f324aa : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f324b2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f324be
        add eax, 0x10
        ret 
        public_6f324be : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f32480)
    }
}

#undef public_6f324aa
#undef public_6f324b2
#undef public_6f324be
