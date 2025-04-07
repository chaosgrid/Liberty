#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_402f40);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4045d0);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_404720);
CLANG_FORWARD_PROC_SYMBOL(public_404ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8438);

#define public_404825 _public_404825
#define public_404850 _public_404850
#define public_404890 _public_404890
#define public_4048c0 _public_4048c0
#define public_404987 _public_404987
#define public_404a2a _public_404a2a
#define public_404b97 _public_404b97
#define public_404bb0 _public_404bb0

PROC_DECLARE(0x404720, internal_404720, public_404720);
extern "C" NAKED register_t __cdecl internal_404720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8438 @0x404722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8438
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push esi
        push edi
        push 0x1701
        call public_401e90
        add esp, 4
        call public_422a70
        call public_4225e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        push 0x88
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], 0x88
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push 0x8B
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], 0x8B
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x84], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x84], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov byte ptr ss : [esp+0x78], 2
        mov esi, offset public_5c7520
        mov eax, 0x89
        public_404825 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_404825
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5c7540
        mov eax, 0x8D
        mov edi, edi
        public_404850 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_404850
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c7568
        mov eax, 1
        public_404890 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_404890
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5c75a0
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_4048c0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_4048c0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0xD
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0xE
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov al, byte ptr ds : [public_6101ec]
        test al, al
        je public_404987
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        public_404987 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x84], 3
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
/*FIXUP push offset public_5c7600 @0x4049fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7600
        mov byte ptr ss : [esp+0x7C], 4
        call dword ptr ds : [public_5c6d14]
        mov ecx, dword ptr ds : [public_616474]
        add esp, 4
        cmp ecx, eax
        je public_404a2a
        mov dword ptr ds : [public_616474], eax
        mov dword ptr ds : [public_616498], 0
        public_404a2a : nop
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x68], edx
        call public_402f40
        push 0
        push 2
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, eax
        call public_4045d0
        mov edx, dword ptr ss : [esp+0x88]
        mov esi, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx+8]
        sub esp, 8
        mov dword ptr ss : [esp+0x5C], eax
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [public_610850]
        fstp dword ptr ss : [esp+4]
        dec edx
        mov dword ptr ss : [esp+0x88], edx
        fild dword ptr ss : [esp+0x88]
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x60], ecx
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ss : [esp]
        push 0
        push eax
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_404b97
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [public_610854]
        fsub dword ptr ss : [esp+0x50]
        sub esp, 8
        dec ecx
        mov dword ptr ss : [esp+0x88], ecx
        fstp dword ptr ss : [esp+4]
        lea edx, ss:[esp+0x74]
        fild dword ptr ss : [esp+0x88]
        lea eax, ss:[esp+0x6C]
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp]
        push 0
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_404b97
        push 1
        lea ecx, ds:[esi+8]
        call public_404ce0
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+0x28], ecx
        mov edx, dword ptr ds : [public_61648c]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ecx
        call public_403ea0
        add esp, 8
        public_404b97 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c7558
        mov eax, 0x8D
        lea esp, ss:[esp]
        public_404bb0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_404bb0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xD
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        call public_422ab0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov byte ptr ss : [esp+0x84], 3
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov byte ptr ss : [esp+0x84], 2
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        mov byte ptr ss : [esp+0x84], 1
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        mov byte ptr ss : [esp+0x84], 0
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        pop edi
        mov ecx, dword ptr ss : [esp+0x6C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x404720)
    }
}

#undef public_404825
#undef public_404850
#undef public_404890
#undef public_4048c0
#undef public_404987
#undef public_404a2a
#undef public_404b97
#undef public_404bb0
