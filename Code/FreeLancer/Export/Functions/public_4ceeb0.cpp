#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4f42e0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4cef0f _public_4cef0f
#define public_4cef22 _public_4cef22

PROC_DECLARE(0x4ceeb0, internal_4ceeb0, public_4ceeb0);
extern "C" NAKED register_t __cdecl internal_4ceeb0()
{
    __asm
    {
        sub esp, 0x28
        push esi
        call public_4c4690
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, eax
        jge public_4cef22
        push esi
        call public_4c46a0
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        test edx, edx
        je public_4cef0f
        push edi
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x2E], 1
        mov dword ptr ss : [esp+8], 0x1C
        movzx ecx, word ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        call public_54bcb0
        add esp, 4
        pop edi
        pop esi
        add esp, 0x28
        ret 
        public_4cef0f : nop
        mov ecx, dword ptr ds : [eax+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_674bc8]
        push esi
        push 1
        push eax
        call public_4f42e0
        public_4cef22 : nop
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4ceeb0)
    }
}

#undef public_4cef0f
#undef public_4cef22
