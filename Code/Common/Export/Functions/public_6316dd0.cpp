#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6316de1 _public_6316de1
#define public_6316dfb _public_6316dfb
#define public_6316e04 _public_6316e04
#define public_6316e15 _public_6316e15

PROC_DECLARE(0x6316dd0, internal_6316dd0, public_6316dd0);
extern "C" NAKED register_t __cdecl internal_6316dd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6316e15
        push ebx
        xor ebx, ebx
        public_6316de1 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6316e04
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6316dfb
        cmp cl, 0xFF
        je public_6316dfb
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6316e04
        public_6316dfb : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6316e04 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, edi
        jne public_6316de1
        pop ebx
        public_6316e15 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6316dd0)
    }
}

#undef public_6316de1
#undef public_6316dfb
#undef public_6316e04
#undef public_6316e15
