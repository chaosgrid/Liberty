#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c02c07 _public_6c02c07
#define public_6c02c1e _public_6c02c1e
#define public_6c02c30 _public_6c02c30
#define public_6c02c5b _public_6c02c5b
#define public_6c02c8c _public_6c02c8c

PROC_DECLARE(0x6c02bc0, internal_6c02bc0, public_6c02bc0);
extern "C" NAKED register_t __cdecl internal_6c02bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c02c07
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02c07 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c02c1e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c02c1e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c02c30
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02c30 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c02c5b
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02c5b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6c02c8c
        mov dword ptr ds : [ecx+0x10], esi
        public_6c02c8c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c02bc0)
    }
}

#undef public_6c02c07
#undef public_6c02c1e
#undef public_6c02c30
#undef public_6c02c5b
#undef public_6c02c8c
