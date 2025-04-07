#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23120);
CLANG_FORWARD_PROC_SYMBOL(public_6f236c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae07e);

#define public_6f23712 _public_6f23712
#define public_6f23834 _public_6f23834
#define public_6f23853 _public_6f23853
#define public_6f238a2 _public_6f238a2
#define public_6f238cc _public_6f238cc
#define public_6f238e0 _public_6f238e0
#define public_6f238f6 _public_6f238f6
#define public_6f23992 _public_6f23992
#define public_6f23a0e _public_6f23a0e

PROC_DECLARE(0x6f236c0, internal_6f236c0, public_6f236c0);
extern "C" NAKED register_t __cdecl internal_6f236c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fae07e @0x6f236c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae07e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x11C
        push ebp
        mov ebp, dword ptr ss : [esp+0x130]
        cmp ebp, eax
        je public_6f23a0e
        add ebp, 0x88
        cmp ebp, eax
        je public_6f23a0e
        push ebx
        mov ebx, dword ptr ss : [esp+0x13C]
        push esi
        lea eax, ss:[esp+0x6C]
        push edi
        mov dword ptr ss : [esp+0xA0], eax
        public_6f23712 : nop
        lea esi, ss:[ebp+4]
        mov ecx, 0xD
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x38]
        lea edx, ss:[ebp+0x3C]
        mov dword ptr ss : [esp+0x50], ecx
        push edx
        lea ecx, ss:[esp+0x58]
        call public_6f0deb0
        mov cl, byte ptr ss : [ebp+0x49]
        mov edx, dword ptr ss : [ebp+0x4C]
        mov al, byte ptr ss : [ebp+0x48]
        mov byte ptr ss : [esp+0x61], cl
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x64], edx
        mov byte ptr ss : [esp+0x60], al
        mov al, byte ptr ss : [ebp+0x50]
        lea edx, ss:[esp+0x17]
        mov dword ptr ss : [esp+0x6C], ecx
        push edx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x138], 0
        mov byte ptr ss : [esp+0x6C], al
        call public_6f93460
        lea eax, ss:[ebp+0x58]
        push eax
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x138], 1
        call public_6f20230
        mov ecx, dword ptr ss : [ebp+0x64]
        lea edx, ss:[ebp+0x68]
        mov dword ptr ss : [esp+0x7C], ecx
        push edx
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x138], 2
        call public_6f21fd0
        lea eax, ss:[ebp+0x6C]
        push eax
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x138], 3
        call public_6f55880
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov edx, dword ptr ss : [ebp+0x80]
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0x18], offset public_6fb60a8
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x138], 4
        call public_6f15710
        mov edx, dword ptr ss : [esp+0x13C]
        mov esi, eax
        lea eax, ds:[edx+4]
        push eax
        mov ecx, ebx
        call public_6f15710
        test esi, esi
        je public_6f23834
        test eax, eax
        je public_6f23834
        mov edx, dword ptr ds : [eax+0x14C]
        mov esi, dword ptr ds : [esi+0x14C]
        cmp esi, edx
        setl al
        test al, al
        jne public_6f238cc
        public_6f23834 : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xA8]
        call public_6f22fa0
        mov dword ptr ss : [esp+0x10], ebp
        mov byte ptr ss : [esp+0x134], 5
        mov edi, ebp
        public_6f23853 : nop
        lea ecx, ss:[esp+0xA8]
        push ecx
        mov ecx, ebx
        sub edi, 0x88
        call public_6f15710
        lea edx, ds:[edi+4]
        push edx
        mov ecx, ebx
        mov esi, eax
        call public_6f15710
        test esi, esi
        je public_6f238a2
        test eax, eax
        je public_6f238a2
        mov edx, dword ptr ds : [eax+0x14C]
        mov esi, dword ptr ds : [esi+0x14C]
        cmp esi, edx
        setl al
        test al, al
        je public_6f238a2
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_6ed34e0
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6f23853
        public_6f238a2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0xA4]
        push eax
        call public_6ed34e0
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0x134], 4
        call public_6ed2c20
        jmp public_6f23992
        public_6f238cc : nop
        mov edi, dword ptr ss : [esp+0x13C]
        cmp edi, ebp
        mov esi, ebp
        je public_6f238f6
        lea esp, ss:[esp]
        public_6f238e0 : nop
        sub esi, 0x88
        push esi
        lea ecx, ds:[esi+0x88]
        call public_6ed34e0
        cmp esi, edi
        jne public_6f238e0
        public_6f238f6 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[edi+4]
        call public_6ed0160
        mov edx, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ds:[edi+0x3C]
        mov dword ptr ds : [edi+0x38], edx
        call public_6f93490
        mov cl, byte ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        mov dl, byte ptr ss : [esp+0x61]
        mov byte ptr ds : [edi+0x48], cl
        mov cl, byte ptr ss : [esp+0x68]
        mov dword ptr ds : [edi+0x4C], eax
        mov byte ptr ds : [edi+0x49], dl
        mov edx, dword ptr ss : [esp+0x6C]
        lea eax, ss:[esp+0x70]
        mov byte ptr ds : [edi+0x50], cl
        push eax
        lea ecx, ds:[edi+0x58]
        mov dword ptr ds : [edi+0x54], edx
        call public_6f20230
        mov ecx, dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0x80]
        mov dword ptr ds : [edi+0x64], ecx
        push edx
        lea ecx, ds:[edi+0x68]
        call public_6f23120
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ds:[edi+0x6C]
        call public_6ef8910
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [edi+0x7C], ecx
        mov dword ptr ds : [edi+0x80], edx
        mov dword ptr ds : [edi+0x84], eax
        public_6f23992 : nop
        mov dword ptr ss : [esp+0x18], offset public_6fb60a8
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x134], 9
        call public_6f28e10
        lea ecx, ss:[esp+0x84]
        call public_6eec8d0
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x134], 7
        call public_6f28e10
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x134], 6
        call public_6ecfa90
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x134], 0xFFFFFFFF
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x140]
        add ebp, 0x88
        cmp ebp, eax
        jne public_6f23712
        pop edi
        pop esi
        pop ebx
        public_6f23a0e : nop
        mov ecx, dword ptr ss : [esp+0x120]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x128
        ret 
        UNREACHABLE_TRAP(0x6f236c0)
    }
}

#undef public_6f23712
#undef public_6f23834
#undef public_6f23853
#undef public_6f238a2
#undef public_6f238cc
#undef public_6f238e0
#undef public_6f238f6
#undef public_6f23992
#undef public_6f23a0e
