#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_473f70);
CLANG_FORWARD_PROC_SYMBOL(public_572100);
CLANG_FORWARD_PROC_SYMBOL(public_5a8770);
CLANG_FORWARD_PROC_SYMBOL(public_5a9c30);
CLANG_FORWARD_PROC_SYMBOL(public_5ab4c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c35c9);

#define public_572184 _public_572184
#define public_572200 _public_572200
#define public_572259 _public_572259
#define public_572265 _public_572265
#define public_572279 _public_572279
#define public_5722d5 _public_5722d5
#define public_5722f5 _public_5722f5
#define public_57231a _public_57231a

PROC_DECLARE(0x572100, internal_572100, public_572100);
extern "C" NAKED register_t __cdecl internal_572100()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c35c9 @0x572108*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c35c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        mov ecx, offset public_67e7b8
        call public_5a9c30
        test al, al
        je public_5722f5
        mov al, byte ptr ss : [esp+0x24]
        push esi
        push 0
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0xC], al
        call dword ptr ds : [public_5c6fb8]
/*FIXUP push offset public_5c8ce0 @0x572145*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_572184
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
/*FIXUP push offset public_5c8ce0 @0x57216b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push ecx
        call public_41d8a0
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c7054]
        public_572184 : nop
        mov al, byte ptr ds : [edi+0x94]
        test al, al
        mov dword ptr ss : [esp+0x20], 0
        pop esi
        je public_572200
        push 0xD48
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x60071
        call public_473f70
        add esp, 0x10
        test al, al
        jne public_572200
/*FIXUP push offset public_5e2eb4 @0x5721b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2eb4
        push 0x14B4
/*FIXUP push offset public_5e2724 @0x5721be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x5721c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        push 1
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        xor al, al
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_572200 : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_67e8e8
        call dword ptr ds : [public_5c7060]
/*FIXUP push offset public_679d04 @0x57221b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679d04
        call public_5a8770
        add esp, 4
        test al, al
        je public_572279
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_572265
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_572259
        cmp cl, 0xFF
        je public_572259
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov al, 1
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_572259 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_572265 : nop
        mov al, 1
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_572279 : nop
        mov ecx, offset public_67e7b8
        call public_5ab4c0
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e2e90 @0x572289*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e90
        push 0x14C5
/*FIXUP push offset public_5e2724 @0x572293*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x57229d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x14
        test eax, eax
        je public_57231a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5722d5
        cmp cl, 0xFF
        je public_5722d5
        dec cl
        mov byte ptr ds : [eax-1], cl
        xor al, al
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_5722d5 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        xor al, al
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_5722f5 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e2e68 @0x5722fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e68
        push 0x14CB
/*FIXUP push offset public_5e2724 @0x572305*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x57230f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_57231a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor al, al
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x572100)
    }
}

#undef public_572184
#undef public_572200
#undef public_572259
#undef public_572265
#undef public_572279
#undef public_5722d5
#undef public_5722f5
#undef public_57231a
