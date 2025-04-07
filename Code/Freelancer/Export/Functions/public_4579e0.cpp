#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_448210);

#define public_457a00 _public_457a00

PROC_DECLARE(0x4579e0, internal_4579e0, public_4579e0);
extern "C" NAKED register_t __cdecl internal_4579e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x68]
        call public_446be0
        test eax, eax
        je public_457a00
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call public_448210
        public_457a00 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4579e0)
    }
}

#undef public_457a00
