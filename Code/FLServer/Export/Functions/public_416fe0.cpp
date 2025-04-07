#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416fe0);

#define public_416ff4 _public_416ff4
#define public_416fff _public_416fff
#define public_417002 _public_417002
#define public_417007 _public_417007

PROC_DECLARE(0x416fe0, internal_416fe0, public_416fe0);
extern "C" NAKED register_t __cdecl internal_416fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_417007
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_416ff4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_416fff
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_417002
        public_416fff : nop
        mov edx, dword ptr ds : [edx+8]
        public_417002 : nop
        cmp edx, ecx
        jne public_416ff4
        pop esi
        public_417007 : nop
        ret 4
        UNREACHABLE_TRAP(0x416fe0)
    }
}

#undef public_416ff4
#undef public_416fff
#undef public_417002
#undef public_417007
