#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d7a0);

#define public_661d7c9 _public_661d7c9

PROC_DECLARE(0x661d7a0, internal_661d7a0, public_661d7a0);
extern "C" NAKED register_t __cdecl internal_661d7a0()
{
    __asm
    {
        fld dword ptr ds : [ecx+8]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661d7c9
        mov eax, dword ptr ds : [ecx+0x14]
        push esi
        imul eax, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [ecx+0x10]
        mov edx, 4
        add eax, esi
        pop esi
        add eax, edx
        ret 4
        public_661d7c9 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        push esi
        imul eax, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [ecx+0x10]
        xor edx, edx
        add eax, esi
        pop esi
        add eax, edx
        ret 4
        UNREACHABLE_TRAP(0x661d7a0)
    }
}

#undef public_661d7c9
