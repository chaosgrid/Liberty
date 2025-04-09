#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_49e890);

#define public_49ea3a _public_49ea3a
#define public_49ea3c _public_49ea3c

PROC_DECLARE(0x49e890, internal_49e890, public_49e890);
extern "C" NAKED register_t __cdecl internal_49e890()
{
    __asm
    {
        sub esp, 0x54
        fild dword ptr ds : [public_616840]
        push ebx
        mov ebx, ecx
        fst dword ptr ss : [esp+8]
        fsub dword ptr ds : [ebx+0x424]
        fild dword ptr ds : [public_616844]
        fst dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ebx+0x428]
        fstp dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_49ea3a
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_49ea3a
        fcomp dword ptr ds : [ebx+0x430]
        fnstsw ax
        test ah, 5
        jp public_49ea3c
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ebx+0x434]
        fnstsw ax
        test ah, 5
        jp public_49ea3c
        fld dword ptr ss : [esp+8]
        push esi
        fsub dword ptr ds : [public_67dc60]
        push edi
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x3C]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], eax
        fsub dword ptr ds : [public_67dc64]
        lea eax, ss:[esp+0x30]
        push eax
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x38], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        rep movsd
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x3C], edx
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_423b90
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0xB0]
        mov ecx, dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [ebx+0x68]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x28], ecx
        fdiv dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, eax
        add esp, 0xC
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x60]
        fadd dword ptr ds : [ebx+0xA8]
        fld dword ptr ds : [ebx+0xAC]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_5d3f10]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edx
        fsub dword ptr ds : [public_5d1494]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], edx
        fxch 
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [eax]
        fsub st, st(1)
        fstp dword ptr ds : [eax]
        fstp st(0)
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x34]
        pop edi
        fstp dword ptr ds : [eax+4]
        pop esi
        mov dword ptr ds : [eax+8], 0
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 4
        public_49ea3a : nop
        fstp st(0)
        public_49ea3c : nop
        xor al, al
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x49e890)
    }
}

#undef public_49ea3a
#undef public_49ea3c
