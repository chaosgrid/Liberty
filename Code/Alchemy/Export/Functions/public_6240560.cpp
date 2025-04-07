#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240560);

#define public_6240582 _public_6240582

PROC_DECLARE(0x6240560, internal_6240560, public_6240560);
extern "C" NAKED register_t __cdecl internal_6240560()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xE13A59A1
        jne public_6240582
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6240582 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6240560)
    }
}

#undef public_6240582
