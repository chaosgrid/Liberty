#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7bab);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8e90);

#define public_6ef7bdc _public_6ef7bdc
#define public_6ef7be6 _public_6ef7be6
#define public_6ef7bf5 _public_6ef7bf5
#define public_6ef7bfe _public_6ef7bfe
#define public_6ef7c02 _public_6ef7c02
#define public_6ef7c05 _public_6ef7c05

PROC_DECLARE(0x6ef7bab, internal_6ef7bab, public_6ef7bab);
extern "C" NAKED register_t __cdecl internal_6ef7bab()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6ef7c02
        cmp byte ptr ds : [eax+8], 0
        lea edx, ds:[eax+8]
        je public_6ef7c02
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6ef7bdc
        add ecx, 8
        push ecx
        push edx
        call public_6ef8e90
        pop ecx
        test eax, eax
        pop ecx
        jne public_6ef7bfe
        public_6ef7bdc : nop
        test byte ptr ds : [esi], 2
        je public_6ef7be6
        test byte ptr ds : [edi], 8
        je public_6ef7bfe
        public_6ef7be6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        test al, 1
        je public_6ef7bf5
        test byte ptr ds : [edi], 1
        je public_6ef7bfe
        public_6ef7bf5 : nop
        test al, 2
        je public_6ef7c02
        test byte ptr ds : [edi], 2
        jne public_6ef7c02
        public_6ef7bfe : nop
        xor eax, eax
        jmp public_6ef7c05
        public_6ef7c02 : nop
        push 1
        pop eax
        public_6ef7c05 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef7bab)
    }
}

#undef public_6ef7bdc
#undef public_6ef7be6
#undef public_6ef7bf5
#undef public_6ef7bfe
#undef public_6ef7c02
#undef public_6ef7c05
