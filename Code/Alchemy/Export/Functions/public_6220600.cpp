#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221510);
CLANG_FORWARD_PROC_SYMBOL(public_6221fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62220b0);
CLANG_FORWARD_PROC_SYMBOL(public_6222c30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6220615 _public_6220615
#define public_6220626 _public_6220626
#define public_6220651 _public_6220651
#define public_6220679 _public_6220679
#define public_622069a _public_622069a
#define public_622069e _public_622069e
#define public_62206be _public_62206be

PROC_DECLARE(0x6220600, internal_6220600, public_6220600);
extern "C" NAKED register_t __cdecl internal_6220600()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        xor ebp, ebp
        mov dword ptr ds : [ecx+0x20], ebp
        mov eax, dword ptr ds : [ecx+0x18]
        push esi
        cmp eax, ebp
        push edi
        je public_6220626
        public_6220615 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov eax, dword ptr ds : [ecx+0x18]
        cmp eax, ebp
        jne public_6220615
        public_6220626 : nop
        lea esi, ds:[ecx+4]
        mov dword ptr ds : [ecx+0x18], ebp
        mov dword ptr ds : [ecx+0x1C], ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], eax
        je public_622069a
        mov ecx, eax
        cmp eax, ecx
        jne public_622069a
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6220679
        public_6220651 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6221fc0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6222c30
        push ebx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6220651
        public_6220679 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        xor eax, eax
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_622069a : nop
        cmp eax, edi
        je public_62206be
        public_622069e : nop
        lea ecx, ss:[esp+0x18]
        mov ebx, eax
        call public_62220b0
        lea eax, ss:[esp+0x10]
        push ebx
        push eax
        mov ecx, esi
        call public_6221510
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jne public_622069e
        public_62206be : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6220600)
    }
}

#undef public_6220615
#undef public_6220626
#undef public_6220651
#undef public_6220679
#undef public_622069a
#undef public_622069e
#undef public_62206be
