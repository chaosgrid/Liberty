#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f22fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae15e);

#define public_6f23aed _public_6f23aed
#define public_6f23b2e _public_6f23b2e
#define public_6f23b32 _public_6f23b32
#define public_6f23ce1 _public_6f23ce1
#define public_6f23d21 _public_6f23d21
#define public_6f23d4f _public_6f23d4f

PROC_DECLARE(0x6f23a30, internal_6f23a30, public_6f23a30);
extern "C" NAKED register_t __cdecl internal_6f23a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae15e @0x6f23a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae15e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov esi, dword ptr ss : [esp+0x1BC]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 3
        call public_6f15710
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6f15710
        test edi, edi
        je public_6f23ce1
        test eax, eax
        je public_6f23ce1
        mov edx, dword ptr ds : [eax+0x14C]
        mov edi, dword ptr ds : [edi+0x14C]
        cmp edi, edx
        setl al
        test al, al
        je public_6f23ce1
        push ebp
        lea edx, ss:[esp+0xB4]
        push edx
        mov ecx, esi
        call public_6f15710
        mov edi, eax
        lea eax, ss:[esp+0x13C]
        push eax
        mov ecx, esi
        call public_6f15710
        test edi, edi
        je public_6f23aed
        test eax, eax
        je public_6f23aed
        mov edx, dword ptr ds : [eax+0x14C]
        mov edi, dword ptr ds : [edi+0x14C]
        cmp edi, edx
        setl al
        test al, al
        je public_6f23aed
        lea ebp, ss:[esp+0xB0]
        jmp public_6f23b32
        public_6f23aed : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call public_6f15710
        lea edx, ss:[esp+0x13C]
        push edx
        mov ecx, esi
        mov edi, eax
        call public_6f15710
        test edi, edi
        je public_6f23b2e
        test eax, eax
        je public_6f23b2e
        mov edx, dword ptr ds : [eax+0x14C]
        mov edi, dword ptr ds : [edi+0x14C]
        cmp edi, edx
        setl al
        test al, al
        lea ebp, ss:[esp+0x138]
        jne public_6f23b32
        public_6f23b2e : nop
        lea ebp, ss:[esp+0x28]
        public_6f23b32 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0x38]
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+4]
        mov ecx, 0xD
        rep movsd
        lea ecx, ss:[ebp+0x3C]
        push ecx
        lea ecx, ds:[ebx+0x3C]
        mov dword ptr ds : [ebx+0x38], eax
        call public_6f0deb0
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov dl, byte ptr ss : [ebp+0x48]
        mov al, byte ptr ss : [ebp+0x49]
        mov dword ptr ds : [ebx+0x4C], ecx
        lea ecx, ss:[ebp+0x58]
        mov byte ptr ds : [ebx+0x48], dl
        mov dl, byte ptr ss : [ebp+0x50]
        mov byte ptr ds : [ebx+0x49], al
        mov eax, dword ptr ss : [ebp+0x54]
        push ecx
        lea ecx, ds:[ebx+0x58]
        mov byte ptr ss : [esp+0x20], 4
        mov byte ptr ds : [ebx+0x50], dl
        mov dword ptr ds : [ebx+0x54], eax
        call public_6ef7e30
        mov edx, dword ptr ss : [ebp+0x64]
        lea eax, ss:[ebp+0x68]
        push eax
        lea ecx, ds:[ebx+0x68]
        mov byte ptr ss : [esp+0x20], 5
        mov dword ptr ds : [ebx+0x64], edx
        call public_6f21fd0
        lea ecx, ss:[ebp+0x6C]
        push ecx
        lea ecx, ds:[ebx+0x6C]
        mov byte ptr ss : [esp+0x20], 6
        call public_6f55880
        mov edx, dword ptr ss : [ebp+0x7C]
        mov eax, dword ptr ss : [ebp+0x80]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov esi, offset public_6fb60a8
        mov dword ptr ds : [ebx+0x7C], edx
        mov dword ptr ds : [ebx+0x80], eax
        mov dword ptr ds : [ebx+0x84], ecx
        mov dword ptr ds : [ebx], esi
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x28], esi
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0x1C], 0xA
        call public_6f28e10
        lea ecx, ss:[esp+0x94]
        call public_6eec8d0
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0x1C], 8
        call public_6f28e10
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1C], 7
        call public_6ecfa90
        lea ecx, ss:[esp+0x64]
        call public_6f15350
        mov dword ptr ss : [esp+0xB0], esi
        lea ecx, ss:[esp+0x118]
        mov byte ptr ss : [esp+0x1C], 0xE
        call public_6f28e10
        lea ecx, ss:[esp+0x11C]
        call public_6eec8d0
        mov byte ptr ss : [esp+0x1C], 0xC
        lea ecx, ss:[esp+0x118]
        call public_6f28e10
        lea ecx, ss:[esp+0x108]
        mov byte ptr ss : [esp+0x1C], 0xB
        call public_6ecfa90
        lea ecx, ss:[esp+0xEC]
        call public_6f15350
        mov dword ptr ss : [esp+0x138], esi
        lea ecx, ss:[esp+0x1A0]
        mov dword ptr ss : [esp+0x1C], 0x12
        call public_6f28e10
        lea ecx, ss:[esp+0x1A4]
        call public_6eec8d0
        lea ecx, ss:[esp+0x1A0]
        mov byte ptr ss : [esp+0x1C], 0x10
        call public_6f28e10
        lea ecx, ss:[esp+0x190]
        mov byte ptr ss : [esp+0x1C], 0xF
        call public_6ecfa90
        lea ecx, ss:[esp+0x174]
        call public_6f15350
        pop ebp
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f23ce1 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_6f15710
        mov edi, eax
        lea eax, ss:[esp+0x138]
        push eax
        mov ecx, esi
        call public_6f15710
        test edi, edi
        je public_6f23d21
        test eax, eax
        je public_6f23d21
        mov edx, dword ptr ds : [eax+0x14C]
        mov edi, dword ptr ds : [edi+0x14C]
        cmp edi, edx
        setl al
        test al, al
        je public_6f23d21
        lea eax, ss:[esp+0x24]
        jmp public_6f23d4f
        public_6f23d21 : nop
        lea ecx, ss:[esp+0x134]
        push ecx
        lea edx, ss:[esp+0xB0]
        push edx
        lea ecx, ss:[esp+0x1C4]
        call public_6f22f50
        test al, al
        lea eax, ss:[esp+0x134]
        jne public_6f23d4f
        lea eax, ss:[esp+0xAC]
        public_6f23d4f : nop
        mov esi, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        call public_6f22fa0
        mov ebx, 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x18], 2
        call public_6ed2c20
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x18], bl
        call public_6ed2c20
        lea ecx, ss:[esp+0x134]
        mov byte ptr ss : [esp+0x18], 0
        call public_6ed2c20
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f23a30)
    }
}

#undef public_6f23aed
#undef public_6f23b2e
#undef public_6f23b32
#undef public_6f23ce1
#undef public_6f23d21
#undef public_6f23d4f
