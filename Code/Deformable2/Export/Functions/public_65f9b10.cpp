#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9b10);

#define public_65f9b20 _public_65f9b20

PROC_DECLARE(0x65f9b10, internal_65f9b10, public_65f9b10);
extern "C" NAKED register_t __cdecl internal_65f9b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_65f9b20
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_65f9b20 : nop
        ret 
        UNREACHABLE_TRAP(0x65f9b10)
    }
}

#undef public_65f9b20
