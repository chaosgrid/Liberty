#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509b70);

#define public_509b7f _public_509b7f

PROC_DECLARE(0x509b70, internal_509b70, public_509b70);
extern "C" NAKED register_t __cdecl internal_509b70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_509b7f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x58]
        public_509b7f : nop
        ret 
        UNREACHABLE_TRAP(0x509b70)
    }
}

#undef public_509b7f
