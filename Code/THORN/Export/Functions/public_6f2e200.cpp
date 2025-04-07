#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f2e22e _public_6f2e22e
#define public_6f2e234 _public_6f2e234
#define public_6f2e259 _public_6f2e259

PROC_DECLARE(0x6f2e200, internal_6f2e200, public_6f2e200);
extern "C" NAKED register_t __cdecl internal_6f2e200()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2e22e
        push esi
        call public_6f4b900
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f2e234
        public_6f2e22e : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2e234 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2e259
        push esi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx], al
        mov al, 1
        pop esi
        ret 
        public_6f2e259 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2e200)
    }
}

#undef public_6f2e22e
#undef public_6f2e234
#undef public_6f2e259
