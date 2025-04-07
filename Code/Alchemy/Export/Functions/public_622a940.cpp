#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_6202fa0);
CLANG_FORWARD_PROC_SYMBOL(public_622a940);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622a952 _public_622a952
#define public_622a970 _public_622a970
#define public_622a995 _public_622a995
#define public_622a9be _public_622a9be
#define public_622a9e4 _public_622a9e4
#define public_622a9e8 _public_622a9e8
#define public_622aa19 _public_622aa19

PROC_DECLARE(0x622a940, internal_622a940, public_622a940);
extern "C" NAKED register_t __cdecl internal_622a940()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        xor ebx, ebx
        push edi
        mov esi, dword ptr ss : [ebp+0x20]
        cmp esi, ebx
        je public_622a970
        public_622a952 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov dword ptr ss : [ebp+0x20], eax
        mov ecx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ss : [ebp+0x20]
        cmp esi, ebx
        jne public_622a952
        public_622a970 : nop
        lea esi, ss:[ebp+0xC]
        mov dword ptr ss : [ebp+0x20], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], eax
        je public_622a9e4
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_622a9be
        public_622a995 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6202da0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6202fa0
        push ebx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_622a995
        public_622a9be : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        xor eax, eax
        mov dword ptr ds : [esi+8], esi
        mov dword ptr ss : [ebp+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_622a9e4 : nop
        cmp eax, edi
        je public_622aa19
        public_622a9e8 : nop
        lea ecx, ss:[esp+0x18]
        mov ebx, eax
        call public_6202e40
        lea eax, ss:[esp+0x10]
        push ebx
        push eax
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jne public_622a9e8
        pop edi
        mov dword ptr ss : [ebp+8], 0
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_622aa19 : nop
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622a940)
    }
}

#undef public_622a952
#undef public_622a970
#undef public_622a995
#undef public_622a9be
#undef public_622a9e4
#undef public_622a9e8
#undef public_622aa19
