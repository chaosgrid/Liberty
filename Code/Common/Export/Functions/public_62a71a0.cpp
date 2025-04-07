#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a71a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a78e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a720a _public_62a720a
#define public_62a7228 _public_62a7228
#define public_62a7250 _public_62a7250
#define public_62a725b _public_62a725b
#define public_62a7270 _public_62a7270
#define public_62a727c _public_62a727c
#define public_62a7288 _public_62a7288

PROC_DECLARE(0x62a71a0, internal_62a71a0, public_62a71a0);
extern "C" NAKED register_t __cdecl internal_62a71a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x69]
        test al, al
        jne public_62a7228
        mov al, byte ptr ss : [ebp+0x68]
        push edi
        push 0x6C
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x68], dl
        mov byte ptr ds : [edi+0x69], 0
        call public_62a7fc0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_62a720a
        mov ebx, edi
        public_62a720a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_62a78e0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_62a78e0
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_62a7228 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_62a7288
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        jne public_62a725b
        mov edi, edi
        public_62a7250 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        je public_62a7250
        public_62a725b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x69]
        test dl, dl
        jne public_62a727c
        lea ecx, ds:[ecx]
        public_62a7270 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x69]
        test dl, dl
        je public_62a7270
        public_62a727c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_62a7288 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62a71a0)
    }
}

#undef public_62a720a
#undef public_62a7228
#undef public_62a7250
#undef public_62a725b
#undef public_62a7270
#undef public_62a727c
#undef public_62a7288
