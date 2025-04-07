#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d149c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d17fd1 _public_6d17fd1

PROC_DECLARE(0x6d17fb0, internal_6d17fb0, public_6d17fb0);
extern "C" NAKED register_t __cdecl internal_6d17fb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, 0x3FFFFFFF
        je public_6d17fd1
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d149c0
        mov dword ptr ds : [esi], 0
        public_6d17fd1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d17fb0)
    }
}

#undef public_6d17fd1
