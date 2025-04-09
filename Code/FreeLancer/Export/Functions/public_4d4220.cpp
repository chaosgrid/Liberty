#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4220);
CLANG_FORWARD_PROC_SYMBOL(public_4f4b90);

#define public_4d4256 _public_4d4256
#define public_4d4269 _public_4d4269
#define public_4d42af _public_4d42af
#define public_4d42cd _public_4d42cd

PROC_DECLARE(0x4d4220, internal_4d4220, public_4d4220);
extern "C" NAKED register_t __cdecl internal_4d4220()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        call public_4c4690
        test eax, eax
        mov edi, dword ptr ss : [esp+0x18]
        jle public_4d4269
        push 0
        call public_4c46a0
        mov ecx, dword ptr ds : [public_674bc8]
        add esp, 4
        mov esi, eax
        push esi
        call public_4f4b90
        test al, al
        je public_4d4256
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d4256 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_4d4269
        cmp eax, edi
        jne public_4d4269
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d4269 : nop
        call public_4c4fb0
        test eax, eax
        jle public_4d42cd
        push 0
        call public_4c4ff0
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_4c52d0
        test al, al
        je public_4d42af
        mov ecx, dword ptr ds : [public_674bc8]
        lea edx, ss:[esp+8]
        push edx
        call public_4f4b90
        test al, al
        je public_4d42af
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d42af : nop
        mov ecx, esi
        call public_4c5110
        test eax, eax
        je public_4d42cd
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        jne public_4d42cd
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d42cd : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4d4220)
    }
}

#undef public_4d4256
#undef public_4d4269
#undef public_4d42af
#undef public_4d42cd
