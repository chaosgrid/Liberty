#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d0ff);

#define public_6d37743 _public_6d37743
#define public_6d377a8 _public_6d377a8
#define public_6d377aa _public_6d377aa
#define public_6d377c2 _public_6d377c2
#define public_6d377dc _public_6d377dc
#define public_6d37808 _public_6d37808
#define public_6d37849 _public_6d37849
#define public_6d37890 _public_6d37890
#define public_6d378cb _public_6d378cb
#define public_6d378f5 _public_6d378f5
#define public_6d378f8 _public_6d378f8
#define public_6d3790e _public_6d3790e
#define public_6d37931 _public_6d37931
#define public_6d37961 _public_6d37961
#define public_6d37980 _public_6d37980
#define public_6d37984 _public_6d37984
#define public_6d3799b _public_6d3799b
#define public_6d379a4 _public_6d379a4
#define public_6d379e5 _public_6d379e5
#define public_6d379f2 _public_6d379f2
#define public_6d379fe _public_6d379fe
#define public_6d37a26 _public_6d37a26
#define public_6d37a3d _public_6d37a3d
#define public_6d37a60 _public_6d37a60
#define public_6d37aa2 _public_6d37aa2
#define public_6d37ab1 _public_6d37ab1
#define public_6d37ab5 _public_6d37ab5

PROC_DECLARE(0x6d376cc, internal_6d376cc, public_6d376cc);
extern "C" NAKED register_t __cdecl internal_6d376cc()
{
    __asm
    {
        mov eax, public_6d5d0ff
        call public_6d5cd8c
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, ecx
        add esi, dword ptr ds : [ebx+0x1034]
        mov eax, dword ptr ds : [ebx+0x1040]
        add dword ptr ss : [ebp+0xC], eax
        cmp dword ptr ds : [ebx+0x10C0], 0
        push edi
        mov dword ptr ss : [ebp+8], esi
        jne public_6d37743
        mov eax, dword ptr ds : [ebx+0x10A8]
        imul eax, dword ptr ds : [ebx+0x10AC]
        shl eax, 3
        push eax
        call public_6d2f2a0
        mov edi, eax
        test edi, edi
        pop ecx
        mov dword ptr ds : [ebx+0x10C0], edi
        je public_6d37ab5
        mov ecx, dword ptr ds : [ebx+0x10A8]
        imul ecx, dword ptr ds : [ebx+0x10AC]
        shl ecx, 3
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6d37743 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, dword ptr ds : [ebx+0x109C]
        mov ecx, esi
        imul eax, dword ptr ds : [ebx+0x10A8]
        sub ecx, dword ptr ds : [ebx+0x1090]
        shr ecx, 2
        add eax, ecx
        mov ecx, dword ptr ds : [ebx+0x10C0]
        lea edi, ds:[ecx+eax*8]
        cmp dword ptr ds : [edi+4], 0
        mov dword ptr ss : [ebp-0x10], edi
        jne public_6d377c2
        mov eax, dword ptr ds : [ebx+0x10A4]
        shl eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        je public_6d377a8
/*FIXUP push offset _public_6d2f87d @0x6d37793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push dword ptr ss : [ebp-0x18]
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x14]
        jmp public_6d377aa
        public_6d377a8 : nop
        xor eax, eax
        public_6d377aa : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ds : [edi+4], eax
        je public_6d37ab5
        and dword ptr ds : [edi], 0
        inc dword ptr ds : [ebx+0x10BC]
        public_6d377c2 : nop
        cmp dword ptr ds : [edi], 0
        jne public_6d378f8
        mov eax, dword ptr ds : [ebx+0x103C]
        push 4
        pop edx
        cmp eax, edx
        mov ecx, edx
        jb public_6d377dc
        mov ecx, eax
        public_6d377dc : nop
        mov eax, esi
        and eax, 3
        cmp eax, dword ptr ds : [ebx+0x1034]
        jb public_6d37890
        add eax, 4
        cmp eax, ecx
        ja public_6d37890
        mov eax, dword ptr ds : [ebx+0x1038]
        cmp eax, edx
        mov dword ptr ss : [ebp-0x18], edx
        jb public_6d37808
        mov dword ptr ss : [ebp-0x18], eax
        public_6d37808 : nop
        mov eax, dword ptr ds : [ebx+0x108C]
        cmp eax, dword ptr ds : [ebx+0x1030]
        jae public_6d37849
        shr eax, 2
        imul eax, dword ptr ds : [ebx+0x1080]
        mov ecx, esi
        shr ecx, 2
        imul ecx, dword ptr ds : [ebx+0x1050]
        add eax, ecx
        mov ecx, dword ptr ds : [ebx+0x1054]
        imul ecx, dword ptr ss : [ebp+0xC]
        add eax, ecx
        add eax, dword ptr ds : [ebx+0x18]
        push eax
        push dword ptr ds : [edi+4]
        call dword ptr ds : [ebx+0x1084]
        pop ecx
        pop ecx
        public_6d37849 : nop
        mov eax, dword ptr ds : [ebx+0x1094]
        cmp eax, dword ptr ss : [ebp-0x18]
        jbe public_6d378f8
        add eax, 0xFFFFFFFC
        shr eax, 2
        imul eax, dword ptr ds : [ebx+0x1080]
        mov ecx, esi
        shr ecx, 2
        imul ecx, dword ptr ds : [ebx+0x1050]
        add eax, ecx
        mov ecx, dword ptr ds : [ebx+0x1054]
        imul ecx, dword ptr ss : [ebp+0xC]
        add eax, ecx
        add eax, dword ptr ds : [ebx+0x18]
        push eax
        push dword ptr ds : [edi+4]
        call dword ptr ds : [ebx+0x1084]
        pop ecx
        pop ecx
        jmp public_6d378f8
        public_6d37890 : nop
        mov eax, dword ptr ds : [ebx+0x108C]
        mov edi, esi
        shr edi, 2
        imul edi, dword ptr ds : [ebx+0x1050]
        mov ecx, eax
        shr ecx, 2
        imul ecx, dword ptr ds : [ebx+0x1080]
        add edi, ecx
        mov ecx, dword ptr ds : [ebx+0x1054]
        imul ecx, dword ptr ss : [ebp+0xC]
        add edi, ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [ecx+4]
        add edi, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp-0x14], ecx
        mov dword ptr ss : [ebp-0x18], eax
        public_6d378cb : nop
        cmp eax, dword ptr ds : [ebx+0x1094]
        jae public_6d378f5
        push edi
        push dword ptr ss : [ebp-0x14]
        call dword ptr ds : [ebx+0x1084]
        add edi, dword ptr ds : [ebx+0x1080]
        add dword ptr ss : [ebp-0x14], 0x100
        add dword ptr ss : [ebp-0x18], 4
        mov eax, dword ptr ss : [ebp-0x18]
        pop ecx
        pop ecx
        jmp public_6d378cb
        public_6d378f5 : nop
        mov edi, dword ptr ss : [ebp-0x10]
        public_6d378f8 : nop
        cmp dword ptr ds : [ebx+0x1048], 0
        je public_6d3790e
        push dword ptr ss : [ebp+0x10]
        mov ecx, ebx
        call public_6d37335
        mov dword ptr ss : [ebp+0x10], eax
        public_6d3790e : nop
        mov eax, dword ptr ds : [ebx+0x1030]
        sub eax, dword ptr ds : [ebx+0x108C]
        mov edx, dword ptr ds : [ebx+0x1058]
        mov ecx, esi
        sub ecx, dword ptr ds : [ebx+0x1090]
        add edx, eax
        and ecx, 3
        cmp eax, edx
        jae public_6d37961
        public_6d37931 : nop
        mov edi, eax
        and edi, 0xFFFFFFFC
        or edi, ecx
        shl edi, 2
        mov esi, eax
        and esi, 3
        or edi, esi
        mov esi, dword ptr ss : [ebp-0x10]
        shl edi, 4
        add edi, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+0x10], 0x10
        movsd 
        movsd 
        movsd 
        inc eax
        cmp eax, edx
        movsd 
        jb public_6d37931
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp-0x10]
        public_6d37961 : nop
        mov eax, esi
        sub eax, dword ptr ds : [ebx+0x1090]
        and eax, 3
        cmp dword ptr ds : [ebx+0x1074], 0
        jne public_6d37980
        xor edx, edx
        inc edx
        mov ecx, eax
        shl edx, cl
        or dword ptr ds : [edi], edx
        jmp public_6d379a4
        public_6d37980 : nop
        and dword ptr ss : [ebp+0x10], 0
        public_6d37984 : nop
        mov ecx, dword ptr ds : [ebx+0x107C]
        and ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, eax
        jne public_6d3799b
        mov ecx, dword ptr ss : [ebp+0x10]
        xor edx, edx
        inc edx
        shl edx, cl
        or dword ptr ds : [edi], edx
        public_6d3799b : nop
        inc dword ptr ss : [ebp+0x10]
        cmp dword ptr ss : [ebp+0x10], 4
        jb public_6d37984
        public_6d379a4 : nop
        cmp dword ptr ds : [edi], 0xF
        jne public_6d37ab5
        mov eax, dword ptr ds : [ebx+0x108C]
        shr esi, 2
        imul esi, dword ptr ds : [ebx+0x1050]
        mov ecx, eax
        shr ecx, 2
        imul ecx, dword ptr ds : [ebx+0x1080]
        add esi, ecx
        mov ecx, dword ptr ds : [ebx+0x1054]
        imul ecx, dword ptr ss : [ebp+0xC]
        add esi, ecx
        mov ecx, dword ptr ds : [edi+4]
        add esi, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d37a60
        public_6d379e5 : nop
        xor eax, eax
        cmp dword ptr ds : [ebx+0x1074], eax
        je public_6d37a3d
        mov edx, dword ptr ss : [ebp+0xC]
        public_6d379f2 : nop
        and dword ptr ss : [ebp+0x10], 0
        mov ecx, eax
        shl ecx, 2
        mov dword ptr ss : [ebp+8], edx
        public_6d379fe : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ebx+0x107C]
        and esi, dword ptr ds : [ebx+0x1078]
        and edx, eax
        lea esi, ds:[esi+edx*4]
        cmp ecx, esi
        je public_6d37a26
        mov edi, dword ptr ss : [ebp+8]
        shl esi, 4
        add esi, dword ptr ss : [ebp+0xC]
        movsd 
        movsd 
        movsd 
        movsd 
        mov edi, dword ptr ss : [ebp-0x10]
        public_6d37a26 : nop
        inc dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+8], 0x10
        inc ecx
        cmp dword ptr ss : [ebp+0x10], 4
        jb public_6d379fe
        mov edx, dword ptr ss : [ebp+8]
        inc eax
        cmp eax, 4
        jb public_6d379f2
        public_6d37a3d : nop
        push dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp-0x14]
        push esi
        call dword ptr ds : [ebx+0x1088]
        add esi, dword ptr ds : [ebx+0x1080]
        add dword ptr ss : [ebp+0xC], 0x100
        add dword ptr ss : [ebp-0x18], 4
        mov eax, dword ptr ss : [ebp-0x18]
        pop ecx
        pop ecx
        public_6d37a60 : nop
        cmp eax, dword ptr ds : [ebx+0x1094]
        mov dword ptr ss : [ebp-0x14], esi
        jb public_6d379e5
        mov ecx, dword ptr ds : [ebx+0x10AC]
        imul ecx, dword ptr ds : [ebx+0x10A8]
        mov edx, dword ptr ds : [ebx+0x10C0]
        lea eax, ds:[edi+8]
        lea ecx, ds:[edx+ecx*8]
        cmp eax, ecx
        jae public_6d37aa2
        xor ecx, ecx
        cmp dword ptr ds : [eax], ecx
        jne public_6d37aa2
        cmp dword ptr ds : [edi+0xC], ecx
        jne public_6d37aa2
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+4], ecx
        jmp public_6d37ab1
        public_6d37aa2 : nop
        push dword ptr ds : [edi+4]
        call public_6d2f249
        dec dword ptr ds : [ebx+0x10BC]
        pop ecx
        public_6d37ab1 : nop
        and dword ptr ds : [edi+4], 0
        public_6d37ab5 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d376cc)
    }
}

#undef public_6d37743
#undef public_6d377a8
#undef public_6d377aa
#undef public_6d377c2
#undef public_6d377dc
#undef public_6d37808
#undef public_6d37849
#undef public_6d37890
#undef public_6d378cb
#undef public_6d378f5
#undef public_6d378f8
#undef public_6d3790e
#undef public_6d37931
#undef public_6d37961
#undef public_6d37980
#undef public_6d37984
#undef public_6d3799b
#undef public_6d379a4
#undef public_6d379e5
#undef public_6d379f2
#undef public_6d379fe
#undef public_6d37a26
#undef public_6d37a3d
#undef public_6d37a60
#undef public_6d37aa2
#undef public_6d37ab1
#undef public_6d37ab5
