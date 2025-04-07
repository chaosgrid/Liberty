#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16180);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16194 _public_6d16194
#define public_6d161a7 _public_6d161a7
#define public_6d161b0 _public_6d161b0
#define public_6d161b4 _public_6d161b4
#define public_6d161c1 _public_6d161c1
#define public_6d161d2 _public_6d161d2

PROC_DECLARE(0x6d16180, internal_6d16180, public_6d16180);
extern "C" NAKED register_t __cdecl internal_6d16180()
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
        mov dword ptr ds : [esi], offset public_6d68348
        je public_6d161b4
        public_6d16194 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d161a7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d161b0
        public_6d161a7 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d161b0 : nop
        cmp edi, ebx
        jne public_6d16194
        public_6d161b4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d161d2
        public_6d161c1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d161c1
        public_6d161d2 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d16180)
    }
}

#undef public_6d16194
#undef public_6d161a7
#undef public_6d161b0
#undef public_6d161b4
#undef public_6d161c1
#undef public_6d161d2
