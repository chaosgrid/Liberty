#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_599bbc _public_599bbc
#define public_599c10 _public_599c10
#define public_599c5e _public_599c5e
#define public_599cb2 _public_599cb2

PROC_DECLARE(0x599b70, internal_599b70, public_599b70);
extern "C" NAKED register_t __cdecl internal_599b70()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edi+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        fld dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [public_67dbc0]
        fst dword ptr ss : [esp+0x48]
        test eax, eax
        fld dword ptr ds : [esi+0xEC]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        fstp dword ptr ss : [esp+0x10]
        jne public_599bbc
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_599bbc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        jne public_599c10
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_599c10 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x2C], 0
        fabs 
        fstp dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        fld dword ptr ds : [esi+0xF0]
        fstp dword ptr ss : [esp+0x30]
        jne public_599c5e
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_599c5e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        jne public_599cb2
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_599cb2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x3C]
        pop edi
        fabs 
        fstp dword ptr ds : [esi+0xB8]
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x599b70)
    }
}

#undef public_599bbc
#undef public_599c10
#undef public_599c5e
#undef public_599cb2
