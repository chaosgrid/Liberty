#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_487c50 _public_487c50
#define public_487c5c _public_487c5c
#define public_487c89 _public_487c89
#define public_487c95 _public_487c95

PROC_DECLARE(0x487c30, internal_487c30, public_487c30);
extern "C" NAKED register_t __cdecl internal_487c30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        xor ebx, ebx
        cmp eax, ebx
        je public_487c5c
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_487c50
        cmp cl, 0xFF
        je public_487c50
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_487c5c
        public_487c50 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_487c5c : nop
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_487c95
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_487c89
        cmp cl, 0xFF
        je public_487c89
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        public_487c89 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_487c95 : nop
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x487c30)
    }
}

#undef public_487c50
#undef public_487c5c
#undef public_487c89
#undef public_487c95
