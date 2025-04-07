#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);

#define public_6f50cc0 _public_6f50cc0
#define public_6f50cc4 _public_6f50cc4
#define public_6f50cf6 _public_6f50cf6
#define public_6f50cfc _public_6f50cfc
#define public_6f50d52 _public_6f50d52
#define public_6f50d5a _public_6f50d5a
#define public_6f50d70 _public_6f50d70
#define public_6f50daa _public_6f50daa
#define public_6f50dae _public_6f50dae
#define public_6f50de0 _public_6f50de0
#define public_6f50de6 _public_6f50de6
#define public_6f50e03 _public_6f50e03

PROC_DECLARE(0x6f50c50, internal_6f50c50, public_6f50c50);
extern "C" NAKED register_t __cdecl internal_6f50c50()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 0x10
        fcomp dword ptr ds : [public_6fb444c]
        push ebx
        push ebp
        push esi
        push edi
        fnstsw ax
        test ah, 0x44
        jnp public_6f50e03
        cmp dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f50e03
        mov ebp, dword ptr ds : [public_6fb35e8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x20], 0
        call ebp
        fld dword ptr ds : [public_6fbb788]
        fsub qword ptr ds : [public_6fbb930]
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x28]
        fst dword ptr ss : [esp+0x10]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f50cc0
        fld st(0)
        jmp public_6f50cc4
        public_6f50cc0 : nop
        fld dword ptr ss : [esp+0x10]
        public_6f50cc4 : nop
        fld dword ptr ds : [public_6fbb784]
        fadd qword ptr ds : [public_6fbb930]
        fstp qword ptr ss : [esp+0x18]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6f50cf6
        fld dword ptr ss : [esp+0x10]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_6f50cfc
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        jmp public_6f50cfc
        public_6f50cf6 : nop
        fstp st(0)
        fld qword ptr ss : [esp+0x18]
        public_6f50cfc : nop
        mov ebx, dword ptr ds : [public_6fb3620]
        push ecx
        lea eax, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call ebx
        mov al, byte ptr ss : [esp+0x3C]
        add esp, 0xC
        test al, al
        je public_6f50e03
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd0c90
        call public_6f2e220
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6fd0c94]
        cmp eax, ecx
        je public_6f50d52
        mov edx, dword ptr ss : [esp+0x2C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f50d52
        lea eax, ss:[esp+0x10]
        jmp public_6f50d5a
        public_6f50d52 : nop
        mov dword ptr ss : [esp+0x30], ecx
        lea eax, ss:[esp+0x30]
        public_6f50d5a : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, ecx
        je public_6f50e03
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, dword ptr ds : [edi+0x18]
        je public_6f50e03
        public_6f50d70 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        push esi
        push ecx
        call ebp
        fld dword ptr ds : [public_6fbb788]
        fsub qword ptr ds : [public_6fbb930]
        add esp, 0xC
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        fadd dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x30]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f50daa
        fld st(0)
        jmp public_6f50dae
        public_6f50daa : nop
        fld dword ptr ss : [esp+0x30]
        public_6f50dae : nop
        fld dword ptr ds : [public_6fbb784]
        fadd qword ptr ds : [public_6fbb930]
        fstp qword ptr ss : [esp+0x18]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6f50de0
        fld dword ptr ss : [esp+0x30]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_6f50de6
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        jmp public_6f50de6
        public_6f50de0 : nop
        fstp st(0)
        fld qword ptr ss : [esp+0x18]
        public_6f50de6 : nop
        push ecx
        fstp dword ptr ss : [esp]
        lea edx, ss:[esp+0x28]
        push esi
        push edx
        call ebx
        mov eax, dword ptr ds : [edi+0x18]
        add esi, 8
        add esp, 0xC
        cmp esi, eax
        jne public_6f50d70
        public_6f50e03 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50c50)
    }
}

#undef public_6f50cc0
#undef public_6f50cc4
#undef public_6f50cf6
#undef public_6f50cfc
#undef public_6f50d52
#undef public_6f50d5a
#undef public_6f50d70
#undef public_6f50daa
#undef public_6f50dae
#undef public_6f50de0
#undef public_6f50de6
#undef public_6f50e03
