#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd080);
CLANG_FORWARD_PROC_SYMBOL(public_66fd450);
CLANG_FORWARD_PROC_SYMBOL(public_66fd700);
CLANG_FORWARD_PROC_SYMBOL(public_66fd730);
CLANG_FORWARD_PROC_SYMBOL(public_66fd750);
CLANG_FORWARD_PROC_SYMBOL(public_66fd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66fe100 _public_66fe100
#define public_66fe115 _public_66fe115
#define public_66fe120 _public_66fe120
#define public_66fe12a _public_66fe12a
#define public_66fe131 _public_66fe131
#define public_66fe135 _public_66fe135
#define public_66fe160 _public_66fe160
#define public_66fe18a _public_66fe18a
#define public_66fe1ae _public_66fe1ae
#define public_66fe1b2 _public_66fe1b2
#define public_66fe1d3 _public_66fe1d3
#define public_66fe1db _public_66fe1db

PROC_DECLARE(0x66fe0c0, internal_66fe0c0, public_66fe0c0);
extern "C" NAKED register_t __cdecl internal_66fe0c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_66fe1db
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_67045f4
        call public_66fd700
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_67045f4
        mov esi, eax
        call public_66fd750
        mov edi, eax
        cmp esi, edi
        mov eax, esi
        je public_66fe135
        lea esp, ss:[esp]
        public_66fe100 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_66fe115
        push ecx
        call public_66fd730
        add esp, 4
        jmp public_66fe131
        public_66fe115 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_66fe12a
        lea ecx, ds:[ecx]
        public_66fe120 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_66fe120
        public_66fe12a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_66fe131
        mov eax, ecx
        public_66fe131 : nop
        cmp eax, edi
        jne public_66fe100
        public_66fe135 : nop
        mov eax, dword ptr ds : [public_6704604]
        test eax, eax
        mov dword ptr ss : [esp+0x14], esi
        je public_66fe1ae
        mov ecx, dword ptr ds : [public_67045f8]
        cmp esi, dword ptr ds : [ecx]
        jne public_66fe1ae
        cmp edi, ecx
        jne public_66fe1ae
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_67045fc]
        cmp edi, eax
        mov esi, edi
        je public_66fe18a
        mov edi, edi
        public_66fe160 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, offset public_67045f4
        call public_66fd450
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6700710
        mov eax, dword ptr ds : [public_67045fc]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_66fe160
        mov ecx, dword ptr ds : [public_67045f8]
        public_66fe18a : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_67045f8]
        mov dword ptr ds : [public_6704604], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_67045f8]
        pop edi
        mov dword ptr ds : [eax+8], eax
        xor eax, eax
        pop esi
        pop ecx
        ret 8
        public_66fe1ae : nop
        cmp esi, edi
        je public_66fe1d3
        public_66fe1b2 : nop
        lea ecx, ss:[esp+0x14]
        call public_66fd7e0
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_67045f4
        call public_66fd080
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, edi
        jne public_66fe1b2
        public_66fe1d3 : nop
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 8
        public_66fe1db : nop
        or eax, 0xFFFFFFFF
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66fe0c0)
    }
}

#undef public_66fe100
#undef public_66fe115
#undef public_66fe120
#undef public_66fe12a
#undef public_66fe131
#undef public_66fe135
#undef public_66fe160
#undef public_66fe18a
#undef public_66fe1ae
#undef public_66fe1b2
#undef public_66fe1d3
#undef public_66fe1db
