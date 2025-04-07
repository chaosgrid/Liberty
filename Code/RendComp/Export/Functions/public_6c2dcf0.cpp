#include "RendComp-PCH.h"


#define public_6c2dcff _public_6c2dcff
#define public_6c2dd19 _public_6c2dd19

PROC_DECLARE(0x6c2dcf0, internal_6c2dcf0, public_6c2dcf0);
extern "C" NAKED register_t __cdecl internal_6c2dcf0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jbe public_6c2dcff
        dec eax
        mov dword ptr ds : [ecx+0xC], eax
        public_6c2dcff : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6c2dd19
        push ecx
        mov dword ptr ds : [ecx+0xC], 1
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        xor eax, eax
        public_6c2dd19 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c2dcf0)
    }
}

#undef public_6c2dcff
#undef public_6c2dd19
