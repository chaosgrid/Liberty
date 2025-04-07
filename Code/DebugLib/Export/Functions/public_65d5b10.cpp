#include "DebugLib-PCH.h"


#define public_65d5b3a _public_65d5b3a

PROC_DECLARE(0x65d5b10, internal_65d5b10, public_65d5b10);
extern "C" NAKED register_t __cdecl internal_65d5b10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_65e3140
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_65d5b3a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_65d5b3a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x65d5b10)
    }
}

#undef public_65d5b3a
