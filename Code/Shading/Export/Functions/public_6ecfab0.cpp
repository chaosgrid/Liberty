#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfab0);

#define public_6ecfac3 _public_6ecfac3
#define public_6ecfad1 _public_6ecfad1
#define public_6ecfad8 _public_6ecfad8

PROC_DECLARE(0x6ecfab0, internal_6ecfab0, public_6ecfab0);
extern "C" NAKED register_t __cdecl internal_6ecfab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6ecfad8
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6ecfac3 : nop
        test eax, eax
        je public_6ecfad1
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6ecfad1 : nop
        add eax, 8
        dec edx
        jne public_6ecfac3
        pop esi
        public_6ecfad8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ecfab0)
    }
}

#undef public_6ecfac3
#undef public_6ecfad1
#undef public_6ecfad8
