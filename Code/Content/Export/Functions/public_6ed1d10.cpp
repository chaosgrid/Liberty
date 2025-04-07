#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);

#define public_6ed1d20 _public_6ed1d20
#define public_6ed1d2b _public_6ed1d2b

PROC_DECLARE(0x6ed1d10, internal_6ed1d10, public_6ed1d10);
extern "C" NAKED register_t __cdecl internal_6ed1d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6ed1d2b
        lea ecx, ds:[ecx]
        public_6ed1d20 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6ed1d20
        public_6ed1d2b : nop
        ret 
        UNREACHABLE_TRAP(0x6ed1d10)
    }
}

#undef public_6ed1d20
#undef public_6ed1d2b
