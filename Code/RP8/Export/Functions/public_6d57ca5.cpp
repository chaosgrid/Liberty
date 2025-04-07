#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57c3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d57ca5);

#define public_6d57cde _public_6d57cde
#define public_6d57ce2 _public_6d57ce2
#define public_6d57d11 _public_6d57d11
#define public_6d57d2e _public_6d57d2e
#define public_6d57d2f _public_6d57d2f

PROC_DECLARE(0x6d57ca5, internal_6d57ca5, public_6d57ca5);
extern "C" NAKED register_t __cdecl internal_6d57ca5()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0x40
        push 1
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        mov edi, eax
        add esp, 0xC
        test edi, edi
        je public_6d57cde
        push 0x5A0
        push 8
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [edi+0x24], eax
        jne public_6d57ce2
        push edi
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        pop ecx
        pop ecx
        public_6d57cde : nop
        xor eax, eax
        jmp public_6d57d2f
        public_6d57ce2 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        push 1
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [edi+0x28], eax
        jne public_6d57d11
        push dword ptr ds : [edi+0x24]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        push edi
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        add esp, 0x10
        xor eax, eax
        jmp public_6d57d2e
        public_6d57d11 : nop
        and dword ptr ds : [edi], 0
        add eax, ebx
        push 0
        mov dword ptr ds : [edi+0x2C], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov dword ptr ds : [edi+0x38], eax
        call public_6d57c3a
        add esp, 0xC
        mov eax, edi
        public_6d57d2e : nop
        pop ebx
        public_6d57d2f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d57ca5)
    }
}

#undef public_6d57cde
#undef public_6d57ce2
#undef public_6d57d11
#undef public_6d57d2e
#undef public_6d57d2f
