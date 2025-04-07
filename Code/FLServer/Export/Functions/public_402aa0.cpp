#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ee0);
CLANG_FORWARD_PROC_SYMBOL(public_403ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4045e0);
CLANG_FORWARD_PROC_SYMBOL(public_404a30);
CLANG_FORWARD_PROC_SYMBOL(public_404a90);
CLANG_FORWARD_PROC_SYMBOL(public_4057b0);

#define public_402b0f _public_402b0f
#define public_402b13 _public_402b13
#define public_402b38 _public_402b38
#define public_402b4a _public_402b4a
#define public_402b92 _public_402b92
#define public_402b96 _public_402b96
#define public_402bba _public_402bba
#define public_402bc8 _public_402bc8

PROC_DECLARE(0x402aa0, internal_402aa0, public_402aa0);
extern "C" NAKED register_t __cdecl internal_402aa0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        push esi
        lea ebp, ds:[eax+8]
        lea esi, ds:[ebx+8]
        cmp esi, ebp
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+4], ecx
        je public_402b4a
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_402b0f
        mov ecx, eax
        cmp eax, ecx
        jne public_402b0f
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_404a30
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_403ee0
        jmp public_402b38
        public_402b0f : nop
        cmp eax, edi
        je public_402b38
        public_402b13 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_404a90
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_4045e0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_402b13
        public_402b38 : nop
        mov al, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_403ef0
        mov eax, dword ptr ss : [esp+0x28]
        public_402b4a : nop
        lea ebp, ds:[eax+0x1C]
        lea esi, ds:[ebx+0x1C]
        cmp esi, ebp
        je public_402bc8
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], eax
        je public_402b92
        mov ecx, eax
        cmp eax, ecx
        jne public_402b92
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_404a30
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_402bba
        public_402b92 : nop
        cmp eax, edi
        je public_402bba
        public_402b96 : nop
        lea ecx, ss:[esp+0x28]
        mov ebx, eax
        call public_4057b0
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_4045e0
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        jne public_402b96
        mov ebx, dword ptr ss : [esp+0x14]
        public_402bba : nop
        mov dl, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], dl
        call public_403ef0
        public_402bc8 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x402aa0)
    }
}

#undef public_402b0f
#undef public_402b13
#undef public_402b38
#undef public_402b4a
#undef public_402b92
#undef public_402b96
#undef public_402bba
#undef public_402bc8
