#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c990);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c9a0 _public_627c9a0
#define public_627c9b3 _public_627c9b3
#define public_627c9bc _public_627c9bc
#define public_627c9c0 _public_627c9c0

PROC_DECLARE(0x627c990, internal_627c990, public_627c990);
extern "C" NAKED register_t __cdecl internal_627c990()
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
        je public_627c9c0
        mov edi, edi
        public_627c9a0 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_627c9b3
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_627c9bc
        public_627c9b3 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627c9bc : nop
        cmp esi, ebx
        jne public_627c9a0
        public_627c9c0 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627c990)
    }
}

#undef public_627c9a0
#undef public_627c9b3
#undef public_627c9bc
#undef public_627c9c0
