#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6242c6f _public_6242c6f
#define public_6242c88 _public_6242c88

PROC_DECLARE(0x6242c60, internal_6242c60, public_6242c60);
extern "C" NAKED register_t __cdecl internal_6242c60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6242c6f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6242c6f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6242c88
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6242c88 : nop
        ret 4
        UNREACHABLE_TRAP(0x6242c60)
    }
}

#undef public_6242c6f
#undef public_6242c88
