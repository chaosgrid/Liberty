#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdd19a _public_6bdd19a
#define public_6bdd1b2 _public_6bdd1b2
#define public_6bdd1f0 _public_6bdd1f0
#define public_6bdd225 _public_6bdd225
#define public_6bdd238 _public_6bdd238
#define public_6bdd268 _public_6bdd268
#define public_6bdd289 _public_6bdd289
#define public_6bdd2b1 _public_6bdd2b1
#define public_6bdd2e7 _public_6bdd2e7
#define public_6bdd2ff _public_6bdd2ff
#define public_6bdd31f _public_6bdd31f
#define public_6bdd340 _public_6bdd340
#define public_6bdd34d _public_6bdd34d
#define public_6bdd38b _public_6bdd38b
#define public_6bdd397 _public_6bdd397

PROC_DECLARE(0x6bdd150, internal_6bdd150, public_6bdd150);
extern "C" NAKED register_t __cdecl internal_6bdd150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        lea ebx, ss:[ebp+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdd19a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bdd19a : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x17
        jbe public_6bdd1b2
        mov dword ptr ds : [ebx+0xC], esi
        public_6bdd1b2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd397
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], edx
        jbe public_6bdd225
        push eax
        call public_6c09d26
        mov dword ptr ss : [ebp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdd1f0
        mov dword ptr ds : [ebx+0xC], esi
        public_6bdd1f0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd397
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [edi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x17
        public_6bdd225 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bdd238
        mov dword ptr ds : [ebx+0xC], esi
        public_6bdd238 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd397
        mov eax, dword ptr ss : [ebp+0x18]
        lea edi, ss:[ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0x18], ecx
        jbe public_6bdd31f
        mov dword ptr ss : [esp+0x20], 0
        public_6bdd268 : nop
        push 8
        call public_6c09d26
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx]
        add eax, 4
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6bdd289
        mov dword ptr ds : [ebx+0xC], esi
        public_6bdd289 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd340
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6bdd2b1
        mov dword ptr ds : [ebx+0xC], esi
        public_6bdd2b1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdd340
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x14], eax
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6bdd2e7
        mov ecx, eax
        public_6bdd2e7 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdd2ff
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6bdd2ff : nop
        mov esi, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ss : [esp+0x20]
        inc esi
        inc eax
        cmp ax, word ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [esp+0x20], eax
        mov esi, 0x17
        jb public_6bdd268
        public_6bdd31f : nop
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push eax
        push edi
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdd34d
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bdd340 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bdd34d : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
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
        jbe public_6bdd38b
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6bdd38b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdd397 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6bdd150)
    }
}

#undef public_6bdd19a
#undef public_6bdd1b2
#undef public_6bdd1f0
#undef public_6bdd225
#undef public_6bdd238
#undef public_6bdd268
#undef public_6bdd289
#undef public_6bdd2b1
#undef public_6bdd2e7
#undef public_6bdd2ff
#undef public_6bdd31f
#undef public_6bdd340
#undef public_6bdd34d
#undef public_6bdd38b
#undef public_6bdd397
