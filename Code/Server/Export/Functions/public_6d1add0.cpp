#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1add0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1ade2 _public_6d1ade2
#define public_6d1adfc _public_6d1adfc
#define public_6d1ae08 _public_6d1ae08
#define public_6d1ae18 _public_6d1ae18

PROC_DECLARE(0x6d1add0, internal_6d1add0, public_6d1add0);
extern "C" NAKED register_t __cdecl internal_6d1add0()
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
        je public_6d1ae18
        public_6d1ade2 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6d1ae08
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d1adfc
        cmp cl, 0xFF
        je public_6d1adfc
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1ae08
        public_6d1adfc : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1ae08 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_6d1ade2
        public_6d1ae18 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d1add0)
    }
}

#undef public_6d1ade2
#undef public_6d1adfc
#undef public_6d1ae08
#undef public_6d1ae18
