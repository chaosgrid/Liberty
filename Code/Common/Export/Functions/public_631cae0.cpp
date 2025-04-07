#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631cb1f _public_631cb1f
#define public_631cb28 _public_631cb28

PROC_DECLARE(0x631cae0, internal_631cae0, public_631cae0);
extern "C" NAKED register_t __cdecl internal_631cae0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, ebx
        je public_631cb28
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_631cb1f
        cmp cl, 0xFF
        je public_631cb1f
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        public_631cb1f : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631cb28 : nop
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631cae0)
    }
}

#undef public_631cb1f
#undef public_631cb28
