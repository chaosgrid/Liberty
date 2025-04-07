#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ae80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627ae92 _public_627ae92
#define public_627aeb1 _public_627aeb1

PROC_DECLARE(0x627ae80, internal_627ae80, public_627ae80);
extern "C" NAKED register_t __cdecl internal_627ae80()
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
        je public_627aeb1
        public_627ae92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_627ae80
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_627ae92
        public_627aeb1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627ae80)
    }
}

#undef public_627ae92
#undef public_627aeb1
