#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d112d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d112e4 _public_6d112e4
#define public_6d112f7 _public_6d112f7
#define public_6d11300 _public_6d11300
#define public_6d11304 _public_6d11304
#define public_6d11311 _public_6d11311
#define public_6d11322 _public_6d11322

PROC_DECLARE(0x6d112d0, internal_6d112d0, public_6d112d0);
extern "C" NAKED register_t __cdecl internal_6d112d0()
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
        mov dword ptr ds : [esi], offset public_6d67d00
        je public_6d11304
        public_6d112e4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d112f7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d11300
        public_6d112f7 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d11300 : nop
        cmp edi, ebx
        jne public_6d112e4
        public_6d11304 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d11322
        public_6d11311 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d11311
        public_6d11322 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d112d0)
    }
}

#undef public_6d112e4
#undef public_6d112f7
#undef public_6d11300
#undef public_6d11304
#undef public_6d11311
#undef public_6d11322
