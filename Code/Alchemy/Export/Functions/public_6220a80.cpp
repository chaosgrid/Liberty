#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6220a80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6220a8f _public_6220a8f
#define public_6220a9d _public_6220a9d

PROC_DECLARE(0x6220a80, internal_6220a80, public_6220a80);
extern "C" NAKED register_t __cdecl internal_6220a80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6220a9d
        public_6220a8f : nop
        mov ecx, esi
        call public_621f5f0
        add esi, 0x10
        cmp esi, ebx
        jne public_6220a8f
        public_6220a9d : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6220a80)
    }
}

#undef public_6220a8f
#undef public_6220a9d
