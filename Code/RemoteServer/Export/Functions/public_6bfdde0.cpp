#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfde29 _public_6bfde29
#define public_6bfde40 _public_6bfde40
#define public_6bfde53 _public_6bfde53
#define public_6bfde78 _public_6bfde78
#define public_6bfde8b _public_6bfde8b
#define public_6bfdec9 _public_6bfdec9
#define public_6bfdedc _public_6bfdedc
#define public_6bfdf01 _public_6bfdf01
#define public_6bfdf14 _public_6bfdf14
#define public_6bfdf51 _public_6bfdf51
#define public_6bfdf64 _public_6bfdf64
#define public_6bfdf90 _public_6bfdf90
#define public_6bfdfc3 _public_6bfdfc3

PROC_DECLARE(0x6bfdde0, internal_6bfdde0, public_6bfdde0);
extern "C" NAKED register_t __cdecl internal_6bfdde0()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfde29
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfde29 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfde40
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfde40 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfde53
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfde53 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x20]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6bfde78
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfde78 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfde8b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfde8b : nop
        mov edx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, edx
        lea edx, ss:[ebp+0x18]
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfdec9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfdec9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfdedc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfdedc : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfdf01
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfdf01 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfdf14
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfdf14 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [edx]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfdf51
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfdf51 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfdf64
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfdf64 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push edx
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfdf90
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfdf90 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6bfdfc3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bfdfc3 : nop
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
        UNREACHABLE_TRAP(0x6bfdde0)
    }
}

#undef public_6bfde29
#undef public_6bfde40
#undef public_6bfde53
#undef public_6bfde78
#undef public_6bfde8b
#undef public_6bfdec9
#undef public_6bfdedc
#undef public_6bfdf01
#undef public_6bfdf14
#undef public_6bfdf51
#undef public_6bfdf64
#undef public_6bfdf90
#undef public_6bfdfc3
