#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5130);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc840);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd515d _public_6bd515d
#define public_6bd5165 _public_6bd5165
#define public_6bd5171 _public_6bd5171
#define public_6bd51c7 _public_6bd51c7
#define public_6bd51e3 _public_6bd51e3
#define public_6bd5276 _public_6bd5276
#define public_6bd527e _public_6bd527e
#define public_6bd5296 _public_6bd5296

PROC_DECLARE(0x6bd5130, internal_6bd5130, public_6bd5130);
extern "C" NAKED register_t __cdecl internal_6bd5130()
{
    __asm
    {
        sub esp, 0x24
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        push esi
        push edi
        call public_6bdc840
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6bd5296
        mov ebx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov esi, dword ptr ds : [eax+8]
        jne public_6bd515d
        xor eax, eax
        jmp public_6bd5165
        public_6bd515d : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 5
        public_6bd5165 : nop
        cmp eax, esi
        jae public_6bd51c7
        test esi, esi
        mov eax, esi
        jge public_6bd5171
        xor eax, eax
        public_6bd5171 : nop
        shl eax, 5
        push eax
        call public_6c09d26
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        push edi
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6c0b0f0]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6c0b0b8]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6c09aaa
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call dword ptr ds : [public_6c0b0ec]
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edi
        public_6bd51c7 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x34], ecx
        je public_6bd5296
        push ebp
        mov ebp, dword ptr ds : [public_6c0b0b4]
        public_6bd51e3 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ds : [eax+8]
        test edi, edi
        je public_6bd527e
        lea ecx, ss:[esp+0x14]
        call ebp
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6c0b0e8]
        mov esi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edi]
        sub esi, 0x20
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6c0b0b0]
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6c0b0a8]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6c0b0a4]
        xor edx, edx
        mov dx, word ptr ds : [edi+0xC]
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6c0b0ac]
        xor eax, eax
        mov al, byte ptr ds : [edi+0xE]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6c0b0a0]
        cmp word ptr ds : [edi+0x10], 0
        jbe public_6bd5276
        mov edi, dword ptr ds : [edi+0x14]
        push 0
        push edi
        call dword ptr ds : [public_6c0b09c]
        add esp, 8
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_6c0b098]
        jmp public_6bd527e
        public_6bd5276 : nop
        mov ecx, esi
        call dword ptr ds : [public_6c0b094]
        public_6bd527e : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x38], eax
        jne public_6bd51e3
        pop ebp
        public_6bd5296 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6bd5130)
    }
}

#undef public_6bd515d
#undef public_6bd5165
#undef public_6bd5171
#undef public_6bd51c7
#undef public_6bd51e3
#undef public_6bd5276
#undef public_6bd527e
#undef public_6bd5296
