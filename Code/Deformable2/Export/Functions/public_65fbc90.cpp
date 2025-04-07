#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fbc90);
CLANG_FORWARD_PROC_SYMBOL(public_6600c30);

#define public_65fbcca _public_65fbcca
#define public_65fbd02 _public_65fbd02

PROC_DECLARE(0x65fbc90, internal_65fbc90, public_65fbc90);
extern "C" NAKED register_t __cdecl internal_65fbc90()
{
    __asm
    {
        fld dword ptr ds : [public_66011e0]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi]
        push edi
        fabs 
        fcomp qword ptr ds : [public_66013b0]
        fnstsw ax
        test ah, 5
        jp public_65fbcca
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        jmp public_65fbd02
        public_65fbcca : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6600c30
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fsubr dword ptr ds : [public_66011e0]
        fsqrt 
        fdivp 
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x10]
        public_65fbd02 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65fbc90)
    }
}

#undef public_65fbcca
#undef public_65fbd02
