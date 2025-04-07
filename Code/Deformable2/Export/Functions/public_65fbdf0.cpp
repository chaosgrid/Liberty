#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fbc90);
CLANG_FORWARD_PROC_SYMBOL(public_65fbdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65fbe41 _public_65fbe41
#define public_65fbe64 _public_65fbe64
#define public_65fbeba _public_65fbeba

PROC_DECLARE(0x65fbdf0, internal_65fbdf0, public_65fbdf0);
extern "C" NAKED register_t __cdecl internal_65fbdf0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [edx+0xC]
        sub esp, 0x4C
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [edx+8]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [edx]
        faddp 
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 1
        jne public_65fbe41
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edx
        jmp public_65fbe64
        public_65fbe41 : nop
        fld dword ptr ds : [edx]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edx+4]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edx+8]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edx+0xC]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        public_65fbe64 : nop
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        fchs 
        mov dword ptr ss : [esp+0x3C], eax
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp]
        fchs 
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        fchs 
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        pop esi
        jne public_65fbeba
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fbeba : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_65fbc90
        fld dword ptr ds : [eax]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        fadd st(0), st
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x58]
        fadd st(0), st
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x65fbdf0)
    }
}

#undef public_65fbe41
#undef public_65fbe64
#undef public_65fbeba
