#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8967);
CLANG_FORWARD_PROC_SYMBOL(public_65dd100);

#define public_65d8998 _public_65d8998
#define public_65d89a2 _public_65d89a2
#define public_65d89b1 _public_65d89b1
#define public_65d89ba _public_65d89ba
#define public_65d89be _public_65d89be
#define public_65d89c1 _public_65d89c1

PROC_DECLARE(0x65d8967, internal_65d8967, public_65d8967);
extern "C" NAKED register_t __cdecl internal_65d8967()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_65d89be
        cmp byte ptr ds : [eax+8], 0
        lea edx, ds:[eax+8]
        je public_65d89be
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_65d8998
        add ecx, 8
        push ecx
        push edx
        call public_65dd100
        pop ecx
        test eax, eax
        pop ecx
        jne public_65d89ba
        public_65d8998 : nop
        test byte ptr ds : [esi], 2
        je public_65d89a2
        test byte ptr ds : [edi], 8
        je public_65d89ba
        public_65d89a2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        test al, 1
        je public_65d89b1
        test byte ptr ds : [edi], 1
        je public_65d89ba
        public_65d89b1 : nop
        test al, 2
        je public_65d89be
        test byte ptr ds : [edi], 2
        jne public_65d89be
        public_65d89ba : nop
        xor eax, eax
        jmp public_65d89c1
        public_65d89be : nop
        push 1
        pop eax
        public_65d89c1 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d8967)
    }
}

#undef public_65d8998
#undef public_65d89a2
#undef public_65d89b1
#undef public_65d89ba
#undef public_65d89be
#undef public_65d89c1
