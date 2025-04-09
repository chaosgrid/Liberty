#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1130);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5a1169 _public_5a1169
#define public_5a119c _public_5a119c
#define public_5a1245 _public_5a1245
#define public_5a1247 _public_5a1247
#define public_5a12b9 _public_5a12b9
#define public_5a12bb _public_5a12bb
#define public_5a132d _public_5a132d

PROC_DECLARE(0x5a1130, internal_5a1130, public_5a1130);
extern "C" NAKED register_t __cdecl internal_5a1130()
{
    __asm
    {
        sub esp, 0x24
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_5a1169
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_5a1169
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5a132d
        public_5a1169 : nop
        mov eax, dword ptr ds : [public_67dd4c]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x28]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        jne public_5a119c
        call public_5b73e0
        mov dword ptr ds : [public_67dd4c], eax
        public_5a119c : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x14]
        pop esi
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5a1247
        fld dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+4]
        fchs 
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5a1247
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x2C]
        fxch 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fabs 
        fld dword ptr ds : [edi+4]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a1245
        fabs 
        fld dword ptr ds : [edi+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a1247
        mov al, 1
        pop edi
        add esp, 0x24
        ret 8
        public_5a1245 : nop
        fstp st(0)
        public_5a1247 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5a12bb
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+8]
        fchs 
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5a12bb
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x2C]
        fxch 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fld dword ptr ds : [edi]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a12b9
        fabs 
        fld dword ptr ds : [edi+8]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a12bb
        mov al, 1
        pop edi
        add esp, 0x24
        ret 8
        public_5a12b9 : nop
        fstp st(0)
        public_5a12bb : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5a132d
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0xC]
        fchs 
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5a132d
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+8]
        fxch 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        fabs 
        fld dword ptr ds : [edi+4]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a132d
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fld dword ptr ds : [edi]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5a132d
        mov al, 1
        pop edi
        add esp, 0x24
        ret 8
        public_5a132d : nop
        xor al, al
        pop edi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x5a1130)
    }
}

#undef public_5a1169
#undef public_5a119c
#undef public_5a1245
#undef public_5a1247
#undef public_5a12b9
#undef public_5a12bb
#undef public_5a132d
