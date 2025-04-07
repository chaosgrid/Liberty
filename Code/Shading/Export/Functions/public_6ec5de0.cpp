#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec5df2 _public_6ec5df2
#define public_6ec5e11 _public_6ec5e11

PROC_DECLARE(0x6ec5de0, internal_6ec5de0, public_6ec5de0);
extern "C" NAKED register_t __cdecl internal_6ec5de0()
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
        je public_6ec5e11
        public_6ec5df2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ec5de0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6ed0c50
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ec5df2
        public_6ec5e11 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5de0)
    }
}

#undef public_6ec5df2
#undef public_6ec5e11
