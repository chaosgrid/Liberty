#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f51e0);

#define public_65f51f0 _public_65f51f0
#define public_65f51ff _public_65f51ff

PROC_DECLARE(0x65f51e0, internal_65f51e0, public_65f51e0);
extern "C" NAKED register_t __cdecl internal_65f51e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        mov ecx, dword ptr ss : [esp+4]
        je public_65f51ff
        nop 
        lea esp, ss:[esp]
        public_65f51f0 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x10]
        add ecx, 4
        test eax, eax
        jne public_65f51f0
        public_65f51ff : nop
        ret 4
        UNREACHABLE_TRAP(0x65f51e0)
    }
}

#undef public_65f51f0
#undef public_65f51ff
