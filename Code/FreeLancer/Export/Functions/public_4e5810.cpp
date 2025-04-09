#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e5821 _public_4e5821
#define public_4e583b _public_4e583b
#define public_4e5844 _public_4e5844
#define public_4e5855 _public_4e5855

PROC_DECLARE(0x4e5810, internal_4e5810, public_4e5810);
extern "C" NAKED register_t __cdecl internal_4e5810()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_4e5855
        push ebx
        xor ebx, ebx
        public_4e5821 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_4e5844
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_4e583b
        cmp cl, 0xFF
        je public_4e583b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4e5844
        public_4e583b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4e5844 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, edi
        jne public_4e5821
        pop ebx
        public_4e5855 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4e5810)
    }
}

#undef public_4e5821
#undef public_4e583b
#undef public_4e5844
#undef public_4e5855
