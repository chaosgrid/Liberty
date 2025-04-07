#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3cb12 _public_6b3cb12
#define public_6b3cb2a _public_6b3cb2a
#define public_6b3cb52 _public_6b3cb52
#define public_6b3cb7a _public_6b3cb7a
#define public_6b3cba2 _public_6b3cba2
#define public_6b3cbc8 _public_6b3cbc8
#define public_6b3cbec _public_6b3cbec
#define public_6b3cc12 _public_6b3cc12
#define public_6b3cc3a _public_6b3cc3a
#define public_6b3cc67 _public_6b3cc67
#define public_6b3cc91 _public_6b3cc91
#define public_6b3ccaa _public_6b3ccaa
#define public_6b3ccde _public_6b3ccde
#define public_6b3ccfe _public_6b3ccfe
#define public_6b3cd3c _public_6b3cd3c
#define public_6b3cd48 _public_6b3cd48

PROC_DECLARE(0x6b3cad0, internal_6b3cad0, public_6b3cad0);
extern "C" NAKED register_t __cdecl internal_6b3cad0()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3cb12
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3cb12 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6b3cb2a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cb2a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cb52
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cb52 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cb7a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cb7a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cba2
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cba2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cbc8
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cbc8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cbec
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cbec : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cc12
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cc12 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        jbe public_6b3cc3a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cc3a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x28], edx
        jbe public_6b3ccde
        mov edx, dword ptr ds : [ebx]
        add edx, eax
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b3cc67
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b3cc67 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
        mov eax, dword ptr ss : [ebp+0x28]
        push eax
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0x3C], eax
        jne public_6b3cc91
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b3cc91 : nop
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ds : [ebx]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3ccaa
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b3ccaa : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3cd48
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
        public_6b3ccde : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3ccfe
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3ccfe : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6b4ecd0
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
        jbe public_6b3cd3c
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b3cd3c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b3cd48 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3cad0)
    }
}

#undef public_6b3cb12
#undef public_6b3cb2a
#undef public_6b3cb52
#undef public_6b3cb7a
#undef public_6b3cba2
#undef public_6b3cbc8
#undef public_6b3cbec
#undef public_6b3cc12
#undef public_6b3cc3a
#undef public_6b3cc67
#undef public_6b3cc91
#undef public_6b3ccaa
#undef public_6b3ccde
#undef public_6b3ccfe
#undef public_6b3cd3c
#undef public_6b3cd48
