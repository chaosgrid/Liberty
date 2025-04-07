#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd57c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd57d4 _public_6bd57d4
#define public_6bd57e7 _public_6bd57e7
#define public_6bd57f0 _public_6bd57f0
#define public_6bd57f4 _public_6bd57f4
#define public_6bd5801 _public_6bd5801
#define public_6bd5812 _public_6bd5812

PROC_DECLARE(0x6bd57c0, internal_6bd57c0, public_6bd57c0);
extern "C" NAKED register_t __cdecl internal_6bd57c0()
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
        mov dword ptr ds : [esi], offset public_6c0b7a8
        je public_6bd57f4
        public_6bd57d4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6bd57e7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6bd57f0
        public_6bd57e7 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd57f0 : nop
        cmp edi, ebx
        jne public_6bd57d4
        public_6bd57f4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6bd5812
        public_6bd5801 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6c09aaa
        add esp, 4
        cmp edi, ebx
        jne public_6bd5801
        public_6bd5812 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bd57c0)
    }
}

#undef public_6bd57d4
#undef public_6bd57e7
#undef public_6bd57f0
#undef public_6bd57f4
#undef public_6bd5801
#undef public_6bd5812
