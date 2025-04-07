#include "Freelancer-PCH.h"


#define public_5664d8 _public_5664d8

PROC_DECLARE(0x5664a0, internal_5664a0, public_5664a0);
extern "C" NAKED register_t __cdecl internal_5664a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax+4], 2
        jne public_5664d8
        mov dl, byte ptr ds : [ecx+0xE6]
        test dl, dl
        je public_5664d8
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_5664d8
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_5664d8
        mov ecx, dword ptr ds : [ecx+0xEC]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push 0x3004
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        ret 4
        public_5664d8 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x5664a0)
    }
}

#undef public_5664d8
