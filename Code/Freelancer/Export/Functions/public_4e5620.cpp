#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e5632 _public_4e5632
#define public_4e564c _public_4e564c
#define public_4e5655 _public_4e5655
#define public_4e5665 _public_4e5665

PROC_DECLARE(0x4e5620, internal_4e5620, public_4e5620);
extern "C" NAKED register_t __cdecl internal_4e5620()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp esi, ebp
        je public_4e5665
        public_4e5632 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_4e5655
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_4e564c
        cmp cl, 0xFF
        je public_4e564c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4e5655
        public_4e564c : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4e5655 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_4e5632
        public_4e5665 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4e5620)
    }
}

#undef public_4e5632
#undef public_4e564c
#undef public_4e5655
#undef public_4e5665
