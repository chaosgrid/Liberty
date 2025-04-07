#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfd319 _public_6bfd319
#define public_6bfd330 _public_6bfd330
#define public_6bfd343 _public_6bfd343
#define public_6bfd368 _public_6bfd368
#define public_6bfd37b _public_6bfd37b
#define public_6bfd3c2 _public_6bfd3c2
#define public_6bfd3f3 _public_6bfd3f3

PROC_DECLARE(0x6bfd2d0, internal_6bfd2d0, public_6bfd2d0);
extern "C" NAKED register_t __cdecl internal_6bfd2d0()
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
        je public_6bfd319
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfd319 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfd330
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfd330 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfd343
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfd343 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6bfd368
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6bfd368 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfd37b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfd37b : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfd3c2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfd3c2 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bfd3f3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bfd3f3 : nop
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
        UNREACHABLE_TRAP(0x6bfd2d0)
    }
}

#undef public_6bfd319
#undef public_6bfd330
#undef public_6bfd343
#undef public_6bfd368
#undef public_6bfd37b
#undef public_6bfd3c2
#undef public_6bfd3f3
