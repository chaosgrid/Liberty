#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38750);

#define public_6b38760 _public_6b38760

PROC_DECLARE(0x6b38750, internal_6b38750, public_6b38750);
extern "C" NAKED register_t __cdecl internal_6b38750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b38760
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6b38760 : nop
        ret 
        UNREACHABLE_TRAP(0x6b38750)
    }
}

#undef public_6b38760
