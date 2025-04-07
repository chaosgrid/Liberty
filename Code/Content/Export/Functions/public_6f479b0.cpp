#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f479b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f479f0 _public_6f479f0
#define public_6f479fb _public_6f479fb
#define public_6f479fd _public_6f479fd
#define public_6f47a20 _public_6f47a20
#define public_6f47a2b _public_6f47a2b

PROC_DECLARE(0x6f479b0, internal_6f479b0, public_6f479b0);
extern "C" NAKED register_t __cdecl internal_6f479b0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov esi, ecx
        call public_6eac0c0
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 4
        test edx, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x1C], eax
        je public_6f47a2b
        mov eax, dword ptr ds : [esi+0xB4]
        mov ecx, dword ptr ds : [esi+0xB8]
        add esi, 0xB0
        cmp eax, ecx
        mov dword ptr ss : [esp+4], edx
        je public_6f479fb
        lea ebx, ds:[ebx]
        public_6f479f0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f479fd
        add eax, 4
        cmp eax, ecx
        jne public_6f479f0
        public_6f479fb : nop
        mov eax, ecx
        public_6f479fd : nop
        cmp eax, ecx
        jne public_6f47a2b
        lea edx, ss:[esp+4]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f47a2b
        mov ecx, dword ptr ss : [esp+4]
        mov edi, edi
        public_6f47a20 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f47a2b
        add eax, 4
        cmp eax, esi
        jne public_6f47a20
        public_6f47a2b : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f479b0)
    }
}

#undef public_6f479f0
#undef public_6f479fb
#undef public_6f479fd
#undef public_6f47a20
#undef public_6f47a2b
