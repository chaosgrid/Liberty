#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f20);

#define public_401f3a _public_401f3a

PROC_DECLARE(0x401f20, internal_401f20, public_401f20);
extern "C" NAKED register_t __cdecl internal_401f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_401f3a
        cmp eax, 0x186A0
        ja public_401f3a
        mov dword ptr ds : [ecx+0x62C], eax
        mov al, 1
        ret 4
        public_401f3a : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x401f20)
    }
}

#undef public_401f3a
