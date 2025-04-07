#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfa1c2 _public_6bfa1c2
#define public_6bfa1da _public_6bfa1da
#define public_6bfa202 _public_6bfa202
#define public_6bfa228 _public_6bfa228
#define public_6bfa24c _public_6bfa24c
#define public_6bfa28e _public_6bfa28e
#define public_6bfa2bd _public_6bfa2bd
#define public_6bfa2dd _public_6bfa2dd
#define public_6bfa31b _public_6bfa31b
#define public_6bfa327 _public_6bfa327

PROC_DECLARE(0x6bfa180, internal_6bfa180, public_6bfa180);
extern "C" NAKED register_t __cdecl internal_6bfa180()
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
        je public_6bfa1c2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfa1c2 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6bfa1da
        mov dword ptr ds : [ebx+0xC], ecx
        public_6bfa1da : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfa327
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
        jbe public_6bfa202
        mov dword ptr ds : [ebx+0xC], ecx
        public_6bfa202 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfa327
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6bfa228
        mov dword ptr ds : [ebx+0xC], ecx
        public_6bfa228 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfa327
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x2C], dl
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6bfa24c
        mov dword ptr ds : [ebx+0xC], ecx
        public_6bfa24c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfa327
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        mov dword ptr ds : [esi], ecx
        je public_6bfa2bd
        movzx edi, al
        shl edi, 1
        push edi
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6c0b1ec]
        mov dword ptr ss : [ebp+0x24], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, edi
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfa28e
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bfa28e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfa327
        mov eax, dword ptr ds : [esi]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0x24]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add eax, ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6bfa2bd : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfa2dd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfa2dd : nop
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
        jbe public_6bfa31b
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6bfa31b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfa327 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfa180)
    }
}

#undef public_6bfa1c2
#undef public_6bfa1da
#undef public_6bfa202
#undef public_6bfa228
#undef public_6bfa24c
#undef public_6bfa28e
#undef public_6bfa2bd
#undef public_6bfa2dd
#undef public_6bfa31b
#undef public_6bfa327
