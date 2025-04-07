#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8cc8);

#define public_42b695 _public_42b695
#define public_42b69d _public_42b69d
#define public_42b6d0 _public_42b6d0
#define public_42b6d2 _public_42b6d2
#define public_42b6e6 _public_42b6e6
#define public_42b6eb _public_42b6eb
#define public_42b70b _public_42b70b
#define public_42b70d _public_42b70d
#define public_42b71f _public_42b71f
#define public_42b73c _public_42b73c
#define public_42b75d _public_42b75d
#define public_42b775 _public_42b775
#define public_42b788 _public_42b788

PROC_DECLARE(0x42b5e0, internal_42b5e0, public_42b5e0);
extern "C" NAKED register_t __cdecl internal_42b5e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8cc8 @0x42b5e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8cc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_5c6d44]
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x34
        push ebx
        push edi
        xor edi, edi
        or ebx, 0xFFFFFFFF
        cmp ecx, edi
        je public_42b775
        mov ecx, dword ptr ds : [public_5c6dd8]
        cmp dword ptr ds : [ecx], edi
        je public_42b775
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x4C], edi
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], offset public_5c7388
        rep stosd
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0x80000000
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x2C], 3
        mov dword ptr ss : [esp+0x30], 0x8000080
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x10], 0x34
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        jne public_42b695
        mov eax, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x18], offset public_5ca5fc
        mov eax, dword ptr ds : [eax]
        jmp public_42b69d
        public_42b695 : nop
        mov dword ptr ss : [esp+0x18], offset public_5c944c
        public_42b69d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_42b788
        push 4
        call public_5b3510
        fcomp dword ptr ds : [public_5c75dc]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_42b6d0
        mov bl, 1
        jmp public_42b6d2
        public_42b6d0 : nop
        xor bl, bl
        public_42b6d2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        test al, al
        jne public_42b6e6
        test bl, bl
        mov edi, 9
        je public_42b6eb
        public_42b6e6 : nop
        mov edi, 0x11
        public_42b6eb : nop
        push 0x2D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_42b70b
        push 0x34
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_42b70b
        mov bl, 1
        jmp public_42b70d
        public_42b70b : nop
        xor bl, bl
        public_42b70d : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_42b71f
        test bl, bl
        je public_42b71f
        or edi, 2
        public_42b71f : nop
        mov eax, dword ptr ds : [public_5c6d44]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_42b75d
        public_42b73c : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0x22B
/*FIXUP push offset public_5ca3dc @0x42b748*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100002
/*FIXUP push offset public_5ca5b0 @0x42b752*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca5b0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_42b75d : nop
        mov eax, dword ptr ss : [esp+0x54]
        test eax, eax
        pop esi
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        pop ebp
        je public_42b775
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_42b775 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        public_42b788 : nop
        push ebp
        push 0x227
/*FIXUP push offset public_5ca3dc @0x42b78e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100002
/*FIXUP push offset public_5ca578 @0x42b798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca578
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_42b73c
        UNREACHABLE_TRAP(0x42b5e0)
    }
}

#undef public_42b695
#undef public_42b69d
#undef public_42b6d0
#undef public_42b6d2
#undef public_42b6e6
#undef public_42b6eb
#undef public_42b70b
#undef public_42b70d
#undef public_42b71f
#undef public_42b73c
#undef public_42b75d
#undef public_42b775
#undef public_42b788
