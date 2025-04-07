#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01420);
CLANG_FORWARD_PROC_SYMBOL(public_6f01ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);

#define public_6f01494 _public_6f01494
#define public_6f014ac _public_6f014ac
#define public_6f014bc _public_6f014bc
#define public_6f014ef _public_6f014ef
#define public_6f0153b _public_6f0153b
#define public_6f0155b _public_6f0155b
#define public_6f01577 _public_6f01577
#define public_6f01598 _public_6f01598
#define public_6f015a8 _public_6f015a8
#define public_6f015b9 _public_6f015b9
#define public_6f015c4 _public_6f015c4
#define public_6f015da _public_6f015da

PROC_DECLARE(0x6f01420, internal_6f01420, public_6f01420);
extern "C" NAKED register_t __cdecl internal_6f01420()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        push edi
        je public_6f014bc
        call dword ptr ds : [public_6fb36a0]
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x44]
        mov ebp, dword ptr ss : [esp+0x10]
        test al, al
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push ecx
        je public_6f01494
        push 0xD
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f014ac
        cmp byte ptr ds : [eax], 0
        je public_6f014ac
        mov ecx, dword ptr ss : [ebp+0x218]
        mov dword ptr ss : [ebp+ecx*4+0x118], eax
        mov edx, dword ptr ss : [ebp+0x218]
        mov dword ptr ss : [ebp+edx*4+0x198], 0
        inc dword ptr ss : [ebp+0x218]
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push esi
        push 0x15
        jmp public_6f015c4
        public_6f01494 : nop
        push 0xE
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f014ac
        push 0
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f014ac : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push esi
        push 0x15
        jmp public_6f015c4
        public_6f014bc : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        mov ecx, dword ptr ds : [esi+0x44]
        jne public_6f0153b
        mov eax, dword ptr ds : [esi+0x48]
        mov ebp, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push ecx
        push 0x11
        call public_6f020c0
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        je public_6f014ef
        push 0
        push eax
        mov ecx, edi
        call public_6f01ab0
        public_6f014ef : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push ebp
        push esi
        push 0x1B
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f015da
        cmp byte ptr ds : [eax], 0
        je public_6f015da
        mov ecx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+ecx*4+0x118], eax
        mov edx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+edx*4+0x198], 0
        inc dword ptr ds : [edi+0x218]
        pop edi
        pop esi
        pop ebp
        ret 
        public_6f0153b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        cmp eax, 1
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push ecx
        jbe public_6f0155b
        push 0x10
        call public_6f020c0
        mov ebp, dword ptr ss : [esp+0x20]
        jmp public_6f015a8
        public_6f0155b : nop
        push 0xF
        call public_6f020c0
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        je public_6f01577
        push 0
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f01577 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x16
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f01598
        push 0
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f01598 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x17
        call public_6f020c0
        public_6f015a8 : nop
        add esp, 0x10
        test eax, eax
        je public_6f015b9
        push 0
        mov ecx, ebp
        push eax
        call public_6f01ab0
        public_6f015b9 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push esi
        push 0x1B
        public_6f015c4 : nop
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f015da
        push 0
        mov ecx, ebp
        push eax
        call public_6f01ab0
        public_6f015da : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f01420)
    }
}

#undef public_6f01494
#undef public_6f014ac
#undef public_6f014bc
#undef public_6f014ef
#undef public_6f0153b
#undef public_6f0155b
#undef public_6f01577
#undef public_6f01598
#undef public_6f015a8
#undef public_6f015b9
#undef public_6f015c4
#undef public_6f015da
