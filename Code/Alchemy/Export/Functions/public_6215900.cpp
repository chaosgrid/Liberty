#include "Alchemy-PCH.h"


#define public_6215925 _public_6215925

PROC_DECLARE(0x6215900, internal_6215900, public_6215900);
extern "C" NAKED register_t __cdecl internal_6215900()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_6215925
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6215925 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6215900)
    }
}

#undef public_6215925
