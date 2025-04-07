#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f600);

#define public_627f610 _public_627f610
#define public_627f61b _public_627f61b

PROC_DECLARE(0x627f600, internal_627f600, public_627f600);
extern "C" NAKED register_t __cdecl internal_627f600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_627f61b
        lea ecx, ds:[ecx]
        public_627f610 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_627f610
        public_627f61b : nop
        ret 
        UNREACHABLE_TRAP(0x627f600)
    }
}

#undef public_627f610
#undef public_627f61b
