#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6beea02 _public_6beea02
#define public_6beea1a _public_6beea1a
#define public_6beea42 _public_6beea42
#define public_6beea6a _public_6beea6a
#define public_6beea92 _public_6beea92
#define public_6beeab8 _public_6beeab8
#define public_6beeadc _public_6beeadc
#define public_6beeb02 _public_6beeb02
#define public_6beeb2a _public_6beeb2a
#define public_6beeb6c _public_6beeb6c
#define public_6beeba0 _public_6beeba0
#define public_6beebc0 _public_6beebc0
#define public_6beebfe _public_6beebfe
#define public_6beec0a _public_6beec0a

PROC_DECLARE(0x6bee9c0, internal_6bee9c0, public_6bee9c0);
extern "C" NAKED register_t __cdecl internal_6bee9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6beea02
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6beea02 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6beea1a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beea1a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beea42
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beea42 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x30], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beea6a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beea6a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beea92
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beea92 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x34], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beeab8
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beeab8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x38], dl
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beeadc
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beeadc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x39], dl
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beeb02
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beeb02 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6beeb2a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6beeb2a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x28], ecx
        jbe public_6beeba0
        push eax
        call public_6c09d26
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp+0x3C], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6beeb6c
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6beeb6c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6beec0a
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x3C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        public_6beeba0 : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6beebc0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6beebc0 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6beebfe
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6beebfe : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6beec0a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bee9c0)
    }
}

#undef public_6beea02
#undef public_6beea1a
#undef public_6beea42
#undef public_6beea6a
#undef public_6beea92
#undef public_6beeab8
#undef public_6beeadc
#undef public_6beeb02
#undef public_6beeb2a
#undef public_6beeb6c
#undef public_6beeba0
#undef public_6beebc0
#undef public_6beebfe
#undef public_6beec0a
