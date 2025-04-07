#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b6e0);

#define public_630b6f3 _public_630b6f3

PROC_DECLARE(0x630b6e0, internal_630b6e0, public_630b6e0);
extern "C" NAKED register_t __cdecl internal_630b6e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_630b6f3
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+4], edx
        ret 4
        public_630b6f3 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x630b6e0)
    }
}

#undef public_630b6f3
