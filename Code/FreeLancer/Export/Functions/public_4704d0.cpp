#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_46f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_470040);
CLANG_FORWARD_PROC_SYMBOL(public_4704d0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);

#define public_4704fb _public_4704fb
#define public_470517 _public_470517
#define public_470531 _public_470531
#define public_470537 _public_470537
#define public_47059f _public_47059f
#define public_4705a4 _public_4705a4
#define public_4705f1 _public_4705f1
#define public_4705f9 _public_4705f9
#define public_470604 _public_470604
#define public_470609 _public_470609
#define public_470646 _public_470646
#define public_470675 _public_470675
#define public_4706a7 _public_4706a7

PROC_DECLARE(0x4704d0, internal_4704d0, public_4704d0);
extern "C" NAKED register_t __cdecl internal_4704d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push esi
        push eax
        call public_46f6d0
        push 1
        call public_470040
        mov esi, dword ptr ds : [public_66dac0]
        xor ebx, ebx
        add esp, 8
        cmp esi, ebx
        jne public_4704fb
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_470517
        public_4704fb : nop
        mov ecx, dword ptr ds : [public_66dac4]
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        public_470517 : nop
        cmp dword ptr ss : [esp+0x20], ebx
        jle public_4706a7
        push ebp
        mov ebp, dword ptr ds : [public_5c70b4]
        push edi
        mov edi, dword ptr ds : [public_5c70ac]
        jmp public_470537
        public_470531 : nop
        mov esi, dword ptr ds : [public_66dac0]
        public_470537 : nop
        lea edx, ds:[ebx+ebx*2]
/*FIXUP push offset public_5d0254 @0x47053a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x47053f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea esi, ds:[esi+edx*4]
        call ebp
        mov eax, dword ptr ds : [esi+4]
        push 0xFFFFFFFF
        push eax
/*FIXUP push offset public_66dc60 @0x47054f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call public_4779a0
/*FIXUP push offset public_66dc60 @0x470559*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47055e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_5cef90 @0x470565*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
/*FIXUP push offset public_66fc60 @0x47056a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 0x24
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, offset public_66daa4
        call public_432240
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_66daa8]
        je public_47059f
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_4705a4
        public_47059f : nop
        mov eax, offset public_5d0214
        public_4705a4 : nop
        push eax
/*FIXUP push offset public_66fc60 @0x4705a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_5d024c @0x4705ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d024c
/*FIXUP push offset public_66fc60 @0x4705b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 0x10
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, offset public_66da90
        call public_41bd10
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_66da94]
        cmp ecx, eax
        je public_4705f1
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_4705f1
        lea ecx, ss:[esp+0x14]
        jmp public_4705f9
        public_4705f1 : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea ecx, ss:[esp+0x1C]
        public_4705f9 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        je public_470604
        mov eax, dword ptr ds : [ecx+0x10]
        jmp public_470609
        public_470604 : nop
        mov eax, offset public_5d0214
        public_470609 : nop
        push eax
/*FIXUP push offset public_66fc60 @0x47060a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov al, byte ptr ds : [esi+8]
        add esp, 8
        test al, al
        je public_470646
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x470627*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x3E5
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x470637*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47063c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x18
        public_470646 : nop
        test ebx, ebx
        jne public_470675
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x470656*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x3DD
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x470666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47066b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x18
        public_470675 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push 0
        push ecx
/*FIXUP push offset public_66fc60 @0x47067c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x47068b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x10
        inc ebx
        cmp ebx, eax
        jl public_470531
        pop edi
        pop ebp
        public_4706a7 : nop
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4704d0)
    }
}

#undef public_4704fb
#undef public_470517
#undef public_470531
#undef public_470537
#undef public_47059f
#undef public_4705a4
#undef public_4705f1
#undef public_4705f9
#undef public_470604
#undef public_470609
#undef public_470646
#undef public_470675
#undef public_4706a7
