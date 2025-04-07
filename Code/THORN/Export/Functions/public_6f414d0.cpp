#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f414d0);

#define public_6f414f7 _public_6f414f7
#define public_6f4150a _public_6f4150a

PROC_DECLARE(0x6f414d0, internal_6f414d0, public_6f414d0);
extern "C" NAKED register_t __cdecl internal_6f414d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        push ebx
        lea esi, ds:[edi+0x90]
        push esi
        call public_6f40ab0
        cmp dword ptr ds : [esi], 4
        je public_6f4150a
        mov eax, dword ptr ds : [edi+0x88]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4150a
        public_6f414f7 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x88]
        jne public_6f414f7
        public_6f4150a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f414d0)
    }
}

#undef public_6f414f7
#undef public_6f4150a
