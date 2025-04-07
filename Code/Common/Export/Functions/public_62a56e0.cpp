#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a56e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a56f1 _public_62a56f1
#define public_62a5701 _public_62a5701

PROC_DECLARE(0x62a56e0, internal_62a56e0, public_62a56e0);
extern "C" NAKED register_t __cdecl internal_62a56e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_62a56f1
        push 1
        call public_62a56e0
        public_62a56f1 : nop
        test byte ptr ss : [esp+8], 1
        je public_62a5701
        push esi
        call public_6391d5a
        add esp, 4
        public_62a5701 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a56e0)
    }
}

#undef public_62a56f1
#undef public_62a5701
