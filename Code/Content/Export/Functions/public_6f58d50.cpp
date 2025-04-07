#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58d50);

#define public_6f58d60 _public_6f58d60
#define public_6f58d6b _public_6f58d6b

PROC_DECLARE(0x6f58d50, internal_6f58d50, public_6f58d50);
extern "C" NAKED register_t __cdecl internal_6f58d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_6f58d6b
        lea ecx, ds:[ecx]
        public_6f58d60 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_6f58d60
        public_6f58d6b : nop
        ret 
        UNREACHABLE_TRAP(0x6f58d50)
    }
}

#undef public_6f58d60
#undef public_6f58d6b
