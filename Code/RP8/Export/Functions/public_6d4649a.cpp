#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d463d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4649a);

PROC_DECLARE(0x6d4649a, internal_6d4649a, public_6d4649a);
extern "C" NAKED register_t __cdecl internal_6d4649a()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18C]
        mov dword ptr ds : [eax], offset _public_6d463d0
        ret 
        UNREACHABLE_TRAP(0x6d4649a)
    }
}
