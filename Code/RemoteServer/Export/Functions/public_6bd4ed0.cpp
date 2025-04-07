#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd4ee3 _public_6bd4ee3
#define public_6bd4ef3 _public_6bd4ef3

PROC_DECLARE(0x6bd4ed0, internal_6bd4ed0, public_6bd4ed0);
extern "C" NAKED register_t __cdecl internal_6bd4ed0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6bd4ee3
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd4ee3 : nop
        test byte ptr ss : [esp+8], 1
        je public_6bd4ef3
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd4ef3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd4ed0)
    }
}

#undef public_6bd4ee3
#undef public_6bd4ef3
