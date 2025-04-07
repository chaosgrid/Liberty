#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b630);

#define public_6f4b655 _public_6f4b655

PROC_DECLARE(0x6f4b630, internal_6f4b630, public_6f4b630);
extern "C" NAKED register_t __cdecl internal_6f4b630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4b655
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov ecx, dword ptr ds : [eax+edx-0x10]
        add eax, edx
        test ecx, ecx
        jne public_6f4b655
        mov eax, dword ptr ds : [eax-8]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        public_6f4b655 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b630)
    }
}

#undef public_6f4b655
