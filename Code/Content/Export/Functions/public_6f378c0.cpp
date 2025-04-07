#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f378c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38620);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faed78);

#define public_6f378e4 _public_6f378e4
#define public_6f379a0 _public_6f379a0
#define public_6f379ab _public_6f379ab
#define public_6f379ad _public_6f379ad
#define public_6f379c9 _public_6f379c9
#define public_6f379e8 _public_6f379e8
#define public_6f379f3 _public_6f379f3
#define public_6f379f5 _public_6f379f5
#define public_6f37a20 _public_6f37a20
#define public_6f37a2b _public_6f37a2b
#define public_6f37a2d _public_6f37a2d
#define public_6f37a3d _public_6f37a3d
#define public_6f37a4c _public_6f37a4c
#define public_6f37a55 _public_6f37a55
#define public_6f37a7c _public_6f37a7c
#define public_6f37a82 _public_6f37a82

PROC_DECLARE(0x6f378c0, internal_6f378c0, public_6f378c0);
extern "C" NAKED register_t __cdecl internal_6f378c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faed78 @0x6f378c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faed78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        xor bl, bl
        xor ebp, ebp
        mov esi, ecx
        xor edi, edi
        public_6f378e4 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], edi
        je public_6f37a82
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_6f37a82
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[edi+edi*2]
        fld dword ptr ds : [eax+ecx*4+8]
        lea eax, ds:[eax+ecx*4]
        mov ecx, dword ptr ss : [esp+0x5C]
        fsub dword ptr ds : [ecx+8]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fcomp dword ptr ds : [public_6fb95d4]
        fnstsw ax
        test ah, 5
        jp public_6f37a7c
        mov edx, dword ptr ss : [esp+0x58]
        mov al, byte ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x34], edx
        mov byte ptr ss : [esp+0x38], al
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x50], ebp
        je public_6f379ab
        lea esp, ss:[esp]
        public_6f379a0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f379ad
        add eax, 0x14
        cmp eax, ecx
        jne public_6f379a0
        public_6f379ab : nop
        mov eax, ecx
        public_6f379ad : nop
        cmp eax, ecx
        je public_6f379c9
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        call public_6f937c0
        jmp public_6f37a55
        public_6f379c9 : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebp
        lea ecx, ss:[esp+0x44]
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f379f3
        mov edx, dword ptr ss : [esp+0x34]
        public_6f379e8 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f379f5
        add eax, 0x14
        cmp eax, ecx
        jne public_6f379e8
        public_6f379f3 : nop
        mov eax, ecx
        public_6f379f5 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f37a3d
        lea edx, ss:[esp+0x34]
        push edx
        push ecx
        mov ecx, esi
        call public_6f38620
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x13], 1
        je public_6f37a2b
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[ecx]
        public_6f37a20 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f37a2d
        add eax, 0x14
        cmp eax, ecx
        jne public_6f37a20
        public_6f37a2b : nop
        mov eax, ecx
        public_6f37a2d : nop
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        jmp public_6f37a4c
        public_6f37a3d : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x17], 0
        push eax
        public_6f37a4c : nop
        lea ecx, ss:[esp+0x28]
        call public_6fa6e80
        public_6f37a55 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov bl, 1
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_6fa8fe0
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        public_6f37a7c : nop
        inc edi
        jmp public_6f378e4
        public_6f37a82 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6f378c0)
    }
}

#undef public_6f378e4
#undef public_6f379a0
#undef public_6f379ab
#undef public_6f379ad
#undef public_6f379c9
#undef public_6f379e8
#undef public_6f379f3
#undef public_6f379f5
#undef public_6f37a20
#undef public_6f37a2b
#undef public_6f37a2d
#undef public_6f37a3d
#undef public_6f37a4c
#undef public_6f37a55
#undef public_6f37a7c
#undef public_6f37a82
