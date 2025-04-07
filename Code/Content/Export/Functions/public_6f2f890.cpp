#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f890);
CLANG_FORWARD_PROC_SYMBOL(public_6f305d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2f8a0 _public_6f2f8a0
#define public_6f2f8b1 _public_6f2f8b1

PROC_DECLARE(0x6f2f890, internal_6f2f890, public_6f2f890);
extern "C" NAKED register_t __cdecl internal_6f2f890()
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
        je public_6f2f8b1
        nop 
        public_6f2f8a0 : nop
        mov ecx, esi
        call public_6f305d0
        add esi, 0x98
        cmp esi, ebx
        jne public_6f2f8a0
        public_6f2f8b1 : nop
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
        UNREACHABLE_TRAP(0x6f2f890)
    }
}

#undef public_6f2f8a0
#undef public_6f2f8b1
