#include "Server-PCH.h"


#define public_6d5edf0 _public_6d5edf0

PROC_DECLARE(0x6d5edc0, internal_6d5edc0, public_6d5edc0);
extern "C" NAKED register_t __cdecl internal_6d5edc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d643dc]
        add esp, 4
        test eax, eax
        je public_6d5edf0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        xor esi, esi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [edi], eax
        public_6d5edf0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5edc0)
    }
}

#undef public_6d5edf0
