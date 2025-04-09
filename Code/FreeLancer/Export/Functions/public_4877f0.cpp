#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473c00);
CLANG_FORWARD_PROC_SYMBOL(public_4877f0);
CLANG_FORWARD_PROC_SYMBOL(public_488b70);
CLANG_FORWARD_PROC_SYMBOL(public_488ee0);
CLANG_FORWARD_PROC_SYMBOL(public_489160);
CLANG_FORWARD_PROC_SYMBOL(public_489190);
CLANG_FORWARD_PROC_SYMBOL(public_489200);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a1eb0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc1ca);

#define public_487860 _public_487860
#define public_48786b _public_48786b
#define public_487876 _public_487876
#define public_48788c _public_48788c
#define public_487898 _public_487898
#define public_4878f8 _public_4878f8
#define public_487910 _public_487910
#define public_4879dd _public_4879dd
#define public_4879f2 _public_4879f2
#define public_487a16 _public_487a16
#define public_487a26 _public_487a26
#define public_487a4a _public_487a4a
#define public_487a54 _public_487a54
#define public_487a9c _public_487a9c
#define public_487aa8 _public_487aa8
#define public_487aff _public_487aff
#define public_487b10 _public_487b10
#define public_487b26 _public_487b26
#define public_487b4f _public_487b4f
#define public_487b53 _public_487b53
#define public_487b70 _public_487b70
#define public_487b89 _public_487b89
#define public_487ba3 _public_487ba3
#define public_487bc0 _public_487bc0
#define public_487beb _public_487beb
#define public_487c0b _public_487c0b

PROC_DECLARE(0x4877f0, internal_4877f0, public_4877f0);
extern "C" NAKED register_t __cdecl internal_4877f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc1ca @0x4877f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc1ca
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x344]
        mov eax, dword ptr ds : [ebx+0x348]
        lea esi, ds:[ebx+0x340]
        push edi
        push ecx
        push eax
        push eax
        call public_489200
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_489160
        mov ecx, offset public_67e7b8
        mov dword ptr ds : [esi+8], edi
        call public_5aa680
        cmp eax, 1
        jne public_487a26
        mov eax, dword ptr ds : [public_67e970]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_48786b
        mov edi, edi
        public_487860 : nop
        mov eax, dword ptr ds : [eax]
        inc edi
        test eax, eax
        jne public_487860
        mov dword ptr ss : [esp+0x14], edi
        public_48786b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_487876
        xor edx, edx
        jmp public_48788c
        public_487876 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_48788c : nop
        cmp edx, edi
        jae public_4878f8
        test edi, edi
        mov eax, edi
        jge public_487898
        xor eax, eax
        public_487898 : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push eax
        mov ecx, esi
        call public_489190
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_489160
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5756d0
        lea edx, ds:[eax+eax*8]
        lea eax, ds:[edi+edx*4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        public_4878f8 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0
        jle public_4879f2
        mov ebp, dword ptr ds : [public_5c71c8]
        mov edi, edi
        public_487910 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov edi, eax
        mov al, byte ptr ds : [edi+0x200]
        test al, al
        jne public_4879dd
        mov dl, byte ptr ss : [esp+0x13]
        push 0
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], dl
        call dword ptr ds : [public_5c6fb8]
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_5c6fc0]
        push edi
        mov dword ptr ss : [esp+0x50], 1
        mov dword ptr ss : [esp+0x24], edi
        call public_488b70
        mov edi, eax
        push edi
        call ebp
        add esp, 8
        push eax
        push edi
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6fb0]
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, 0x228
        push ecx
        call dword ptr ds : [public_5c63d0]
        mov edi, eax
        push edi
        call ebp
        add esp, 8
        push eax
        push edi
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6fb0]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov ecx, esi
        call public_488ee0
        push 1
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 2
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        public_4879dd : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_487910
        public_4879f2 : nop
        mov eax, dword ptr ds : [public_67e984]
        test eax, eax
        je public_487a4a
        mov ecx, dword ptr ds : [ebx+0x1764]
        test ecx, ecx
        mov dword ptr ds : [ebx+0x338], 3
        je public_487a16
        push 0
        call public_57c7d0
        public_487a16 : nop
        push ebx
        push 0x5CD
        call public_473c00
        add esp, 8
        jmp public_487a4a
/*FIXUP public_487a26 : nop
        push offset public_5d22a0 @0x487a26*/
  FIXUP public_487a26 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d22a0
        push 0x446
/*FIXUP push offset public_5d1e40 @0x487a30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x487a3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_487a4a : nop
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], ebp
        public_487a54 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_487b10
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        jae public_487b10
        mov edx, dword ptr ds : [ebx+0x344]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_5c700c]
        lea eax, ds:[edx+eax+0x14]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov edi, ecx
        je public_487a9c
        mov edi, eax
        public_487a9c : nop
        mov eax, dword ptr ds : [ebx+0x354]
        test eax, eax
        jne public_487aa8
        mov eax, ecx
        public_487aa8 : nop
        mov ecx, dword ptr ds : [ebx+0x360]
        push ecx
        push eax
        push edi
        call dword ptr ds : [public_5c7108]
        add esp, 0xC
        test eax, eax
        jne public_487aff
        mov edx, dword ptr ds : [ebx+0x360]
        push 0xA
        lea ecx, ss:[esp+0x20]
        lea eax, ds:[edi+edx*2]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [public_5c7104]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        test ecx, ecx
        je public_487aff
        cmp word ptr ds : [ecx], 0
        jne public_487aff
        cmp eax, 0x3B9ACA00
        jg public_487aff
        cmp eax, dword ptr ss : [esp+0x14]
        jle public_487aff
        mov dword ptr ss : [esp+0x14], eax
        public_487aff : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        add eax, 0x24
        mov dword ptr ss : [esp+0x18], eax
        jmp public_487a54
        public_487b10 : nop
        mov edx, dword ptr ss : [esp+0x14]
        inc edx
        mov dword ptr ds : [ebx+0x364], edx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_487b26
        xor ebp, ebp
        jmp public_487b4f
        public_487b26 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        cmp ebp, 0x100
        mov dword ptr ss : [esp+0x14], ebp
        jle public_487b53
        mov ebp, 0x100
        public_487b4f : nop
        mov dword ptr ss : [esp+0x14], ebp
        public_487b53 : nop
        xor edi, edi
        test ebp, ebp
        mov dword ptr ds : [ebx+0xE80], ebp
        mov dword ptr ds : [ebx+0x173C], ebp
        jle public_487bc0
        mov dword ptr ss : [esp+0x18], edi
        lea esp, ss:[esp]
        public_487b70 : nop
        mov esi, dword ptr ds : [ebx+0x344]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+edx+0x18]
        add esi, edx
        test eax, eax
        jne public_487b89
        mov eax, dword ptr ds : [public_5c700c]
        public_487b89 : nop
        push eax
        push edi
        lea ecx, ds:[ebx+0x5DC]
        call public_5a1eb0
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_487ba3
        mov esi, dword ptr ds : [public_5c700c]
        public_487ba3 : nop
        push esi
        push edi
        lea ecx, ds:[ebx+0xE98]
        call public_5a1eb0
        mov ecx, dword ptr ss : [esp+0x18]
        inc edi
        add ecx, 0x24
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], ecx
        jl public_487b70
        public_487bc0 : nop
        sub ebp, dword ptr ds : [ebx+0x1754]
        inc ebp
        cmp ebp, 1
        jg public_487beb
        mov ecx, dword ptr ds : [ebx+0x1758]
        push 0x3F800000
        push 0
        call public_595d60
        mov ebx, dword ptr ds : [ebx+0x1758]
        mov al, byte ptr ds : [ebx+0x6C]
        and al, 0xFC
        jmp public_487c0b
        public_487beb : nop
        fild dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x1758]
        fstp dword ptr ss : [esp]
        push 0
        call public_595d60
        mov ebx, dword ptr ds : [ebx+0x1758]
        mov al, byte ptr ds : [ebx+0x6C]
        or al, 3
        public_487c0b : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x6C], al
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x4877f0)
    }
}

#undef public_487860
#undef public_48786b
#undef public_487876
#undef public_48788c
#undef public_487898
#undef public_4878f8
#undef public_487910
#undef public_4879dd
#undef public_4879f2
#undef public_487a16
#undef public_487a26
#undef public_487a4a
#undef public_487a54
#undef public_487a9c
#undef public_487aa8
#undef public_487aff
#undef public_487b10
#undef public_487b26
#undef public_487b4f
#undef public_487b53
#undef public_487b70
#undef public_487b89
#undef public_487ba3
#undef public_487bc0
#undef public_487beb
#undef public_487c0b
