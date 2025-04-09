#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4997d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bca7e);

#define public_49982b _public_49982b
#define public_49982d _public_49982d
#define public_499850 _public_499850
#define public_499874 _public_499874
#define public_49987d _public_49987d
#define public_4998bb _public_4998bb
#define public_4998f0 _public_4998f0
#define public_499934 _public_499934
#define public_499966 _public_499966
#define public_49997c _public_49997c
#define public_4999af _public_4999af
#define public_4999b2 _public_4999b2

PROC_DECLARE(0x4997d0, internal_4997d0, public_4997d0);
extern "C" NAKED register_t __cdecl internal_4997d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bca7e @0x4997d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bca7e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x210
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x22C]
        mov eax, dword ptr ds : [edi+0x78]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jne public_4998f0
        push ebx
        push esi
        push 0x34
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x228], ebp
        je public_49982b
        mov ecx, eax
        call public_4144b0
        mov esi, eax
        jmp public_49982d
        public_49982b : nop
        xor esi, esi
        public_49982d : nop
        mov ebx, dword ptr ss : [esp+0x230]
        mov dword ptr ds : [edi+0x78], esi
        cmp dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0x228], 0xFFFFFFFF
        je public_49987d
        mov dword ptr ds : [esi+0x1C], ebx
        lea ebx, ds:[ebx]
        public_499850 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_499874
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jae public_499874
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+ebp*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc ebp
        jmp public_499850
        public_499874 : nop
        mov dword ptr ds : [esi+0x28], 0
        xor ebp, ebp
        public_49987d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x3D0]
        mov ecx, dword ptr ds : [edi+0x78]
        push edx
        push 0x3F800000
        call public_4145d0
        mov eax, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4998bb
        mov word ptr ss : [esp+0x20], bp
        public_4998bb : nop
        mov ecx, dword ptr ds : [edi+0x78]
        lea eax, ss:[esp+0x20]
        push eax
        call public_415860
        mov edx, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [eax]
        pop esi
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ebp
        fild qword ptr ss : [esp+0xC]
        pop ebx
        jmp public_4999af
        public_4998f0 : nop
        mov al, byte ptr ds : [edi+0x81]
        cmp al, byte ptr ds : [edi+0x80]
        je public_4999b2
        push 0x80
        mov byte ptr ds : [edi+0x80], al
        mov eax, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_67eca8]
        lea ecx, ss:[esp+0x11C]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_499934
        mov word ptr ss : [esp+0x118], bp
        public_499934 : nop
        mov al, byte ptr ds : [edi+0x80]
        test al, al
        je public_499966
/*FIXUP push offset public_5d3e9c @0x49993e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3e9c
/*FIXUP push offset public_66fc60 @0x499943*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        lea eax, ss:[esp+0x120]
        push eax
/*FIXUP push offset public_66fc60 @0x499956*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        add esp, 0x10
        jmp public_49997c
        public_499966 : nop
        lea ecx, ss:[esp+0x118]
        push ecx
/*FIXUP push offset public_66fc60 @0x49996e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_49997c : nop
        mov ecx, dword ptr ds : [edi+0x78]
/*FIXUP push offset public_66fc60 @0x49997f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_415860
        mov ecx, dword ptr ss : [esp+0x228]
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
/*FIXUP push offset public_66fc60 @0x499994*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ebp
        fild qword ptr ss : [esp+8]
        public_4999af : nop
        fstp dword ptr ds : [edi+0x7C]
        public_4999b2 : nop
        mov ecx, dword ptr ss : [esp+0x218]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x21C
        ret 8
        UNREACHABLE_TRAP(0x4997d0)
    }
}

#undef public_49982b
#undef public_49982d
#undef public_499850
#undef public_499874
#undef public_49987d
#undef public_4998bb
#undef public_4998f0
#undef public_499934
#undef public_499966
#undef public_49997c
#undef public_4999af
#undef public_4999b2
