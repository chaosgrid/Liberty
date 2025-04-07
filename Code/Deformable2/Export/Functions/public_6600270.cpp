#include "Deformable2-PCH.h"


#define public_66002b1 _public_66002b1

PROC_DECLARE(0x6600270, internal_6600270, public_6600270);
extern "C" NAKED register_t __cdecl internal_6600270()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_66002b1
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_66002b1
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66002b1
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_66002b1 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6600270)
    }
}

#undef public_66002b1
