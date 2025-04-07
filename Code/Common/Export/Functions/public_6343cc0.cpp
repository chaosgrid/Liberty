#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6343cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6345460);
CLANG_FORWARD_PROC_SYMBOL(public_63454b0);
CLANG_FORWARD_PROC_SYMBOL(public_63481b0);
CLANG_FORWARD_PROC_SYMBOL(public_63481d0);
CLANG_FORWARD_PROC_SYMBOL(public_63482c0);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);
CLANG_FORWARD_PROC_SYMBOL(public_6352220);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6343cff _public_6343cff
#define public_6343d22 _public_6343d22
#define public_6343d35 _public_6343d35
#define public_6343d3e _public_6343d3e
#define public_6343ef8 _public_6343ef8
#define public_6343f31 _public_6343f31
#define public_6343f56 _public_6343f56

PROC_DECLARE(0x6343cc0, internal_6343cc0, public_6343cc0);
extern "C" NAKED register_t __cdecl internal_6343cc0()
{
    __asm
    {
        sub esp, 0x158
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x6343cc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x6C]
        push eax
        call public_6273bc0
        mov esi, dword ptr ss : [esp+0x164]
        test esi, esi
        je public_6343d35
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_6343cff
        mov ecx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ecx+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_6343cff : nop
        mov edx, dword ptr ds : [esi+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_6343d22
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [eax+0x110]
        cmp edx, dword ptr ds : [ecx]
        jle public_6343d22
        call public_634d640
        public_6343d22 : nop
        mov esi, dword ptr ds : [esi+0x40]
        add esi, 0x1C
        mov ecx, 0x10
        lea edi, ss:[esp+0x60]
        rep movsd
        jmp public_6343d3e
        public_6343d35 : nop
        lea ecx, ss:[esp+0x60]
        call public_63481b0
/*FIXUP public_6343d3e : nop
        push offset _public_6261260 @0x6343d3e*/
  FIXUP public_6343d3e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6273bc0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x170]
        call public_6350bc0
        mov eax, dword ptr ss : [esp+0x170]
        fld dword ptr ds : [eax]
/*FIXUP push offset _public_6261260 @0x6343d6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+4]
        push 3
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [eax+8]
        push 0x10
        lea edx, ss:[esp+0xEC]
        fstp dword ptr ss : [esp+0x64]
        push edx
        call public_6273bc0
        lea eax, ss:[esp+0xE0]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x68]
        call public_63481d0
/*FIXUP push offset _public_6261260 @0x6343da9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea edx, ss:[esp+0xAC]
        push edx
        call public_6273bc0
        mov edi, dword ptr ss : [esp+0x168]
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+0x98]
        fsub dword ptr ds : [eax+0x68]
        push ecx
        lea edx, ds:[eax+0xE4]
        add eax, 0xD4
        fadd dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xC]
        fsub dword ptr ds : [eax-0x68]
        fmul dword ptr ds : [eax-0x64]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6350df0
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[esp+0xC]
        call public_6350bc0
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+0x98]
        fsub dword ptr ds : [eax+0x68]
        push ecx
        lea ecx, ds:[eax+0xC4]
        add eax, 0xB4
        fadd dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [eax-0x48]
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        lea ecx, ss:[esp+0xDC]
        call public_628be60
/*FIXUP push offset _public_6261260 @0x6343e64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea edx, ss:[esp+0x12C]
        push edx
        call public_6273bc0
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea ecx, ss:[esp+0xE8]
        call public_63482c0
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x120]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+8]
        fld dword ptr ds : [edi+0x5C]
        fadd dword ptr ds : [public_63a5404]
        lea esi, ds:[edi+0x44]
        push edi
        mov dword ptr ds : [esi+8], 0
        fst dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0xC], 0
        fstp dword ptr ds : [esi+0x10]
        call public_634d510
        add esp, 4
        mov ecx, edi
        call public_63454b0
        mov ecx, edi
        call public_6345460
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x18]
        mov edi, 0x64
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6343f31
        public_6343ef8 : nop
        mov edx, dword ptr ds : [esi+0x24]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x2E]
        shl ecx, 4
        mov ecx, dword ptr ds : [ecx+edx+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+4]
        mov eax, edi
        dec edi
        test eax, eax
        jl public_6343f31
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6343ef8
        public_6343f31 : nop
        fld dword ptr ds : [esi]
        fild dword ptr ds : [esi+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6343f56
        mov ecx, esi
        call public_6352220
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [public_63a5400]
        call public_6391dae
        mov dword ptr ds : [esi+0x1C], eax
        public_6343f56 : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x158
        ret 
        UNREACHABLE_TRAP(0x6343cc0)
    }
}

#undef public_6343cff
#undef public_6343d22
#undef public_6343d35
#undef public_6343d3e
#undef public_6343ef8
#undef public_6343f31
#undef public_6343f56
