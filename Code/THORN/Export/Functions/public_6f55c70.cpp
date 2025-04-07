#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f554a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55c70);

#define public_6f55c7d _public_6f55c7d

PROC_DECLARE(0x6f55c70, internal_6f55c70, public_6f55c70);
extern "C" NAKED register_t __cdecl internal_6f55c70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6f5a0e4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f55c7d : nop
        push 0x200
        call public_6f553e0
        push edi
        push 0x200
        push 1
        push eax
        call ebx
        mov esi, eax
        push esi
        call public_6f554a0
        add esp, 0x18
        cmp esi, 0x200
        je public_6f55c7d
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55c70)
    }
}

#undef public_6f55c7d
