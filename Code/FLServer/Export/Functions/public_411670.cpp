#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411670);

#define public_411680 _public_411680
#define public_41168b _public_41168b

PROC_DECLARE(0x411670, internal_411670, public_411670);
extern "C" NAKED register_t __cdecl internal_411670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_41168b
        lea ecx, ds:[ecx]
        public_411680 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_411680
        public_41168b : nop
        ret 
        UNREACHABLE_TRAP(0x411670)
    }
}

#undef public_411680
#undef public_41168b
