#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622d79f _public_622d79f
#define public_622d7b8 _public_622d7b8

PROC_DECLARE(0x622d790, internal_622d790, public_622d790);
extern "C" NAKED register_t __cdecl internal_622d790()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_622d79f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_622d79f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_622d7b8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622d7b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x622d790)
    }
}

#undef public_622d79f
#undef public_622d7b8
