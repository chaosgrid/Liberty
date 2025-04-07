#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_6339f20);
CLANG_FORWARD_PROC_SYMBOL(public_633d770);
CLANG_FORWARD_PROC_SYMBOL(public_633daa0);
CLANG_FORWARD_PROC_SYMBOL(public_633dd10);

#define public_633d80c _public_633d80c
#define public_633d8dd _public_633d8dd
#define public_633d9ec _public_633d9ec
#define public_633da12 _public_633da12
#define public_633da8b _public_633da8b

PROC_DECLARE(0x633d770, internal_633d770, public_633d770);
extern "C" NAKED register_t __cdecl internal_633d770()
{
    __asm
    {
        sub esp, 0x98
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xA8]
        test esi, esi
        push edi
        je public_633da8b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 2
        jne public_633d80c
        lea ecx, ss:[esp+0x2C]
        call public_62748a0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x2C]
        rep movsd
        push ebx
        lea ecx, ss:[esp+0x30]
        call public_6339f20
        mov esi, dword ptr ss : [esp+0xA8]
        push esi
        lea ecx, ss:[esp+0x30]
        call public_633dd10
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_633da8b
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x98
        ret 
        public_633d80c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 3
        jne public_633d8dd
        lea ecx, ss:[esp+0x2C]
        call public_62748a0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [edx+0x28]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x60], ecx
        push esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x68], edx
        call public_633daa0
        fld dword ptr ds : [esi+0xC]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_633da8b
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x98
        ret 
        public_633d8dd : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 4
        jne public_633da12
        lea ecx, ss:[esp+0x2C]
        call public_62748a0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xC], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        fld dword ptr ds : [eax+4]
        fmul qword ptr ds : [public_639df88]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x50]
        push eax
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x90]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x70], edx
        call public_6288800
        lea edx, ss:[esp+0x98]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_62dbb90
        add esp, 0x18
        lea edx, ss:[esp+0x98]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_62dba00
        lea ecx, ss:[esp+0x98]
        push ecx
        lea edx, ss:[esp+0x10]
        mov bl, al
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call public_62c4780
        test bl, bl
        jne public_633d9ec
        fchs 
        public_633d9ec : nop
        fld dword ptr ds : [esi+0xC]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_633da8b
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x98
        ret 
        public_633da12 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0xA8]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+0xC]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_633da8b
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x98
        ret 
        public_633da8b : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x633d770)
    }
}

#undef public_633d80c
#undef public_633d8dd
#undef public_633d9ec
#undef public_633da12
#undef public_633da8b
