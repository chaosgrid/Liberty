#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620e69f _public_620e69f
#define public_620e6b8 _public_620e6b8

PROC_DECLARE(0x620e690, internal_620e690, public_620e690);
extern "C" NAKED register_t __cdecl internal_620e690()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_620e69f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_620e69f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_620e6b8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620e6b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x620e690)
    }
}

#undef public_620e69f
#undef public_620e6b8
