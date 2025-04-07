#include "DALib-PCH.h"


#define public_65c4ebb _public_65c4ebb

PROC_DECLARE(0x65c4ea0, internal_65c4ea0, public_65c4ea0);
extern "C" NAKED register_t __cdecl internal_65c4ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        inc eax
        mov dword ptr ds : [ecx+0x30], eax
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c4ebb
        mov edx, dword ptr ds : [eax]
        push 0
        add ecx, 8
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        public_65c4ebb : nop
        ret 4
        UNREACHABLE_TRAP(0x65c4ea0)
    }
}

#undef public_65c4ebb
