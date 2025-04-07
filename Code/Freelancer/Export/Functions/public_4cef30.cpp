#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4cef30);
CLANG_FORWARD_PROC_SYMBOL(public_4f42e0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4cefa2 _public_4cefa2
#define public_4cefcb _public_4cefcb

PROC_DECLARE(0x4cef30, internal_4cef30, public_4cef30);
extern "C" NAKED register_t __cdecl internal_4cef30()
{
    __asm
    {
        sub esp, 0x38
        push esi
        push edi
        call public_4c4fb0
        mov edi, dword ptr ss : [esp+0x44]
        cmp edi, eax
        jge public_4cefcb
        push edi
        call public_4c4ff0
        mov esi, eax
        add esp, 4
        mov ecx, esi
        call public_4c5110
        mov edx, eax
        test edx, edx
        je public_4cefa2
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x18]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x3E], 1
        mov dword ptr ss : [esp+0x18], 0x1C
        movzx ecx, word ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, edx
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        call public_54bcb0
        add esp, 4
        pop edi
        pop esi
        add esp, 0x38
        ret 
        public_4cefa2 : nop
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_4c52d0
        test al, al
        je public_4cefcb
        push edi
        push edi
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_674bc8]
        call public_4f42e0
        public_4cefcb : nop
        pop edi
        pop esi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4cef30)
    }
}

#undef public_4cefa2
#undef public_4cefcb
