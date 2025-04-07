#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f39250 _public_6f39250
#define public_6f39259 _public_6f39259
#define public_6f39286 _public_6f39286
#define public_6f3928f _public_6f3928f

PROC_DECLARE(0x6f39230, internal_6f39230, public_6f39230);
extern "C" NAKED register_t __cdecl internal_6f39230()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f39259
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f39250
        cmp cl, 0xFF
        je public_6f39250
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f39259
        public_6f39250 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f39259 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f3928f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f39286
        cmp cl, 0xFF
        je public_6f39286
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_6f39286 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3928f : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f39230)
    }
}

#undef public_6f39250
#undef public_6f39259
#undef public_6f39286
#undef public_6f3928f
