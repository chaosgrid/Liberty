#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a424);

#define public_1000a42a _public_1000a42a
#define public_1000a441 _public_1000a441

PROC_DECLARE(0x1000a424, internal_1000a424, public_1000a424);
extern "C" NAKED register_t __cdecl internal_1000a424()
{
    __asm
    {
        push ecx
        mov ecx, esp
        add ecx, 8
        public_1000a42a : nop
        cmp eax, 0x1000
        jb public_1000a441
        sub ecx, 0x1000
        or dword ptr ds : [ecx], 0
        sub eax, 0x1000
        jmp public_1000a42a
        public_1000a441 : nop
        sub ecx, eax
        or dword ptr ds : [ecx], 0
        mov eax, esp
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        jmp eax
        UNREACHABLE_TRAP(0x1000a424)
    }
}

#undef public_1000a42a
#undef public_1000a441
