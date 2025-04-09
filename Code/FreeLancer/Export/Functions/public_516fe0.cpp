#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516fe0);

#define public_51707d _public_51707d
#define public_51708d _public_51708d

PROC_DECLARE(0x516fe0, internal_516fe0, public_516fe0);
extern "C" NAKED register_t __cdecl internal_516fe0()
{
    __asm
    {
        sub esp, 0x48
        mov edx, dword ptr ss : [esp+0x50]
        fld dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edx+0x14]
        fld dword ptr ds : [edx+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld st(1)
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        faddp 
        fabs 
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 5
        jp public_51707d
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+4]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fld st(2)
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx]
        fsubp 
        fld st(2)
        fmul dword ptr ds : [ecx]
        fld st(4)
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x50]
        jmp public_51708d
        public_51707d : nop
        fld dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx+0x18]
        public_51708d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        mov dword ptr ss : [esp], eax
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x24], eax
        fmul dword ptr ss : [esp+0x20]
        push esi
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        fsubp 
        push edi
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x4C], ecx
        fmul dword ptr ss : [esp+8]
        mov ecx, 9
        fld dword ptr ss : [esp+0x10]
        lea esi, ss:[esp+0x2C]
        fmul st, st(4)
        mov dword ptr ss : [esp+0x44], edx
        fsubp 
        fld dword ptr ss : [esp+0xC]
        fmul st, st(4)
        fld dword ptr ss : [esp+8]
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fxch 
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x3C]
        mov edi, eax
        fxch 
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x516fe0)
    }
}

#undef public_51707d
#undef public_51708d
