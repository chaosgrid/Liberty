#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e060);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f2e08e _public_6f2e08e
#define public_6f2e094 _public_6f2e094
#define public_6f2e0b4 _public_6f2e0b4

PROC_DECLARE(0x6f2e060, internal_6f2e060, public_6f2e060);
extern "C" NAKED register_t __cdecl internal_6f2e060()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2e08e
        push esi
        call public_6f4b900
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f2e094
        public_6f2e08e : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2e094 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2e0b4
        push esi
        call public_6f4b540
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        fstp dword ptr ds : [ecx]
        mov al, 1
        pop esi
        ret 
        public_6f2e0b4 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2e060)
    }
}

#undef public_6f2e08e
#undef public_6f2e094
#undef public_6f2e0b4
