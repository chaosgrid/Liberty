#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620af9f _public_620af9f
#define public_620afb8 _public_620afb8

PROC_DECLARE(0x620af90, internal_620af90, public_620af90);
extern "C" NAKED register_t __cdecl internal_620af90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_620af9f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_620af9f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_620afb8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620afb8 : nop
        ret 4
        UNREACHABLE_TRAP(0x620af90)
    }
}

#undef public_620af9f
#undef public_620afb8
