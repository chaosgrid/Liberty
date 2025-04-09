#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_51cc00);
CLANG_FORWARD_PROC_SYMBOL(public_53a9c0);
CLANG_FORWARD_PROC_SYMBOL(public_53a9d0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_51cce4 _public_51cce4
#define public_51cd08 _public_51cd08
#define public_51cd0a _public_51cd0a
#define public_51cd91 _public_51cd91
#define public_51cd9e _public_51cd9e
#define public_51cdc0 _public_51cdc0
#define public_51cdd4 _public_51cdd4
#define public_51ce54 _public_51ce54
#define public_51ce96 _public_51ce96
#define public_51ceb1 _public_51ceb1
#define public_51ced0 _public_51ced0
#define public_51ced2 _public_51ced2
#define public_51cefd _public_51cefd
#define public_51cf22 _public_51cf22
#define public_51cf5c _public_51cf5c
#define public_51cf5e _public_51cf5e
#define public_51d014 _public_51d014
#define public_51d01f _public_51d01f

PROC_DECLARE(0x51cc00, internal_51cc00, public_51cc00);
extern "C" NAKED register_t __cdecl internal_51cc00()
{
    __asm
    {
        mov eax, 0x4040
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        call public_41a3e0
        test al, al
        jne public_51d01f
        call public_42d680
        fadd dword ptr ds : [public_675298]
        fst dword ptr ds : [public_675298]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_51d01f
        fld dword ptr ds : [public_675298]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [public_675298]
        call public_54baf0
        mov ebp, eax
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], ebp
        je public_51d01f
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_613ed0]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [ecx]
        push 0xFDFF
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x44], 0x800
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x3C], 0x469C4000
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_51cdd4
        mov eax, dword ptr ss : [esp+0x44]
        cmp edi, eax
        jae public_51cdd4
        lea ebp, ss:[esp+0x48]
        public_51cce4 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_51cd08
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_51cd08
        mov esi, eax
        jmp public_51cd0a
        public_51cd08 : nop
        xor esi, esi
        public_51cd0a : nop
        mov ecx, esi
        call dword ptr ds : [public_5c64f8]
        mov bl, al
        test bl, 0x81
        jne public_51cdc0
        fld dword ptr ds : [esi+0x34]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi+0x38]
        fmul dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d8850]
        fcom dword ptr ds : [public_5ca218]
        fnstsw ax
        test ah, 5
        jp public_51cd91
        fstp st(0)
        fld dword ptr ds : [public_5ca218]
        public_51cd91 : nop
        test bl, 0x10
        je public_51cd9e
        fstp st(0)
        fld dword ptr ds : [public_5db0b4]
        public_51cd9e : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_51cdc0
        mov eax, dword ptr ds : [esi+0xB0]
        push 1
        or ebx, 1
        push ebx
        push eax
        call public_4c4e00
        add esp, 0xC
        public_51cdc0 : nop
        mov eax, dword ptr ss : [esp+0x44]
        inc edi
        add ebp, 4
        cmp edi, eax
        jb public_51cce4
        mov ebp, dword ptr ss : [esp+0x18]
        public_51cdd4 : nop
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        xor edi, edi
        cmp eax, edi
        je public_51ceb1
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x2048]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x2054], edi
        mov dword ptr ss : [esp+0x2050], 0x800
        mov dword ptr ss : [esp+0x3C], 0x45EA6000
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_51ceb1
        mov eax, dword ptr ss : [esp+0x204C]
        cmp edi, eax
        jae public_51ceb1
        lea edx, ss:[esp+0x2050]
        mov dword ptr ss : [esp+0x10], edx
        public_51ce54 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        mov bl, al
        test bl, 0x81
        jne public_51ce96
        mov eax, dword ptr ds : [esi]
        push 0x45EA6000
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_51ce96
        mov edx, dword ptr ds : [esi]
        push 1
        or ebx, 0x29
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4e00
        add esp, 0xC
        public_51ce96 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x204C]
        inc edi
        add edx, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edx
        jb public_51ce54
        mov ebp, dword ptr ss : [esp+0x18]
        public_51ceb1 : nop
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_51ced0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_51ced0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_51ced2
        public_51ced0 : nop
        xor eax, eax
        public_51ced2 : nop
        mov edx, dword ptr ds : [public_612434]
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c6640]
        test eax, eax
        je public_51cefd
        mov ecx, eax
        call dword ptr ds : [public_5c64e4]
        fstp dword ptr ss : [esp+0x14]
        public_51cefd : nop
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], 1
        call public_540fc0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_51d01f
        mov ebx, dword ptr ds : [public_5c6320]
        public_51cf22 : nop
        mov ecx, edi
        call public_53a9c0
        test al, al
        jne public_51d014
        cmp edi, ebp
        je public_51d014
        test edi, edi
        je public_51cf5c
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_51cf5c
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_51cf5c
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_51cf5e
        public_51cf5c : nop
        xor esi, esi
        public_51cf5e : nop
        fld dword ptr ds : [esi+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        je public_51d014
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x34]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_51d014
        push 1
        mov ecx, edi
        call public_53a9d0
        mov edx, dword ptr ds : [esi+0x104]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x44], edx
        call ebx
        add esp, 0xC
        test eax, eax
        jne public_51d014
        push 1
        push eax
        lea edx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x20]
        add esp, 0x10
        test al, 1
        jne public_51d014
        mov edx, dword ptr ss : [esp+0x18]
        or al, 0x41
        mov byte ptr ss : [esp+0x10], al
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        push ecx
        push edx
        call public_4c4e00
        add esp, 0xC
        public_51d014 : nop
        mov edi, dword ptr ds : [edi+0x14]
        test edi, edi
        jne public_51cf22
        public_51d01f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4040
        ret 
        UNREACHABLE_TRAP(0x51cc00)
    }
}

#undef public_51cce4
#undef public_51cd08
#undef public_51cd0a
#undef public_51cd91
#undef public_51cd9e
#undef public_51cdc0
#undef public_51cdd4
#undef public_51ce54
#undef public_51ce96
#undef public_51ceb1
#undef public_51ced0
#undef public_51ced2
#undef public_51cefd
#undef public_51cf22
#undef public_51cf5c
#undef public_51cf5e
#undef public_51d014
#undef public_51d01f
