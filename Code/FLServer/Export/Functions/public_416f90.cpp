#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416f90);

#define public_416fa4 _public_416fa4
#define public_416fae _public_416fae
#define public_416fb2 _public_416fb2
#define public_416fb7 _public_416fb7

PROC_DECLARE(0x416f90, internal_416f90, public_416f90);
extern "C" NAKED register_t __cdecl internal_416f90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_416fb7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_416fa4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_416fae
        mov edx, dword ptr ds : [edx+8]
        jmp public_416fb2
        public_416fae : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_416fb2 : nop
        cmp edx, ecx
        jne public_416fa4
        pop esi
        public_416fb7 : nop
        ret 4
        UNREACHABLE_TRAP(0x416f90)
    }
}

#undef public_416fa4
#undef public_416fae
#undef public_416fb2
#undef public_416fb7
