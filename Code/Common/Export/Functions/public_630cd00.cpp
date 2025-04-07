#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd00);

#define public_630cd10 _public_630cd10

PROC_DECLARE(0x630cd00, internal_630cd00, public_630cd00);
extern "C" NAKED register_t __cdecl internal_630cd00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_630cd10
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_630cd10 : nop
        ret 
        UNREACHABLE_TRAP(0x630cd00)
    }
}

#undef public_630cd10
