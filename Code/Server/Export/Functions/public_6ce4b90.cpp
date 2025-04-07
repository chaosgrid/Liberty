#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4b90);

#define public_6ce4ba0 _public_6ce4ba0
#define public_6ce4bab _public_6ce4bab

PROC_DECLARE(0x6ce4b90, internal_6ce4b90, public_6ce4b90);
extern "C" NAKED register_t __cdecl internal_6ce4b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_6ce4bab
        lea ecx, ds:[ecx]
        public_6ce4ba0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_6ce4ba0
        public_6ce4bab : nop
        ret 
        UNREACHABLE_TRAP(0x6ce4b90)
    }
}

#undef public_6ce4ba0
#undef public_6ce4bab
