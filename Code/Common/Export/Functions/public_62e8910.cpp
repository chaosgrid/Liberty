#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8910);

#define public_62e893c _public_62e893c

PROC_DECLARE(0x62e8910, internal_62e8910, public_62e8910);
extern "C" NAKED register_t __cdecl internal_62e8910()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e893c
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [eax+0x17B4]
        fnstsw ax
        test ah, 0x41
        jp public_62e893c
        mov al, 1
        ret 
        public_62e893c : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62e8910)
    }
}

#undef public_62e893c
