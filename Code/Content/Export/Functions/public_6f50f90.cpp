#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50f90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f50fbf _public_6f50fbf
#define public_6f50fc7 _public_6f50fc7
#define public_6f50fd9 _public_6f50fd9

PROC_DECLARE(0x6f50f90, internal_6f50f90, public_6f50f90);
extern "C" NAKED register_t __cdecl internal_6f50f90()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6fd0c90
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0c94]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6f50fbf
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f50fbf
        lea eax, ss:[esp]
        jmp public_6f50fc7
        public_6f50fbf : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f50fc7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f50fd9
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+ecx*4+0x20]
        add esp, 8
        ret 
        public_6f50fd9 : nop
        fld dword ptr ds : [public_6fb444c]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f50f90)
    }
}

#undef public_6f50fbf
#undef public_6f50fc7
#undef public_6f50fd9
