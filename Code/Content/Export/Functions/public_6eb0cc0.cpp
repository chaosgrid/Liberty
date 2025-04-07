#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eabcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb0cd2 _public_6eb0cd2
#define public_6eb0cf9 _public_6eb0cf9

PROC_DECLARE(0x6eb0cc0, internal_6eb0cc0, public_6eb0cc0);
extern "C" NAKED register_t __cdecl internal_6eb0cc0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6eb0cf9
        public_6eb0cd2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eb0cc0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6eabcf0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eb0cd2
        public_6eb0cf9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb0cc0)
    }
}

#undef public_6eb0cd2
#undef public_6eb0cf9
