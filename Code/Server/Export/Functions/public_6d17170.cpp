#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d17180 _public_6d17180
#define public_6d17193 _public_6d17193
#define public_6d1719c _public_6d1719c
#define public_6d171a0 _public_6d171a0

PROC_DECLARE(0x6d17170, internal_6d17170, public_6d17170);
extern "C" NAKED register_t __cdecl internal_6d17170()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp esi, ebx
        je public_6d171a0
        mov edi, edi
        public_6d17180 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d17193
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6d1719c
        public_6d17193 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1719c : nop
        cmp esi, ebx
        jne public_6d17180
        public_6d171a0 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d17170)
    }
}

#undef public_6d17180
#undef public_6d17193
#undef public_6d1719c
#undef public_6d171a0
