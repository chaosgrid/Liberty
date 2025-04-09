#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4180c0);
CLANG_FORWARD_PROC_SYMBOL(public_420350);
CLANG_FORWARD_PROC_SYMBOL(public_4213d0);
CLANG_FORWARD_PROC_SYMBOL(public_421620);
CLANG_FORWARD_PROC_SYMBOL(public_424510);
CLANG_FORWARD_PROC_SYMBOL(public_424870);
CLANG_FORWARD_PROC_SYMBOL(public_4249c0);
CLANG_FORWARD_PROC_SYMBOL(public_59dcc0);

#define public_4249da _public_4249da
#define public_4249ec _public_4249ec
#define public_4249f5 _public_4249f5
#define public_424a40 _public_424a40
#define public_424a50 _public_424a50
#define public_424a54 _public_424a54
#define public_424a7c _public_424a7c
#define public_424ad4 _public_424ad4
#define public_424b26 _public_424b26
#define public_424b41 _public_424b41
#define public_424b84 _public_424b84
#define public_424b95 _public_424b95
#define public_424b99 _public_424b99
#define public_424b9e _public_424b9e
#define public_424c26 _public_424c26

PROC_DECLARE(0x4249c0, internal_4249c0, public_4249c0);
extern "C" NAKED register_t __cdecl internal_4249c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x3C
        test ecx, ecx
        push ebx
        push esi
        push edi
        jne public_4249da
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x3C
        ret 
        public_4249da : nop
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_4249ec
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        ja public_4249f5
        public_4249ec : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x3C
        ret 
        public_4249f5 : nop
        mov ecx, 0xA
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov al, byte ptr ss : [esp+0x41]
        or esi, 0xFFFFFFFF
        test al, al
        mov byte ptr ds : [public_610864], 0
        jne public_424a50
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        call dword ptr ds : [public_5c72e4]
        push eax
        call dword ptr ds : [public_5c7288]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ss : [esp+0x24]
        jb public_424a40
        mov eax, dword ptr ss : [esp+0x28]
        cmp dword ptr ss : [esp+0x18], eax
        jae public_424a54
        public_424a40 : nop
        lea eax, ds:[ecx+ecx*2]
        shr eax, 2
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], eax
        jmp public_424a54
        public_424a50 : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_424a54 : nop
        mov ecx, dword ptr ss : [esp+0x41]
        xor bl, bl
        test cl, cl
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov esi, dword ptr ss : [esp+0x4C]
        je public_424a7c
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push edx
        push ecx
        push esi
        call public_424870
        add esp, 0x10
        mov bl, 1
        public_424a7c : nop
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_424ad4
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push 0x240
/*FIXUP push offset public_5c9904 @0x424ab1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9904
        mov eax, 0x100002
/*FIXUP push offset public_5c98b8 @0x424abb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c98b8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x20
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x3C
        ret 
        public_424ad4 : nop
        call public_424510
        mov ecx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0xFC00
        push 0x252
        push 1
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_424b26
/*FIXUP push offset public_5c9888 @0x424af9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9888
        push 0x24B
/*FIXUP push offset public_5c9904 @0x424b03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9904
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x424b0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x3C
        ret 
        public_424b26 : nop
        test bl, bl
        jne public_424b41
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi+8]
        xor eax, eax
        mov al, byte ptr ds : [edi+0x25]
        push ecx
        push edx
        push eax
        push esi
        call public_424870
        add esp, 0x10
        public_424b41 : nop
        mov esi, dword ptr ds : [public_5c70cc]
        push 0
        push 0
        call esi
        mov ecx, dword ptr ds : [public_610848]
        and eax, 0x30000
        sub eax, 0x20000
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0x1D
        add eax, 0x18
        cmp eax, ecx
        mov dword ptr ds : [public_61084c], eax
        je public_424b9e
        cmp ecx, 0x18
        jne public_424b84
        push 0x30000
        push 0x20000
        jmp public_424b99
        public_424b84 : nop
        cmp ecx, 0x35
        jne public_424b95
        push 0x30000
        push 0x10000
        jmp public_424b99
        public_424b95 : nop
        push 0
        push 0
        public_424b99 : nop
        call esi
        add esp, 8
        public_424b9e : nop
        mov ecx, dword ptr ds : [public_610854]
        mov edx, dword ptr ds : [public_610850]
        push 0x269
/*FIXUP push offset public_5c9904 @0x424baf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9904
        push ecx
        push edx
        push 0
        push 0
        call public_421620
        mov eax, dword ptr ds : [public_610854]
        push eax
        call dword ptr ds : [public_5c60ac]
        call dword ptr ds : [public_5c60a8]
        mov ecx, dword ptr ds : [public_610854]
        mov edx, dword ptr ds : [public_610850]
        push ecx
        push edx
        call public_4213d0
        mov eax, dword ptr ds : [public_610854]
        mov ecx, dword ptr ds : [public_610850]
        push eax
        push ecx
        call public_4180c0
        mov edx, dword ptr ds : [public_610854]
        mov eax, dword ptr ds : [public_610850]
        push edx
        push eax
        call public_59dcc0
        mov ecx, dword ptr ds : [public_67ecac]
        add esp, 0x34
        test ecx, ecx
        je public_424c26
        mov eax, dword ptr ds : [public_610854]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_610850]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_424c26 : nop
        mov edx, dword ptr ds : [public_610854]
        mov eax, dword ptr ds : [public_610850]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6679f0]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [public_610865]
        push edx
        push eax
        push ecx
        call public_420350
        add esp, 0x10
        pop edi
        pop esi
        mov byte ptr ds : [public_610864], 1
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x4249c0)
    }
}

#undef public_4249da
#undef public_4249ec
#undef public_4249f5
#undef public_424a40
#undef public_424a50
#undef public_424a54
#undef public_424a7c
#undef public_424ad4
#undef public_424b26
#undef public_424b41
#undef public_424b84
#undef public_424b95
#undef public_424b99
#undef public_424b9e
#undef public_424c26
