#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4080d0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4080e2 _public_4080e2
#define public_408101 _public_408101

PROC_DECLARE(0x4080d0, internal_4080d0, public_4080d0);
extern "C" NAKED register_t __cdecl internal_4080d0()
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
        je public_408101
        public_4080e2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4080d0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4080e2
        public_408101 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4080d0)
    }
}

#undef public_4080e2
#undef public_408101
