#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_418c90);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4164ae _public_4164ae
#define public_4164bc _public_4164bc
#define public_416500 _public_416500
#define public_416505 _public_416505
#define public_416526 _public_416526

PROC_DECLARE(0x416490, internal_416490, public_416490);
extern "C" NAKED register_t __cdecl internal_416490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x118]
        sub esp, 8
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        mov dword ptr ds : [ecx], offset public_5c8dec
        je public_4164ae
        mov dword ptr ds : [ecx+0x118], ebp
        public_4164ae : nop
        cmp dword ptr ds : [ecx+0xD8], ebp
        je public_4164bc
        mov dword ptr ds : [ecx+0xD8], ebp
        public_4164bc : nop
        lea esi, ds:[ecx+0x15C]
        mov dword ptr ds : [ecx+0x158], ebp
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_416500
        mov ecx, eax
        cmp eax, ecx
        jne public_416500
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_418c90
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_416526
        public_416500 : nop
        cmp eax, edi
        je public_416526
        push ebx
        public_416505 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_416505
        pop ebx
        public_416526 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x416490)
    }
}

#undef public_4164ae
#undef public_4164bc
#undef public_416500
#undef public_416505
#undef public_416526
