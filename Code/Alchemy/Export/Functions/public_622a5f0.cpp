#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622a5ff _public_622a5ff
#define public_622a618 _public_622a618

PROC_DECLARE(0x622a5f0, internal_622a5f0, public_622a5f0);
extern "C" NAKED register_t __cdecl internal_622a5f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_622a5ff
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_622a5ff : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_622a618
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622a618 : nop
        ret 4
        UNREACHABLE_TRAP(0x622a5f0)
    }
}

#undef public_622a5ff
#undef public_622a618
