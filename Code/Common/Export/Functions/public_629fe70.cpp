#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);

#define public_629feb2 _public_629feb2

PROC_DECLARE(0x629fe70, internal_629fe70, public_629fe70);
extern "C" NAKED register_t __cdecl internal_629fe70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, 0xFFFFFFFF
        je public_629feb2
        push eax
        call public_627dc80
        mov ecx, dword ptr ds : [esi+0x20]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_629feb2
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        public_629feb2 : nop
        mov ecx, esi
        pop esi
        jmp public_629af40
        UNREACHABLE_TRAP(0x629fe70)
    }
}

#undef public_629feb2
