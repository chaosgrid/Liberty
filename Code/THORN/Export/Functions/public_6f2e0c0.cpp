#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f2e0ee _public_6f2e0ee
#define public_6f2e0f4 _public_6f2e0f4
#define public_6f2e121 _public_6f2e121
#define public_6f2e12d _public_6f2e12d

PROC_DECLARE(0x6f2e0c0, internal_6f2e0c0, public_6f2e0c0);
extern "C" NAKED register_t __cdecl internal_6f2e0c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2e0ee
        push esi
        call public_6f4b900
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f2e0f4
        public_6f2e0ee : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2e0f4 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2e12d
        push esi
        call public_6f4b540
        fcomp qword ptr ds : [public_6f5a228]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_6f2e121
        mov ecx, dword ptr ss : [esp+8]
        mov al, 1
        mov byte ptr ds : [ecx], al
        pop esi
        ret 
        public_6f2e121 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor al, al
        mov byte ptr ds : [ecx], al
        mov al, 1
        pop esi
        ret 
        public_6f2e12d : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2e0c0)
    }
}

#undef public_6f2e0ee
#undef public_6f2e0f4
#undef public_6f2e121
#undef public_6f2e12d
