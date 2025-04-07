#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d45c20);

#define public_6d45c39 _public_6d45c39

PROC_DECLARE(0x6d45c20, internal_6d45c20, public_6d45c20);
extern "C" NAKED register_t __cdecl internal_6d45c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, 0x1000
        jb public_6d45c39
        mov ecx, offset public_6d8f768
        call public_6d15f90
        public_6d45c39 : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8f768]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        pop esi
        not edx
        and ecx, edx
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6d45c20)
    }
}

#undef public_6d45c39
