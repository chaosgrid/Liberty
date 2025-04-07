#include "FLMaterials-PCH.h"


#define public_66f44ea _public_66f44ea

PROC_DECLARE(0x66f44c0, internal_66f44c0, public_66f44c0);
extern "C" NAKED register_t __cdecl internal_66f44c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_67010c8
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_66f44ea
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_66f44ea : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x66f44c0)
    }
}

#undef public_66f44ea
