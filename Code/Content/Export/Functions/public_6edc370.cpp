#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edc370);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab42b);

#define public_6edc430 _public_6edc430
#define public_6edc433 _public_6edc433
#define public_6edc450 _public_6edc450
#define public_6edc464 _public_6edc464
#define public_6edc495 _public_6edc495
#define public_6edc4b3 _public_6edc4b3
#define public_6edc4cb _public_6edc4cb
#define public_6edc502 _public_6edc502
#define public_6edc54c _public_6edc54c
#define public_6edc583 _public_6edc583

PROC_DECLARE(0x6edc370, internal_6edc370, public_6edc370);
extern "C" NAKED register_t __cdecl internal_6edc370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab42b @0x6edc372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab42b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x168
        mov eax, dword ptr ss : [esp+0x17C]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ebp
        push esi
        xor esi, esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x184]
        lea ebp, ds:[ebx+0x14]
        push edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+0x10], esi
        lea edi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x2C], esi
        lea ecx, ss:[esp+0x18C]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x188], esi
        mov dword ptr ds : [ebx], offset public_6fb6aa8
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        lea edx, ss:[esp+0x24]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x198]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        test eax, 0x7F0000
        je public_6edc450
        cmp edi, esi
        je public_6edc430
        push 0x4000
        mov ecx, edi
        call public_6fa6e30
        test al, al
        jne public_6edc464
        public_6edc430 : nop
        mov dword ptr ds : [ebx+0x24], esi
        public_6edc433 : nop
        mov ecx, dword ptr ss : [esp+0x178]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x174
        ret 0x10
        public_6edc450 : nop
        cmp edi, esi
        je public_6edc430
        push 0x800
        mov ecx, edi
        call public_6fa6e30
        test al, al
        je public_6edc430
        public_6edc464 : nop
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edc433
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        je public_6edc495
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edc502
        public_6edc495 : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6edc4cb
        public_6edc4b3 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edc4b3
        public_6edc4cb : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], edx
        xor esi, esi
        public_6edc502 : nop
        fld dword ptr ss : [esp+0x194]
        fcomp qword ptr ds : [public_6fb6aa0]
        fnstsw ax
        test ah, 5
        jp public_6edc54c
/*FIXUP push offset public_6fb6a80 @0x6edc516*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6a80
        lea eax, ss:[esp+0x2C]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0x30], esi
        mov byte ptr ss : [esp+0x34], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6edc534*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], eax
        push edx
        lea eax, ss:[esp+0x108]
        push eax
        jmp public_6edc583
/*FIXUP public_6edc54c : nop
        push offset public_6fb6a64 @0x6edc54c*/
  FIXUP public_6edc54c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6a64
        lea ecx, ss:[esp+0x70]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x74], esi
        mov byte ptr ss : [esp+0x78], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0x78], eax
/*FIXUP push offset public_6fb6064 @0x6edc56e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x14C]
        push ecx
        public_6edc583 : nop
        call public_6eeaf10
        lea edx, ss:[esp+0xCC]
        add esp, 0x1C
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0xAC]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        jmp public_6edc433
        UNREACHABLE_TRAP(0x6edc370)
    }
}

#undef public_6edc430
#undef public_6edc433
#undef public_6edc450
#undef public_6edc464
#undef public_6edc495
#undef public_6edc4b3
#undef public_6edc4cb
#undef public_6edc502
#undef public_6edc54c
#undef public_6edc583
