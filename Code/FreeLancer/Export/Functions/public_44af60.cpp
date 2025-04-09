#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_44ae80);
CLANG_FORWARD_PROC_SYMBOL(public_44af60);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9c08);

#define public_44b00b _public_44b00b
#define public_44b038 _public_44b038
#define public_44b0a1 _public_44b0a1
#define public_44b0b4 _public_44b0b4
#define public_44b0f3 _public_44b0f3
#define public_44b106 _public_44b106
#define public_44b1e2 _public_44b1e2
#define public_44b1f3 _public_44b1f3
#define public_44b1f7 _public_44b1f7
#define public_44b21e _public_44b21e
#define public_44b231 _public_44b231
#define public_44b277 _public_44b277
#define public_44b28f _public_44b28f
#define public_44b2cd _public_44b2cd
#define public_44b2e5 _public_44b2e5
#define public_44b306 _public_44b306
#define public_44b337 _public_44b337
#define public_44b34e _public_44b34e

PROC_DECLARE(0x44af60, internal_44af60, public_44af60);
extern "C" NAKED register_t __cdecl internal_44af60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9c08 @0x44af62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9c08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], ebx
        je public_44b34e
        push ebp
        push esi
        mov ecx, edi
        call public_44ae80
/*FIXUP push offset public_5cbf60 @0x44afa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf60
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_44b0b4
        mov ecx, dword ptr ds : [edi+0x40]
        mov al, byte ptr ds : [ecx+0x10C]
        test al, al
        je public_44b0b4
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov cl, byte ptr ds : [eax+0x10D]
        test cl, cl
        je public_44b00b
        add eax, 0x11C
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        jmp public_44b038
        public_44b00b : nop
        add eax, 0x110
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call public_41a390
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        public_44b038 : nop
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        add eax, 0x128
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+8]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x58], ebp
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], ebp
        call public_526a20
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cad80 @0x44b081*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_44b0a1
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_44b0a1 : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_526a20
        jmp public_44b106
        public_44b0b4 : nop
        mov dword ptr ss : [esp+0x58], 0
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 1
        call public_526a20
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cad80 @0x44b0db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_44b0f3
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_44b0f3 : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_526a20
        xor ebp, ebp
        public_44b106 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebp
        jne public_44b231
        mov al, byte ptr ds : [esi+0x13]
        test al, al
        mov dword ptr ss : [esp+0x14], ebp
        je public_44b1f7
        push ebp
        call public_5b3510
        fcomp dword ptr ds : [public_5c7474]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_44b1f7
        mov dword ptr ss : [esp+0x58], ebp
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 2
        call public_526a20
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cad80 @0x44b15e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_44b21e
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        lea ecx, ss:[esp+0x58]
        setge bl
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_526a20
        test bl, bl
        je public_44b1f3
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov esi, eax
        mov dword ptr ss : [esp+0x58], ebp
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 3
        call public_526a20
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_5cad80 @0x44b1c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_44b1e2
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cbfa0 @0x44b1d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbfa0
        push esi
        push eax
        call dword ptr ds : [edx+0xC]
        public_44b1e2 : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_526a20
        public_44b1f3 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_44b1f7 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x500]
        push ebp
        push 8
        push 0x3F800000
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_44b306
        public_44b21e : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_526a20
        jmp public_44b1f7
        public_44b231 : nop
        cmp eax, 1
        jne public_44b28f
        mov dword ptr ss : [esp+0x58], ebp
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x50], 4
        call public_526a20
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cad80 @0x44b259*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_44b277
        mov edx, dword ptr ds : [edi+0x500]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        public_44b277 : nop
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_44b306
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_44b306
        public_44b28f : nop
        cmp eax, 2
        jne public_44b2e5
        mov dword ptr ss : [esp+0x58], ebp
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cad80 @0x44b2a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x5C], 5
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_44b2cd
        mov edx, dword ptr ds : [edi+0x500]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_44b2cd : nop
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_44b306
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_44b306
        public_44b2e5 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x6D1
/*FIXUP push offset public_5cbf24 @0x44b2f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf24
        mov ecx, 0x100002
/*FIXUP push offset public_5cbf70 @0x44b2fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf70
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_44b306 : nop
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_5cad80 @0x44b318*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x5C], 6
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_44b337
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_44b337 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        pop ebp
        je public_44b34e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_44b34e : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x44af60)
    }
}

#undef public_44b00b
#undef public_44b038
#undef public_44b0a1
#undef public_44b0b4
#undef public_44b0f3
#undef public_44b106
#undef public_44b1e2
#undef public_44b1f3
#undef public_44b1f7
#undef public_44b21e
#undef public_44b231
#undef public_44b277
#undef public_44b28f
#undef public_44b2cd
#undef public_44b2e5
#undef public_44b306
#undef public_44b337
#undef public_44b34e
