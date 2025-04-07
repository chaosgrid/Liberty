#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_539c60);
CLANG_FORWARD_PROC_SYMBOL(public_542790);

#define public_542813 _public_542813
#define public_542815 _public_542815
#define public_542858 _public_542858

PROC_DECLARE(0x542790, internal_542790, public_542790);
extern "C" NAKED register_t __cdecl internal_542790()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_542858
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, esi
        call public_539c60
        fld dword ptr ds : [esi+0xAC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_542858
        fld dword ptr ds : [esi+0xAC]
        fsub dword ptr ss : [esp+0x40]
        fst dword ptr ds : [esi+0xAC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_542858
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0xAC], 0xBF800000
        call dword ptr ds : [edx+0x1C0]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_542813
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_542815
        public_542813 : nop
        xor eax, eax
        public_542815 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edx+4]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        add edi, 0x58
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_542858
        lea ecx, ds:[esi+0xB0]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        push esi
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_542858 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x542790)
    }
}

#undef public_542813
#undef public_542815
#undef public_542858
