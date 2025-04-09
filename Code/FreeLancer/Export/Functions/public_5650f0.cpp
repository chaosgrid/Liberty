#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404720);
CLANG_FORWARD_PROC_SYMBOL(public_5650f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1f1c);

#define public_565132 _public_565132
#define public_565199 _public_565199
#define public_5651b5 _public_5651b5
#define public_5651dc _public_5651dc
#define public_565229 _public_565229
#define public_565284 _public_565284
#define public_5652a2 _public_5652a2
#define public_5652b1 _public_5652b1
#define public_5652c0 _public_5652c0
#define public_5652c5 _public_5652c5
#define public_5652e0 _public_5652e0
#define public_5652e5 _public_5652e5
#define public_5652f8 _public_5652f8
#define public_5652fe _public_5652fe
#define public_565307 _public_565307
#define public_5653a0 _public_5653a0
#define public_5653bc _public_5653bc
#define public_5653e2 _public_5653e2
#define public_5653ea _public_5653ea
#define public_565405 _public_565405
#define public_56540e _public_56540e

PROC_DECLARE(0x5650f0, internal_5650f0, public_5650f0);
extern "C" NAKED register_t __cdecl internal_5650f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1f1c @0x5650f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1f1c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA0
        mov eax, dword ptr ds : [ecx+0x14]
        add ecx, 0x14
        test eax, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_565132
        mov al, 1
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr fs : [0], ecx
        add esp, 0xAC
        ret 4
        public_565132 : nop
        mov al, byte ptr ss : [esp+0x17]
        push ebx
        push esi
        push edi
        push 0
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_679e0c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_679e0c @0x565159*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679e0c
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c7088]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xB4], 0
        call dword ptr ds : [public_5c6fe4]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6fe4]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_565199
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, ecx
        public_565199 : nop
        cmp eax, esi
        je public_5651dc
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6fe4]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_5651b5
        mov edx, dword ptr ss : [esp+0x18]
        add eax, edx
        public_5651b5 : nop
        cmp byte ptr ds : [eax-1], 0x5C
        je public_5651dc
        xor eax, eax
        mov edi, offset public_5e2794
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5e2794 @0x5651cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2794
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6fe8]
        public_5651dc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_67c18c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_67c18c @0x5651ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c18c
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6fe8]
        mov edx, dword ptr ss : [esp+0xBC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6fe8]
        mov eax, dword ptr ss : [esp+0x14]
        xor bl, bl
        test eax, eax
        jne public_565229
        mov eax, dword ptr ds : [public_5c7078]
        public_565229 : nop
        push 0x2010
        push 0
        push 0
        push 0
        push eax
        push 0
        call dword ptr ds : [public_5c726c]
        mov esi, eax
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        je public_5653ea
        xor eax, eax
        push ebp
        mov ecx, 0x15
        lea edi, ss:[esp+0x5C]
        rep stosd
        lea eax, ss:[esp+0x5C]
        push eax
        push 0x54
        push esi
        call dword ptr ds : [public_5c6e48]
        cmp eax, 0x54
        jne public_5653e2
        mov eax, dword ptr ss : [esp+0x84]
        test eax, eax
        je public_565284
        cmp eax, 3
        jne public_5653e2
        public_565284 : nop
        mov bp, word ptr ss : [esp+0x82]
        cmp bp, 0x10
        je public_5652a2
        cmp bp, 0x18
        je public_5652a2
        cmp bp, 0x20
        jne public_5653e2
        public_5652a2 : nop
        test eax, eax
        jne public_5652b1
        mov eax, 8
        mov ecx, eax
        mov edi, eax
        jmp public_565307
        public_5652b1 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        xor ecx, ecx
        mov edx, 0x20
        nop 
        public_5652c0 : nop
        test al, 1
        je public_5652c5
        inc ecx
        public_5652c5 : nop
        shr eax, 1
        dec edx
        jne public_5652c0
        mov eax, dword ptr ss : [esp+0xA0]
        mov edi, ecx
        xor ecx, ecx
        mov edx, 0x20
        lea ebx, ds:[ebx]
        public_5652e0 : nop
        test al, 1
        je public_5652e5
        inc ecx
        public_5652e5 : nop
        shr eax, 1
        dec edx
        jne public_5652e0
        mov edx, dword ptr ss : [esp+0xA4]
        xor eax, eax
        mov esi, 0x20
        public_5652f8 : nop
        test dl, 1
        je public_5652fe
        inc eax
        public_5652fe : nop
        shr edx, 1
        dec esi
        jne public_5652f8
        mov esi, dword ptr ss : [esp+0x10]
        public_565307 : nop
        push 0
        push eax
        push ecx
        xor ecx, ecx
        mov cx, bp
        push edi
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_5b7050
        push 0
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[esp+0x24]
        call public_5b7050
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [esp+0x60]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x34], offset public_5e2788
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x30], 0x2C
        mov dword ptr ss : [esp+0x58], offset _public_404720
        je public_5653a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_5653a0 : nop
        mov edx, dword ptr ds : [public_5c6d64]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_5653bc
        mov bl, 1
        jmp public_5653e2
/*FIXUP public_5653bc : nop
        push offset public_5e2754 @0x5653bc*/
  FIXUP public_5653bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2754
        push 0x1AB
/*FIXUP push offset public_5e2724 @0x5653c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x5653d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor bl, bl
        public_5653e2 : nop
        push esi
        call dword ptr ds : [public_5c6e3c]
        pop ebp
        public_5653ea : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_56540e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_565405
        cmp cl, 0xFF
        je public_565405
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_56540e
        public_565405 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_56540e : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xAC
        ret 4
        UNREACHABLE_TRAP(0x5650f0)
    }
}

#undef public_565132
#undef public_565199
#undef public_5651b5
#undef public_5651dc
#undef public_565229
#undef public_565284
#undef public_5652a2
#undef public_5652b1
#undef public_5652c0
#undef public_5652c5
#undef public_5652e0
#undef public_5652e5
#undef public_5652f8
#undef public_5652fe
#undef public_565307
#undef public_5653a0
#undef public_5653bc
#undef public_5653e2
#undef public_5653ea
#undef public_565405
#undef public_56540e
