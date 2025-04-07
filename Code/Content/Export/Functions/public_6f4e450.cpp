#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e450);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);

#define public_6f4e463 _public_6f4e463
#define public_6f4e47f _public_6f4e47f

PROC_DECLARE(0x6f4e450, internal_6f4e450, public_6f4e450);
extern "C" NAKED register_t __cdecl internal_6f4e450()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f4e47f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f4e463 : nop
        push esi
        push edi
        call public_6f4e970
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6f4e463
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f4e47f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f4e450)
    }
}

#undef public_6f4e463
#undef public_6f4e47f
