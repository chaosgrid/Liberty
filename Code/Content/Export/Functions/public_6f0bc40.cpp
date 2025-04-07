#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad2f8);

#define public_6f0bc8d _public_6f0bc8d
#define public_6f0bdcc _public_6f0bdcc
#define public_6f0bdf3 _public_6f0bdf3
#define public_6f0be43 _public_6f0be43

PROC_DECLARE(0x6f0bc40, internal_6f0bc40, public_6f0bc40);
extern "C" NAKED register_t __cdecl internal_6f0bc40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        fld dword ptr ds : [public_6fb8120]
        push 0xFFFFFFFF
/*FIXUP push public_6fad2f8 @0x6f0bc4e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad2f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], esp
        fstp dword ptr ds : [eax]
        sub esp, 0x44
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, 1
        je public_6f0bc8d
        cmp eax, 2
        je public_6f0bc8d
        cmp eax, 3
        je public_6f0bc8d
        xor al, al
        pop esi
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0x10
        public_6f0bc8d : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi+0x18], 3
        mov dword ptr ds : [ecx], 3
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6eb70f0
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcom dword ptr ds : [public_6fd0648]
        fnstsw ax
        test ah, 0x41
        jne public_6f0bdcc
        fsqrt 
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x3C]
        push eax
        fdivr dword ptr ds : [public_6fb5810]
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
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb8100]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fb8100]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [public_6fb8100]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        call public_6eb70f0
        fld dword ptr ss : [esp+0x58]
        sub esp, 0xC
        fadd dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov esi, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_6f0bdf3
        public_6f0bdcc : nop
        mov eax, dword ptr ds : [esi+8]
        fstp st(0)
        mov esi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax+0x18]
        lea ecx, ds:[esi+esi*2]
        mov esi, dword ptr ss : [esp+0x5C]
        lea edx, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [edx]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6f0bdf3 : nop
        mov dword ptr ss : [esp+0x64], 0
        lea eax, ss:[esp+0x64]
        push eax
        push 5
        mov dword ptr ss : [esp+0x58], 0
        call public_6f24870
        mov ecx, dword ptr ds : [public_6fb8120]
        add esp, 8
        push 0
        push 0
        push 0
        push 0xBF800000
        push ecx
        mov ecx, dword ptr ss : [esp+0x78]
        push esi
        call public_6f26460
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_6f0be43
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f0be43 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0x10
        UNREACHABLE_TRAP(0x6f0bc40)
    }
}

#undef public_6f0bc8d
#undef public_6f0bdcc
#undef public_6f0bdf3
#undef public_6f0be43
