#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_498bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4992b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bca5b);

#define public_499319 _public_499319
#define public_49931b _public_49931b
#define public_4993bc _public_4993bc
#define public_4994b0 _public_4994b0
#define public_4994e0 _public_4994e0
#define public_499510 _public_499510
#define public_499588 _public_499588
#define public_4995a6 _public_4995a6
#define public_4995d7 _public_4995d7
#define public_499685 _public_499685
#define public_4996a8 _public_4996a8
#define public_4996f5 _public_4996f5
#define public_499715 _public_499715
#define public_499731 _public_499731
#define public_499777 _public_499777
#define public_4997b1 _public_4997b1

PROC_DECLARE(0x4992b0, internal_4992b0, public_4992b0);
extern "C" NAKED register_t __cdecl internal_4992b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bca5b @0x4992b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bca5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_42d680
        fadd dword ptr ss : [ebp+0xC78]
        xor ebx, ebx
        fcom dword ptr ds : [public_5d3d30]
        fst dword ptr ss : [ebp+0xC78]
        fnstsw ax
        test ah, 0x41
        jne public_499319
        mov ecx, dword ptr ss : [ebp+0xC74]
        fsub dword ptr ds : [public_5d3d30]
        inc ecx
        mov eax, ecx
        cmp eax, 0x10
        fstp dword ptr ss : [ebp+0xC78]
        mov dword ptr ss : [ebp+0xC74], ecx
        jl public_49931b
        mov dword ptr ss : [ebp+0xC74], ebx
        jmp public_49931b
        public_499319 : nop
        fstp st(0)
        public_49931b : nop
        mov ecx, ebp
        call public_498bd0
        mov byte ptr ss : [esp+0x13], al
        cmp dword ptr ss : [ebp+0xD48], ebx
        je public_4997b1
        lea eax, ss:[ebp+0x3D4]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0xAC]
        rep movsd
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xD0], ecx
        mov dword ptr ss : [esp+0x28], 0xBF0CCCCC
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xD8], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0xD4], edx
        rep movsd
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        jne public_4993bc
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_4993bc : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, 9
        lea esi, ss:[esp+0x10C]
        lea edi, ss:[esp+0xDC]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x100], edx
        lea edx, ss:[esp+0xDC]
        push edx
        push ebx
        mov dword ptr ss : [esp+0x10C], eax
        mov dword ptr ss : [esp+0x110], ecx
        call public_422690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0xC74]
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+edx*4+0xBD4]
        add esp, 0x24
        push ebx
        call public_425640
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        call dword ptr ds : [esi+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0xB
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d2e5c
        mov eax, 1
        lea esp, ss:[esp]
        public_4994b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_4994b0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e94
        mov eax, 1
        lea ebx, ds:[ebx]
        public_4994e0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_4994e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e34
        mov eax, 0x8D
        nop 
        lea esp, ss:[esp]
        public_499510 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_499510
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x89
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        cmp byte ptr ss : [esp+0x13], bl
        mov dword ptr ss : [esp+0x138], ebx
        jne public_499588
        mov edx, dword ptr ds : [public_6720c0]
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        je public_4996a8
        public_499588 : nop
        cmp dword ptr ds : [public_6720c0], ebx
        je public_4995a6
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720c0 @0x499597*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720c0
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [public_6720c0], ebx
        public_4995a6 : nop
        mov ecx, dword ptr ss : [ebp+0xD48]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push ebx
/*FIXUP push offset public_6720c0 @0x4995b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720c0
        push ecx
        push 0x142
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_4995d7
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        jmp public_499715
        public_4995d7 : nop
        xor eax, eax
        mov ecx, 0x1C
        lea edi, ss:[esp+0x3C]
        rep stosd
        mov eax, 0x18
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [ebp+0xD40]
        lea edx, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x40], eax
        add eax, 0x10
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ss : [ebp+0xD48]
        push eax
        push ebx
        mov dword ptr ss : [esp+0xB0], eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[ebp+0xD50]
        mov dword ptr ds : [ecx], ebx
        push ecx
        mov ecx, dword ptr ds : [public_6720c0]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [public_6720ac]
        push ecx
        mov dword ptr ss : [esp+0x50], 2
        mov dword ptr ss : [esp+0x58], 0xC
        mov dword ptr ss : [esp+0x80], 4
        mov dword ptr ss : [esp+0x94], 8
        mov dword ptr ss : [esp+0xB8], 0x142
        mov esi, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [esi+0x18]
        test eax, eax
        je public_499685
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        jmp public_499715
        public_499685 : nop
        mov ecx, dword ptr ds : [public_6720c0]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_4996a8
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        jmp public_499715
        public_4996a8 : nop
        mov ecx, dword ptr ss : [ebp+0xD4C]
        mov eax, dword ptr ds : [public_6720b0]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xD44]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        or esi, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x3C], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_4996f5
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x144], esi
        call dword ptr ds : [edx+0xF0]
        jmp public_4997b1
        public_4996f5 : nop
        mov ecx, dword ptr ss : [ebp+0xD50]
        mov eax, dword ptr ds : [public_6720b0]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        je public_499731
        mov dword ptr ss : [esp+0x138], esi
        public_499715 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        jmp public_4997b1
        public_499731 : nop
        mov ecx, dword ptr ss : [ebp+0xD4C]
        mov eax, dword ptr ds : [public_6720b4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xD48]
        push ecx
        push ebx
        push 4
        push eax
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d2e4c
        mov eax, 0x8D
        public_499777 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_499777
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x144], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        public_4997b1 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x12C
        ret 
        UNREACHABLE_TRAP(0x4992b0)
    }
}

#undef public_499319
#undef public_49931b
#undef public_4993bc
#undef public_4994b0
#undef public_4994e0
#undef public_499510
#undef public_499588
#undef public_4995a6
#undef public_4995d7
#undef public_499685
#undef public_4996a8
#undef public_4996f5
#undef public_499715
#undef public_499731
#undef public_499777
#undef public_4997b1
