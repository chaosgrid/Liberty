#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f260);

#define public_627f270 _public_627f270
#define public_627f27b _public_627f27b
#define public_627f27d _public_627f27d

PROC_DECLARE(0x627f260, internal_627f260, public_627f260);
extern "C" NAKED register_t __cdecl internal_627f260()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_627f27b
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_627f270 : nop
        cmp dword ptr ds : [eax], edx
        je public_627f27d
        add eax, 4
        cmp eax, ecx
        jne public_627f270
        public_627f27b : nop
        mov eax, ecx
        public_627f27d : nop
        ret 4
        UNREACHABLE_TRAP(0x627f260)
    }
}

#undef public_627f270
#undef public_627f27b
#undef public_627f27d
