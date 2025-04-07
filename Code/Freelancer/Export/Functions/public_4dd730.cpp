#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4dd730);
CLANG_FORWARD_PROC_SYMBOL(public_4df080);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_584710);
CLANG_FORWARD_PROC_SYMBOL(public_584720);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be5c9);

#define public_4dd760 _public_4dd760
#define public_4dd78c _public_4dd78c
#define public_4dd790 _public_4dd790
#define public_4dd7a0 _public_4dd7a0
#define public_4dd7a8 _public_4dd7a8
#define public_4dd7c8 _public_4dd7c8
#define public_4dd7e1 _public_4dd7e1
#define public_4dd7eb _public_4dd7eb
#define public_4dd806 _public_4dd806
#define public_4dd814 _public_4dd814
#define public_4dd82d _public_4dd82d
#define public_4dd837 _public_4dd837
#define public_4dd849 _public_4dd849
#define public_4dd852 _public_4dd852
#define public_4dd858 _public_4dd858
#define public_4dd892 _public_4dd892
#define public_4dd897 _public_4dd897
#define public_4dd8a5 _public_4dd8a5
#define public_4dd8d5 _public_4dd8d5
#define public_4dd8e8 _public_4dd8e8
#define public_4dd8f5 _public_4dd8f5
#define public_4dd8fa _public_4dd8fa
#define public_4dd903 _public_4dd903
#define public_4dd980 _public_4dd980
#define public_4dd981 _public_4dd981
#define public_4dd98b _public_4dd98b

PROC_DECLARE(0x4dd730, internal_4dd730, public_4dd730);
extern "C" NAKED register_t __cdecl internal_4dd730()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be5c9 @0x4dd732*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be5c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        mov ebx, dword ptr ds : [ecx+0x5E4]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0x5E0]
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_4dd7a0
        public_4dd760 : nop
        mov ebp, dword ptr ss : [esp+0x4C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        mov eax, dword ptr ds : [esi+8]
        not ecx
        dec ecx
        push ecx
        push ebp
        push eax
        xor edi, edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6fac]
        test eax, eax
        je public_4dd78c
        add esi, 0x14
        cmp esi, ebx
        jne public_4dd760
        public_4dd78c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_4dd790 : nop
        cmp esi, dword ptr ds : [ecx+0x5E4]
        je public_4dd7a8
        mov eax, dword ptr ds : [esi+0x10]
        jmp public_4dd98b
        public_4dd7a0 : nop
        mov ebp, dword ptr ss : [esp+0x4C]
        xor edi, edi
        jmp public_4dd790
        public_4dd7a8 : nop
        mov cl, byte ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x18], cl
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x44], edi
        jne public_4dd7c8
        push edi
        push edi
        jmp public_4dd7eb
        public_4dd7c8 : nop
        call public_4c3e10
        cmp eax, edi
        je public_4dd7e1
        push eax
        call dword ptr ds : [public_5c61fc]
        mov edi, eax
        add esp, 4
        test edi, edi
        jne public_4dd806
        public_4dd7e1 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        public_4dd7eb : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_53aaa0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        jmp public_4dd981
        public_4dd806 : nop
        mov eax, dword ptr ds : [edi+0x134]
        test eax, eax
        jne public_4dd814
        xor edx, edx
        jmp public_4dd82d
        public_4dd814 : nop
        mov ecx, dword ptr ds : [edi+0x138]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4dd82d : nop
        test edx, edx
        jle public_4dd8a5
        xor esi, esi
        mov dword ptr ss : [esp+0x10], edx
        public_4dd837 : nop
        mov eax, dword ptr ds : [edi+0x134]
        mov ecx, dword ptr ds : [esi+eax+8]
        test ecx, ecx
        jne public_4dd849
        xor ebx, ebx
        jmp public_4dd852
        public_4dd849 : nop
        mov ebx, dword ptr ds : [esi+eax+0xC]
        sub ebx, ecx
        sar ebx, 2
        public_4dd852 : nop
        xor ebp, ebp
        test ebx, ebx
        jle public_4dd897
        public_4dd858 : nop
        mov eax, dword ptr ds : [edi+0x134]
        mov eax, dword ptr ds : [esi+eax+8]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ss : [esp+0x4C]
        push eax
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_4dd892
        mov eax, dword ptr ds : [edi+0x134]
        lea edx, ds:[esi+eax]
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x24]
        call public_537260
        public_4dd892 : nop
        inc ebp
        cmp ebp, ebx
        jl public_4dd858
        public_4dd897 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_4dd837
        public_4dd8a5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_4dd980
        mov ebp, dword ptr ss : [esp+0x20]
        sub ebp, eax
        sar ebp, 2
        test ebp, ebp
        je public_4dd980
        xor ebx, ebx
        xor edi, edi
        call public_584710
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jle public_4dd903
        public_4dd8d5 : nop
        push esi
        call public_584720
        add esp, 4
        xor ecx, ecx
        test ebp, ebp
        jle public_4dd8fa
        mov edx, dword ptr ss : [esp+0x1C]
        public_4dd8e8 : nop
        cmp eax, dword ptr ds : [edx+ecx*4]
        jne public_4dd8f5
        cmp eax, edi
        jle public_4dd8f5
        mov edi, eax
        mov ebx, esi
        public_4dd8f5 : nop
        inc ecx
        cmp ecx, ebp
        jl public_4dd8e8
        public_4dd8fa : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, eax
        jl public_4dd8d5
        public_4dd903 : nop
        mov cl, byte ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x28], cl
        push 0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ss : [esp+0x4C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x4C], 1
        call dword ptr ds : [public_5c7088]
        mov dword ptr ss : [esp+0x38], ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x5E4]
        lea ecx, ds:[edx+0x5DC]
        lea edx, ss:[esp+0x28]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0x50], 2
        call public_4df080
        push 1
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_5b7e1d
        add esp, 4
        mov eax, ebx
        jmp public_4dd98b
        public_4dd980 : nop
        push eax
        public_4dd981 : nop
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        public_4dd98b : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x4dd730)
    }
}

#undef public_4dd760
#undef public_4dd78c
#undef public_4dd790
#undef public_4dd7a0
#undef public_4dd7a8
#undef public_4dd7c8
#undef public_4dd7e1
#undef public_4dd7eb
#undef public_4dd806
#undef public_4dd814
#undef public_4dd82d
#undef public_4dd837
#undef public_4dd849
#undef public_4dd852
#undef public_4dd858
#undef public_4dd892
#undef public_4dd897
#undef public_4dd8a5
#undef public_4dd8d5
#undef public_4dd8e8
#undef public_4dd8f5
#undef public_4dd8fa
#undef public_4dd903
#undef public_4dd980
#undef public_4dd981
#undef public_4dd98b
