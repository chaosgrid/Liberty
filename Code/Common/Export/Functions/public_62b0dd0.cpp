#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_62aad30);

#define public_62b0e1a _public_62b0e1a

PROC_DECLARE(0x62b0dd0, internal_62b0dd0, public_62b0dd0);
extern "C" NAKED register_t __cdecl internal_62b0dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x22C]
        push eax
        call public_627dc80
        mov ecx, dword ptr ds : [esi+0x22C]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_62b0e1a
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x22C], 0xFFFFFFFF
        public_62b0e1a : nop
        mov ecx, esi
        pop esi
        jmp public_62aad30
        UNREACHABLE_TRAP(0x62b0dd0)
    }
}

#undef public_62b0e1a
