#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9220);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be9218 _public_6be9218

PROC_DECLARE(0x6be9200, internal_6be9200, public_6be9200);
extern "C" NAKED register_t __cdecl internal_6be9200()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be9220
        test byte ptr ss : [esp+8], 1
        je public_6be9218
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be9218 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be9200)
    }
}

#undef public_6be9218
