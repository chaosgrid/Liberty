#include "Shading-PCH.h"


#define public_6ebda4e _public_6ebda4e
#define public_6ebda77 _public_6ebda77

PROC_DECLARE(0x6ebda30, internal_6ebda30, public_6ebda30);
extern "C" NAKED register_t __cdecl internal_6ebda30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_6ebda4e
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        public_6ebda4e : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6ebda77
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6ebda77
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6ebda77
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_6ebda77 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ebda30)
    }
}

#undef public_6ebda4e
#undef public_6ebda77
