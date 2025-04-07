#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_628d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6349a60);
CLANG_FORWARD_PROC_SYMBOL(public_634a990);
CLANG_FORWARD_PROC_SYMBOL(public_634d210);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_634d470);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63934e1);

#define public_628d2f4 _public_628d2f4
#define public_628d3b1 _public_628d3b1
#define public_628d3e8 _public_628d3e8
#define public_628d3ee _public_628d3ee
#define public_628d3f5 _public_628d3f5
#define public_628d40b _public_628d40b

PROC_DECLARE(0x628d1a0, internal_628d1a0, public_628d1a0);
extern "C" NAKED register_t __cdecl internal_628d1a0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_63934e1 @0x628d1a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63934e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x20CC
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ss : [esp+0x20E0]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20E4]
        push esi
        push edi
        push ebp
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x18]
        xor edi, edi
        push ecx
        mov dword ptr ss : [esp+0x38], edi
        call public_6288800
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], edx
        fmul dword ptr ss : [esp+0x24]
        mov eax, edx
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [esp+0x34]
        faddp 
        add esp, 0xC
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x60], eax
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x78], edi
        faddp 
        fsqrt 
        fld dword ptr ds : [public_639a1d0]
        fdiv st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x58], ecx
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x5C], edx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x68], edx
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x70], ecx
        push edx
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x70], eax
        call public_6349a60
        mov dword ptr ss : [esp+0x20E4], edi
        push 8
        lea ecx, ss:[esp+0xCC]
        call public_634d210
        mov dword ptr ss : [esp+0x7C], offset public_639c2c4
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x20E8], 1
        call public_634a990
        mov ecx, dword ptr ss : [esp+0x20F4]
        lea ebx, ds:[ecx+0x1C]
        public_628d2f4 : nop
        mov edx, dword ptr ss : [esp+0xCC]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        je public_628d40b
        mov esi, dword ptr ds : [eax+0xC]
        test esi, esi
        je public_628d40b
        cmp edi, dword ptr ss : [esp+0x20F8]
        jge public_628d40b
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [eax+0xA4]
        test edi, edi
        je public_628d3f5
        mov dword ptr ds : [ebx-0x1C], edi
        fld dword ptr ds : [esi+0x1C]
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul st, st(1)
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x40]
        push ebp
        push edx
        call public_62887d0
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        lea eax, ds:[ebx-0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_63fc0b8]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x38]
        jne public_628d3b1
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628d3b1 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        add edi, 8
        push edi
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx-0xC], edx
        mov dword ptr ds : [ebx-8], eax
        mov dword ptr ds : [ebx-4], ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_628d3e8
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx], edx
        jmp public_628d3ee
        public_628d3e8 : nop
        mov dword ptr ds : [ebx], 0
        public_628d3ee : nop
        inc dword ptr ss : [esp+0x2C]
        add ebx, 0x20
        public_628d3f5 : nop
        push esi
        lea ecx, ss:[esp+0xCC]
        call public_634d470
        mov edi, dword ptr ss : [esp+0x2C]
        jmp public_628d2f4
        public_628d40b : nop
        mov dword ptr ss : [esp+0x7C], offset public_639c2c4
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x20E4], 2
        call public_634d260
        mov ecx, dword ptr ss : [esp+0x20DC]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20D8
        ret 0x10
        UNREACHABLE_TRAP(0x628d1a0)
    }
}

#undef public_628d2f4
#undef public_628d3b1
#undef public_628d3e8
#undef public_628d3ee
#undef public_628d3f5
#undef public_628d40b
