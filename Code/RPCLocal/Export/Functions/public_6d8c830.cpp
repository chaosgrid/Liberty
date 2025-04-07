#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8c830);
CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8c8a5 _public_6d8c8a5
#define public_6d8c8b8 _public_6d8c8b8
#define public_6d8c8f6 _public_6d8c8f6
#define public_6d8c8f8 _public_6d8c8f8
#define public_6d8c923 _public_6d8c923
#define public_6d8c977 _public_6d8c977
#define public_6d8c981 _public_6d8c981
#define public_6d8c9a1 _public_6d8c9a1
#define public_6d8c9c4 _public_6d8c9c4
#define public_6d8c9e0 _public_6d8c9e0
#define public_6d8c9e6 _public_6d8c9e6
#define public_6d8ca06 _public_6d8ca06
#define public_6d8ca10 _public_6d8ca10
#define public_6d8ca2c _public_6d8ca2c
#define public_6d8ca60 _public_6d8ca60
#define public_6d8ca8c _public_6d8ca8c
#define public_6d8caae _public_6d8caae

PROC_DECLARE(0x6d8c830, internal_6d8c830, public_6d8c830);
extern "C" NAKED register_t __cdecl internal_6d8c830()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x20], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ds : [edi+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ds : [edi+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        mov dword ptr ds : [edi+0x6C], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [edi+0x30], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [edi+0x34], edx
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [edi+0x38], eax
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [edi+0x3C], ecx
        mov edx, dword ptr ds : [ebx+0x44]
        mov dword ptr ds : [edi+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        shl eax, 2
        push eax
        call public_6db1f8a
        mov dword ptr ds : [edi+0x44], eax
        mov ecx, dword ptr ds : [ebx+0x44]
        xor ebp, ebp
        add esp, 4
        xor eax, eax
        cmp ecx, ebp
        jle public_6d8c8b8
        lea ecx, ds:[ebx+0x24]
        public_6d8c8a5 : nop
        mov edx, dword ptr ds : [edi+0x44]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+eax*4], esi
        mov edx, dword ptr ds : [ebx+0x44]
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_6d8c8a5
        public_6d8c8b8 : nop
        mov eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [edi+0x4C], eax
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [edi+0x50], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [edi+0x54], edx
        mov eax, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [edi+0x58], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ds : [edi+0x5C], ecx
        mov edx, dword ptr ds : [ebx+0x60]
        mov dword ptr ds : [edi+0x60], edx
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [edi+0x64], eax
        mov eax, dword ptr ds : [ebx+0x78]
        mov esi, dword ptr ds : [ebx+0x74]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d8c9a1
        jmp public_6d8c8f8
        public_6d8c8f6 : nop
        xor ebp, ebp
        public_6d8c8f8 : nop
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebp
        je public_6d8c923
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov word ptr ds : [eax+0xC], bp
        mov word ptr ds : [eax+0x10], bp
        mov dword ptr ds : [eax+0x14], ebp
        mov byte ptr ds : [eax+0xE], 0
        mov byte ptr ds : [eax+0xF], 0
        mov ebp, eax
        public_6d8c923 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp+4], edx
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [ebp+8]
        mov ax, word ptr ds : [esi+2]
        mov word ptr ss : [ebp+0xC], ax
        mov cl, byte ptr ds : [esi+0xC]
        mov byte ptr ss : [ebp+0xE], cl
        mov ecx, esi
        call dword ptr ds : [public_6db30d8]
        test al, al
        jne public_6d8c981
        mov edi, dword ptr ds : [esi+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov eax, ecx
        xor edx, edx
        mov dx, ax
        mov word ptr ss : [ebp+0x10], ax
        push edx
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        mov edx, eax
        public_6d8c977 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6d8c977
        public_6d8c981 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        lea ecx, ds:[eax+0x70]
        call public_6d91580
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x20
        cmp esi, eax
        jne public_6d8c8f6
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d8c9a1 : nop
        lea ecx, ds:[ebx+0x80]
        lea eax, ds:[edi+0x74]
        cmp eax, ecx
        je public_6d8ca2c
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d8c9e0
        public_6d8c9c4 : nop
        cmp ecx, edx
        je public_6d8c9e0
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6d8c9c4
        public_6d8c9e0 : nop
        cmp eax, esi
        mov ebp, eax
        je public_6d8ca06
        public_6d8c9e6 : nop
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0x74]
        call dword ptr ds : [public_6db309c]
        cmp ebp, esi
        jne public_6d8c9e6
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6d8ca06 : nop
        cmp ecx, edx
        mov ebp, ecx
        je public_6d8ca2c
        lea esp, ss:[esp]
        public_6d8ca10 : nop
        lea eax, ss:[ebp+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[edi+0x74]
        call dword ptr ds : [public_6db30f4]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x18]
        jne public_6d8ca10
        public_6d8ca2c : nop
        add ebx, 0x8C
        lea ebp, ds:[edi+0x80]
        cmp ebp, ebx
        je public_6d8caae
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6db30f0]
        cmp esi, edi
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], eax
        je public_6d8ca8c
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx]
        public_6d8ca60 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_6d8ca8c
        add eax, 8
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d8ca60
        public_6d8ca8c : nop
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6db3060]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6db30cc]
        public_6d8caae : nop
        mov dl, byte ptr ds : [ebx+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], edx
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d8c830)
    }
}

#undef public_6d8c8a5
#undef public_6d8c8b8
#undef public_6d8c8f6
#undef public_6d8c8f8
#undef public_6d8c923
#undef public_6d8c977
#undef public_6d8c981
#undef public_6d8c9a1
#undef public_6d8c9c4
#undef public_6d8c9e0
#undef public_6d8c9e6
#undef public_6d8ca06
#undef public_6d8ca10
#undef public_6d8ca2c
#undef public_6d8ca60
#undef public_6d8ca8c
#undef public_6d8caae
