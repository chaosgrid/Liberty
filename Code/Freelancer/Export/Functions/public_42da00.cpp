#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42da00);

#define public_42da24 _public_42da24
#define public_42da84 _public_42da84
#define public_42da98 _public_42da98
#define public_42daad _public_42daad

PROC_DECLARE(0x42da00, internal_42da00, public_42da00);
extern "C" NAKED register_t __cdecl internal_42da00()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push edi
        fcomp qword ptr ds : [public_5c75f0]
        mov edi, ecx
        fnstsw ax
        test ah, 5
        jp public_42da24
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], 0x3F800000
        mov al, 1
        pop edi
        ret 0x10
        public_42da24 : nop
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        pop esi
        fdiv dword ptr ss : [esp+0xC]
        fmulp 
        fcom dword ptr ds : [edi+8]
        fnstsw ax
        test ah, 0x41
        jne public_42da84
        fld dword ptr ds : [edi+4]
        mov cl, 1
        fxch 
        fsub st, st(1)
        fld dword ptr ds : [edi]
        fsub st, st(2)
        fdivp 
        fcom dword ptr ds : [public_5c75dc]
        fstp st(1)
        fnstsw ax
        test ah, 0x41
        jne public_42da98
        mov edx, dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        mov al, cl
        fstp dword ptr ds : [edx]
        pop edi
        ret 0x10
        public_42da84 : nop
        mov eax, dword ptr ss : [esp+0x14]
        fstp st(0)
        xor cl, cl
        mov dword ptr ds : [eax], 0
        mov al, cl
        pop edi
        ret 0x10
        public_42da98 : nop
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_42daad
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_42daad : nop
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edx]
        mov al, cl
        pop edi
        ret 0x10
        UNREACHABLE_TRAP(0x42da00)
    }
}

#undef public_42da24
#undef public_42da84
#undef public_42da98
#undef public_42daad
