#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6356fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6357120);

#define public_635703c _public_635703c
#define public_635710e _public_635710e
#define public_635711a _public_635711a

PROC_DECLARE(0x6356fb0, internal_6356fb0, public_6356fb0);
extern "C" NAKED register_t __cdecl internal_6356fb0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi+0xA8]
        mov eax, dword ptr ds : [edi+0xAC]
        fld dword ptr ds : [edi+0xA4]
        lea esi, ds:[edi+0xB4]
        mov ecx, eax
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, esi
        fstp dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        call public_6347ef0
        mov ecx, dword ptr ds : [edi+0x108]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [esi]
        faddp 
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_635703c
        fld dword ptr ds : [edi+0xC8]
        mov edx, dword ptr ds : [edi+0xCC]
        fld dword ptr ds : [edi+0xC4]
        mov eax, edx
        fstp dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ds : [esi+8], eax
        call public_6347ef0
        pop edi
        pop esi
        add esp, 0x18
        ret 
        public_635703c : nop
        mov eax, dword ptr ds : [edi+0xD4]
        test eax, eax
        jne public_635710e
        fld dword ptr ds : [edi+0x100]
        fchs 
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 1
        je public_635711a
        fld dword ptr ss : [esp+8]
        fchs 
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fadd dword ptr ds : [esi+4]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x10]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        call public_6347ef0
        fld dword ptr ds : [edi+0x104]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ds : [edi+0x100]
        mov edi, dword ptr ds : [edi+0x108]
        fchs 
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fadd dword ptr ss : [esp+8]
        fld st(1)
        fmul dword ptr ds : [edi+8]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ds : [edi]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        pop esi
        add esp, 0x18
        ret 
        public_635710e : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov ecx, edi
        call public_6357120
        public_635711a : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6356fb0)
    }
}

#undef public_635703c
#undef public_635710e
#undef public_635711a
