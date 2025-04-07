#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5f130);

#define public_6d5f561 _public_6d5f561
#define public_6d5f566 _public_6d5f566
#define public_6d5f573 _public_6d5f573
#define public_6d5f581 _public_6d5f581

PROC_DECLARE(0x6d5f520, internal_6d5f520, public_6d5f520);
extern "C" NAKED register_t __cdecl internal_6d5f520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push esi
        push edi
        call dword ptr ds : [public_6d64a24]
        add esp, 0xC
        test eax, eax
        jne public_6d5f566
        call public_6d5e1e0
        test al, al
        jne public_6d5f561
        mov ecx, dword ptr ds : [esi]
        push ecx
        call dword ptr ds : [public_6d64a20]
        add esp, 4
        test eax, eax
        je public_6d5f561
        push eax
        push edi
        call public_6d5f130
        add esp, 8
        public_6d5f561 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d5f566 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6d5f573
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        public_6d5f573 : nop
        cmp eax, 0xFFFFFFFE
        mov eax, 0xFFFFFFFD
        je public_6d5f581
        mov eax, dword ptr ss : [esp+0x14]
        public_6d5f581 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f520)
    }
}

#undef public_6d5f561
#undef public_6d5f566
#undef public_6d5f573
#undef public_6d5f581
