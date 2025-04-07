#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23e90);

#define public_6d23ea6 _public_6d23ea6

PROC_DECLARE(0x6d23e90, internal_6d23e90, public_6d23e90);
extern "C" NAKED register_t __cdecl internal_6d23e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d23ea6
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68db4
        public_6d23ea6 : nop
        ret 
        UNREACHABLE_TRAP(0x6d23e90)
    }
}

#undef public_6d23ea6
