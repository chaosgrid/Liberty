#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9b10);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb994b _public_6eb994b
#define public_6eb9990 _public_6eb9990
#define public_6eb9a2f _public_6eb9a2f
#define public_6eb9a89 _public_6eb9a89
#define public_6eb9a8b _public_6eb9a8b
#define public_6eb9a9d _public_6eb9a9d
#define public_6eb9ab2 _public_6eb9ab2
#define public_6eb9ad1 _public_6eb9ad1
#define public_6eb9af7 _public_6eb9af7

PROC_DECLARE(0x6eb9920, internal_6eb9920, public_6eb9920);
extern "C" NAKED register_t __cdecl internal_6eb9920()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        xor ebp, ebp
        mov dword ptr ds : [esi+0x78], 2
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 4
        je public_6eb994b
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x7C], al
        public_6eb994b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov cl, byte ptr ds : [esi+0x7C]
        xor bl, bl
        xor al, al
        test cl, cl
        mov byte ptr ds : [esi+0x7D], 1
        je public_6eb9a89
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1ecc
        mov eax, 1
        public_6eb9990 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb9990
        mov cl, byte ptr ds : [esi+0x7D]
        test cl, cl
        mov eax, 1
        je public_6eb9a2f
        mov ecx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        add ecx, 0x2C
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1f04 @0x6eb99c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1f04
        push 1
        push ecx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        add esp, 0xC
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x68]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, edx
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x100]
        mov eax, 2
/*FIXUP public_6eb9a2f : nop
        push offset public_6ed1f74 @0x6eb9a2f*/
  FIXUP public_6eb9a2f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1f74
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6eb71b0
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1e7c @0x6eb9a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e7c
        push ecx
        call public_6eb7180
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        push eax
        call dword ptr ds : [edx+0x110]
        test eax, eax
        push 1
        mov ecx, esi
        setge bl
        call public_6eb9b10
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        test eax, eax
        setge al
        test bl, bl
        je public_6eb9a89
        test al, al
        je public_6eb9a89
        mov ecx, 1
        jmp public_6eb9a8b
        public_6eb9a89 : nop
        xor ecx, ecx
        public_6eb9a8b : nop
        test bl, bl
        mov byte ptr ds : [esi+0x7D], cl
        je public_6eb9a9d
        test al, al
        je public_6eb9a9d
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_6eb9af7
        public_6eb9a9d : nop
        test bl, bl
        mov dword ptr ds : [esi+0x78], 1
        mov byte ptr ds : [esi+0x7D], bl
        je public_6eb9ab2
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_6eb9af7
        public_6eb9ab2 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+8]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6eb9ad1
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6eb9ad1 : nop
        push 0
        mov ecx, esi
        mov dword ptr ds : [esi+0x78], 1
        mov byte ptr ds : [esi+0x7D], 0
        mov byte ptr ds : [esi+0x7C], 0
        call public_6eb9b10
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov ebp, eax
        public_6eb9af7 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6eb9920)
    }
}

#undef public_6eb994b
#undef public_6eb9990
#undef public_6eb9a2f
#undef public_6eb9a89
#undef public_6eb9a8b
#undef public_6eb9a9d
#undef public_6eb9ab2
#undef public_6eb9ad1
#undef public_6eb9af7
