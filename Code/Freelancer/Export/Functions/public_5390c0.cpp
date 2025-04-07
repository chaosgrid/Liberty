#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5390c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5390d4 _public_5390d4
#define public_5390e7 _public_5390e7
#define public_5390f0 _public_5390f0
#define public_5390f4 _public_5390f4
#define public_539101 _public_539101
#define public_539112 _public_539112

PROC_DECLARE(0x5390c0, internal_5390c0, public_5390c0);
extern "C" NAKED register_t __cdecl internal_5390c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5de754
        je public_5390f4
        public_5390d4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5390e7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_5390f0
        public_5390e7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5390f0 : nop
        cmp edi, ebx
        jne public_5390d4
        public_5390f4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_539112
        public_539101 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_539101
        public_539112 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5390c0)
    }
}

#undef public_5390d4
#undef public_5390e7
#undef public_5390f0
#undef public_5390f4
#undef public_539101
#undef public_539112
