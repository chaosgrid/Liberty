#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f584d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58870);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf7c0);

#define public_6f58520 _public_6f58520
#define public_6f58563 _public_6f58563
#define public_6f5858c _public_6f5858c
#define public_6f585c4 _public_6f585c4
#define public_6f585cf _public_6f585cf
#define public_6f585d1 _public_6f585d1
#define public_6f58615 _public_6f58615
#define public_6f58627 _public_6f58627
#define public_6f58650 _public_6f58650
#define public_6f5865b _public_6f5865b
#define public_6f5865d _public_6f5865d
#define public_6f5869e _public_6f5869e
#define public_6f586ae _public_6f586ae
#define public_6f58703 _public_6f58703
#define public_6f58710 _public_6f58710
#define public_6f58711 _public_6f58711
#define public_6f58719 _public_6f58719
#define public_6f5871e _public_6f5871e
#define public_6f5872e _public_6f5872e
#define public_6f587a0 _public_6f587a0
#define public_6f587b3 _public_6f587b3
#define public_6f587bb _public_6f587bb

PROC_DECLARE(0x6f584d0, internal_6f584d0, public_6f584d0);
extern "C" NAKED register_t __cdecl internal_6f584d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf7c0 @0x6f584d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf7c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ds : [public_6fd0e30]
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        test al, al
        jne public_6f587bb
        push esi
        mov esi, dword ptr ss : [esp+0x70]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f587b3
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push edi
        mov edi, dword ptr ds : [public_6fb3054]
        lea esp, ss:[esp]
/*FIXUP public_6f58520 : nop
        push offset public_6fbba5c @0x6f58520*/
  FIXUP public_6f58520 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba5c
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f587a0
        mov al, byte ptr ss : [esp+0x7C]
        mov byte ptr ss : [esp+0x48], al
        xor eax, eax
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f5872e
/*FIXUP public_6f58563 : nop
        push offset public_6fb445c @0x6f58563*/
  FIXUP public_6f58563 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f5858c
        call edi
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_6fb33e8]
        add esp, 8
        jmp public_6f5871e
/*FIXUP public_6f5858c : nop
        push offset public_6fbba48 @0x6f5858c*/
  FIXUP public_6f5858c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba48
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f5871e
/*FIXUP push offset public_6fb3778 @0x6f5859f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f58627
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        cmp eax, ecx
        je public_6f585cf
        mov edx, dword ptr ds : [public_6fd0dfc]
        public_6f585c4 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f585d1
        add eax, 4
        cmp eax, ecx
        jne public_6f585c4
        public_6f585cf : nop
        mov eax, ecx
        public_6f585d1 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f58615
/*FIXUP push offset public_6fd0dfc @0x6f585d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0dfc
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eae440
/*FIXUP push offset public_6fd0dfc @0x6f585e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0dfc
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x80], 1
        call public_6eb5f30
        lea edx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x38]
        jmp public_6f58719
        public_6f58615 : nop
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x34]
        jmp public_6f58710
/*FIXUP public_6f58627 : nop
        push offset public_6fbba34 @0x6f58627*/
  FIXUP public_6f58627 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba34
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f586ae
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        cmp eax, ecx
        je public_6f5865b
        mov edx, dword ptr ds : [public_6fd0df4]
        lea esp, ss:[esp]
        public_6f58650 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f5865d
        add eax, 4
        cmp eax, ecx
        jne public_6f58650
        public_6f5865b : nop
        mov eax, ecx
        public_6f5865d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6f5869e
/*FIXUP push offset public_6fd0df4 @0x6f58665*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0df4
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eae440
/*FIXUP push offset public_6fd0df4 @0x6f58674*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0df4
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x80], 1
        call public_6eb5f30
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x7C]
        lea ecx, ss:[esp+0x1C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        jmp public_6f58719
        public_6f5869e : nop
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        jmp public_6f58711
/*FIXUP public_6f586ae : nop
        push offset public_6fb37b4 @0x6f586ae*/
  FIXUP public_6f586ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f5871e
/*FIXUP push offset public_6fd0df0 @0x6f586c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0df0
        lea ecx, ss:[esp+0x4C]
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x50]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f58703
/*FIXUP push offset public_6fd0df0 @0x6f586db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0df0
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eae440
/*FIXUP push offset public_6fd0df0 @0x6f586ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0df0
        lea ecx, ss:[esp+0x4C]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], 1
        jmp public_6f5871e
        public_6f58703 : nop
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x28]
        lea ecx, ss:[esp+0x2C]
        public_6f58710 : nop
        push edx
        public_6f58711 : nop
        mov byte ptr ss : [esp+0x84], 0
        public_6f58719 : nop
        call public_6fa6e80
        public_6f5871e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f58563
        public_6f5872e : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x5C], eax
        call public_6eb35b0
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, offset public_6fd0dc8
        mov byte ptr ss : [esp+0x7C], 1
        call public_6f58870
        xor ebx, ebx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x74], bl
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        public_6f587a0 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f58520
        pop edi
        pop ebp
        pop ebx
        public_6f587b3 : nop
        mov byte ptr ds : [public_6fd0e30], 1
        pop esi
        public_6f587bb : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x6f584d0)
    }
}

#undef public_6f58520
#undef public_6f58563
#undef public_6f5858c
#undef public_6f585c4
#undef public_6f585cf
#undef public_6f585d1
#undef public_6f58615
#undef public_6f58627
#undef public_6f58650
#undef public_6f5865b
#undef public_6f5865d
#undef public_6f5869e
#undef public_6f586ae
#undef public_6f58703
#undef public_6f58710
#undef public_6f58711
#undef public_6f58719
#undef public_6f5871e
#undef public_6f5872e
#undef public_6f587a0
#undef public_6f587b3
#undef public_6f587bb
