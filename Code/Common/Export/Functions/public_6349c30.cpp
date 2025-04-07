#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6349c30);

#define public_6349c5c _public_6349c5c
#define public_6349c6e _public_6349c6e
#define public_6349c80 _public_6349c80
#define public_6349c90 _public_6349c90
#define public_6349ca2 _public_6349ca2
#define public_6349cb2 _public_6349cb2
#define public_6349cc6 _public_6349cc6
#define public_6349cdc _public_6349cdc
#define public_6349cf1 _public_6349cf1
#define public_6349cf5 _public_6349cf5
#define public_6349d07 _public_6349d07
#define public_6349d17 _public_6349d17
#define public_6349d1b _public_6349d1b
#define public_6349d2d _public_6349d2d
#define public_6349d3d _public_6349d3d
#define public_6349d41 _public_6349d41
#define public_6349d55 _public_6349d55
#define public_6349dc3 _public_6349dc3
#define public_6349dc7 _public_6349dc7
#define public_6349e28 _public_6349e28
#define public_6349e2c _public_6349e2c
#define public_6349e8c _public_6349e8c
#define public_6349e90 _public_6349e90
#define public_6349eef _public_6349eef
#define public_6349ef3 _public_6349ef3
#define public_6349f54 _public_6349f54
#define public_6349f58 _public_6349f58
#define public_6349fb8 _public_6349fb8

PROC_DECLARE(0x6349c30, internal_6349c30, public_6349c30);
extern "C" NAKED register_t __cdecl internal_6349c30()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [edi]
        xor ecx, ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        fnstsw ax
        test ah, 1
        je public_6349c5c
        mov ebx, 1
        jmp public_6349c6e
        public_6349c5c : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [ebp]
        fnstsw ax
        test ah, 0x41
        jne public_6349c6e
        mov ebx, 2
        public_6349c6e : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        je public_6349c80
        or ebx, 4
        jmp public_6349c90
        public_6349c80 : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6349c90
        or ebx, 8
        public_6349c90 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [edi+8]
        fnstsw ax
        test ah, 1
        je public_6349ca2
        or ebx, 0x10
        jmp public_6349cb2
        public_6349ca2 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [ebp+8]
        fnstsw ax
        test ah, 0x41
        jne public_6349cb2
        or ebx, 0x20
        public_6349cb2 : nop
        test bx, bx
        jne public_6349cc6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349cc6 : nop
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 1
        je public_6349cdc
        mov dword ptr ss : [esp+0x10], 1
        jmp public_6349cf1
        public_6349cdc : nop
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ss : [ebp]
        fnstsw ax
        test ah, 0x41
        jne public_6349cf5
        mov dword ptr ss : [esp+0x10], 2
        public_6349cf1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349cf5 : nop
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        je public_6349d07
        or ecx, 4
        jmp public_6349d17
        public_6349d07 : nop
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6349d1b
        or ecx, 8
        public_6349d17 : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_6349d1b : nop
        fld dword ptr ds : [esi+0x1C]
        fcomp dword ptr ds : [edi+8]
        fnstsw ax
        test ah, 1
        je public_6349d2d
        or ecx, 0x10
        jmp public_6349d3d
        public_6349d2d : nop
        fld dword ptr ds : [esi+0x1C]
        fcomp dword ptr ss : [ebp+8]
        fnstsw ax
        test ah, 0x41
        jne public_6349d41
        or ecx, 0x20
        public_6349d3d : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_6349d41 : nop
        test cx, cx
        jne public_6349d55
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349d55 : nop
        mov eax, ecx
        and eax, ebx
        test ax, ax
        jne public_6349fb8
        test bl, 0x10
        je public_6349dc7
        test cl, 0x10
        jne public_6349dc7
        fld dword ptr ds : [edi+8]
        push 1
        fsub dword ptr ds : [esi+0xC]
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        fstp dword ptr ss : [esp+0x38]
        push edi
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+0xC]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349dc3
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349dc3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349dc7 : nop
        test bl, 2
        je public_6349e2c
        test cl, 2
        jne public_6349e2c
        fld dword ptr ds : [esi+4]
        push 2
        fsub dword ptr ss : [ebp]
        push 1
        push ebp
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x38]
        push ecx
        fld dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+0x14]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349e28
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349e28 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349e2c : nop
        test bl, 0x20
        je public_6349e90
        test cl, 0x20
        jne public_6349e90
        fld dword ptr ds : [esi+0xC]
        push 1
        fsub dword ptr ss : [ebp+8]
        push 0
        push ebp
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x38]
        push ecx
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+0x1C]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349e8c
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349e8c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349e90 : nop
        test bl, 1
        je public_6349ef3
        test cl, 1
        jne public_6349ef3
        fld dword ptr ds : [edi]
        push 2
        fsub dword ptr ds : [esi+4]
        push 1
        lea ecx, ss:[esp+0x1C]
        push ecx
        fstp dword ptr ss : [esp+0x38]
        push edi
        fld dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+4]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349eef
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349eef : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349ef3 : nop
        test bl, 4
        je public_6349f58
        test cl, 4
        jne public_6349f58
        fld dword ptr ds : [edi+4]
        push 2
        fsub dword ptr ds : [esi+8]
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        fstp dword ptr ss : [esp+0x38]
        push edi
        fld dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+8]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349f54
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349f54 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6349f58 : nop
        test bl, 8
        je public_6349fb8
        test cl, 8
        jne public_6349fb8
        fld dword ptr ds : [esi+8]
        push 2
        fsub dword ptr ss : [ebp+4]
        push 0
        push ebp
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x38]
        push ecx
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+0x18]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+4]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+8]
        push eax
        fstp dword ptr ss : [esp+0x34]
        call public_6349ba0
        test eax, eax
        je public_6349fb8
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6349fb8 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6349c30)
    }
}

#undef public_6349c5c
#undef public_6349c6e
#undef public_6349c80
#undef public_6349c90
#undef public_6349ca2
#undef public_6349cb2
#undef public_6349cc6
#undef public_6349cdc
#undef public_6349cf1
#undef public_6349cf5
#undef public_6349d07
#undef public_6349d17
#undef public_6349d1b
#undef public_6349d2d
#undef public_6349d3d
#undef public_6349d41
#undef public_6349d55
#undef public_6349dc3
#undef public_6349dc7
#undef public_6349e28
#undef public_6349e2c
#undef public_6349e8c
#undef public_6349e90
#undef public_6349eef
#undef public_6349ef3
#undef public_6349f54
#undef public_6349f58
#undef public_6349fb8
