#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a080);

#define public_45a0a2 _public_45a0a2

PROC_DECLARE(0x45a080, internal_45a080, public_45a080);
extern "C" NAKED register_t __cdecl internal_45a080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_45a0a2
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_45a0a2 : nop
        ret 
        UNREACHABLE_TRAP(0x45a080)
    }
}

#undef public_45a0a2
