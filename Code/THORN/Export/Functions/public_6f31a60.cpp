#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f33df0);

#define public_6f31a73 _public_6f31a73
#define public_6f31a8f _public_6f31a8f

PROC_DECLARE(0x6f31a60, internal_6f31a60, public_6f31a60);
extern "C" NAKED register_t __cdecl internal_6f31a60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f31a8f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f31a73 : nop
        push esi
        push edi
        call public_6f33df0
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6f31a73
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f31a8f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f31a60)
    }
}

#undef public_6f31a73
#undef public_6f31a8f
