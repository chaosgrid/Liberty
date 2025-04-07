#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b490);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f37fd4 _public_6f37fd4
#define public_6f37fe6 _public_6f37fe6
#define public_6f37ff3 _public_6f37ff3
#define public_6f38031 _public_6f38031
#define public_6f38049 _public_6f38049
#define public_6f3805e _public_6f3805e
#define public_6f38090 _public_6f38090
#define public_6f380af _public_6f380af
#define public_6f380cc _public_6f380cc
#define public_6f380d0 _public_6f380d0
#define public_6f380f0 _public_6f380f0

PROC_DECLARE(0x6f37f70, internal_6f37f70, public_6f37f70);
extern "C" NAKED register_t __cdecl internal_6f37f70()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6f3b490
        mov eax, dword ptr ds : [esi+0xF8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF4]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f3d0a0
        mov ecx, dword ptr ds : [esi+0xCC]
        mov eax, dword ptr ds : [esi+0xD0]
        lea edi, ds:[esi+0xC8]
        push ecx
        push eax
        push eax
        call public_6f3f660
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        mov ebx, eax
        push ebx
        mov ecx, edi
        call public_6f3ceb0
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+0xBC]
        cmp edi, dword ptr ds : [esi+0xC0]
        je public_6f37ff3
        public_6f37fd4 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_6f37fe6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [edi], 0
        public_6f37fe6 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        add edi, 4
        cmp edi, eax
        jne public_6f37fd4
        public_6f37ff3 : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        mov eax, dword ptr ds : [esi+0xC0]
        lea edi, ds:[esi+0xB8]
        push ecx
        push eax
        push eax
        call public_6f3f660
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebx
        mov ecx, edi
        call public_6f3ceb0
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3805e
        public_6f38031 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f38049
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x10], 0
        public_6f38049 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f3cc20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0xA8]
        jne public_6f38031
        public_6f3805e : nop
        mov ebx, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4]
        test ecx, ecx
        mov eax, dword ptr ds : [ebx]
        lea edi, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f380cc
        mov ecx, eax
        cmp eax, ecx
        jne public_6f380cc
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, ebp
        je public_6f380af
        lea ebx, ds:[ebx]
        public_6f38090 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov ecx, edi
        call public_6f3dba0
        mov ebx, dword ptr ds : [ebx]
        push ebp
        call public_6f57e26
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp ebx, eax
        mov ebp, ebx
        jne public_6f38090
        public_6f380af : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], edi
        jmp public_6f380f0
        public_6f380cc : nop
        cmp eax, ebx
        je public_6f380f0
        public_6f380d0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebp, eax
        call public_6f3cc20
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f3c7e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jne public_6f380d0
        public_6f380f0 : nop
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f37f70)
    }
}

#undef public_6f37fd4
#undef public_6f37fe6
#undef public_6f37ff3
#undef public_6f38031
#undef public_6f38049
#undef public_6f3805e
#undef public_6f38090
#undef public_6f380af
#undef public_6f380cc
#undef public_6f380d0
#undef public_6f380f0
