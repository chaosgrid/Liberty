#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622235f _public_622235f
#define public_6222378 _public_6222378

PROC_DECLARE(0x6222350, internal_6222350, public_6222350);
extern "C" NAKED register_t __cdecl internal_6222350()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_622235f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_622235f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6222378
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6222378 : nop
        ret 4
        UNREACHABLE_TRAP(0x6222350)
    }
}

#undef public_622235f
#undef public_6222378
