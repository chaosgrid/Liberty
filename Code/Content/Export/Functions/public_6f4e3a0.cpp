#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4e3b1 _public_6f4e3b1
#define public_6f4e3cb _public_6f4e3cb
#define public_6f4e3d7 _public_6f4e3d7
#define public_6f4e3e8 _public_6f4e3e8

PROC_DECLARE(0x6f4e3a0, internal_6f4e3a0, public_6f4e3a0);
extern "C" NAKED register_t __cdecl internal_6f4e3a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f4e3e8
        push ebx
        xor ebx, ebx
        public_6f4e3b1 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f4e3d7
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f4e3cb
        cmp cl, 0xFF
        je public_6f4e3cb
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4e3d7
        public_6f4e3cb : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4e3d7 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, edi
        jne public_6f4e3b1
        pop ebx
        public_6f4e3e8 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f4e3a0)
    }
}

#undef public_6f4e3b1
#undef public_6f4e3cb
#undef public_6f4e3d7
#undef public_6f4e3e8
