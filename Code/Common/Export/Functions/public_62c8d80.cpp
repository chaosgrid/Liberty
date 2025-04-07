#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee940);

#define public_62c8dc8 _public_62c8dc8

PROC_DECLARE(0x62c8d80, internal_62c8d80, public_62c8d80);
extern "C" NAKED register_t __cdecl internal_62c8d80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_63fce0d]
        test al, al
        push esi
        mov esi, ecx
        je public_62c8dc8
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov ax, word ptr ds : [public_63a4aa4]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ee940
        mov eax, 1
        pop esi
        pop ecx
        ret 4
        public_62c8dc8 : nop
        mov eax, 2
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62c8d80)
    }
}

#undef public_62c8dc8
