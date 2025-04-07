#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401a70);

#define public_401a7d _public_401a7d

PROC_DECLARE(0x401a70, internal_401a70, public_401a70);
extern "C" NAKED register_t __cdecl internal_401a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_401a7d
        xor al, al
        ret 4
        public_401a7d : nop
        mov dword ptr ds : [ecx+0x9A0], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x401a70)
    }
}

#undef public_401a7d
