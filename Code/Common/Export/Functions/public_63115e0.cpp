#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6269e70);
CLANG_FORWARD_PROC_SYMBOL(public_626c190);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6309b20);
CLANG_FORWARD_PROC_SYMBOL(public_6309b60);
CLANG_FORWARD_PROC_SYMBOL(public_630a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_630a970);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_63115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6311b70);
CLANG_FORWARD_PROC_SYMBOL(public_6311c30);
CLANG_FORWARD_PROC_SYMBOL(public_6311db0);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6334560);
CLANG_FORWARD_PROC_SYMBOL(public_6334580);
CLANG_FORWARD_PROC_SYMBOL(public_6334590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639641f);

#define public_6311652 _public_6311652
#define public_6311681 _public_6311681
#define public_631178f _public_631178f
#define public_63117ec _public_63117ec
#define public_631183e _public_631183e
#define public_631186a _public_631186a
#define public_631187b _public_631187b
#define public_631188f _public_631188f
#define public_63118a5 _public_63118a5
#define public_63118c6 _public_63118c6
#define public_631193e _public_631193e
#define public_631194f _public_631194f
#define public_6311964 _public_6311964
#define public_6311989 _public_6311989
#define public_63119fc _public_63119fc
#define public_6311a0d _public_6311a0d
#define public_6311a22 _public_6311a22
#define public_6311a41 _public_6311a41
#define public_6311a66 _public_6311a66
#define public_6311a6f _public_6311a6f

PROC_DECLARE(0x63115e0, internal_63115e0, public_63115e0);
extern "C" NAKED register_t __cdecl internal_63115e0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_639641f @0x63115e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639641f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15F0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_63fd2b8]
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x18], eax
        call public_630f660
        mov esi, dword ptr ss : [esp+0x1610]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1610], ebx
        call public_630f9b0
        test al, al
        je public_63118a5
        lea ecx, ss:[esp+0x98]
        call public_6310070
        test al, al
        je public_63118c6
/*FIXUP public_6311652 : nop
        push offset public_63a3798 @0x6311652*/
  FIXUP public_6311652 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3798
        lea ecx, ss:[esp+0x9C]
        call public_63103c0
        test al, al
        je public_631188f
        lea ecx, ss:[esp+0x98]
        xor esi, esi
        call public_6310170
        test al, al
        je public_631188f
/*FIXUP public_6311681 : nop
        push offset public_63994e8 @0x6311681*/
  FIXUP public_6311681 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        test al, al
        je public_631178f
        cmp esi, ebx
        jne public_631187b
        lea ecx, ss:[esp+0x98]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea ecx, ss:[esp+0x24]
        mov edi, eax
        call public_6333e40
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6315b10
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1608], 1
        call public_6334580
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x160C], 2
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edx
        call public_6263cf0
        mov cx, word ptr ss : [esp+0x38]
        mov word ptr ss : [esp+0x54], cx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_63fd2a8
        mov byte ptr ss : [esp+0x1610], 3
        call public_6311db0
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x1608], 2
        call public_6269110
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1608], bl
        call public_6269110
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp byte ptr ss : [esp+0x20], bl
        lea esi, ds:[ecx+0x10]
        mov dword ptr ds : [esi], edi
        jne public_631187b
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        lea edi, ds:[esi+4]
        push ecx
        push eax
        push eax
        call public_626c190
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebp
        mov ecx, edi
        call public_628f050
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [edi+8], ebp
        call public_6334590
        jmp public_631187b
/*FIXUP public_631178f : nop
        push offset public_63a3790 @0x631178f*/
  FIXUP public_631178f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3790
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        test al, al
        je public_63117ec
        lea ecx, ss:[esp+0x78]
        call public_6309ae0
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        lea ecx, ds:[esi+4]
        push 1
        push edx
        call public_6269e70
        mov eax, dword ptr ds : [esi+0xC]
        add eax, 0xFFFFFFE0
        push eax
        lea edx, ss:[esp+0x9C]
        push edx
        call public_6311b70
        mov edi, dword ptr ds : [esi+0xC]
        add esp, 8
        lea ecx, ds:[esi+0x14]
        call public_6334560
        lea ecx, ds:[edi-0x20]
        push eax
        call public_6309b20
        jmp public_631187b
/*FIXUP public_63117ec : nop
        push offset public_63a3788 @0x63117ec*/
  FIXUP public_63117ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3788
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        test al, al
        je public_631186a
        lea ecx, ss:[esp+0x58]
        call public_6309ae0
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        call public_6311c30
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        call public_630a970
        add esp, 0xC
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x14], al
        call public_6309b60
        test al, al
        jne public_631183e
        mov byte ptr ss : [esp+0x14], bl
        public_631183e : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ds:[esi+4]
        call public_630a0b0
        cmp eax, ebx
        jne public_631187b
        mov edi, dword ptr ds : [esi+0xC]
        lea ecx, ds:[esi+0x14]
        call public_6334560
        lea ecx, ds:[edi-0x20]
        push eax
        call public_6309b20
        jmp public_631187b
/*FIXUP public_631186a : nop
        push offset public_639ec94 @0x631186a*/
  FIXUP public_631186a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec94
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        public_631187b : nop
        lea ecx, ss:[esp+0x98]
        call public_6310170
        test al, al
        jne public_6311681
        public_631188f : nop
        lea ecx, ss:[esp+0x98]
        call public_6310070
        test al, al
        jne public_6311652
        jmp public_63118c6
        public_63118a5 : nop
        mov edx, dword ptr ds : [public_6399028]
        push esi
        push 0xB3
/*FIXUP push offset public_63a3760 @0x63118b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3760
        mov eax, 0x100001
/*FIXUP push offset public_63a372c @0x63118bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a372c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_63118c6 : nop
        mov esi, dword ptr ds : [public_63fd2b8]
        sub esi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x14C0]
        mov dword ptr ss : [esp+0x1608], 4
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x14C8]
        mov byte ptr ss : [esp+0x1610], 5
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x14D0], 0xFFFFFFFF
        mov edi, dword ptr ds : [public_639913c]
        je public_6311964
        cmp dword ptr ss : [esp+0x14D4], ebx
        je public_631194f
        mov eax, dword ptr ss : [esp+0x14D8]
        cmp eax, ebx
        je public_631193e
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x14D8], ebx
        mov dword ptr ss : [esp+0x14DC], ebx
        public_631193e : nop
        mov eax, dword ptr ss : [esp+0x14D4]
        push eax
        call edi
        mov dword ptr ss : [esp+0x14D4], ebx
        public_631194f : nop
        mov ecx, dword ptr ss : [esp+0x14D0]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x14D0], 0xFFFFFFFF
        public_6311964 : nop
        mov eax, dword ptr ss : [esp+0x14D8]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_639932c]
        je public_6311989
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x14D8], ebx
        mov dword ptr ss : [esp+0x14DC], ebx
        public_6311989 : nop
        push 1
        lea ecx, ss:[esp+0x14C4]
        mov dword ptr ss : [esp+0x14E4], ebx
        mov byte ptr ss : [esp+0x160C], 4
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1610], 6
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        je public_6311a22
        cmp dword ptr ss : [esp+0xAC], ebx
        je public_6311a0d
        mov eax, dword ptr ss : [esp+0xB0]
        cmp eax, ebx
        je public_63119fc
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        public_63119fc : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        push ecx
        call edi
        mov dword ptr ss : [esp+0xAC], ebx
        public_6311a0d : nop
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        call edi
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        public_6311a22 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        cmp eax, ebx
        je public_6311a41
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        public_6311a41 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xB8], ebx
        je public_6311a6f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6311a66
        cmp cl, 0xFF
        je public_6311a66
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6311a6f
        public_6311a66 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6311a6f : nop
        mov ecx, dword ptr ss : [esp+0x1600]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15FC
        ret 
        UNREACHABLE_TRAP(0x63115e0)
    }
}

#undef public_6311652
#undef public_6311681
#undef public_631178f
#undef public_63117ec
#undef public_631183e
#undef public_631186a
#undef public_631187b
#undef public_631188f
#undef public_63118a5
#undef public_63118c6
#undef public_631193e
#undef public_631194f
#undef public_6311964
#undef public_6311989
#undef public_63119fc
#undef public_6311a0d
#undef public_6311a22
#undef public_6311a41
#undef public_6311a66
#undef public_6311a6f
