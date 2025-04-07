#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53350);
CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f533d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53610);
CLANG_FORWARD_PROC_SYMBOL(public_6f53650);

#define public_6f5337f _public_6f5337f
#define public_6f533aa _public_6f533aa

PROC_DECLARE(0x6f53350, internal_6f53350, public_6f53350);
extern "C" NAKED register_t __cdecl internal_6f53350()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        push ebx
        push edi
        push esi
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f533d0
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x10
        cmp eax, 0x3A
        je public_6f5337f
        cmp eax, 0x2E
        jne public_6f533aa
        public_6f5337f : nop
        xor ebx, ebx
        cmp eax, 0x3A
        push esi
        sete bl
        call public_6f52920
        push edi
        push esi
        call public_6f53530
        push esi
        call public_6f53610
        push eax
        push esi
        call public_6f533b0
        add esp, 0x18
        mov dword ptr ds : [edi], 3
        public_6f533aa : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53350)
    }
}

#undef public_6f5337f
#undef public_6f533aa
