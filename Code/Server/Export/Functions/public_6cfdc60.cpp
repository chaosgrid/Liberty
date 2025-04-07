#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cfdc72 _public_6cfdc72
#define public_6cfdc91 _public_6cfdc91

PROC_DECLARE(0x6cfdc60, internal_6cfdc60, public_6cfdc60);
extern "C" NAKED register_t __cdecl internal_6cfdc60()
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
        je public_6cfdc91
        public_6cfdc72 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6cfdc60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6cfdc72
        public_6cfdc91 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cfdc60)
    }
}

#undef public_6cfdc72
#undef public_6cfdc91
