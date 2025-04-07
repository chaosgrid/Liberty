#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb70);

#define public_6d8cb80 _public_6d8cb80

PROC_DECLARE(0x6d8cb70, internal_6d8cb70, public_6d8cb70);
extern "C" NAKED register_t __cdecl internal_6d8cb70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d8cb80
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6d8cb80 : nop
        ret 
        UNREACHABLE_TRAP(0x6d8cb70)
    }
}

#undef public_6d8cb80
