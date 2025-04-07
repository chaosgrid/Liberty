#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d416d0);

#define public_6d416e0 _public_6d416e0
#define public_6d416eb _public_6d416eb

PROC_DECLARE(0x6d416d0, internal_6d416d0, public_6d416d0);
extern "C" NAKED register_t __cdecl internal_6d416d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x29]
        test dl, dl
        jne public_6d416eb
        lea ecx, ds:[ecx]
        public_6d416e0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x29]
        test dl, dl
        je public_6d416e0
        public_6d416eb : nop
        ret 
        UNREACHABLE_TRAP(0x6d416d0)
    }
}

#undef public_6d416e0
#undef public_6d416eb
