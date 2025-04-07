#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_634ab90);

#define public_634ac0e _public_634ac0e

PROC_DECLARE(0x634ab90, internal_634ab90, public_634ab90);
extern "C" NAKED register_t __cdecl internal_634ab90()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ss : [esp+0x28]
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x30]
        xor edx, edx
        cmp eax, edx
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0xC]
        jne public_634ac0e
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ds : [eax+0x20]
        push edx
        add ecx, eax
        push esi
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_634a9b0
        pop esi
        add esp, 0x20
        ret 0x18
        public_634ac0e : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push edi
        mov edi, dword ptr ds : [eax+4]
        push ebx
        push ebp
        add edi, eax
        push esi
        lea edx, ds:[edi+0x1C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_634a9b0
        mov eax, dword ptr ds : [edi]
        push ebx
        push ebp
        push esi
        add eax, edi
        push eax
        lea ecx, ss:[esp+0x20]
        call public_634a9b0
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x20
        ret 0x18
        UNREACHABLE_TRAP(0x634ab90)
    }
}

#undef public_634ac0e
