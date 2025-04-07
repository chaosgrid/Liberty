#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd3ed9 _public_6bd3ed9

PROC_DECLARE(0x6bd3ec0, internal_6bd3ec0, public_6bd3ec0);
extern "C" NAKED register_t __cdecl internal_6bd3ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6c0b0c0]
        test byte ptr ss : [esp+8], 1
        je public_6bd3ed9
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd3ed9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd3ec0)
    }
}

#undef public_6bd3ed9
