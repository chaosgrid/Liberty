#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_626b462 _public_626b462
#define public_626b481 _public_626b481

PROC_DECLARE(0x626b450, internal_626b450, public_626b450);
extern "C" NAKED register_t __cdecl internal_626b450()
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
        je public_626b481
        public_626b462 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_626b450
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_626b462
        public_626b481 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626b450)
    }
}

#undef public_626b462
#undef public_626b481
