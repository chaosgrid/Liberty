#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41a80f _public_41a80f
#define public_41a828 _public_41a828

PROC_DECLARE(0x41a800, internal_41a800, public_41a800);
extern "C" NAKED register_t __cdecl internal_41a800()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_41a80f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_41a80f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_41a828
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        public_41a828 : nop
        ret 4
        UNREACHABLE_TRAP(0x41a800)
    }
}

#undef public_41a80f
#undef public_41a828
