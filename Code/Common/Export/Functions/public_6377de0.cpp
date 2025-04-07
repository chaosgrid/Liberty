#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377de0);

#define public_6377e06 _public_6377e06

PROC_DECLARE(0x6377de0, internal_6377de0, public_6377de0);
extern "C" NAKED register_t __cdecl internal_6377de0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        call dword ptr ds : [public_63992a4]
        mov eax, dword ptr ds : [esi]
        add esp, 8
        cmp edi, eax
        jae public_6377e06
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, 0x20
        jne public_6377e06
        mov dword ptr ds : [esi], eax
        public_6377e06 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6377de0)
    }
}

#undef public_6377e06
