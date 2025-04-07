#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_564610);
CLANG_FORWARD_PROC_SYMBOL(public_579880);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a3360);
CLANG_FORWARD_PROC_SYMBOL(public_5a4810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5104);

#define public_5a4892 _public_5a4892
#define public_5a48a1 _public_5a48a1
#define public_5a4904 _public_5a4904
#define public_5a4a26 _public_5a4a26
#define public_5a4a85 _public_5a4a85
#define public_5a4ac7 _public_5a4ac7
#define public_5a4af1 _public_5a4af1
#define public_5a4afa _public_5a4afa
#define public_5a4b27 _public_5a4b27
#define public_5a4b30 _public_5a4b30

PROC_DECLARE(0x5a4810, internal_5a4810, public_5a4810);
extern "C" NAKED register_t __cdecl internal_5a4810()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov edx, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFF
/*FIXUP push public_5c5104 @0x5a481c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5104
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebp
        push esi
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_5a3360
        mov edx, dword ptr ss : [esp+0x40]
        test edx, edx
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [esi+0x38C], eax
        je public_5a48a1
        cmp byte ptr ds : [edx], 0
        je public_5a48a1
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ebp, ds:[esi+0x368]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_5c7088]
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        jne public_5a4892
        mov ebp, dword ptr ds : [public_5c7078]
        public_5a4892 : nop
        push ebp
        call public_564610
        add esp, 4
        mov dword ptr ds : [esi+0x380], eax
        public_5a48a1 : nop
        mov cl, byte ptr ss : [esp+0x60]
        mov byte ptr ss : [esp+0x20], cl
        push 0
        lea ecx, ss:[esp+0x24]
        lea ebp, ds:[esi+0x18]
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c7088]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d075c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5d075c @0x5a48e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d075c
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [public_5c6fe8]
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_5a4904
        mov eax, dword ptr ds : [public_5c7078]
        public_5a4904 : nop
        push 0
        push esi
/*FIXUP push offset public_5cf24c @0x5a4907*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
        push eax
        call public_59db20
        add esp, 0x10
        test eax, eax
        mov dword ptr ds : [esi+0x390], eax
        je public_5a4afa
        fld dword ptr ds : [esi+0xB0]
        lea edx, ss:[esp+0x14]
        fld dword ptr ds : [esi+0xAC]
        push edx
        fadd dword ptr ds : [esi+0xB8]
        mov ecx, eax
        fld dword ptr ds : [esi+0xA8]
        fsub dword ptr ds : [esi+0xB4]
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        call public_579c40
        fld dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [esi+0x390]
        fadd st(0), st
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xB4]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_579cc0
        mov ecx, dword ptr ds : [esi+0x390]
        push 0
        call public_5799f0
        mov ecx, dword ptr ds : [esi+0x390]
        push 1
        call public_579880
        mov ecx, dword ptr ds : [esi+0x390]
        push 2
        call public_579a60
        mov edi, dword ptr ss : [esp+0x58]
        test edi, edi
        je public_5a4afa
        mov al, byte ptr ss : [esp+0x60]
        xor ebp, ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebp
        push 0x828B
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x3C], 1
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x38], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x44], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x38], 2
        je public_5a4a26
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], ebp
        public_5a4a26 : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x38], 1
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x38], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x44], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x38], 4
        je public_5a4a85
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], ebp
        public_5a4a85 : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x38], 1
        call dword ptr ds : [public_5c62bc]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        call public_57da40
        mov ecx, dword ptr ds : [esi+0x390]
        add esp, 8
        lea edx, ss:[esp+0x14]
        push edx
        call public_57b3e0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x38], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x60], ecx
        je public_5a4af1
        public_5a4ac7 : nop
        push ebp
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_46d680
        cmp dword ptr ss : [esp+0x60], esi
        jne public_5a4ac7
        mov eax, dword ptr ss : [esp+0x18]
        public_5a4af1 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a4afa : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        je public_5a4b30
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5a4b27
        cmp cl, 0xFF
        je public_5a4b27
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0x24
        public_5a4b27 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a4b30 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0x24
        UNREACHABLE_TRAP(0x5a4810)
    }
}

#undef public_5a4892
#undef public_5a48a1
#undef public_5a4904
#undef public_5a4a26
#undef public_5a4a85
#undef public_5a4ac7
#undef public_5a4af1
#undef public_5a4afa
#undef public_5a4b27
#undef public_5a4b30
