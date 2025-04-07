#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62408af _public_62408af
#define public_62408c8 _public_62408c8

PROC_DECLARE(0x62408a0, internal_62408a0, public_62408a0);
extern "C" NAKED register_t __cdecl internal_62408a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62408af
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62408af : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62408c8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62408c8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62408a0)
    }
}

#undef public_62408af
#undef public_62408c8
