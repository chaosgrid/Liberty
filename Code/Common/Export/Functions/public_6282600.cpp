#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6280f40);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_6282440);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bbb90);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f01);

#define public_6282690 _public_6282690
#define public_62826c2 _public_62826c2
#define public_62826d4 _public_62826d4
#define public_6282711 _public_6282711
#define public_6282741 _public_6282741
#define public_6282747 _public_6282747
#define public_628274f _public_628274f
#define public_6282763 _public_6282763
#define public_6282783 _public_6282783
#define public_62827af _public_62827af
#define public_62827f0 _public_62827f0
#define public_628282c _public_628282c
#define public_628283a _public_628283a
#define public_628283e _public_628283e
#define public_6282856 _public_6282856
#define public_6282878 _public_6282878
#define public_6282892 _public_6282892
#define public_62828b0 _public_62828b0
#define public_62828c0 _public_62828c0
#define public_62828e6 _public_62828e6

PROC_DECLARE(0x6282600, internal_6282600, public_6282600);
extern "C" NAKED register_t __cdecl internal_6282600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392f01 @0x6282602*/
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
        jb public_62828e6
        mov al, byte ptr ds : [edi]
        push ebx
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x10], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 0
/*FIXUP push offset _public_62a68e0 @0x628264f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_6280f40 @0x6282654*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6280f40
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x110], 0
        call public_6391ef0
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        test eax, eax
        mov byte ptr ss : [esp+0xFC], 1
        mov dword ptr ss : [esp+0x30], ebx
        je public_62828c0
        push ebp
        lea esp, ss:[esp]
        public_6282690 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_62826c2
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_62826c2
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
        public_62826c2 : nop
        xor esi, esi
        test ebx, ebx
        mov dword ptr ss : [esp+0x30], esi
        jbe public_6282878
        lea ebp, ss:[esp+0x3C]
        public_62826d4 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_62827af
        lea eax, ss:[ebp-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        je public_6282783
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
        je public_628274f
        public_6282711 : nop
        cmp edi, eax
        je public_6282763
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_62bbb90
        test al, al
        je public_6282741
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        lea ecx, ss:[ebp-4]
        call public_6272770
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6282747
        public_6282741 : nop
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x20]
        public_6282747 : nop
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x2C]
        jne public_6282711
        public_628274f : nop
        cmp edi, eax
        je public_6282763
        push eax
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea ecx, ss:[ebp-4]
        call public_6272770
        public_6282763 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x28]
        add ecx, eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [esp+0x18], 0
        public_6282783 : nop
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
        jb public_62826d4
        public_62827af : nop
        cmp esi, 0xF
        jne public_6282878
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
        je public_628283e
        mov edi, edi
        public_62827f0 : nop
        cmp esi, ebp
        je public_6282856
        add eax, 8
        push eax
        lea ecx, ds:[esi+8]
        call public_62bbb90
        test al, al
        je public_628282c
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
        jmp public_628283a
        public_628282c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        public_628283a : nop
        cmp eax, edi
        jne public_62827f0
        public_628283e : nop
        cmp esi, ebp
        je public_6282856
        push ebp
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        lea ecx, ss:[esp+0xFC]
        call public_6272770
        public_6282856 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xF4]
        mov edi, dword ptr ss : [esp+0x28]
        add ecx, eax
        mov dword ptr ss : [esp+0xF4], ecx
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6282892
        public_6282878 : nop
        lea ecx, ss:[esp+0x10]
        lea edx, ds:[esi+esi*2]
        push ecx
        lea ecx, ss:[esp+edx*4+0x3C]
        call public_6282290
        cmp esi, ebx
        jne public_6282892
        inc ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6282892 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6282690
        test ebx, ebx
        pop ebp
        jbe public_62828c0
        lea eax, ds:[ebx+ebx*2]
        lea esi, ss:[esp+eax*4+0x34]
        mov edi, ebx
        nop 
        lea esp, ss:[esp]
        public_62828b0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        sub esi, 0xC
        push esi
        call public_6282440
        dec edi
        jne public_62828b0
/*FIXUP public_62828c0 : nop
        push offset _public_62a68e0 @0x62828c0*/
  FIXUP public_62828c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x40]
        push ecx
        mov byte ptr ss : [esp+0x10C], 0
        call public_6391dfc
        lea ecx, ss:[esp+0xC]
        call public_62a68e0
        pop esi
        pop ebx
        public_62828e6 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6282600)
    }
}

#undef public_6282690
#undef public_62826c2
#undef public_62826d4
#undef public_6282711
#undef public_6282741
#undef public_6282747
#undef public_628274f
#undef public_6282763
#undef public_6282783
#undef public_62827af
#undef public_62827f0
#undef public_628282c
#undef public_628283a
#undef public_628283e
#undef public_6282856
#undef public_6282878
#undef public_6282892
#undef public_62828b0
#undef public_62828c0
#undef public_62828e6
