#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_419120 _public_419120
#define public_419144 _public_419144
#define public_41914d _public_41914d

PROC_DECLARE(0x419100, internal_419100, public_419100);
extern "C" NAKED register_t __cdecl internal_419100()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_5c8eb4
        je public_419120
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi+0x1C], ebx
        public_419120 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_41914d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_419144
        cmp cl, 0xFF
        je public_419144
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        public_419144 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_41914d : nop
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x419100)
    }
}

#undef public_419120
#undef public_419144
#undef public_41914d
