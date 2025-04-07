#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f535);

#define public_6d2f54b _public_6d2f54b
#define public_6d2f566 _public_6d2f566
#define public_6d2f587 _public_6d2f587
#define public_6d2f58b _public_6d2f58b
#define public_6d2f592 _public_6d2f592
#define public_6d2f59a _public_6d2f59a
#define public_6d2f59f _public_6d2f59f

PROC_DECLARE(0x6d2f535, internal_6d2f535, public_6d2f535);
extern "C" NAKED register_t __cdecl internal_6d2f535()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        or ebx, 0xFFFFFFFF
        mov edi, offset public_6d5eb60
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d2f592
        public_6d2f54b : nop
        push eax
        call public_6d2f49c
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        test eax, eax
        pop ecx
        je public_6d2f58b
        cmp dword ptr ds : [esi+4], 1
        jne public_6d2f566
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d2f58b
        public_6d2f566 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [ecx], eax
        je public_6d2f59f
        mov edx, esi
        call public_6d2f4c0
        cmp eax, 0xFFFFFFFF
        je public_6d2f58b
        cmp eax, ebx
        ja public_6d2f58b
        jne public_6d2f587
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jae public_6d2f58b
        public_6d2f587 : nop
        mov ebx, eax
        mov edi, esi
        public_6d2f58b : nop
        add dword ptr ss : [ebp+8], 4
        mov eax, dword ptr ss : [ebp+8]
        public_6d2f592 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6d2f54b
        mov eax, dword ptr ds : [edi]
        public_6d2f59a : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        public_6d2f59f : nop
        mov eax, dword ptr ds : [ecx]
        jmp public_6d2f59a
        UNREACHABLE_TRAP(0x6d2f535)
    }
}

#undef public_6d2f54b
#undef public_6d2f566
#undef public_6d2f587
#undef public_6d2f58b
#undef public_6d2f592
#undef public_6d2f59a
#undef public_6d2f59f
