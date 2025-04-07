#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_544880);

#define public_544914 _public_544914
#define public_544916 _public_544916
#define public_54497b _public_54497b
#define public_5449a5 _public_5449a5

PROC_DECLARE(0x544880, internal_544880, public_544880);
extern "C" NAKED register_t __cdecl internal_544880()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+8]
        lea eax, ds:[esi+0xC]
        test eax, eax
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        je public_544914
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_544914
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_544916
        public_544914 : nop
        xor eax, eax
        public_544916 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6ae4]
        test al, al
        je public_54497b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        jmp public_5449a5
        public_54497b : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5dd55c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5dd55c]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5dd55c]
        fstp dword ptr ss : [esp+0xC]
        public_5449a5 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [public_673344]
        fld dword ptr ss : [esp+8]
        push edx
        fadd dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x20]
        fld dword ptr ss : [esp+8]
        push edx
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        push 0
        fstp dword ptr ss : [esp+0x28]
        push 0
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [eax+0x34]
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x544880)
    }
}

#undef public_544914
#undef public_544916
#undef public_54497b
#undef public_5449a5
