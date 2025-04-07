#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_62802d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_6288b30);
CLANG_FORWARD_PROC_SYMBOL(public_6289100);
CLANG_FORWARD_PROC_SYMBOL(public_628f700);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d70);

#define public_62889de _public_62889de
#define public_6288a47 _public_6288a47
#define public_6288a7b _public_6288a7b
#define public_6288a97 _public_6288a97
#define public_6288ac1 _public_6288ac1
#define public_6288ae0 _public_6288ae0
#define public_6288af9 _public_6288af9
#define public_6288b1b _public_6288b1b

PROC_DECLARE(0x6288970, internal_6288970, public_6288970);
extern "C" NAKED register_t __cdecl internal_6288970()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        push ebp
        push ebx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x6C]
        mov esi, eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[ebp+0x64]
        push 1
        push edx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], 0
        call public_628f700
        push esi
        mov ecx, ebp
        call public_6262d50
        mov ecx, eax
        call public_62f0d70
        test eax, eax
        jne public_62889de
        call public_62802d0
        public_62889de : nop
        mov esi, dword ptr ss : [esp+0x5C]
        push esi
        push eax
        push ebp
        call public_6289100
        mov eax, dword ptr ss : [ebp+0x54]
        add esp, 0xC
        test eax, eax
        je public_6288ae0
        push edi
        mov ecx, 0xD
        lea edi, ss:[esp+0x24]
        rep movsd
        mov edi, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, 1
        mov byte ptr ss : [esp+0x40], 0
        jne public_6288a47
        mov eax, dword ptr ds : [public_63eb364]
        mov ecx, dword ptr ds : [public_63eb368]
        mov edx, dword ptr ds : [public_63fc0dc]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_63fc0e0]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [public_63fc0e4]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_6288a7b
        public_6288a47 : nop
        cmp eax, 2
        jne public_6288a7b
        mov edx, dword ptr ds : [public_63eb360]
        mov eax, dword ptr ds : [public_63fc0e8]
        mov ecx, dword ptr ds : [public_63fc0ec]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        public_6288a7b : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6288ac1
        public_6288a97 : nop
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        push ebp
        call public_6288b30
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6288a97
        public_6288ac1 : nop
        mov al, byte ptr ds : [edi+0x1D]
        test al, al
        pop edi
        je public_6288b1b
        push 1
        mov ecx, ebp
        call public_62ad540
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        lea esp, ss:[esp]
        public_6288ae0 : nop
        mov ecx, ebp
        call public_6262d50
        mov ecx, dword ptr ss : [esp+0xC]
        add eax, 0xC
        test ecx, ecx
        mov eax, dword ptr ds : [eax]
        jne public_6288af9
        mov ecx, offset public_63997b0
        public_6288af9 : nop
        push eax
        push ecx
        push 0x27A
/*FIXUP push offset public_639c19c @0x6288b00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c19c
        mov edx, 0x100001
/*FIXUP push offset public_639c140 @0x6288b0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c140
        push edx
        mov edx, dword ptr ds : [public_6399028]
        call dword ptr ds : [edx]
        add esp, 0x18
        public_6288b1b : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6288970)
    }
}

#undef public_62889de
#undef public_6288a47
#undef public_6288a7b
#undef public_6288a97
#undef public_6288ac1
#undef public_6288ae0
#undef public_6288af9
#undef public_6288b1b
