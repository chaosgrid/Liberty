#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2f40f _public_6c2f40f
#define public_6c2f42b _public_6c2f42b

PROC_DECLARE(0x6c2f400, internal_6c2f400, public_6c2f400);
extern "C" NAKED register_t __cdecl internal_6c2f400()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6c2f40f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6c2f40f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6c2f42b
        mov eax, dword ptr ds : [ecx+8]
        push eax
        mov dword ptr ds : [ecx+4], 1
        call public_6c34ea0
        add esp, 4
        xor eax, eax
        public_6c2f42b : nop
        ret 4
        UNREACHABLE_TRAP(0x6c2f400)
    }
}

#undef public_6c2f40f
#undef public_6c2f42b
