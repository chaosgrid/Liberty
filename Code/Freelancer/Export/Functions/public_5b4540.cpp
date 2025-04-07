#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406c50);

#define public_5b4552 _public_5b4552

PROC_DECLARE(0x5b4540, internal_5b4540, public_5b4540);
extern "C" NAKED register_t __cdecl internal_5b4540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_5b4552
        push 0
        call public_406c50
        public_5b4552 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x5b4540)
    }
}

#undef public_5b4552
