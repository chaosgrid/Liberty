#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8970);

#define public_6eb8989 _public_6eb8989
#define public_6eb89a7 _public_6eb89a7
#define public_6eb89ae _public_6eb89ae
#define public_6eb89b5 _public_6eb89b5

PROC_DECLARE(0x6eb8970, internal_6eb8970, public_6eb8970);
extern "C" NAKED register_t __cdecl internal_6eb8970()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp ebx, eax
        je public_6eb89ae
        sub eax, 5
        je public_6eb8989
        dec eax
        je public_6eb89b5
        dec eax
        jne public_6eb89a7
        public_6eb8989 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb89a7
        push eax
        push 0
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb89a7 : nop
        mov dword ptr ds : [esi+4], 0
        public_6eb89ae : nop
        mov dword ptr ds : [esi], ebx
        pop esi
        pop ebx
        ret 4
        public_6eb89b5 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_6eb89a7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], 0
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb8970)
    }
}

#undef public_6eb8989
#undef public_6eb89a7
#undef public_6eb89ae
#undef public_6eb89b5
