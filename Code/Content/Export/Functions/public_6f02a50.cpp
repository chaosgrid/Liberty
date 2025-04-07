#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f02a61 _public_6f02a61
#define public_6f02a7b _public_6f02a7b
#define public_6f02a84 _public_6f02a84
#define public_6f02a95 _public_6f02a95

PROC_DECLARE(0x6f02a50, internal_6f02a50, public_6f02a50);
extern "C" NAKED register_t __cdecl internal_6f02a50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f02a95
        push ebx
        xor ebx, ebx
        public_6f02a61 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f02a84
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f02a7b
        cmp cl, 0xFF
        je public_6f02a7b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f02a84
        public_6f02a7b : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f02a84 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, edi
        jne public_6f02a61
        pop ebx
        public_6f02a95 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f02a50)
    }
}

#undef public_6f02a61
#undef public_6f02a7b
#undef public_6f02a84
#undef public_6f02a95
