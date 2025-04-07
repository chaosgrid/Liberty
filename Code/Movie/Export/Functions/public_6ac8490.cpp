#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8490);

#define public_6ac84ac _public_6ac84ac
#define public_6ac84ec _public_6ac84ec

PROC_DECLARE(0x6ac8490, internal_6ac8490, public_6ac8490);
extern "C" NAKED register_t __cdecl internal_6ac8490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        xor esi, esi
        test eax, eax
        je public_6ac84ec
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        sub edi, ecx
        public_6ac84ac : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        mov edx, dword ptr ds : [edi+ecx]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ss : [esp+0x1C]
        mul dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx]
        xor ebp, ebp
        add eax, ebx
        adc edx, ebp
        xor ebx, ebx
        add eax, esi
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x20]
        adc edx, ebx
        add ecx, 4
        dec eax
        mov esi, edx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6ac84ac
        pop edi
        pop ebp
        mov eax, esi
        pop ebx
        pop esi
        ret 0x10
        public_6ac84ec : nop
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8490)
    }
}

#undef public_6ac84ac
#undef public_6ac84ec
