#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410dd0);

#define public_410e02 _public_410e02

PROC_DECLARE(0x410dd0, internal_410dd0, public_410dd0);
extern "C" NAKED register_t __cdecl internal_410dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xB4]
        test al, 4
        jne public_410e02
        or al, 4
        mov byte ptr ds : [esi+0xB4], al
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_410e02
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x124]
        public_410e02 : nop
        mov al, byte ptr ds : [esi+0xB4]
        or al, 8
        mov byte ptr ds : [esi+0xB4], al
        shr al, 3
        and al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x410dd0)
    }
}

#undef public_410e02
