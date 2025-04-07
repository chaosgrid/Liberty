#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d96fd9 _public_6d96fd9
#define public_6d96ff1 _public_6d96ff1
#define public_6d97001 _public_6d97001
#define public_6d97020 _public_6d97020
#define public_6d97030 _public_6d97030
#define public_6d9704f _public_6d9704f
#define public_6d9705f _public_6d9705f
#define public_6d9707e _public_6d9707e
#define public_6d9708e _public_6d9708e
#define public_6d970ac _public_6d970ac
#define public_6d970bc _public_6d970bc
#define public_6d970d7 _public_6d970d7
#define public_6d970e7 _public_6d970e7
#define public_6d97104 _public_6d97104
#define public_6d97114 _public_6d97114
#define public_6d97133 _public_6d97133
#define public_6d97143 _public_6d97143
#define public_6d97168 _public_6d97168
#define public_6d97178 _public_6d97178
#define public_6d971a2 _public_6d971a2
#define public_6d971c2 _public_6d971c2
#define public_6d971f3 _public_6d971f3

PROC_DECLARE(0x6d96f90, internal_6d96f90, public_6d96f90);
extern "C" NAKED register_t __cdecl internal_6d96f90()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d96fd9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d96fd9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6d96ff1
        mov dword ptr ds : [ebx+0xC], edi
        public_6d96ff1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d97001
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d97001 : nop
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
        jbe public_6d97020
        mov dword ptr ds : [ebx+0xC], edi
        public_6d97020 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d97030
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d97030 : nop
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
        jbe public_6d9704f
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9704f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9705f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9705f : nop
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
        jbe public_6d9707e
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9707e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9708e
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9708e : nop
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
        jbe public_6d970ac
        mov dword ptr ds : [ebx+0xC], edi
        public_6d970ac : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d970bc
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d970bc : nop
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
        jbe public_6d970d7
        mov dword ptr ds : [ebx+0xC], edi
        public_6d970d7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d970e7
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d970e7 : nop
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
        jbe public_6d97104
        mov dword ptr ds : [ebx+0xC], edi
        public_6d97104 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d97114
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d97114 : nop
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
        jbe public_6d97133
        mov dword ptr ds : [ebx+0xC], edi
        public_6d97133 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d97143
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d97143 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6d971a2
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d97168
        mov dword ptr ds : [ebx+0xC], edi
        public_6d97168 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d97178
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d97178 : nop
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
        public_6d971a2 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d971c2
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d971c2 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6d971f3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d971f3 : nop
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
        UNREACHABLE_TRAP(0x6d96f90)
    }
}

#undef public_6d96fd9
#undef public_6d96ff1
#undef public_6d97001
#undef public_6d97020
#undef public_6d97030
#undef public_6d9704f
#undef public_6d9705f
#undef public_6d9707e
#undef public_6d9708e
#undef public_6d970ac
#undef public_6d970bc
#undef public_6d970d7
#undef public_6d970e7
#undef public_6d97104
#undef public_6d97114
#undef public_6d97133
#undef public_6d97143
#undef public_6d97168
#undef public_6d97178
#undef public_6d971a2
#undef public_6d971c2
#undef public_6d971f3
