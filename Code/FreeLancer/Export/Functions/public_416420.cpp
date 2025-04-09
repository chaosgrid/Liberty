#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416420);
CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_416430 _public_416430
#define public_41646b _public_41646b

PROC_DECLARE(0x416420, internal_416420, public_416420);
extern "C" NAKED register_t __cdecl internal_416420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_61651c]
        push ebx
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ebx, eax
        je public_41646b
        push esi
        public_416430 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_416490
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_616520]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_616520], ecx
        jne public_416430
        mov eax, dword ptr ds : [public_61651c]
        pop esi
        public_41646b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_61651c], eax
        mov dword ptr ds : [public_616520], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x416420)
    }
}

#undef public_416430
#undef public_41646b
