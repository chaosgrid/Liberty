#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bcd0);

#define public_6cfad5b _public_6cfad5b

PROC_DECLARE(0x6cfad10, internal_6cfad10, public_6cfad10);
extern "C" NAKED register_t __cdecl internal_6cfad10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00280
        add esp, 4
        test eax, eax
        je public_6cfad5b
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        mov ecx, eax
        call public_6d0bcd0
        mov dword ptr ds : [esi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cfad5b : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfad10)
    }
}

#undef public_6cfad5b
