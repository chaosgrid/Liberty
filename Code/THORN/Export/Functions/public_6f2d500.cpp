#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2d519 _public_6f2d519

PROC_DECLARE(0x6f2d500, internal_6f2d500, public_6f2d500);
extern "C" NAKED register_t __cdecl internal_6f2d500()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6f5a204
        je public_6f2d519
        push esi
        call public_6f57e26
        add esp, 4
        public_6f2d519 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2d500)
    }
}

#undef public_6f2d519
