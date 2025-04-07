#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbe70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc270);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece250);
CLANG_FORWARD_PROC_SYMBOL(public_6ece620);
CLANG_FORWARD_PROC_SYMBOL(public_6ece900);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecbf23 _public_6ecbf23
#define public_6ecbf27 _public_6ecbf27
#define public_6ecbf4b _public_6ecbf4b
#define public_6ecbf75 _public_6ecbf75
#define public_6ecbf8a _public_6ecbf8a

PROC_DECLARE(0x6ecbe70, internal_6ecbe70, public_6ecbe70);
extern "C" NAKED register_t __cdecl internal_6ecbe70()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6ed2e80
        mov dword ptr ds : [edi+4], offset public_6ed2e70
        call public_6ecc270
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x28]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6ece620
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        mov edx, dword ptr ds : [esi+8]
        xor ebp, ebp
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6ed0c50
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x24]
        lea esi, ds:[edi+0x14]
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        add esp, 8
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ecbf23
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6eca7e0
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_6ecbf23
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, ecx
        jne public_6ecbf23
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6ece900
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6eca7e0
        jmp public_6ecbf4b
        public_6ecbf23 : nop
        cmp eax, ebx
        je public_6ecbf4b
        public_6ecbf27 : nop
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6ecdea0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6ece250
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6ecbf27
        public_6ecbf4b : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6ed0c50
        add edi, 8
        mov dword ptr ds : [esi+8], ebp
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        add esp, 8
        cmp esi, ebx
        je public_6ecbf8a
        public_6ecbf75 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6ecde20
        cmp esi, ebx
        jne public_6ecbf75
        public_6ecbf8a : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6ed0c50
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ecbe70)
    }
}

#undef public_6ecbf23
#undef public_6ecbf27
#undef public_6ecbf4b
#undef public_6ecbf75
#undef public_6ecbf8a
