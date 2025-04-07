#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_6211850);
CLANG_FORWARD_PROC_SYMBOL(public_6224710);
CLANG_FORWARD_PROC_SYMBOL(public_6225e30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248f7c);

#define public_6225c19 _public_6225c19
#define public_6225c39 _public_6225c39
#define public_6225c3d _public_6225c3d
#define public_6225c42 _public_6225c42
#define public_6225c8f _public_6225c8f
#define public_6225c91 _public_6225c91
#define public_6225cad _public_6225cad
#define public_6225ce9 _public_6225ce9
#define public_6225d0e _public_6225d0e
#define public_6225d26 _public_6225d26
#define public_6225d6c _public_6225d6c
#define public_6225d9d _public_6225d9d
#define public_6225dd9 _public_6225dd9
#define public_6225dfb _public_6225dfb
#define public_6225e08 _public_6225e08
#define public_6225e0e _public_6225e0e

PROC_DECLARE(0x6225be0, internal_6225be0, public_6225be0);
extern "C" NAKED register_t __cdecl internal_6225be0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248f7c @0x6225be8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248f7c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_6225dfb
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6225c19 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6225c3d
        cmp cl, bl
        je public_6225c39
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6225c3d
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6225c19
        public_6225c39 : nop
        xor eax, eax
        jmp public_6225c42
        public_6225c3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6225c42 : nop
        cmp eax, ebx
        jne public_6225dfb
        push 0x90
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_6225c8f
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_6224710
        mov dword ptr ds : [esi], offset public_624df90
        mov dword ptr ds : [edi], offset public_624dff0
        mov dword ptr ds : [esi+0x8C], 1
        mov ebp, esi
        jmp public_6225c91
        public_6225c8f : nop
        xor ebp, ebp
        public_6225c91 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        jne public_6225cad
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], ebp
        jmp public_6225e0e
        public_6225cad : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        push eax
        push esi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6225e08
        mov dword ptr ss : [esp+0x1C], esi
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x30], 2
        cmp eax, ebx
        je public_6225ce9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_6225ce9 : nop
        mov dword ptr ds : [esi+0x60], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x68], offset public_624bd80
        je public_6225d0e
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, ebx
        je public_6225d0e
        push eax
        call public_62460e0
        add esp, 4
        public_6225d0e : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x30], 4
        cmp eax, ebx
        je public_6225d26
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_6225d26 : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x34], 3
        call public_620b3f0
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x14]
        mov eax, dword ptr ds : [eax]
        push eax
        call public_620b3f0
        lea edx, ss:[esp+0x38]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], ecx
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x3C], eax
        call public_6225e30
        test al, al
        jne public_6225d9d
        public_6225d6c : nop
        lea eax, ss:[esp+0x20]
        push 0
        push eax
        lea ecx, ss:[esp+0x44]
        call public_6211850
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, edi
        call public_620c160
        lea eax, ss:[esp+0x38]
        lea ecx, ss:[esp+0x3C]
        push eax
        call public_6225e30
        test al, al
        je public_6225d6c
        public_6225d9d : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x30], 5
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_6225dd9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_6225dd9 : nop
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        push ebp
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x44]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        jmp public_6225e0e
        public_6225dfb : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6225e0e
        public_6225e08 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx], ebp
        public_6225e0e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6225be0)
    }
}

#undef public_6225c19
#undef public_6225c39
#undef public_6225c3d
#undef public_6225c42
#undef public_6225c8f
#undef public_6225c91
#undef public_6225cad
#undef public_6225ce9
#undef public_6225d0e
#undef public_6225d26
#undef public_6225d6c
#undef public_6225d9d
#undef public_6225dd9
#undef public_6225dfb
#undef public_6225e08
#undef public_6225e0e
