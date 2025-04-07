#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6280f40);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_6282520);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bbbb0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f01);

#define public_6282990 _public_6282990
#define public_62829c2 _public_62829c2
#define public_62829d4 _public_62829d4
#define public_6282a11 _public_6282a11
#define public_6282a41 _public_6282a41
#define public_6282a47 _public_6282a47
#define public_6282a4f _public_6282a4f
#define public_6282a63 _public_6282a63
#define public_6282a83 _public_6282a83
#define public_6282aaf _public_6282aaf
#define public_6282af0 _public_6282af0
#define public_6282b2c _public_6282b2c
#define public_6282b3a _public_6282b3a
#define public_6282b3e _public_6282b3e
#define public_6282b56 _public_6282b56
#define public_6282b78 _public_6282b78
#define public_6282b92 _public_6282b92
#define public_6282bb1 _public_6282bb1
#define public_6282bc2 _public_6282bc2
#define public_6282be9 _public_6282be9

PROC_DECLARE(0x6282900, internal_6282900, public_6282900);
extern "C" NAKED register_t __cdecl internal_6282900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392f01 @0x6282902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392f01
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], 2
        mov dword ptr ss : [esp+0x1C], edi
        jb public_6282be9
        mov al, byte ptr ds : [edi]
        push ebx
        push ebp
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
/*FIXUP push offset _public_62a68e0 @0x6282950*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_6280f40 @0x6282955*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6280f40
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x48]
        push ecx
        mov dword ptr ss : [esp+0x114], 0
        call public_6391ef0
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        test eax, eax
        mov byte ptr ss : [esp+0x100], 1
        mov dword ptr ss : [esp+0x34], ebx
        je public_6282bc2
        lea esp, ss:[esp]
        public_6282990 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_62829c2
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_62829c2
        push edx
        push eax
        push edi
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+8]
        inc ecx
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [edi+8], eax
        public_62829c2 : nop
        xor esi, esi
        test ebx, ebx
        mov dword ptr ss : [esp+0x30], esi
        jbe public_6282b78
        lea ebp, ss:[esp+0x3C]
        public_62829d4 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_6282aaf
        lea eax, ss:[ebp-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        je public_6282a83
        mov ebx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_632c410
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        je public_6282a4f
        public_6282a11 : nop
        cmp edi, eax
        je public_6282a63
        lea eax, ds:[esi+8]
        lea ecx, ds:[edi+8]
        push eax
        call public_62bbbb0
        test al, al
        je public_6282a41
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax]
        push edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        lea ecx, ss:[ebp-4]
        call public_6272770
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6282a47
        public_6282a41 : nop
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x20]
        public_6282a47 : nop
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x2C]
        jne public_6282a11
        public_6282a4f : nop
        cmp edi, eax
        je public_6282a63
        push eax
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[ebp-4]
        call public_6272770
        public_6282a63 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x28]
        add eax, edx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [esp+0x18], 0
        public_6282a83 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+4]
        inc esi
        mov dword ptr ss : [ebp+4], edx
        add ebp, 0xC
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], esi
        jb public_62829d4
        public_6282aaf : nop
        cmp esi, 0xF
        jne public_6282b78
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_632c410
        mov edi, dword ptr ss : [esp+0xF0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632c410
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, edi
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        je public_6282b3e
        mov edi, edi
        public_6282af0 : nop
        cmp esi, ebp
        je public_6282b56
        add eax, 8
        lea ecx, ds:[esi+8]
        push eax
        call public_62bbbb0
        test al, al
        je public_6282b2c
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0xFC]
        call public_6272770
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_6282b3a
        public_6282b2c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        public_6282b3a : nop
        cmp eax, edi
        jne public_6282af0
        public_6282b3e : nop
        cmp esi, ebp
        je public_6282b56
        push ebp
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        lea ecx, ss:[esp+0xFC]
        call public_6272770
        public_6282b56 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xF4]
        mov edi, dword ptr ss : [esp+0x28]
        add ecx, eax
        mov dword ptr ss : [esp+0xF4], ecx
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6282b92
        public_6282b78 : nop
        lea ecx, ss:[esp+0x10]
        lea edx, ds:[esi+esi*2]
        push ecx
        lea ecx, ss:[esp+edx*4+0x3C]
        call public_6282290
        cmp esi, ebx
        jne public_6282b92
        inc ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6282b92 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6282990
        test ebx, ebx
        jbe public_6282bc2
        mov ebp, dword ptr ss : [esp+0x108]
        lea eax, ds:[ebx+ebx*2]
        lea esi, ss:[esp+eax*4+0x38]
        mov edi, ebx
        public_6282bb1 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ebp
        sub esi, 0xC
        push esi
        call public_6282520
        dec edi
        jne public_6282bb1
/*FIXUP public_6282bc2 : nop
        push offset _public_62a68e0 @0x6282bc2*/
  FIXUP public_6282bc2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x44]
        push ecx
        mov byte ptr ss : [esp+0x110], 0
        call public_6391dfc
        lea ecx, ss:[esp+0x10]
        call public_62a68e0
        pop esi
        pop ebp
        pop ebx
        public_6282be9 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 4
        UNREACHABLE_TRAP(0x6282900)
    }
}

#undef public_6282990
#undef public_62829c2
#undef public_62829d4
#undef public_6282a11
#undef public_6282a41
#undef public_6282a47
#undef public_6282a4f
#undef public_6282a63
#undef public_6282a83
#undef public_6282aaf
#undef public_6282af0
#undef public_6282b2c
#undef public_6282b3a
#undef public_6282b3e
#undef public_6282b56
#undef public_6282b78
#undef public_6282b92
#undef public_6282bb1
#undef public_6282bc2
#undef public_6282be9
