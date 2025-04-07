#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eed20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62eed30 _public_62eed30
#define public_62eed39 _public_62eed39
#define public_62eed3b _public_62eed3b
#define public_62eed50 _public_62eed50
#define public_62eed57 _public_62eed57
#define public_62eed6a _public_62eed6a
#define public_62eed73 _public_62eed73
#define public_62eed77 _public_62eed77
#define public_62eed90 _public_62eed90
#define public_62eeda1 _public_62eeda1

PROC_DECLARE(0x62eed20, internal_62eed20, public_62eed20);
extern "C" NAKED register_t __cdecl internal_62eed20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ds : [esi], offset public_63a0880
        xor edi, edi
        nop 
        public_62eed30 : nop
        cmp edi, ebx
        jne public_62eed39
        mov edi, dword ptr ds : [esi+4]
        jmp public_62eed3b
        public_62eed39 : nop
        mov edi, dword ptr ds : [edi]
        public_62eed3b : nop
        cmp edi, ebx
        je public_62eed50
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_62eed30
        public_62eed50 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_62eed77
        public_62eed57 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_62eed6a
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_62eed73
        public_62eed6a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62eed73 : nop
        cmp edi, ebx
        jne public_62eed57
        public_62eed77 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_63a0894
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_62eeda1
        lea ebx, ds:[ebx]
        public_62eed90 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        jne public_62eed90
        public_62eeda1 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62eed20)
    }
}

#undef public_62eed30
#undef public_62eed39
#undef public_62eed3b
#undef public_62eed50
#undef public_62eed57
#undef public_62eed6a
#undef public_62eed73
#undef public_62eed77
#undef public_62eed90
#undef public_62eeda1
