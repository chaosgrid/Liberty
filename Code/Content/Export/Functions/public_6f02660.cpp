#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02660);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f02672 _public_6f02672
#define public_6f0268c _public_6f0268c
#define public_6f02695 _public_6f02695
#define public_6f026a5 _public_6f026a5

PROC_DECLARE(0x6f02660, internal_6f02660, public_6f02660);
extern "C" NAKED register_t __cdecl internal_6f02660()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp esi, ebp
        je public_6f026a5
        public_6f02672 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f02695
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f0268c
        cmp cl, 0xFF
        je public_6f0268c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f02695
        public_6f0268c : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f02695 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_6f02672
        public_6f026a5 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f02660)
    }
}

#undef public_6f02672
#undef public_6f0268c
#undef public_6f02695
#undef public_6f026a5
