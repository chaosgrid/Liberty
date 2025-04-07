#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209b70);

#define public_6208dee _public_6208dee
#define public_6208df0 _public_6208df0

PROC_DECLARE(0x6208d80, internal_6208d80, public_6208d80);
extern "C" NAKED register_t __cdecl internal_6208d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        lea esi, ds:[edi+8]
        mov ecx, esi
        call public_6209b70
        mov edx, dword ptr ds : [esi+4]
        mov ecx, eax
        sub ecx, edx
        mov edx, dword ptr ds : [esi+0xC]
        sar ecx, 3
        sub edx, ecx
        lea ecx, ds:[eax+8]
        shl edx, 3
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_624b060]
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        dec edx
        xor eax, eax
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ds : [edi+0x14]
        inc edx
        mov dword ptr ds : [edi+0x20], eax
        cmp edx, 1
        mov dword ptr ds : [edi+0x1C], eax
        jle public_6208df0
        mov eax, dword ptr ds : [edi+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_6208dee
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ds : [edi+0x1C]
        public_6208dee : nop
        fstp st(0)
        public_6208df0 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6208d80)
    }
}

#undef public_6208dee
#undef public_6208df0
