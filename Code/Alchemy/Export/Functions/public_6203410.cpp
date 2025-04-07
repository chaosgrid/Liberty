#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203410);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620341f _public_620341f
#define public_6203438 _public_6203438

PROC_DECLARE(0x6203410, internal_6203410, public_6203410);
extern "C" NAKED register_t __cdecl internal_6203410()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jbe public_620341f
        dec eax
        mov dword ptr ds : [ecx+8], eax
        public_620341f : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_6203438
        push ecx
        mov dword ptr ds : [ecx+8], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6203438 : nop
        ret 4
        UNREACHABLE_TRAP(0x6203410)
    }
}

#undef public_620341f
#undef public_6203438
