#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9dd0);

#define public_6ef9de0 _public_6ef9de0
#define public_6ef9df7 _public_6ef9df7
#define public_6ef9dff _public_6ef9dff

PROC_DECLARE(0x6ef9dd0, internal_6ef9dd0, public_6ef9dd0);
extern "C" NAKED register_t __cdecl internal_6ef9dd0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x24]
        cmp esi, dword ptr ds : [edi+0x28]
        je public_6ef9df7
        lea esp, ss:[esp]
        public_6ef9de0 : nop
        push 0
        mov ecx, esi
        call public_6ef52d0
        test al, al
        je public_6ef9dff
        mov eax, dword ptr ds : [edi+0x28]
        add esi, 0x50
        cmp esi, eax
        jne public_6ef9de0
        public_6ef9df7 : nop
        mov al, 1
        mov byte ptr ds : [edi+8], al
        pop edi
        pop esi
        ret 
        public_6ef9dff : nop
        mov byte ptr ds : [edi+8], 0
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef9dd0)
    }
}

#undef public_6ef9de0
#undef public_6ef9df7
#undef public_6ef9dff
