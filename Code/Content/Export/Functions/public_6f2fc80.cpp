#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f30430);

#define public_6f2fc93 _public_6f2fc93
#define public_6f2fcb5 _public_6f2fcb5

PROC_DECLARE(0x6f2fc80, internal_6f2fc80, public_6f2fc80);
extern "C" NAKED register_t __cdecl internal_6f2fc80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f2fcb5
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f2fc93 : nop
        push esi
        push edi
        call public_6f30430
        add esi, 0x548
        add esp, 8
        add edi, 0x548
        cmp esi, ebx
        jne public_6f2fc93
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f2fcb5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f2fc80)
    }
}

#undef public_6f2fc93
#undef public_6f2fcb5
