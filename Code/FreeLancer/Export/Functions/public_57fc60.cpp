#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fc60);

#define public_57fc84 _public_57fc84

PROC_DECLARE(0x57fc60, internal_57fc60, public_57fc60);
extern "C" NAKED register_t __cdecl internal_57fc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_57fc84
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        mov dx, word ptr ds : [ecx+2]
        mov word ptr ds : [eax+2], dx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_57fc84 : nop
        ret 
        UNREACHABLE_TRAP(0x57fc60)
    }
}

#undef public_57fc84
