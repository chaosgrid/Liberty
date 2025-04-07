#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62414bf _public_62414bf
#define public_62414d8 _public_62414d8

PROC_DECLARE(0x62414b0, internal_62414b0, public_62414b0);
extern "C" NAKED register_t __cdecl internal_62414b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62414bf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62414bf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62414d8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62414d8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62414b0)
    }
}

#undef public_62414bf
#undef public_62414d8
