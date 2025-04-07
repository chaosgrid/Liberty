#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282f90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6282fa2 _public_6282fa2
#define public_6282fc1 _public_6282fc1

PROC_DECLARE(0x6282f90, internal_6282f90, public_6282f90);
extern "C" NAKED register_t __cdecl internal_6282f90()
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
        je public_6282fc1
        public_6282fa2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6282f90
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6282fa2
        public_6282fc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6282f90)
    }
}

#undef public_6282fa2
#undef public_6282fc1
