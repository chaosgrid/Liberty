#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428550);
CLANG_FORWARD_PROC_SYMBOL(public_428580);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);

#define public_42d710 _public_42d710
#define public_42d716 _public_42d716
#define public_42d717 _public_42d717

PROC_DECLARE(0x42d6f0, internal_42d6f0, public_42d6f0);
extern "C" NAKED register_t __cdecl internal_42d6f0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        mov eax, dword ptr ds : [public_667d54]
        je public_42d717
        test eax, eax
        jne public_42d710
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_42d710
        call public_428550
        public_42d710 : nop
        inc dword ptr ds : [public_667d54]
        public_42d716 : nop
        ret 
        public_42d717 : nop
        dec eax
        mov dword ptr ds : [public_667d54], eax
        jne public_42d716
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_42d716
        jmp public_428580
        UNREACHABLE_TRAP(0x42d6f0)
    }
}

#undef public_42d710
#undef public_42d716
#undef public_42d717
