#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416cd0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_416ce2 _public_416ce2
#define public_416d01 _public_416d01

PROC_DECLARE(0x416cd0, internal_416cd0, public_416cd0);
extern "C" NAKED register_t __cdecl internal_416cd0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_416d01
        public_416ce2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_416cd0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_416ce2
        public_416d01 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x416cd0)
    }
}

#undef public_416ce2
#undef public_416d01
