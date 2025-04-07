#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3c899 _public_6b3c899
#define public_6b3c8b1 _public_6b3c8b1
#define public_6b3c8c1 _public_6b3c8c1
#define public_6b3c8e0 _public_6b3c8e0
#define public_6b3c8f0 _public_6b3c8f0
#define public_6b3c90f _public_6b3c90f
#define public_6b3c91f _public_6b3c91f
#define public_6b3c93e _public_6b3c93e
#define public_6b3c94e _public_6b3c94e
#define public_6b3c96c _public_6b3c96c
#define public_6b3c97c _public_6b3c97c
#define public_6b3c997 _public_6b3c997
#define public_6b3c9a7 _public_6b3c9a7
#define public_6b3c9c4 _public_6b3c9c4
#define public_6b3c9d4 _public_6b3c9d4
#define public_6b3c9f3 _public_6b3c9f3
#define public_6b3ca03 _public_6b3ca03
#define public_6b3ca28 _public_6b3ca28
#define public_6b3ca38 _public_6b3ca38
#define public_6b3ca62 _public_6b3ca62
#define public_6b3ca82 _public_6b3ca82
#define public_6b3cab3 _public_6b3cab3

PROC_DECLARE(0x6b3c850, internal_6b3c850, public_6b3c850);
extern "C" NAKED register_t __cdecl internal_6b3c850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3c899
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3c899 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6b3c8b1
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c8b1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c8c1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c8c1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c8e0
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c8e0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c8f0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c8f0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c90f
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c90f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c91f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c91f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c93e
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c93e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c94e
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c94e : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [ebp+0x34]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c96c
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c96c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c97c
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c97c : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [ebp+0x38]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c997
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c997 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c9a7
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c9a7 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x39]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c9c4
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c9c4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3c9d4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3c9d4 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3c9f3
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3c9f3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3ca03
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ca03 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6b3ca62
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b3ca28
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3ca28 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b3ca38
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ca38 : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x3C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6b3ca62 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3ca82
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ca82 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6b3cab3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b3cab3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b3c850)
    }
}

#undef public_6b3c899
#undef public_6b3c8b1
#undef public_6b3c8c1
#undef public_6b3c8e0
#undef public_6b3c8f0
#undef public_6b3c90f
#undef public_6b3c91f
#undef public_6b3c93e
#undef public_6b3c94e
#undef public_6b3c96c
#undef public_6b3c97c
#undef public_6b3c997
#undef public_6b3c9a7
#undef public_6b3c9c4
#undef public_6b3c9d4
#undef public_6b3c9f3
#undef public_6b3ca03
#undef public_6b3ca28
#undef public_6b3ca38
#undef public_6b3ca62
#undef public_6b3ca82
#undef public_6b3cab3
