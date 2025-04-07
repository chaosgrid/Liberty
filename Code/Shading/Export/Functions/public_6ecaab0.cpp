#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaab0);

#define public_6ecaad1 _public_6ecaad1
#define public_6ecaae1 _public_6ecaae1

PROC_DECLARE(0x6ecaab0, internal_6ecaab0, public_6ecaab0);
extern "C" NAKED register_t __cdecl internal_6ecaab0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6ed57fc]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ed57f8]
        add eax, ecx
        add ecx, 0xF8
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_6ecaad1
        mov ecx, eax
        public_6ecaad1 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ecaae1
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ecaae1 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ecaab0)
    }
}

#undef public_6ecaad1
#undef public_6ecaae1
