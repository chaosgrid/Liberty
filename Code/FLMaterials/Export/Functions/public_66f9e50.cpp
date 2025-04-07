#include "FLMaterials-PCH.h"


#define public_66f9e6e _public_66f9e6e
#define public_66f9e97 _public_66f9e97

PROC_DECLARE(0x66f9e50, internal_66f9e50, public_66f9e50);
extern "C" NAKED register_t __cdecl internal_66f9e50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_66f9e6e
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        public_66f9e6e : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_66f9e97
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_66f9e97
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66f9e97
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_66f9e97 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x66f9e50)
    }
}

#undef public_66f9e6e
#undef public_66f9e97
