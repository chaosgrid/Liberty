#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9a992 _public_6d9a992
#define public_6d9a9a9 _public_6d9a9a9
#define public_6d9a9f9 _public_6d9a9f9
#define public_6d9aa35 _public_6d9aa35
#define public_6d9aa55 _public_6d9aa55
#define public_6d9aa93 _public_6d9aa93
#define public_6d9aa9f _public_6d9aa9f

PROC_DECLARE(0x6d9a950, internal_6d9a950, public_6d9a950);
extern "C" NAKED register_t __cdecl internal_6d9a950()
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
        je public_6d9a992
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9a992 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9a9a9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d9a9a9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9aa9f
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x224], ecx
        jbe public_6d9aa35
        lea edx, ds:[eax+eax]
        push edx
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x220], eax
        mov eax, dword ptr ss : [ebp+0x224]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9a9f9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6d9a9f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d9aa9f
        mov eax, dword ptr ss : [ebp+0x224]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x220]
        shl eax, 1
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
        public_6d9aa35 : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9aa55
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9aa55 : nop
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
        jbe public_6d9aa93
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6d9aa93 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d9aa9f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d9a950)
    }
}

#undef public_6d9a992
#undef public_6d9a9a9
#undef public_6d9a9f9
#undef public_6d9aa35
#undef public_6d9aa55
#undef public_6d9aa93
#undef public_6d9aa9f
