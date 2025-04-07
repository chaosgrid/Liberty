#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac86a0);

#define public_6ac86b8 _public_6ac86b8
#define public_6ac86e8 _public_6ac86e8

PROC_DECLARE(0x6ac86a0, internal_6ac86a0, public_6ac86a0);
extern "C" NAKED register_t __cdecl internal_6ac86a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        xor esi, esi
        test ebx, ebx
        je public_6ac86e8
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        sub edi, ecx
        public_6ac86b8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ds : [edi+ecx]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ss : [esp+0x20]
        mul dword ptr ss : [esp+0x1C]
        xor ebp, ebp
        add eax, esi
        adc edx, ebp
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        dec ebx
        mov esi, edx
        jne public_6ac86b8
        pop edi
        mov eax, esi
        pop ebp
        pop esi
        pop ebx
        ret 0x10
        public_6ac86e8 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac86a0)
    }
}

#undef public_6ac86b8
#undef public_6ac86e8
