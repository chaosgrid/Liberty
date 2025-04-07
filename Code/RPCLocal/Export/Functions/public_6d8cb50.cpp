#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb50);

#define public_6d8cb62 _public_6d8cb62

PROC_DECLARE(0x6d8cb50, internal_6d8cb50, public_6d8cb50);
extern "C" NAKED register_t __cdecl internal_6d8cb50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d8cb62
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6d8cb62 : nop
        ret 
        UNREACHABLE_TRAP(0x6d8cb50)
    }
}

#undef public_6d8cb62
