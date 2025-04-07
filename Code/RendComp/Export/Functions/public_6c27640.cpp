#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27640);

#define public_6c27650 _public_6c27650

PROC_DECLARE(0x6c27640, internal_6c27640, public_6c27640);
extern "C" NAKED register_t __cdecl internal_6c27640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6c27650
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6c27650 : nop
        ret 
        UNREACHABLE_TRAP(0x6c27640)
    }
}

#undef public_6c27650
