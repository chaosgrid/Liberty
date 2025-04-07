#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279dcf _public_6279dcf
#define public_6279dd8 _public_6279dd8

PROC_DECLARE(0x6279d90, internal_6279d90, public_6279d90);
extern "C" NAKED register_t __cdecl internal_6279d90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        cmp eax, ebx
        je public_6279dd8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6279dcf
        cmp cl, 0xFF
        je public_6279dcf
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebx
        ret 
        public_6279dcf : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6279dd8 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6279d90)
    }
}

#undef public_6279dcf
#undef public_6279dd8
