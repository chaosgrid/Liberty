#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06720);

#define public_6d06730 _public_6d06730

PROC_DECLARE(0x6d06720, internal_6d06720, public_6d06720);
extern "C" NAKED register_t __cdecl internal_6d06720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d06730
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6d06730 : nop
        ret 
        UNREACHABLE_TRAP(0x6d06720)
    }
}

#undef public_6d06730
