#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ddb0);

#define public_41ddd2 _public_41ddd2

PROC_DECLARE(0x41ddb0, internal_41ddb0, public_41ddb0);
extern "C" NAKED register_t __cdecl internal_41ddb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_616858]
        test eax, eax
        je public_41ddd2
        add eax, 4
/*FIXUP push offset public_5c95fc @0x41ddbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_41ddd2
        mov al, 1
        ret 
        public_41ddd2 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x41ddb0)
    }
}

#undef public_41ddd2
