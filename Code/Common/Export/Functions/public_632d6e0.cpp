#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632d6f5 _public_632d6f5
#define public_632d705 _public_632d705

PROC_DECLARE(0x632d6e0, internal_632d6e0, public_632d6e0);
extern "C" NAKED register_t __cdecl internal_632d6e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_632d6f5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_632d6f5 : nop
        test byte ptr ss : [esp+8], 1
        je public_632d705
        push esi
        call public_6391d5a
        add esp, 4
        public_632d705 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632d6e0)
    }
}

#undef public_632d6f5
#undef public_632d705
