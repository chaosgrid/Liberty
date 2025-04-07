#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_628be10);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_6348040);
CLANG_FORWARD_PROC_SYMBOL(public_6348070);
CLANG_FORWARD_PROC_SYMBOL(public_63481b0);
CLANG_FORWARD_PROC_SYMBOL(public_635aa60);
CLANG_FORWARD_PROC_SYMBOL(public_636d020);
CLANG_FORWARD_PROC_SYMBOL(public_636d550);
CLANG_FORWARD_PROC_SYMBOL(public_636d580);
CLANG_FORWARD_PROC_SYMBOL(public_636d6f0);

#define public_636d866 _public_636d866
#define public_636d887 _public_636d887
#define public_636d8c7 _public_636d8c7

PROC_DECLARE(0x636d6f0, internal_636d6f0, public_636d6f0);
extern "C" NAKED register_t __cdecl internal_636d6f0()
{
    __asm
    {
        sub esp, 0x9C
        push esi
/*FIXUP push offset _public_6261260 @0x636d6f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6273bc0
        lea ecx, ss:[esp+0x50]
        call public_63481b0
        lea ecx, ss:[esp+0x38]
        call public_636d020
        mov esi, dword ptr ss : [esp+0xA4]
        push esi
        lea ecx, ss:[esp+0x3C]
        call public_636d550
        fld dword ptr ss : [esp+0x48]
        fsqrt 
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fmul dword ptr ds : [public_63a5914]
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_636d866
        lea ecx, ss:[esp+0x50]
        call public_63481b0
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_628be10
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0xA8]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x88], ecx
        fstp dword ptr ds : [eax+8]
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x94], edx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        push 2
        push 1
        push 0
        push esi
        call public_636d580
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        push 0
        push 2
        push 1
        push esi
        call public_636d580
        add esp, 0x40
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        push 1
        push 0
        push 2
        push esi
        call public_636d580
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x28]
        add esp, 0x20
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld st(0)
        fadd st, st(2)
        fsqrt 
        fstp dword ptr ds : [eax]
        pop esi
        fadd st, st(2)
        fsqrt 
        fstp dword ptr ds : [eax+4]
        faddp 
        fsqrt 
        fstp dword ptr ds : [eax+8]
        mov eax, 1
        add esp, 0x9C
        ret 
        public_636d866 : nop
        mov edx, dword ptr ds : [esi+8]
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call public_635aa60
        mov edi, dword ptr ds : [esi+4]
        add esp, 0xC
        dec edi
        test edi, edi
        jle public_636d8c7
        public_636d887 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x94]
        push ecx
        mov ecx, dword ptr ds : [eax+edi*4]
        lea edx, ss:[esp+0x30]
        push edx
        push ecx
        call public_635aa60
        add esp, 0xC
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6348040
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0xC]
        call public_6348070
        dec edi
        test edi, edi
        jg public_636d887
        public_636d8c7 : nop
        push 0x3F000000
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0xB4]
        lea edx, ss:[esp+0x20]
        push edx
        call public_6347e00
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x1C]
        pop edi
        fsub dword ptr ss : [esp+8]
        pop esi
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+8]
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
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmulp 
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fstp dword ptr ds : [eax]
        fst dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        xor eax, eax
        add esp, 0x9C
        ret 
        UNREACHABLE_TRAP(0x636d6f0)
    }
}

#undef public_636d866
#undef public_636d887
#undef public_636d8c7
