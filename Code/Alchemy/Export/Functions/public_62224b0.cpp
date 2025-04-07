#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62224bf _public_62224bf
#define public_62224d8 _public_62224d8

PROC_DECLARE(0x62224b0, internal_62224b0, public_62224b0);
extern "C" NAKED register_t __cdecl internal_62224b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62224bf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62224bf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62224d8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62224d8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62224b0)
    }
}

#undef public_62224bf
#undef public_62224d8
