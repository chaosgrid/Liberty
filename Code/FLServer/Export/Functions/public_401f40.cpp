#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f40);

#define public_401f5e _public_401f5e

PROC_DECLARE(0x401f40, internal_401f40, public_401f40);
extern "C" NAKED register_t __cdecl internal_401f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_401f5e
        mov edx, dword ptr ds : [ecx+0x62C]
        dec edx
        cmp eax, edx
        ja public_401f5e
        mov dword ptr ds : [ecx+0x630], eax
        mov al, 1
        ret 4
        public_401f5e : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x401f40)
    }
}

#undef public_401f5e
