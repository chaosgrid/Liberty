#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);

#define public_4f7aa5 _public_4f7aa5

PROC_DECLARE(0x4f7a90, internal_4f7a90, public_4f7a90);
extern "C" NAKED register_t __cdecl internal_4f7a90()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x58]
        dec edx
        push esi
        mov esi, edx
        test esi, esi
        mov dword ptr ds : [ecx+0x58], edx
        jg public_4f7aa5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x20]
        public_4f7aa5 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f7a90)
    }
}

#undef public_4f7aa5
