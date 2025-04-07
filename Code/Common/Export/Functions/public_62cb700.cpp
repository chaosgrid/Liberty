#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c50c0);
CLANG_FORWARD_PROC_SYMBOL(public_62cbcf0);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62db0c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);
CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec5b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec610);
CLANG_FORWARD_PROC_SYMBOL(public_62ec650);
CLANG_FORWARD_PROC_SYMBOL(public_62ec680);
CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_62ecc00);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cb715 _public_62cb715
#define public_62cb728 _public_62cb728
#define public_62cb742 _public_62cb742
#define public_62cb75c _public_62cb75c
#define public_62cb75e _public_62cb75e
#define public_62cb76a _public_62cb76a
#define public_62cb795 _public_62cb795
#define public_62cb797 _public_62cb797
#define public_62cb7d2 _public_62cb7d2
#define public_62cb7d4 _public_62cb7d4
#define public_62cb7f3 _public_62cb7f3
#define public_62cb7f5 _public_62cb7f5
#define public_62cb835 _public_62cb835
#define public_62cb888 _public_62cb888
#define public_62cb8b2 _public_62cb8b2
#define public_62cb8d8 _public_62cb8d8
#define public_62cb8de _public_62cb8de
#define public_62cb922 _public_62cb922
#define public_62cb957 _public_62cb957
#define public_62cb959 _public_62cb959
#define public_62cb985 _public_62cb985
#define public_62cb987 _public_62cb987
#define public_62cb9e3 _public_62cb9e3
#define public_62cb9e5 _public_62cb9e5
#define public_62cba23 _public_62cba23
#define public_62cba4a _public_62cba4a
#define public_62cba53 _public_62cba53
#define public_62cba6f _public_62cba6f
#define public_62cbab6 _public_62cbab6
#define public_62cbaf3 _public_62cbaf3
#define public_62cbb23 _public_62cbb23
#define public_62cbb33 _public_62cbb33
#define public_62cbb8a _public_62cbb8a
#define public_62cbbc2 _public_62cbbc2
#define public_62cbc02 _public_62cbc02
#define public_62cbc54 _public_62cbc54
#define public_62cbc64 _public_62cbc64
#define public_62cbc7f _public_62cbc7f
#define public_62cbcb9 _public_62cbcb9
#define public_62cbcd0 _public_62cbcd0
#define public_62cbcd5 _public_62cbcd5

PROC_DECLARE(0x62cb700, internal_62cb700, public_62cb700);
extern "C" NAKED register_t __cdecl internal_62cb700()
{
    __asm
    {
        sub esp, 0xD0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        jne public_62cb728
        public_62cb715 : nop
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 
        public_62cb728 : nop
        mov al, byte ptr ds : [esi+0x285]
        test al, al
        je public_62cb742
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cb742 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecaf0
        cmp eax, ebp
        lea edi, ds:[esi+0x2C]
        je public_62cb75c
        add eax, 8
        jmp public_62cb75e
        public_62cb75c : nop
        xor eax, eax
        public_62cb75e : nop
        cmp eax, dword ptr ds : [edi]
        je public_62cb76a
        push eax
        mov ecx, edi
        call public_6341610
        public_62cb76a : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62cb8de
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        je public_62cb795
        lea edi, ds:[eax-8]
        jmp public_62cb797
        public_62cb795 : nop
        xor edi, edi
        public_62cb797 : nop
        cmp edi, ebp
        mov ebx, dword ptr ds : [esi+0x14]
        je public_62cb715
        call public_6303220
        test al, al
        jne public_62cb835
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62cb7d2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62cb7d2
        mov ebp, eax
        jmp public_62cb7d4
        public_62cb7d2 : nop
        xor ebp, ebp
        public_62cb7d4 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62cb7f3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62cb7f5
        public_62cb7f3 : nop
        xor eax, eax
        public_62cb7f5 : nop
        test ebp, ebp
        je public_62cb835
        test eax, eax
        je public_62cb835
        mov cl, byte ptr ss : [ebp+0x2BD]
        test cl, cl
        je public_62cb835
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_62cb835
        mov ecx, dword ptr ss : [ebp+0x1B4]
        test ecx, ecx
        je public_62cb715
        mov eax, dword ptr ds : [eax+0x1B4]
        test eax, eax
        je public_62cb715
        cmp ecx, eax
        jne public_62cb715
        public_62cb835 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_62cb715
        mov eax, dword ptr ss : [esp+0x14]
        test eax, 0x7F0000
        je public_62cb715
        test eax, 0x200000
        jne public_62cb715
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x148]
        cmp eax, 0x11
        je public_62cb715
        cmp eax, 8
        je public_62cb715
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        public_62cb888 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0xB8]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        jne public_62cb8b2
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xB0]
        mov eax, dword ptr ss : [esp+0x10]
        public_62cb8b2 : nop
        cmp eax, edi
        je public_62cb8de
        cmp eax, ebp
        je public_62cb8d8
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        je public_62cb715
        mov eax, dword ptr ss : [esp+0x10]
        public_62cb8d8 : nop
        cmp eax, ebp
        mov edi, eax
        jne public_62cb888
        public_62cb8de : nop
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ec5b0
        test al, al
        je public_62cb922
        mov edx, dword ptr ds : [esi+0x34]
        lea ecx, ds:[esi+0x34]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x90]
        lea ecx, ds:[esi+0x90]
        call dword ptr ds : [eax+0x10]
        mov ebx, 1
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xD0
        ret 
        public_62cb922 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebp
        je public_62cbcd0
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62cbcd0
        mov al, byte ptr ds : [esi+0x283]
        test al, al
        mov ebx, 1
        je public_62cba53
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebp
        je public_62cb957
        add eax, 0xFFFFFFF8
        jmp public_62cb959
        public_62cb957 : nop
        xor eax, eax
        public_62cb959 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push 0x43480000
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4500
        add esp, 0xC
        test al, al
        jne public_62cba4a
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebp
        je public_62cb985
        lea ecx, ds:[eax-8]
        jmp public_62cb987
        public_62cb985 : nop
        xor ecx, ecx
        public_62cb987 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639fb58]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_62cba4a
        mov al, byte ptr ds : [esi+0x284]
        test al, al
        jne public_62cba23
        lea ecx, ss:[esp+0x70]
        call public_62dae20
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x7C], ebp
        je public_62cb9e3
        lea ecx, ds:[eax-8]
        jmp public_62cb9e5
        public_62cb9e3 : nop
        xor ecx, ecx
        public_62cb9e5 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x27C]
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0xC0], 0x42C80000
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x27C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov al, bl
        test al, al
        mov byte ptr ds : [esi+0x284], bl
        je public_62cba6f
        public_62cba23 : nop
        fld dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x27C]
        fstp dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ds : [esi+0x27C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        cmp eax, ebx
        je public_62cbcd5
        cmp eax, ebp
        je public_62cbcd5
        public_62cba4a : nop
        mov byte ptr ds : [esi+0x283], 0
        jmp public_62cba6f
        public_62cba53 : nop
        mov al, byte ptr ds : [esi+0x284]
        test al, al
        je public_62cba6f
        mov ecx, dword ptr ds : [esi+0x27C]
        mov byte ptr ds : [esi+0x284], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_62cba6f : nop
        mov al, byte ptr ds : [esi+0x282]
        test al, al
        je public_62cbab6
        mov eax, dword ptr ds : [esi+0x278]
        cmp eax, ebp
        je public_62cbab6
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        cmp eax, ebx
        je public_62cbcd5
        cmp eax, ebp
        je public_62cbcd5
        mov ecx, dword ptr ds : [esi+0x278]
        mov byte ptr ds : [esi+0x282], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_62cbab6 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ec610
        mov al, byte ptr ds : [esi+0x281]
        test al, al
        mov al, byte ptr ss : [esp+0x20]
        je public_62cbb33
        test al, al
        jne public_62cbb23
        mov al, byte ptr ds : [esi+0x280]
        test al, al
        je public_62cbb23
        mov byte ptr ds : [esi+0x280], 0
        mov byte ptr ds : [esi+0x281], 0
        public_62cbaf3 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x1364
        call public_62ec680
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        test al, al
        je public_62cbc64
        push ebp
        call public_62ec650
        mov byte ptr ds : [esi+0x285], bl
        public_62cbb23 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xD0
        ret 
        public_62cbb33 : nop
        test al, al
        je public_62cbaf3
        mov ecx, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x18]
        push edx
        add ecx, 0x34
        call public_62e74a0
        lea ecx, ss:[esp+0x28]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x2C]
        cmp byte ptr ss : [esp+0x21], bl
        je public_62cbbc2
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62cbb8a
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62cbb8a : nop
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_62cbc02
        public_62cbbc2 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x1C]
        push eax
        add ecx, 0x34
        call public_62e74a0
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ss : [esp+0x25]
        push edi
        add ecx, 4
        push eax
        push ebp
        call dword ptr ds : [edx+0x64]
        test eax, eax
        jne public_62cbc54
        pop edi
        mov byte ptr ds : [esi+0x281], bl
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 
        public_62cbc02 : nop
        lea ecx, ss:[esp+0x38]
        call public_62db0c0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        mov ecx, dword ptr ds : [esi+0x278]
        push eax
        call public_62c50c0
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov byte ptr ds : [esi+0x282], bl
        public_62cbc54 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xD0
        ret 
        public_62cbc64 : nop
        call public_62ecb20
        test al, al
        je public_62cbc7f
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecc00
        test al, al
        je public_62cbcb9
        public_62cbc7f : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecc00
        test al, al
        je public_62cbcb9
        mov ecx, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [ecx+0x1958]
        test al, al
        je public_62cbcb9
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        mov ecx, esi
        call public_62cbcf0
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xD0
        ret 
        public_62cbcb9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xD0
        ret 
        public_62cbcd0 : nop
        mov eax, 2
        public_62cbcd5 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 
        UNREACHABLE_TRAP(0x62cb700)
    }
}

#undef public_62cb715
#undef public_62cb728
#undef public_62cb742
#undef public_62cb75c
#undef public_62cb75e
#undef public_62cb76a
#undef public_62cb795
#undef public_62cb797
#undef public_62cb7d2
#undef public_62cb7d4
#undef public_62cb7f3
#undef public_62cb7f5
#undef public_62cb835
#undef public_62cb888
#undef public_62cb8b2
#undef public_62cb8d8
#undef public_62cb8de
#undef public_62cb922
#undef public_62cb957
#undef public_62cb959
#undef public_62cb985
#undef public_62cb987
#undef public_62cb9e3
#undef public_62cb9e5
#undef public_62cba23
#undef public_62cba4a
#undef public_62cba53
#undef public_62cba6f
#undef public_62cbab6
#undef public_62cbaf3
#undef public_62cbb23
#undef public_62cbb33
#undef public_62cbb8a
#undef public_62cbbc2
#undef public_62cbc02
#undef public_62cbc54
#undef public_62cbc64
#undef public_62cbc7f
#undef public_62cbcb9
#undef public_62cbcd0
#undef public_62cbcd5
