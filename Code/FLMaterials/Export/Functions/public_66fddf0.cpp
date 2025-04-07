#include "FLMaterials-PCH.h"


#define public_66fde15 _public_66fde15
#define public_66fde49 _public_66fde49
#define public_66fde6b _public_66fde6b
#define public_66fde86 _public_66fde86
#define public_66fde9d _public_66fde9d
#define public_66fdec3 _public_66fdec3
#define public_66fdedd _public_66fdedd
#define public_66fdf07 _public_66fdf07
#define public_66fdf19 _public_66fdf19

PROC_DECLARE(0x66fddf0, internal_66fddf0, public_66fddf0);
extern "C" NAKED register_t __cdecl internal_66fddf0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi+8]
        test al, al
        jne public_66fde15
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x3C]
        pop esi
        pop ecx
        ret 0xC
        public_66fde15 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 5
        jp public_66fde49
        mov eax, 1
        pop esi
        pop ecx
        ret 0xC
        public_66fde49 : nop
        fld dword ptr ss : [esp+0x14]
        mov edx, 4
        fadd dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0xC]
        fchs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_66fde6b
        mov edx, 3
        public_66fde6b : nop
        fld dword ptr ss : [esp+4]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_66fde86
        mov eax, 1
        pop esi
        pop ecx
        ret 0xC
        public_66fde86 : nop
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 5
        jnp public_66fde9d
        mov edx, 3
        public_66fde9d : nop
        fld dword ptr ds : [ecx]
        fabs 
        fmul dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [esi+0x74]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_66fdec3
        fstp st(0)
        mov eax, 1
        pop esi
        pop ecx
        ret 0xC
        public_66fdec3 : nop
        fld dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_66fdedd
        mov edx, 3
        public_66fdedd : nop
        fld dword ptr ds : [ecx+4]
        fabs 
        fmul dword ptr ds : [esi+0x7C]
        fld dword ptr ds : [esi+0x80]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_66fdf07
        fstp st(0)
        mov eax, 1
        pop esi
        pop ecx
        ret 0xC
        public_66fdf07 : nop
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        mov eax, 3
        jp public_66fdf19
        mov eax, edx
        public_66fdf19 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66fddf0)
    }
}

#undef public_66fde15
#undef public_66fde49
#undef public_66fde6b
#undef public_66fde86
#undef public_66fde9d
#undef public_66fdec3
#undef public_66fdedd
#undef public_66fdf07
#undef public_66fdf19
