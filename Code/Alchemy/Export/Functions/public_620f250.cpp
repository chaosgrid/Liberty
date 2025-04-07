#include "Alchemy-PCH.h"


#define public_620f272 _public_620f272

PROC_DECLARE(0x620f250, internal_620f250, public_620f250);
extern "C" NAKED register_t __cdecl internal_620f250()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_620f272
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_620f272 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f250)
    }
}

#undef public_620f272
