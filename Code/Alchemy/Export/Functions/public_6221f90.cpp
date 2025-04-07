#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221f90);

#define public_6221fa3 _public_6221fa3
#define public_6221fb1 _public_6221fb1
#define public_6221fb8 _public_6221fb8

PROC_DECLARE(0x6221f90, internal_6221f90, public_6221f90);
extern "C" NAKED register_t __cdecl internal_6221f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6221fb8
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6221fa3 : nop
        test eax, eax
        je public_6221fb1
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6221fb1 : nop
        add eax, 8
        dec edx
        jne public_6221fa3
        pop esi
        public_6221fb8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6221f90)
    }
}

#undef public_6221fa3
#undef public_6221fb1
#undef public_6221fb8
