#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f43a93 _public_6f43a93
#define public_6f43a9c _public_6f43a9c
#define public_6f43acb _public_6f43acb
#define public_6f43ad4 _public_6f43ad4

PROC_DECLARE(0x6f43a70, internal_6f43a70, public_6f43a70);
extern "C" NAKED register_t __cdecl internal_6f43a70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x90]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f43a9c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f43a93
        cmp cl, 0xFF
        je public_6f43a93
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f43a9c
        public_6f43a93 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f43a9c : nop
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov dword ptr ds : [esi+0x98], ebx
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, ebx
        je public_6f43ad4
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f43acb
        cmp cl, 0xFF
        je public_6f43acb
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f43ad4
        public_6f43acb : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f43ad4 : nop
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6f439a0
        UNREACHABLE_TRAP(0x6f43a70)
    }
}

#undef public_6f43a93
#undef public_6f43a9c
#undef public_6f43acb
#undef public_6f43ad4
