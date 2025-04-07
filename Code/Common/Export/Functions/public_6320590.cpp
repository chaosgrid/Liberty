#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320590);
CLANG_FORWARD_PROC_SYMBOL(public_6321f30);
CLANG_FORWARD_PROC_SYMBOL(public_6323240);
CLANG_FORWARD_PROC_SYMBOL(public_6323850);
CLANG_FORWARD_PROC_SYMBOL(public_63238a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63205a5 _public_63205a5
#define public_63205b8 _public_63205b8
#define public_63205c2 _public_63205c2
#define public_63205da _public_63205da
#define public_63205dc _public_63205dc
#define public_63205e5 _public_63205e5
#define public_63205fb _public_63205fb
#define public_6320613 _public_6320613
#define public_6320680 _public_6320680
#define public_6320684 _public_6320684
#define public_63206b1 _public_63206b1

PROC_DECLARE(0x6320590, internal_6320590, public_6320590);
extern "C" NAKED register_t __cdecl internal_6320590()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_64018c8]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push esi
        mov dword ptr ss : [esp+4], ecx
        je public_6320613
        push ebx
        push edi
        public_63205a5 : nop
        mov eax, dword ptr ds : [public_64018b8]
        cmp eax, dword ptr ds : [public_64018bc]
        je public_63205fb
        lea edi, ds:[eax+0x8C]
        public_63205b8 : nop
        cmp dword ptr ds : [edi], 0
        lea ebx, ds:[ecx+0xC]
        mov esi, edi
        je public_63205e5
        public_63205c2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [ebx]
        jne public_63205da
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [esi], edx
        call public_6391d5a
        add esp, 4
        jmp public_63205dc
        public_63205da : nop
        mov esi, eax
        public_63205dc : nop
        cmp dword ptr ds : [esi], 0
        jne public_63205c2
        mov ecx, dword ptr ss : [esp+0xC]
        public_63205e5 : nop
        mov edx, dword ptr ds : [public_64018bc]
        add edi, 0x90
        lea eax, ds:[edi-0x8C]
        cmp eax, edx
        jne public_63205b8
        public_63205fb : nop
        lea ecx, ss:[esp+0xC]
        call public_63238a0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_64018c8]
        cmp ecx, eax
        jne public_63205a5
        pop edi
        pop ebx
        public_6320613 : nop
        mov edx, dword ptr ds : [public_64018d4]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov esi, eax
        mov dword ptr ss : [esp+8], ecx
        je public_6320680
        mov edx, ecx
        cmp ecx, edx
        jne public_6320680
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, offset public_64018c4
        call public_6323850
        mov eax, dword ptr ds : [public_64018cc]
        mov edx, dword ptr ds : [public_64018c8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_64018c8]
        mov dword ptr ds : [public_64018d4], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_64018c8]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_64018c4
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        mov edx, dword ptr ds : [public_64018c8]
        mov dword ptr ds : [public_64018d8], edx
        pop esi
        add esp, 0x14
        ret 
        public_6320680 : nop
        cmp ecx, eax
        je public_63206b1
        public_6320684 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6321f30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_64018c4
        call public_6323240
        cmp dword ptr ss : [esp+8], esi
        jne public_6320684
        mov eax, dword ptr ds : [public_64018c8]
        public_63206b1 : nop
        mov dword ptr ds : [public_64018d8], eax
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6320590)
    }
}

#undef public_63205a5
#undef public_63205b8
#undef public_63205c2
#undef public_63205da
#undef public_63205dc
#undef public_63205e5
#undef public_63205fb
#undef public_6320613
#undef public_6320680
#undef public_6320684
#undef public_63206b1
