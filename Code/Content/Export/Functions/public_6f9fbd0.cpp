#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f99cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9fbe0 _public_6f9fbe0
#define public_6f9fbee _public_6f9fbee

PROC_DECLARE(0x6f9fbd0, internal_6f9fbd0, public_6f9fbd0);
extern "C" NAKED register_t __cdecl internal_6f9fbd0()
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
        je public_6f9fbee
        nop 
        public_6f9fbe0 : nop
        mov ecx, esi
        call public_6f99cd0
        add esi, 0x18
        cmp esi, ebx
        jne public_6f9fbe0
        public_6f9fbee : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f9fbd0)
    }
}

#undef public_6f9fbe0
#undef public_6f9fbee
