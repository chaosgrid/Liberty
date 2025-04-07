#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622d4cf _public_622d4cf
#define public_622d4e8 _public_622d4e8

PROC_DECLARE(0x622d4c0, internal_622d4c0, public_622d4c0);
extern "C" NAKED register_t __cdecl internal_622d4c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_622d4cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_622d4cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_622d4e8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622d4e8 : nop
        ret 4
        UNREACHABLE_TRAP(0x622d4c0)
    }
}

#undef public_622d4cf
#undef public_622d4e8
