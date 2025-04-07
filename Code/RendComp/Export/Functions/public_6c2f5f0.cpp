#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21af0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ea00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2f6aa _public_6c2f6aa
#define public_6c2f6b3 _public_6c2f6b3
#define public_6c2f6bc _public_6c2f6bc
#define public_6c2f6fd _public_6c2f6fd
#define public_6c2f71f _public_6c2f71f
#define public_6c2f721 _public_6c2f721
#define public_6c2f790 _public_6c2f790
#define public_6c2f7a4 _public_6c2f7a4
#define public_6c2f7ad _public_6c2f7ad
#define public_6c2f7c2 _public_6c2f7c2

PROC_DECLARE(0x6c2f5f0, internal_6c2f5f0, public_6c2f5f0);
extern "C" NAKED register_t __cdecl internal_6c2f5f0()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_6c36508 @0x6c2f5fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c36508
        push esi
        call dword ptr ds : [eax+0x60]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6c2f7c2
        lea edx, ss:[esp+0x2C]
        xor eax, eax
        mov dword ptr ss : [esp+0x30], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x34]
        rep stosd
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x74], ebp
        xor ebx, ebx
        mov dword ptr ss : [esp+0x44], 0x80000000
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x50], 3
        mov dword ptr ss : [esp+0x54], 0x8000080
        mov dword ptr ss : [esp+0x40], offset public_6c36514
        mov dword ptr ss : [esp+0x34], 0x34
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c2f6bc
        mov eax, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        push ebx
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        mov ebp, eax
        push ebp
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_6c2f6aa
        mov dword ptr ss : [esp+0x6C], ebp
        jmp public_6c2f6b3
        public_6c2f6aa : nop
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c2f6b3 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        xor ebp, ebp
        public_6c2f6bc : nop
        xor ecx, ecx
        cmp ebx, ebp
        setne cl
        dec ecx
        test ecx, 0x80004005
        jge public_6c2f6fd
        mov edx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37714 @0x6c2f6d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37714
        push 0x87
/*FIXUP push offset public_6c376c8 @0x6c2f6dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c376c8
        mov eax, 0x100001
/*FIXUP push offset public_6c37530 @0x6c2f6e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37530
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x50
        ret 0xC
        public_6c2f6fd : nop
        push 0xC
        call public_6c34eac
        add esp, 4
        cmp eax, ebp
        je public_6c2f71f
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax], offset public_6c365a4
        mov dword ptr ds : [eax+8], 1
        mov edi, eax
        jmp public_6c2f721
        public_6c2f71f : nop
        xor edi, edi
        public_6c2f721 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edi+4], eax
        cmp dword ptr ss : [esp+0x10], ebp
        jl public_6c2f7ad
        mov ecx, dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x70], ebp
        call public_6c2fdf0
        mov edx, dword ptr ss : [esp+0x64]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[edx+4]
        call public_6c2fbb0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6c2ea00
        mov ebx, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x18]
        call public_6c21af0
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebp
        je public_6c2f790
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x6C], ebp
        public_6c2f790 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, edi
        je public_6c2f7ad
        cmp eax, ebp
        je public_6c2f7a4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx+0x10], ebp
        public_6c2f7a4 : nop
        mov dword ptr ds : [ebx+0x10], edi
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6c2f7ad : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6c37250 @0x6c2f7b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push esi
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+0x10]
        public_6c2f7c2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 0xC
        UNREACHABLE_TRAP(0x6c2f5f0)
    }
}

#undef public_6c2f6aa
#undef public_6c2f6b3
#undef public_6c2f6bc
#undef public_6c2f6fd
#undef public_6c2f71f
#undef public_6c2f721
#undef public_6c2f790
#undef public_6c2f7a4
#undef public_6c2f7ad
#undef public_6c2f7c2
