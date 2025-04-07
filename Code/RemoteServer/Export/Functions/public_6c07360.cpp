#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c073a9 _public_6c073a9
#define public_6c073c0 _public_6c073c0
#define public_6c073d3 _public_6c073d3
#define public_6c073f9 _public_6c073f9
#define public_6c0740c _public_6c0740c
#define public_6c07445 _public_6c07445
#define public_6c07478 _public_6c07478

PROC_DECLARE(0x6c07360, internal_6c07360, public_6c07360);
extern "C" NAKED register_t __cdecl internal_6c07360()
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
        je public_6c073a9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c073a9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c073c0
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6c073c0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c073d3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c073d3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x80
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c073f9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6c073f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0740c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c0740c : nop
        mov eax, dword ptr ds : [esi]
        mov edi, eax
        mov ecx, 0x20
        lea esi, ss:[ebp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x14]
        push ebx
        lea edx, ds:[eax+0x80]
        lea eax, ss:[ebp+0x18]
        push ecx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [eax], edx
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6c07445
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c07445 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
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
        jbe public_6c07478
        mov dword ptr ds : [ecx+0x10], ebx
        public_6c07478 : nop
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
        UNREACHABLE_TRAP(0x6c07360)
    }
}

#undef public_6c073a9
#undef public_6c073c0
#undef public_6c073d3
#undef public_6c073f9
#undef public_6c0740c
#undef public_6c07445
#undef public_6c07478
