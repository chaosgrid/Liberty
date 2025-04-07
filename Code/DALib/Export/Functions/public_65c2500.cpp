#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c2520 _public_65c2520
#define public_65c252c _public_65c252c
#define public_65c2559 _public_65c2559
#define public_65c2565 _public_65c2565

PROC_DECLARE(0x65c2500, internal_65c2500, public_65c2500);
extern "C" NAKED register_t __cdecl internal_65c2500()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_65c252c
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_65c2520
        cmp cl, 0xFF
        je public_65c2520
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_65c252c
        public_65c2520 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_65c6a60
        add esp, 4
        public_65c252c : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_65c2565
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_65c2559
        cmp cl, 0xFF
        je public_65c2559
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_65c2559 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_65c6a60
        add esp, 4
        public_65c2565 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c2500)
    }
}

#undef public_65c2520
#undef public_65c252c
#undef public_65c2559
#undef public_65c2565
