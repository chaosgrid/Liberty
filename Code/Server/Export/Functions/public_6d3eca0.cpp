#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eca0);

#define public_6d3ecd6 _public_6d3ecd6
#define public_6d3ecd8 _public_6d3ecd8
#define public_6d3ece0 _public_6d3ece0
#define public_6d3ece5 _public_6d3ece5
#define public_6d3ed07 _public_6d3ed07
#define public_6d3ed0f _public_6d3ed0f
#define public_6d3ed19 _public_6d3ed19
#define public_6d3ed25 _public_6d3ed25
#define public_6d3ed31 _public_6d3ed31
#define public_6d3ed37 _public_6d3ed37
#define public_6d3ed50 _public_6d3ed50
#define public_6d3ed58 _public_6d3ed58
#define public_6d3ed62 _public_6d3ed62
#define public_6d3ed94 _public_6d3ed94
#define public_6d3edae _public_6d3edae
#define public_6d3edd1 _public_6d3edd1
#define public_6d3edd9 _public_6d3edd9
#define public_6d3ede7 _public_6d3ede7
#define public_6d3ee00 _public_6d3ee00
#define public_6d3ee08 _public_6d3ee08
#define public_6d3ee0e _public_6d3ee0e
#define public_6d3ee17 _public_6d3ee17
#define public_6d3ee22 _public_6d3ee22
#define public_6d3ee34 _public_6d3ee34
#define public_6d3ee45 _public_6d3ee45
#define public_6d3ee4d _public_6d3ee4d
#define public_6d3ee57 _public_6d3ee57
#define public_6d3ee62 _public_6d3ee62
#define public_6d3ee71 _public_6d3ee71
#define public_6d3ee80 _public_6d3ee80
#define public_6d3ee8b _public_6d3ee8b
#define public_6d3ee8e _public_6d3ee8e

PROC_DECLARE(0x6d3eca0, internal_6d3eca0, public_6d3eca0);
extern "C" NAKED register_t __cdecl internal_6d3eca0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        jae public_6d3edae
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6d3ecd6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6d3ecd8
        public_6d3ecd6 : nop
        mov ecx, ebp
        public_6d3ecd8 : nop
        test edx, edx
        jne public_6d3ece0
        xor eax, eax
        jmp public_6d3ece5
        public_6d3ece0 : nop
        sub eax, edx
        sar eax, 2
        public_6d3ece5 : nop
        add eax, ecx
        mov ecx, dword ptr ds : [ebx]
        shl eax, 2
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6d1baa0
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6d3ed19
        public_6d3ed07 : nop
        test edx, edx
        je public_6d3ed0f
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], esi
        public_6d3ed0f : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6d3ed07
        public_6d3ed19 : nop
        test ebp, ebp
        mov ecx, edx
        jbe public_6d3ed37
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, ebp
        public_6d3ed25 : nop
        test ecx, ecx
        je public_6d3ed31
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d3ed31 : nop
        add ecx, 4
        dec esi
        jne public_6d3ed25
        public_6d3ed37 : nop
        mov ebx, dword ptr ds : [ebx+8]
        cmp eax, ebx
        lea edi, ds:[ebp*4]
        lea esi, ds:[edi+edx]
        je public_6d3ed62
        mov ecx, esi
        sub ecx, edi
        sub ecx, edx
        add ecx, eax
        public_6d3ed50 : nop
        test esi, esi
        je public_6d3ed58
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edx
        public_6d3ed58 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, ebx
        jne public_6d3ed50
        public_6d3ed62 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx+8]
        add edi, esi
        test eax, eax
        mov dword ptr ds : [edx+0xC], edi
        jne public_6d3ed94
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea eax, ds:[esi+ecx*4]
        mov dword ptr ds : [edx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d3ed94 : nop
        sub ecx, eax
        sar ecx, 2
        add ecx, ebp
        pop edi
        lea eax, ds:[esi+ecx*4]
        mov dword ptr ds : [edx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d3edae : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6d3ee34
        cmp edx, eax
        lea edi, ds:[ebp*4]
        mov dword ptr ss : [esp+0x1C], edi
        lea esi, ds:[edi+edx]
        mov ecx, edx
        je public_6d3ede7
        public_6d3edd1 : nop
        test esi, esi
        je public_6d3edd9
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        public_6d3edd9 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6d3edd1
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d3ede7 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6d3ee0e
        lea esp, ss:[esp]
        public_6d3ee00 : nop
        test eax, eax
        je public_6d3ee08
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6d3ee08 : nop
        add eax, 4
        dec ebp
        jne public_6d3ee00
        public_6d3ee0e : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        mov eax, edx
        je public_6d3ee22
        public_6d3ee17 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d3ee17
        public_6d3ee22 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d3ee34 : nop
        test ebp, ebp
        jbe public_6d3ee8e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6d3ee57
        public_6d3ee45 : nop
        test esi, esi
        je public_6d3ee4d
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        public_6d3ee4d : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6d3ee45
        public_6d3ee57 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6d3ee71
        public_6d3ee62 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6d3ee62
        public_6d3ee71 : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6d3ee8b
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_6d3ee80 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6d3ee80
        public_6d3ee8b : nop
        add dword ptr ds : [ebx+8], ebp
        public_6d3ee8e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d3eca0)
    }
}

#undef public_6d3ecd6
#undef public_6d3ecd8
#undef public_6d3ece0
#undef public_6d3ece5
#undef public_6d3ed07
#undef public_6d3ed0f
#undef public_6d3ed19
#undef public_6d3ed25
#undef public_6d3ed31
#undef public_6d3ed37
#undef public_6d3ed50
#undef public_6d3ed58
#undef public_6d3ed62
#undef public_6d3ed94
#undef public_6d3edae
#undef public_6d3edd1
#undef public_6d3edd9
#undef public_6d3ede7
#undef public_6d3ee00
#undef public_6d3ee08
#undef public_6d3ee0e
#undef public_6d3ee17
#undef public_6d3ee22
#undef public_6d3ee34
#undef public_6d3ee45
#undef public_6d3ee4d
#undef public_6d3ee57
#undef public_6d3ee62
#undef public_6d3ee71
#undef public_6d3ee80
#undef public_6d3ee8b
#undef public_6d3ee8e
