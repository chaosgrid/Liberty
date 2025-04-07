#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fb090);

#define public_65fb0b2 _public_65fb0b2
#define public_65fb0b7 _public_65fb0b7
#define public_65fb0d3 _public_65fb0d3
#define public_65fb0d4 _public_65fb0d4
#define public_65fb0f0 _public_65fb0f0
#define public_65fb0f1 _public_65fb0f1

PROC_DECLARE(0x65fb090, internal_65fb090, public_65fb090);
extern "C" NAKED register_t __cdecl internal_65fb090()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+0x4C]
        xor edx, edx
        fnstsw ax
        test ah, 5
        jnp public_65fb0b2
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_65fb0b7
        public_65fb0b2 : nop
        mov edx, 1
        public_65fb0b7 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx+0x54]
        fnstsw ax
        test ah, 5
        jnp public_65fb0d3
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_65fb0d4
        public_65fb0d3 : nop
        inc edx
        public_65fb0d4 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx+0x40]
        fnstsw ax
        test ah, 5
        jnp public_65fb0f0
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx+0x44]
        fnstsw ax
        test ah, 0x41
        jne public_65fb0f1
        public_65fb0f0 : nop
        inc edx
        public_65fb0f1 : nop
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x65fb090)
    }
}

#undef public_65fb0b2
#undef public_65fb0b7
#undef public_65fb0d3
#undef public_65fb0d4
#undef public_65fb0f0
#undef public_65fb0f1
