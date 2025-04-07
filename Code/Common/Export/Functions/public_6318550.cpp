#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6318562 _public_6318562
#define public_6318581 _public_6318581

PROC_DECLARE(0x6318550, internal_6318550, public_6318550);
extern "C" NAKED register_t __cdecl internal_6318550()
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
        je public_6318581
        public_6318562 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6318550
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6318562
        public_6318581 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6318550)
    }
}

#undef public_6318562
#undef public_6318581
