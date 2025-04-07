#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62d002b _public_62d002b
#define public_62d0040 _public_62d0040

PROC_DECLARE(0x62cfff0, internal_62cfff0, public_62cfff0);
extern "C" NAKED register_t __cdecl internal_62cfff0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+8]
        push edx
        mov edi, 2
        call dword ptr ds : [eax+0x88]
        test dword ptr ss : [esp+8], 0x80000
        je public_62d002b
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        test eax, eax
        je public_62d002b
        mov edi, 1
        public_62d002b : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62d0040
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ecx
        ret 4
        public_62d0040 : nop
        mov dword ptr ds : [esi+0xC], edi
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62cfff0)
    }
}

#undef public_62d002b
#undef public_62d0040
