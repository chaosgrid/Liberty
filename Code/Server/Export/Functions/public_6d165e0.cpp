#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d165e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d165f4 _public_6d165f4
#define public_6d16607 _public_6d16607
#define public_6d16610 _public_6d16610
#define public_6d16614 _public_6d16614
#define public_6d16621 _public_6d16621
#define public_6d16632 _public_6d16632

PROC_DECLARE(0x6d165e0, internal_6d165e0, public_6d165e0);
extern "C" NAKED register_t __cdecl internal_6d165e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_6d68338
        je public_6d16614
        public_6d165f4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16607
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16610
        public_6d16607 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16610 : nop
        cmp edi, ebx
        jne public_6d165f4
        public_6d16614 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d16632
        public_6d16621 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16621
        public_6d16632 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d165e0)
    }
}

#undef public_6d165f4
#undef public_6d16607
#undef public_6d16610
#undef public_6d16614
#undef public_6d16621
#undef public_6d16632
