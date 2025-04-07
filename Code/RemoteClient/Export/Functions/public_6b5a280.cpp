#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5a2c9 _public_6b5a2c9
#define public_6b5a2df _public_6b5a2df
#define public_6b5a2ef _public_6b5a2ef
#define public_6b5a30c _public_6b5a30c
#define public_6b5a31c _public_6b5a31c
#define public_6b5a33b _public_6b5a33b
#define public_6b5a34b _public_6b5a34b
#define public_6b5a368 _public_6b5a368
#define public_6b5a378 _public_6b5a378
#define public_6b5a39f _public_6b5a39f
#define public_6b5a3d2 _public_6b5a3d2

PROC_DECLARE(0x6b5a280, internal_6b5a280, public_6b5a280);
extern "C" NAKED register_t __cdecl internal_6b5a280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a2c9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5a2c9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b5a2df
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a2df : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a2ef
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a2ef : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a30c
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a30c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a31c
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a31c : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a33b
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a33b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a34b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a34b : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a368
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a368 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a378
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a378 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x2C]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a39f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a39f : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b5a3d2
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5a3d2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b5a280)
    }
}

#undef public_6b5a2c9
#undef public_6b5a2df
#undef public_6b5a2ef
#undef public_6b5a30c
#undef public_6b5a31c
#undef public_6b5a33b
#undef public_6b5a34b
#undef public_6b5a368
#undef public_6b5a378
#undef public_6b5a39f
#undef public_6b5a3d2
