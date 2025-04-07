#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b41b0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b41cd _public_62b41cd
#define public_62b41e5 _public_62b41e5
#define public_62b423b _public_62b423b

PROC_DECLARE(0x62b41b0, internal_62b41b0, public_62b41b0);
extern "C" NAKED register_t __cdecl internal_62b41b0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_62b41cd
        lea eax, ss:[esp+4]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b41e5
        public_62b41cd : nop
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        public_62b41e5 : nop
        push 0x3F800000
        push 2
        lea ecx, ds:[esi+0x230]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov ecx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [ecx+0x110]
        pop esi
        fstp dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+8]
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_639e6c0]
        fnstsw ax
        test ah, 0x41
        jne public_62b423b
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fdivp 
        fstp st(1)
        add esp, 0x18
        ret 4
        public_62b423b : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62b41b0)
    }
}

#undef public_62b41cd
#undef public_62b41e5
#undef public_62b423b
