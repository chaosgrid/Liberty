#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac169a _public_6ac169a

PROC_DECLARE(0x6ac1680, internal_6ac1680, public_6ac1680);
extern "C" NAKED register_t __cdecl internal_6ac1680()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test al, 1
        mov dword ptr ds : [esi], offset public_6ada20c
        je public_6ac169a
        push esi
        call public_6acf3d0
        add esp, 4
        public_6ac169a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1680)
    }
}

#undef public_6ac169a
