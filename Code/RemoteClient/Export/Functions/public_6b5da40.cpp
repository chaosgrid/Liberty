#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5da84 _public_6b5da84
#define public_6b5da9c _public_6b5da9c
#define public_6b5dac6 _public_6b5dac6
#define public_6b5dafd _public_6b5dafd
#define public_6b5db27 _public_6b5db27
#define public_6b5db53 _public_6b5db53
#define public_6b5db93 _public_6b5db93
#define public_6b5dbc5 _public_6b5dbc5
#define public_6b5dbf7 _public_6b5dbf7
#define public_6b5dc12 _public_6b5dc12
#define public_6b5dc3a _public_6b5dc3a
#define public_6b5dc78 _public_6b5dc78
#define public_6b5dc84 _public_6b5dc84

PROC_DECLARE(0x6b5da40, internal_6b5da40, public_6b5da40);
extern "C" NAKED register_t __cdecl internal_6b5da40()
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
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5da84
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5da84 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6b5da9c
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5da9c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x20], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5dac6
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5dac6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5dafd
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5dafd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5db27
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5db27 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [edi+0x2C], dx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5db53
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5db53 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x40]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b5dc12
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5db93
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5db93 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x30]
        call public_6b39ec0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5dbc5
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5dbc5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x4C]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5dbf7
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5dbf7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5dc84
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x58]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6b5dc12 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x64], 0
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5dc3a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5dc3a : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6b5dc78
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b5dc78 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b5dc84 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b5da40)
    }
}

#undef public_6b5da84
#undef public_6b5da9c
#undef public_6b5dac6
#undef public_6b5dafd
#undef public_6b5db27
#undef public_6b5db53
#undef public_6b5db93
#undef public_6b5dbc5
#undef public_6b5dbf7
#undef public_6b5dc12
#undef public_6b5dc3a
#undef public_6b5dc78
#undef public_6b5dc84
