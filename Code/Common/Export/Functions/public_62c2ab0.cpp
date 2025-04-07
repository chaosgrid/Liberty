#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2ab0);

#define public_62c2ac2 _public_62c2ac2

PROC_DECLARE(0x62c2ab0, internal_62c2ab0, public_62c2ab0);
extern "C" NAKED register_t __cdecl internal_62c2ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_62c2ac2
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62c2ac2
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x20]
        public_62c2ac2 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c2ab0)
    }
}

#undef public_62c2ac2
