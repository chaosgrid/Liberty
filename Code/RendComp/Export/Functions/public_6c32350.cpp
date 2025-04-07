#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32350);

#define public_6c3236d _public_6c3236d

PROC_DECLARE(0x6c32350, internal_6c32350, public_6c32350);
extern "C" NAKED register_t __cdecl internal_6c32350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6c3236d
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6c3236d
        mov dword ptr ds : [ecx+0x28], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 4
        public_6c3236d : nop
        mov eax, 0xFFFFFFFE
        ret 4
        UNREACHABLE_TRAP(0x6c32350)
    }
}

#undef public_6c3236d
