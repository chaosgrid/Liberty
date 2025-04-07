#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6272a40);
CLANG_FORWARD_PROC_SYMBOL(public_62887a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632f440);
CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_632f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_632fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_632fff0);
CLANG_FORWARD_PROC_SYMBOL(public_63300c0);
CLANG_FORWARD_PROC_SYMBOL(public_6330960);
CLANG_FORWARD_PROC_SYMBOL(public_6330990);
CLANG_FORWARD_PROC_SYMBOL(public_6330d90);
CLANG_FORWARD_PROC_SYMBOL(public_6331a00);
CLANG_FORWARD_PROC_SYMBOL(public_6331af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);
CLANG_FORWARD_JUMP_SYMBOL(public_639756e);

#define public_6330a56 _public_6330a56
#define public_6330a71 _public_6330a71
#define public_6330aa1 _public_6330aa1
#define public_6330b33 _public_6330b33
#define public_6330b47 _public_6330b47
#define public_6330b51 _public_6330b51
#define public_6330b81 _public_6330b81
#define public_6330b90 _public_6330b90
#define public_6330b9d _public_6330b9d
#define public_6330ba8 _public_6330ba8
#define public_6330bd2 _public_6330bd2
#define public_6330c26 _public_6330c26
#define public_6330c4c _public_6330c4c
#define public_6330c9d _public_6330c9d
#define public_6330cca _public_6330cca
#define public_6330d0b _public_6330d0b
#define public_6330d42 _public_6330d42
#define public_6330d50 _public_6330d50
#define public_6330d74 _public_6330d74

PROC_DECLARE(0x6330990, internal_6330990, public_6330990);
extern "C" NAKED register_t __cdecl internal_6330990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639756e @0x6330992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639756e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [edi+4]
        xor esi, esi
        cmp eax, esi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6330d42
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 8
        jbe public_6330d42
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x40], cl
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0xB8], esi
        mov byte ptr ss : [esp+0x30], dl
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov ecx, edi
        mov byte ptr ss : [esp+0xB8], 2
        call public_6272a40
        push esi
        push esi
        mov ebp, eax
        push esi
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0x20], ebp
        call public_628b030
        test ebp, ebp
        jle public_6330a71
        mov ebx, dword ptr ds : [edi+4]
        public_6330a56 : nop
        lea ecx, ds:[esi+ebx+4]
        push ecx
        lea ecx, ss:[esp+0x8C]
        call public_62887a0
        add esi, 0x14
        dec ebp
        jne public_6330a56
        mov ebp, dword ptr ss : [esp+0x14]
        public_6330a71 : nop
        fild dword ptr ss : [esp+0x14]
        push ecx
        lea edx, ss:[esp+0x8C]
        lea eax, ss:[esp+0x74]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6330960
        add esp, 0xC
        xor ebx, ebx
        test ebp, ebp
        mov esi, 0x270F
        jle public_6330ba8
        mov dword ptr ss : [esp+0x1C], ebx
        public_6330aa1 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x70]
        push ecx
        lea eax, ds:[edx+eax+4]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x7C]
        call public_62c4780
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_6330b33
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_632f8b0
        push edi
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ss:[esp+0x9C]
        call public_6330d90
        lea ecx, ss:[esp+0x94]
        call public_632fff0
        cmp eax, esi
        jge public_6330b33
        test eax, eax
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov esi, eax
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], ecx
        je public_6330b47
        public_6330b33 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        inc ebx
        add ecx, 0x14
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_6330aa1
        public_6330b47 : nop
        test ebp, ebp
        jle public_6330ba8
        mov ebx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        public_6330b51 : nop
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+ebp+0x10]
        lea eax, ds:[esi+ebp+4]
        push edx
        push eax
        lea ecx, ss:[esp+0x58]
        call public_632f3f0
        sub eax, 0
        je public_6330b90
        dec eax
        je public_6330b81
        dec eax
        jne public_6330b90
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+ebp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        jmp public_6330b9d
        public_6330b81 : nop
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ds:[esi+ebp]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        jmp public_6330b9d
        public_6330b90 : nop
        mov edx, dword ptr ss : [esp+0x48]
        lea ecx, ds:[esi+ebp]
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        public_6330b9d : nop
        call public_6331af0
        add ebp, 0x14
        dec ebx
        jne public_6330b51
        public_6330ba8 : nop
        mov ebp, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, ebp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+8], ecx
        xor ebx, ebx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ss : [esp+0x14], ebx
        public_6330bd2 : nop
        mov esi, dword ptr ss : [esp+0x44]
        test esi, esi
        je public_6330c4c
        mov ecx, dword ptr ss : [esp+0x48]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp dword ptr ss : [esp+0x14], edx
        jae public_6330c4c
        add esi, ebx
        mov ecx, dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+4]
        push ecx
        push eax
        mov ecx, ebp
        call public_632f3f0
        mov edi, eax
        mov eax, dword ptr ss : [ebp+edi*4+0x10]
        test eax, eax
        je public_6330c26
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        call public_632fbe0
        inc dword ptr ss : [esp+0x14]
        add ebx, 0x14
        jmp public_6330bd2
        public_6330c26 : nop
        mov ecx, offset public_640a728
        call public_632f9b0
        push esi
        mov ecx, eax
        mov dword ptr ss : [ebp+edi*4+0x10], eax
        call public_632f440
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        inc dword ptr ss : [esp+0x14]
        add ebx, 0x14
        jmp public_6330bd2
        public_6330c4c : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        mov bl, 1
        je public_6330cca
        mov ecx, dword ptr ss : [esp+0x38]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        je public_6330cca
        mov al, byte ptr ds : [public_658e738]
        test bl, al
        jne public_6330c9d
        mov dl, al
        or dl, bl
        mov ecx, offset public_658e740
        mov byte ptr ds : [public_658e738], dl
        call public_63300c0
/*FIXUP push offset _public_62a8920 @0x6330c90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        call public_6391f9e
        add esp, 4
/*FIXUP public_6330c9d : nop
        push offset public_658e740 @0x6330c9d*/
  FIXUP public_6330c9d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        mov ecx, offset public_640a728
        call public_6331a00
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x30]
        add eax, 8
        push edx
        push eax
        mov dword ptr ss : [ebp+0x14], eax
        call public_6330990
        public_6330cca : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6330d0b
        mov ecx, dword ptr ss : [esp+0x28]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        je public_6330d0b
        mov ecx, offset public_640a728
        call public_632f9b0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ss : [ebp+0x18], eax
        call public_6330990
        public_6330d0b : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0xB8], bl
        call public_6269110
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xB8], 0
        call public_6269110
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0xB8], 0xFFFFFFFF
        call public_6269110
        jmp public_6330d74
        public_6330d42 : nop
        mov ecx, edi
        call public_6272a40
        test eax, eax
        jbe public_6330d74
        xor ebp, ebp
        nop 
        public_6330d50 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0xC0]
        add edx, ebp
        push edx
        call public_632f440
        inc dword ptr ds : [ebx+8]
        mov ecx, edi
        inc esi
        add ebp, 0x14
        call public_6272a40
        cmp esi, eax
        jb public_6330d50
        public_6330d74 : nop
        mov ecx, dword ptr ss : [esp+0xB0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xAC
        ret 8
        UNREACHABLE_TRAP(0x6330990)
    }
}

#undef public_6330a56
#undef public_6330a71
#undef public_6330aa1
#undef public_6330b33
#undef public_6330b47
#undef public_6330b51
#undef public_6330b81
#undef public_6330b90
#undef public_6330b9d
#undef public_6330ba8
#undef public_6330bd2
#undef public_6330c26
#undef public_6330c4c
#undef public_6330c9d
#undef public_6330cca
#undef public_6330d0b
#undef public_6330d42
#undef public_6330d50
#undef public_6330d74
