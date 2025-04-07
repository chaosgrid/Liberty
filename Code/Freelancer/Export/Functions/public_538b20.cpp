#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_538b20);
CLANG_FORWARD_PROC_SYMBOL(public_538ed0);
CLANG_FORWARD_PROC_SYMBOL(public_538fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0a58);

#define public_538b85 _public_538b85
#define public_538be8 _public_538be8
#define public_538bea _public_538bea
#define public_538c05 _public_538c05
#define public_538c31 _public_538c31
#define public_538c48 _public_538c48
#define public_538cd3 _public_538cd3
#define public_538ce9 _public_538ce9
#define public_538cf3 _public_538cf3
#define public_538d09 _public_538d09
#define public_538d0c _public_538d0c
#define public_538d0f _public_538d0f
#define public_538d2c _public_538d2c
#define public_538d47 _public_538d47
#define public_538d51 _public_538d51
#define public_538d6d _public_538d6d
#define public_538d72 _public_538d72
#define public_538d77 _public_538d77
#define public_538d8c _public_538d8c
#define public_538e15 _public_538e15
#define public_538e20 _public_538e20
#define public_538e2b _public_538e2b
#define public_538e45 _public_538e45

PROC_DECLARE(0x538b20, internal_538b20, public_538b20);
extern "C" NAKED register_t __cdecl internal_538b20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0a58 @0x538b28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0a58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x1588]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1588], ebx
        call dword ptr ds : [public_5c6058]
        or edi, 0xFFFFFFFF
        test al, al
        je public_538d8c
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_538d8c
/*FIXUP public_538b85 : nop
        push offset public_5de744 @0x538b85*/
  FIXUP public_538b85 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de744
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_538d77
        push 0x4C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x1580], 1
        je public_538be8
        push ebx
        mov ecx, esi
        call public_538ed0
        mov dword ptr ds : [esi], offset public_5de720
        push 1
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x1584], 2
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_538fe0
        mov dword ptr ds : [esi], offset public_5de730
        mov edi, esi
        jmp public_538bea
        public_538be8 : nop
        xor edi, edi
        public_538bea : nop
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1580], bl
        xor esi, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_538d2c
/*FIXUP public_538c05 : nop
        push offset public_5c9ca4 @0x538c05*/
  FIXUP public_538c05 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x10]
        je public_538c48
        call dword ptr ds : [public_5c6698]
        cmp eax, ebx
        jne public_538c31
        mov dword ptr ds : [edi+0x14], ebx
        mov byte ptr ds : [edi+0x18], bl
        jmp public_538d0f
        public_538c31 : nop
        push eax
        lea ecx, ds:[edi+0x18]
        push 0x20
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [edi+0x14], eax
        jmp public_538d0f
/*FIXUP public_538c48 : nop
        push offset public_5de73c @0x538c48*/
  FIXUP public_538c48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de73c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_538d0f
        push 0x10
        call public_5b7e84
        add esp, 4
        push ebx
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi]
        push 1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        lea ecx, ss:[esp+0x14]
        mov byte ptr ds : [esi+4], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 3
        lea ecx, ss:[esp+0x14]
        mov byte ptr ds : [esi+5], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 4
        lea ecx, ss:[esp+0x14]
        mov byte ptr ds : [esi+6], al
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_538cd3
        mov dword ptr ds : [esi+8], 0x3C23D70A
        public_538cd3 : nop
        mov dword ptr ds : [esi+0xC], ebx
        cmp byte ptr ds : [edi+0xC], bl
        je public_538ce9
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebx
        je public_538ce9
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x10], edx
        jmp public_538cf3
        public_538ce9 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_538cf3 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_538d09
        mov dword ptr ds : [ecx], eax
        jmp public_538d0c
        public_538d09 : nop
        mov dword ptr ds : [edi+4], eax
        public_538d0c : nop
        mov dword ptr ds : [edi+8], eax
        public_538d0f : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_538c05
        cmp esi, ebx
        je public_538d2c
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        public_538d2c : nop
        cmp byte ptr ds : [public_675564], bl
        je public_538d47
        mov eax, dword ptr ds : [public_675568]
        cmp eax, ebx
        je public_538d47
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [public_675568], edx
        jmp public_538d51
        public_538d47 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_538d51 : nop
        mov ecx, dword ptr ds : [public_675560]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [public_675560]
        cmp ecx, ebx
        je public_538d6d
        mov dword ptr ds : [ecx], eax
        jmp public_538d72
        public_538d6d : nop
        mov dword ptr ds : [public_67555c], eax
        public_538d72 : nop
        mov dword ptr ds : [public_675560], eax
        public_538d77 : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_538b85
        or edi, 0xFFFFFFFF
        public_538d8c : nop
        lea edx, ss:[esp+0x1438]
        mov dword ptr ss : [esp+0x1580], 3
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x1438]
        mov byte ptr ss : [esp+0x1580], 4
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x143C]
        mov byte ptr ss : [esp+0x1584], 3
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1588], 5
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x20], edi
        je public_538e2b
        cmp dword ptr ss : [esp+0x24], ebx
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_538e20
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_538e15
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_538e15 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], ebx
        public_538e20 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call esi
        mov dword ptr ss : [esp+0x20], edi
        public_538e2b : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_538e45
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_538e45 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x1584], edi
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1578]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x538b20)
    }
}

#undef public_538b85
#undef public_538be8
#undef public_538bea
#undef public_538c05
#undef public_538c31
#undef public_538c48
#undef public_538cd3
#undef public_538ce9
#undef public_538cf3
#undef public_538d09
#undef public_538d0c
#undef public_538d0f
#undef public_538d2c
#undef public_538d47
#undef public_538d51
#undef public_538d6d
#undef public_538d72
#undef public_538d77
#undef public_538d8c
#undef public_538e15
#undef public_538e20
#undef public_538e2b
#undef public_538e45
