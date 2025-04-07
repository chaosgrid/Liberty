#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4750);

#define public_6fa4760 _public_6fa4760

PROC_DECLARE(0x6fa4750, internal_6fa4750, public_6fa4750);
extern "C" NAKED register_t __cdecl internal_6fa4750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6fa4760
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6fa4760 : nop
        ret 8
        UNREACHABLE_TRAP(0x6fa4750)
    }
}

#undef public_6fa4760
