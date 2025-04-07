#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297560);

#define public_6297588 _public_6297588
#define public_629759b _public_629759b
#define public_62975a0 _public_62975a0

PROC_DECLARE(0x6297560, internal_6297560, public_6297560);
extern "C" NAKED register_t __cdecl internal_6297560()
{
    __asm
    {
        cmp dword ptr ds : [ecx+8], 0xFFFFFFFF
        je public_62975a0
        fld dword ptr ds : [ecx+0x14]
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        fsub dword ptr ds : [ecx+0x10]
        fabs 
        jne public_6297588
        fcom dword ptr ds : [public_639d208]
        fnstsw ax
        test ah, 0x41
        jne public_6297588
        fsubr dword ptr ds : [public_639d208]
        public_6297588 : nop
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_629759b
        mov eax, 1
        ret 4
        public_629759b : nop
        xor eax, eax
        ret 4
        public_62975a0 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6297560)
    }
}

#undef public_6297588
#undef public_629759b
#undef public_62975a0
