#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85780);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d85790 _public_6d85790
#define public_6d857a3 _public_6d857a3
#define public_6d857ac _public_6d857ac
#define public_6d857b0 _public_6d857b0

PROC_DECLARE(0x6d85780, internal_6d85780, public_6d85780);
extern "C" NAKED register_t __cdecl internal_6d85780()
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
        je public_6d857b0
        mov edi, edi
        public_6d85790 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d857a3
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6d857ac
        public_6d857a3 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d857ac : nop
        cmp esi, ebx
        jne public_6d85790
        public_6d857b0 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d85780)
    }
}

#undef public_6d85790
#undef public_6d857a3
#undef public_6d857ac
#undef public_6d857b0
