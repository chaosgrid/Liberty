#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f02742 _public_6f02742
#define public_6f0275c _public_6f0275c
#define public_6f02765 _public_6f02765
#define public_6f02775 _public_6f02775

PROC_DECLARE(0x6f02730, internal_6f02730, public_6f02730);
extern "C" NAKED register_t __cdecl internal_6f02730()
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
        je public_6f02775
        public_6f02742 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f02765
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f0275c
        cmp cl, 0xFF
        je public_6f0275c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f02765
        public_6f0275c : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f02765 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_6f02742
        public_6f02775 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f02730)
    }
}

#undef public_6f02742
#undef public_6f0275c
#undef public_6f02765
#undef public_6f02775
