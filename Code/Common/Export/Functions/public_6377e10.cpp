#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377e10);

#define public_6377e38 _public_6377e38

PROC_DECLARE(0x6377e10, internal_6377e10, public_6377e10);
extern "C" NAKED register_t __cdecl internal_6377e10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0xA
        push esi
        push edi
        call dword ptr ds : [public_6399344]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        cmp edi, ecx
        jae public_6377e38
        mov dl, byte ptr ds : [ecx-1]
        dec ecx
        cmp dl, 0x20
        jne public_6377e38
        mov dword ptr ds : [esi], ecx
        public_6377e38 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6377e10)
    }
}

#undef public_6377e38
