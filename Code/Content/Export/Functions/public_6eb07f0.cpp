#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb07f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1ba0);

#define public_6eb0803 _public_6eb0803
#define public_6eb081f _public_6eb081f

PROC_DECLARE(0x6eb07f0, internal_6eb07f0, public_6eb07f0);
extern "C" NAKED register_t __cdecl internal_6eb07f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6eb081f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6eb0803 : nop
        push esi
        push edi
        call public_6eb1ba0
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6eb0803
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6eb081f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb07f0)
    }
}

#undef public_6eb0803
#undef public_6eb081f
