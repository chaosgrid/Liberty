#include "Common-PCH.h"


#define public_62db10a _public_62db10a
#define public_62db11a _public_62db11a
#define public_62db12a _public_62db12a

PROC_DECLARE(0x62db100, internal_62db100, public_62db100);
extern "C" NAKED register_t __cdecl internal_62db100()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_62db10a
        xor al, al
        ret 
        public_62db10a : nop
        mov al, byte ptr ds : [ecx+0x14]
        test al, al
        je public_62db11a
        cmp dword ptr ds : [ecx+0x18], 0xFFFFFFFF
        jne public_62db11a
        xor al, al
        ret 
        public_62db11a : nop
        fld dword ptr ds : [ecx+0x20]
        fcomp dword ptr ds : [ecx+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62db12a
        xor al, al
        ret 
        public_62db12a : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62db100)
    }
}

#undef public_62db10a
#undef public_62db11a
#undef public_62db12a
