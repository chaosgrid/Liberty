#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de817);
CLANG_FORWARD_PROC_SYMBOL(public_65de89c);
CLANG_FORWARD_PROC_SYMBOL(public_65de91b);
CLANG_FORWARD_PROC_SYMBOL(public_65dfa0a);

#define public_65dfa26 _public_65dfa26
#define public_65dfa3c _public_65dfa3c
#define public_65dfa58 _public_65dfa58
#define public_65dfa5a _public_65dfa5a
#define public_65dfa88 _public_65dfa88
#define public_65dfa8a _public_65dfa8a

PROC_DECLARE(0x65dfa0a, internal_65dfa0a, public_65dfa0a);
extern "C" NAKED register_t __cdecl internal_65dfa0a()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_65de91b
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_65dfa58
        cmp esi, 1
        je public_65dfa26
        cmp esi, 2
        jne public_65dfa3c
        public_65dfa26 : nop
        push 2
        call public_65de91b
        push 1
        mov edi, eax
        call public_65de91b
        pop ecx
        cmp eax, edi
        pop ecx
        je public_65dfa58
        public_65dfa3c : nop
        push esi
        call public_65de91b
        pop ecx
        push eax
        call dword ptr ds : [public_65e1018]
        test eax, eax
        jne public_65dfa58
        call dword ptr ds : [public_65e107c]
        mov edi, eax
        jmp public_65dfa5a
        public_65dfa58 : nop
        xor edi, edi
        public_65dfa5a : nop
        push esi
        call public_65de89c
        mov eax, esi
        and esi, 0x1F
        sar eax, 5
        pop ecx
        mov eax, dword ptr ds : [eax*4+public_65e7940]
        lea ecx, ds:[esi+esi*8]
        and byte ptr ds : [eax+ecx*4+4], 0
        test edi, edi
        je public_65dfa88
        push edi
        call public_65de817
        pop ecx
        or eax, 0xFFFFFFFF
        jmp public_65dfa8a
        public_65dfa88 : nop
        xor eax, eax
        public_65dfa8a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dfa0a)
    }
}

#undef public_65dfa26
#undef public_65dfa3c
#undef public_65dfa58
#undef public_65dfa5a
#undef public_65dfa88
#undef public_65dfa8a
