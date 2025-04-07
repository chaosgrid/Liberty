#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54900);

#define public_6f54921 _public_6f54921

PROC_DECLARE(0x6f54900, internal_6f54900, public_6f54900);
extern "C" NAKED register_t __cdecl internal_6f54900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi], 2
        jne public_6f54921
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_6f533b0
        add esp, 8
        mov dword ptr ds : [esi], 3
        public_6f54921 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54900)
    }
}

#undef public_6f54921
