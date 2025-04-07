#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9a452 _public_6d9a452
#define public_6d9a46a _public_6d9a46a
#define public_6d9a492 _public_6d9a492
#define public_6d9a4ba _public_6d9a4ba
#define public_6d9a4e0 _public_6d9a4e0
#define public_6d9a506 _public_6d9a506
#define public_6d9a548 _public_6d9a548
#define public_6d9a57c _public_6d9a57c
#define public_6d9a59c _public_6d9a59c
#define public_6d9a5da _public_6d9a5da
#define public_6d9a5e6 _public_6d9a5e6

PROC_DECLARE(0x6d9a410, internal_6d9a410, public_6d9a410);
extern "C" NAKED register_t __cdecl internal_6d9a410()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9a452
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9a452 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6d9a46a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6d9a46a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6d9a492
        mov dword ptr ds : [ebx+0xC], ecx
        public_6d9a492 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
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
        jbe public_6d9a4ba
        mov dword ptr ds : [ebx+0xC], ecx
        public_6d9a4ba : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6d9a4e0
        mov dword ptr ds : [ebx+0xC], ecx
        public_6d9a4e0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x30], dl
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6d9a506
        mov dword ptr ds : [ebx+0xC], ecx
        public_6d9a506 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], ecx
        jbe public_6d9a57c
        push eax
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp+0x34], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6d9a548
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d9a548 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9a5e6
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x34]
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
        public_6d9a57c : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9a59c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9a59c : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6da16b0
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
        jbe public_6d9a5da
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6d9a5da : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d9a5e6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d9a410)
    }
}

#undef public_6d9a452
#undef public_6d9a46a
#undef public_6d9a492
#undef public_6d9a4ba
#undef public_6d9a4e0
#undef public_6d9a506
#undef public_6d9a548
#undef public_6d9a57c
#undef public_6d9a59c
#undef public_6d9a5da
#undef public_6d9a5e6
