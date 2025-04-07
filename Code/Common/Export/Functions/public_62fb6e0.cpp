#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fb6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fb6fc _public_62fb6fc
#define public_62fb704 _public_62fb704
#define public_62fb70f _public_62fb70f
#define public_62fb717 _public_62fb717
#define public_62fb724 _public_62fb724
#define public_62fb738 _public_62fb738
#define public_62fb752 _public_62fb752
#define public_62fb76b _public_62fb76b
#define public_62fb773 _public_62fb773
#define public_62fb77b _public_62fb77b
#define public_62fb783 _public_62fb783
#define public_62fb78b _public_62fb78b
#define public_62fb79b _public_62fb79b
#define public_62fb7a3 _public_62fb7a3
#define public_62fb7b0 _public_62fb7b0
#define public_62fb7c4 _public_62fb7c4
#define public_62fb7d0 _public_62fb7d0
#define public_62fb7de _public_62fb7de
#define public_62fb7e8 _public_62fb7e8
#define public_62fb802 _public_62fb802
#define public_62fb81b _public_62fb81b
#define public_62fb82f _public_62fb82f
#define public_62fb837 _public_62fb837
#define public_62fb83d _public_62fb83d
#define public_62fb860 _public_62fb860
#define public_62fb86e _public_62fb86e
#define public_62fb878 _public_62fb878
#define public_62fb87e _public_62fb87e

PROC_DECLARE(0x62fb6e0, internal_62fb6e0, public_62fb6e0);
extern "C" NAKED register_t __cdecl internal_62fb6e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, edi
        je public_62fb87e
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62fb6fc
        xor esi, esi
        jmp public_62fb704
        public_62fb6fc : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_62fb704 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_62fb70f
        xor ecx, ecx
        jmp public_62fb717
        public_62fb70f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 3
        public_62fb717 : nop
        cmp esi, ecx
        ja public_62fb76b
        mov esi, dword ptr ds : [edi+8]
        cmp eax, esi
        mov ecx, edx
        je public_62fb738
        public_62fb724 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_62fb724
        public_62fb738 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62fb752
        mov eax, dword ptr ds : [ebx+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*8]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_62fb752 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar edi, 3
        lea ecx, ds:[eax+edi*8]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_62fb76b : nop
        test eax, eax
        jne public_62fb773
        xor esi, esi
        jmp public_62fb77b
        public_62fb773 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_62fb77b : nop
        test edx, edx
        jne public_62fb783
        xor ecx, ecx
        jmp public_62fb78b
        public_62fb783 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 3
        public_62fb78b : nop
        cmp esi, ecx
        ja public_62fb81b
        test edx, edx
        jne public_62fb79b
        xor ecx, ecx
        jmp public_62fb7a3
        public_62fb79b : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 3
        public_62fb7a3 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_62fb7c4
        lea ebx, ds:[ebx]
        public_62fb7b0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_62fb7b0
        public_62fb7c4 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ecx, esi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_62fb7e8
        public_62fb7d0 : nop
        test edx, edx
        je public_62fb7de
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_62fb7de : nop
        add eax, 8
        add edx, 8
        cmp eax, esi
        jne public_62fb7d0
        public_62fb7e8 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62fb802
        mov edx, dword ptr ds : [ebx+4]
        xor edi, edi
        lea eax, ds:[edx+edi*8]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_62fb802 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub edi, eax
        sar edi, 3
        lea eax, ds:[edx+edi*8]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_62fb81b : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_62fb82f
        xor eax, eax
        jmp public_62fb837
        public_62fb82f : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        public_62fb837 : nop
        test eax, eax
        jge public_62fb83d
        xor eax, eax
        public_62fb83d : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, edx
        je public_62fb878
        lea esp, ss:[esp]
        public_62fb860 : nop
        test ecx, ecx
        je public_62fb86e
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_62fb86e : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_62fb860
        public_62fb878 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_62fb87e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fb6e0)
    }
}

#undef public_62fb6fc
#undef public_62fb704
#undef public_62fb70f
#undef public_62fb717
#undef public_62fb724
#undef public_62fb738
#undef public_62fb752
#undef public_62fb76b
#undef public_62fb773
#undef public_62fb77b
#undef public_62fb783
#undef public_62fb78b
#undef public_62fb79b
#undef public_62fb7a3
#undef public_62fb7b0
#undef public_62fb7c4
#undef public_62fb7d0
#undef public_62fb7de
#undef public_62fb7e8
#undef public_62fb802
#undef public_62fb81b
#undef public_62fb82f
#undef public_62fb837
#undef public_62fb83d
#undef public_62fb860
#undef public_62fb86e
#undef public_62fb878
#undef public_62fb87e
