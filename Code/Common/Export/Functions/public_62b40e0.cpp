#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b40e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b40fe _public_62b40fe
#define public_62b4116 _public_62b4116
#define public_62b4193 _public_62b4193

PROC_DECLARE(0x62b40e0, internal_62b40e0, public_62b40e0);
extern "C" NAKED register_t __cdecl internal_62b40e0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        push edi
        je public_62b40fe
        lea eax, ss:[esp+0xC]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b4116
        public_62b40fe : nop
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        public_62b4116 : nop
        push 0x3F800000
        lea edi, ds:[esi+0x230]
        push 0
        mov ecx, edi
        call public_62bb610
        fdiv dword ptr ss : [esp+0xC]
        push 0x3F800000
        push 1
        mov ecx, edi
        fstp dword ptr ss : [esp+0x10]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov ecx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [ecx+0x10C]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+8]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fsqrt 
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_639e6c0]
        fnstsw ax
        test ah, 0x41
        jne public_62b4193
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+8]
        fdivp 
        add esp, 0x1C
        ret 4
        public_62b4193 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62b40e0)
    }
}

#undef public_62b40fe
#undef public_62b4116
#undef public_62b4193
