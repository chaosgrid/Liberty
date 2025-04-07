#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0910);

#define public_62f2812 _public_62f2812
#define public_62f2826 _public_62f2826
#define public_62f283a _public_62f283a
#define public_62f2859 _public_62f2859
#define public_62f2878 _public_62f2878
#define public_62f28b1 _public_62f28b1
#define public_62f28d5 _public_62f28d5
#define public_62f290e _public_62f290e
#define public_62f2932 _public_62f2932
#define public_62f2951 _public_62f2951
#define public_62f2970 _public_62f2970
#define public_62f298f _public_62f298f

PROC_DECLARE(0x62f27f0, internal_62f27f0, public_62f27f0);
extern "C" NAKED register_t __cdecl internal_62f27f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f0910
        mov eax, dword ptr ds : [edi+0xE0]
        cmp eax, dword ptr ds : [esi+0xE0]
        je public_62f2812
        mov dword ptr ds : [esi+0xE0], eax
        public_62f2812 : nop
        mov eax, dword ptr ds : [edi+0xE4]
        cmp eax, dword ptr ds : [esi+0xE4]
        je public_62f2826
        mov dword ptr ds : [esi+0xE4], eax
        public_62f2826 : nop
        mov eax, dword ptr ds : [edi+0xE8]
        cmp eax, dword ptr ds : [esi+0xE8]
        je public_62f283a
        mov dword ptr ds : [esi+0xE8], eax
        public_62f283a : nop
        fld dword ptr ds : [edi+0x100]
        fcomp dword ptr ds : [esi+0x100]
        fnstsw ax
        test ah, 0x44
        jnp public_62f2859
        mov eax, dword ptr ds : [edi+0x100]
        mov dword ptr ds : [esi+0x100], eax
        public_62f2859 : nop
        fld dword ptr ds : [edi+0x104]
        fcomp dword ptr ds : [esi+0x104]
        fnstsw ax
        test ah, 0x44
        jnp public_62f2878
        mov ecx, dword ptr ds : [edi+0x104]
        mov dword ptr ds : [esi+0x104], ecx
        public_62f2878 : nop
        fld dword ptr ds : [edi+0x108]
        fcomp dword ptr ds : [esi+0x108]
        fnstsw ax
        test ah, 0x44
        jp public_62f28b1
        fld dword ptr ds : [edi+0x10C]
        fcomp dword ptr ds : [esi+0x10C]
        fnstsw ax
        test ah, 0x44
        jp public_62f28b1
        fld dword ptr ds : [edi+0x110]
        fcomp dword ptr ds : [esi+0x110]
        fnstsw ax
        test ah, 0x44
        jnp public_62f28d5
        public_62f28b1 : nop
        mov edx, dword ptr ds : [edi+0x108]
        mov dword ptr ds : [esi+0x108], edx
        mov eax, dword ptr ds : [edi+0x10C]
        mov dword ptr ds : [esi+0x10C], eax
        mov ecx, dword ptr ds : [edi+0x110]
        mov dword ptr ds : [esi+0x110], ecx
        public_62f28d5 : nop
        fld dword ptr ds : [edi+0x114]
        fcomp dword ptr ds : [esi+0x114]
        fnstsw ax
        test ah, 0x44
        jp public_62f290e
        fld dword ptr ds : [edi+0x118]
        fcomp dword ptr ds : [esi+0x118]
        fnstsw ax
        test ah, 0x44
        jp public_62f290e
        fld dword ptr ds : [edi+0x11C]
        fcomp dword ptr ds : [esi+0x11C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f2932
        public_62f290e : nop
        mov edx, dword ptr ds : [edi+0x114]
        mov dword ptr ds : [esi+0x114], edx
        mov eax, dword ptr ds : [edi+0x118]
        mov dword ptr ds : [esi+0x118], eax
        mov ecx, dword ptr ds : [edi+0x11C]
        mov dword ptr ds : [esi+0x11C], ecx
        public_62f2932 : nop
        fld dword ptr ds : [edi+0x120]
        fcomp dword ptr ds : [esi+0x120]
        fnstsw ax
        test ah, 0x44
        jnp public_62f2951
        mov edx, dword ptr ds : [edi+0x120]
        mov dword ptr ds : [esi+0x120], edx
        public_62f2951 : nop
        fld dword ptr ds : [edi+0x124]
        fcomp dword ptr ds : [esi+0x124]
        fnstsw ax
        test ah, 0x44
        jnp public_62f2970
        mov eax, dword ptr ds : [edi+0x124]
        mov dword ptr ds : [esi+0x124], eax
        public_62f2970 : nop
        fld dword ptr ds : [edi+0x12C]
        fcomp dword ptr ds : [esi+0x12C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f298f
        mov ecx, dword ptr ds : [edi+0x12C]
        mov dword ptr ds : [esi+0x12C], ecx
        public_62f298f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f27f0)
    }
}

#undef public_62f2812
#undef public_62f2826
#undef public_62f283a
#undef public_62f2859
#undef public_62f2878
#undef public_62f28b1
#undef public_62f28d5
#undef public_62f290e
#undef public_62f2932
#undef public_62f2951
#undef public_62f2970
#undef public_62f298f
