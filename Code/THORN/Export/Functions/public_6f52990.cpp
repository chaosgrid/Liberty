#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52990);

#define public_6f529ac _public_6f529ac

PROC_DECLARE(0x6f52990, internal_6f52990, public_6f52990);
extern "C" NAKED register_t __cdecl internal_6f52990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ss : [esp+8]
        jne public_6f529ac
        push eax
        call public_6f52920
        add esp, 4
        mov eax, 1
        ret 
        public_6f529ac : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f52990)
    }
}

#undef public_6f529ac
