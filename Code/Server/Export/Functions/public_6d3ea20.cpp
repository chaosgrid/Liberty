#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3ea20);

#define public_6d3ea30 _public_6d3ea30

PROC_DECLARE(0x6d3ea20, internal_6d3ea20, public_6d3ea20);
extern "C" NAKED register_t __cdecl internal_6d3ea20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d3ea30
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6d3ea30 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d3ea20)
    }
}

#undef public_6d3ea30
