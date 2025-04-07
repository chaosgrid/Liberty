#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b64cca _public_6b64cca
#define public_6b64cf4 _public_6b64cf4
#define public_6b64d20 _public_6b64d20
#define public_6b64daf _public_6b64daf
#define public_6b64dd6 _public_6b64dd6
#define public_6b64dfd _public_6b64dfd
#define public_6b64e24 _public_6b64e24
#define public_6b64e5b _public_6b64e5b
#define public_6b64e71 _public_6b64e71
#define public_6b64e91 _public_6b64e91
#define public_6b64ea7 _public_6b64ea7
#define public_6b64ed8 _public_6b64ed8
#define public_6b64f0b _public_6b64f0b
#define public_6b64f17 _public_6b64f17

PROC_DECLARE(0x6b64c70, internal_6b64c70, public_6b64c70);
extern "C" NAKED register_t __cdecl internal_6b64c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6b4e740
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6b64f17
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b64cca
        mov dword ptr ds : [esi+0xC], eax
        public_6b64cca : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b64cf4
        mov dword ptr ds : [esi+0xC], eax
        public_6b64cf4 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b64d20
        mov dword ptr ds : [esi+0xC], eax
        public_6b64d20 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6b3a160
        fld dword ptr ds : [edi+0x38]
        fmul qword ptr ds : [public_6b6c1e0]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x3C]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x28], al
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x40]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x24], al
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x34]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x13], al
        call public_6b6a3f8
        mov ecx, dword ptr ds : [esi]
        mov dl, al
        mov eax, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [esi], ecx
        mov eax, 0x16
        jbe public_6b64daf
        mov dword ptr ds : [esi+0xC], eax
        public_6b64daf : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6b64dd6
        mov dword ptr ds : [esi+0xC], eax
        public_6b64dd6 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6b64dfd
        mov dword ptr ds : [esi+0xC], eax
        public_6b64dfd : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6b64e24
        mov dword ptr ds : [esi+0xC], eax
        public_6b64e24 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b64f17
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], dl
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6b6c1e0]
        inc ecx
        mov dword ptr ss : [ebp], ecx
        call public_6b6a3f8
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b64e5b
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b64e5b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b64e71
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b64e71 : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b64e91
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b64e91 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b64ea7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b64ea7 : nop
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [edi+0x44]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebp
        mov ecx, edi
        mov dword ptr ss : [ebp], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b64ed8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b64ed8 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
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
        jbe public_6b64f0b
        mov dword ptr ds : [ecx+0x10], esi
        public_6b64f0b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b64f17 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b64c70)
    }
}

#undef public_6b64cca
#undef public_6b64cf4
#undef public_6b64d20
#undef public_6b64daf
#undef public_6b64dd6
#undef public_6b64dfd
#undef public_6b64e24
#undef public_6b64e5b
#undef public_6b64e71
#undef public_6b64e91
#undef public_6b64ea7
#undef public_6b64ed8
#undef public_6b64f0b
#undef public_6b64f17
