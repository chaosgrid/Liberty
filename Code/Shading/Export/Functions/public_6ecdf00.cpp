#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecdf00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecdf36 _public_6ecdf36
#define public_6ecdf38 _public_6ecdf38
#define public_6ecdf40 _public_6ecdf40
#define public_6ecdf45 _public_6ecdf45
#define public_6ecdf51 _public_6ecdf51
#define public_6ecdf72 _public_6ecdf72
#define public_6ecdf80 _public_6ecdf80
#define public_6ecdf8a _public_6ecdf8a
#define public_6ecdf96 _public_6ecdf96
#define public_6ecdfa8 _public_6ecdfa8
#define public_6ecdfae _public_6ecdfae
#define public_6ecdfc7 _public_6ecdfc7
#define public_6ecdfd5 _public_6ecdfd5
#define public_6ecdfdf _public_6ecdfdf
#define public_6ece01b _public_6ece01b
#define public_6ece038 _public_6ece038
#define public_6ece060 _public_6ece060
#define public_6ece072 _public_6ece072
#define public_6ece07c _public_6ece07c
#define public_6ece090 _public_6ece090
#define public_6ece09e _public_6ece09e
#define public_6ece0a4 _public_6ece0a4
#define public_6ece0b0 _public_6ece0b0
#define public_6ece0c1 _public_6ece0c1
#define public_6ece0ce _public_6ece0ce
#define public_6ece0e0 _public_6ece0e0
#define public_6ece0ee _public_6ece0ee
#define public_6ece0f8 _public_6ece0f8
#define public_6ece103 _public_6ece103
#define public_6ece118 _public_6ece118
#define public_6ece125 _public_6ece125
#define public_6ece136 _public_6ece136
#define public_6ece139 _public_6ece139

PROC_DECLARE(0x6ecdf00, internal_6ecdf00, public_6ecdf00);
extern "C" NAKED register_t __cdecl internal_6ecdf00()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ece038
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6ecdf36
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ebp, ecx
        jb public_6ecdf38
        public_6ecdf36 : nop
        mov ecx, ebp
        public_6ecdf38 : nop
        test edx, edx
        jne public_6ecdf40
        xor eax, eax
        jmp public_6ecdf45
        public_6ecdf40 : nop
        sub eax, edx
        sar eax, 3
        public_6ecdf45 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ecdf51
        xor eax, eax
        public_6ecdf51 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6ed0c5c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ecdf8a
        public_6ecdf72 : nop
        test ecx, ecx
        je public_6ecdf80
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_6ecdf80 : nop
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_6ecdf72
        public_6ecdf8a : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6ecdfae
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6ecdf96 : nop
        test eax, eax
        je public_6ecdfa8
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ecdfa8 : nop
        add eax, 8
        dec edx
        jne public_6ecdf96
        public_6ecdfae : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*8]
        lea edx, ds:[esi+ecx]
        je public_6ecdfdf
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_6ecdfc7 : nop
        test edx, edx
        je public_6ecdfd5
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6ecdfd5 : nop
        add eax, 8
        add edx, 8
        cmp eax, edi
        jne public_6ecdfc7
        public_6ecdfdf : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ece01b
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece01b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece038 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 3
        cmp ecx, ebp
        jae public_6ece0ce
        cmp esi, eax
        lea ebx, ds:[ebp*8]
        lea edx, ds:[ebx+esi]
        je public_6ece07c
        mov ecx, edx
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_6ece060 : nop
        test edx, edx
        je public_6ece072
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ece072 : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6ece060
        public_6ece07c : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        sub edx, esi
        sar edx, 3
        sub ebp, edx
        mov edx, dword ptr ss : [esp+0x24]
        je public_6ece0a4
        mov edi, edi
        public_6ece090 : nop
        test eax, eax
        je public_6ece09e
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6ece09e : nop
        add eax, 8
        dec ebp
        jne public_6ece090
        public_6ece0a4 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_6ece0c1
        lea ecx, ds:[ecx]
        public_6ece0b0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_6ece0b0
        public_6ece0c1 : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece0ce : nop
        test ebp, ebp
        jbe public_6ece139
        shl ebp, 3
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov edx, eax
        je public_6ece0f8
        nop 
        public_6ece0e0 : nop
        test edx, edx
        je public_6ece0ee
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        public_6ece0ee : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_6ece0e0
        public_6ece0f8 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp esi, eax
        je public_6ece118
        public_6ece103 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6ece103
        public_6ece118 : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6ece136
        mov ecx, dword ptr ss : [esp+0x24]
        public_6ece125 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, edx
        jne public_6ece125
        public_6ece136 : nop
        add dword ptr ds : [edi+8], ebp
        public_6ece139 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ecdf00)
    }
}

#undef public_6ecdf36
#undef public_6ecdf38
#undef public_6ecdf40
#undef public_6ecdf45
#undef public_6ecdf51
#undef public_6ecdf72
#undef public_6ecdf80
#undef public_6ecdf8a
#undef public_6ecdf96
#undef public_6ecdfa8
#undef public_6ecdfae
#undef public_6ecdfc7
#undef public_6ecdfd5
#undef public_6ecdfdf
#undef public_6ece01b
#undef public_6ece038
#undef public_6ece060
#undef public_6ece072
#undef public_6ece07c
#undef public_6ece090
#undef public_6ece09e
#undef public_6ece0a4
#undef public_6ece0b0
#undef public_6ece0c1
#undef public_6ece0ce
#undef public_6ece0e0
#undef public_6ece0ee
#undef public_6ece0f8
#undef public_6ece103
#undef public_6ece118
#undef public_6ece125
#undef public_6ece136
#undef public_6ece139
