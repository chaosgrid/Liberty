#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62857f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0300);

#define public_62a0355 _public_62a0355

PROC_DECLARE(0x62a0300, internal_62a0300, public_62a0300);
extern "C" NAKED register_t __cdecl internal_62a0300()
{
    __asm
    {
        sub esp, 0xC
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        cmp dword ptr ds : [ecx+0x14], 3
        je public_62a0355
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, 0xFFFFFFFF
        je public_62a0355
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push eax
        mov bl, 1
        call dword ptr ds : [edx+0x80]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_62857f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        mov al, bl
        pop ebx
        public_62a0355 : nop
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62a0300)
    }
}

#undef public_62a0355
