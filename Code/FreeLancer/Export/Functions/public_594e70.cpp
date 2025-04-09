#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594e70);

#define public_594e80 _public_594e80
#define public_594e8b _public_594e8b

PROC_DECLARE(0x594e70, internal_594e70, public_594e70);
extern "C" NAKED register_t __cdecl internal_594e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_594e8b
        lea ecx, ds:[ecx]
        public_594e80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_594e80
        public_594e8b : nop
        ret 
        UNREACHABLE_TRAP(0x594e70)
    }
}

#undef public_594e80
#undef public_594e8b
