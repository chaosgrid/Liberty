#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a81f0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a81fe _public_62a81fe
#define public_62a820e _public_62a820e

PROC_DECLARE(0x62a81f0, internal_62a81f0, public_62a81f0);
extern "C" NAKED register_t __cdecl internal_62a81f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_62a81fe
        call public_62f0d50
        public_62a81fe : nop
        test byte ptr ss : [esp+8], 1
        je public_62a820e
        push esi
        call public_6391d5a
        add esp, 4
        public_62a820e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a81f0)
    }
}

#undef public_62a81fe
#undef public_62a820e
