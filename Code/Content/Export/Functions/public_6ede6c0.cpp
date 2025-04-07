#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ede6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab3b6);

#define public_6ede7ae _public_6ede7ae
#define public_6ede7fb _public_6ede7fb
#define public_6ede904 _public_6ede904
#define public_6ede98a _public_6ede98a
#define public_6ede98c _public_6ede98c
#define public_6ede98f _public_6ede98f

PROC_DECLARE(0x6ede6c0, internal_6ede6c0, public_6ede6c0);
extern "C" NAKED register_t __cdecl internal_6ede6c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab3b6 @0x6ede6c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab3b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x200
        mov eax, dword ptr ss : [esp+0x214]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x21C]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x21C]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x224]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x220], edi
        mov dword ptr ds : [ebx], offset public_6fb6e04
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ede98c
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ede98a
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x220]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ede98f
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ede7ae
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6ede7fb
        public_6ede7ae : nop
        push 8
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        push edi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+8]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ede7fb : nop
        push offset public_6fb6444 @0x6ede7fb*/
  FIXUP public_6ede7fb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea eax, ss:[esp+0x80]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0x84], 0
        mov byte ptr ss : [esp+0x88], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ede825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x8C], eax
        push edx
        lea eax, ss:[esp+0x1A0]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x50]
        rep movsd
        lea ecx, ss:[esp+0x54]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x20
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        lea eax, ss:[esp+0x1B]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x154]
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov byte ptr ss : [esp+0x220], 1
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x24]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x24]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x218], 0
        call public_6eec8d0
        xor esi, esi
/*FIXUP push offset public_6fb6df0 @0x6ede8c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6df0
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xC0], esi
        mov byte ptr ss : [esp+0xC4], 0
        call public_6ead640
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x34], esi
        mov byte ptr ss : [esp+0x38], 0
        mov eax, offset public_6fb6844
        jne public_6ede904
        mov eax, offset public_6fb6840
/*FIXUP public_6ede904 : nop
        push offset public_6fb572c @0x6ede904*/
  FIXUP public_6ede904 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x40]
/*FIXUP push offset public_6fb6838 @0x6ede916*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push ecx
        call public_6eec2b0
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov ecx, 0x11
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x15C]
/*FIXUP push offset public_6fb6064 @0x6ede935*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x164]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x1EC]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x128]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x124]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x28
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ede98f
        public_6ede98a : nop
        xor edi, edi
        public_6ede98c : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ede98f : nop
        mov ecx, dword ptr ss : [esp+0x210]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20C
        ret 0xC
        UNREACHABLE_TRAP(0x6ede6c0)
    }
}

#undef public_6ede7ae
#undef public_6ede7fb
#undef public_6ede904
#undef public_6ede98a
#undef public_6ede98c
#undef public_6ede98f
