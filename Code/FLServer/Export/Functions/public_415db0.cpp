#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_40bee0);
CLANG_FORWARD_PROC_SYMBOL(public_418c54);
CLANG_FORWARD_PROC_SYMBOL(public_418c84);

#define public_415dd3 _public_415dd3
#define public_415de4 _public_415de4
#define public_415df1 _public_415df1
#define public_415df8 _public_415df8

PROC_DECLARE(0x415db0, internal_415db0, public_415db0);
extern "C" NAKED register_t __cdecl internal_415db0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x3001
        push esi
        mov esi, ecx
        jne public_415df1
        mov eax, dword ptr ds : [esi+0x60]
        sub eax, 0
        je public_415de4
        dec eax
        jne public_415df8
        mov ecx, dword ptr ds : [public_427828]
        call public_40b5a0
        public_415dd3 : nop
        test al, al
        je public_415df8
        push 0
        mov ecx, esi
        call public_418c84
        pop esi
        ret 4
        public_415de4 : nop
        mov ecx, dword ptr ds : [public_427828]
        call public_40bee0
        jmp public_415dd3
        public_415df1 : nop
        mov ecx, esi
        call public_418c54
        public_415df8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415db0)
    }
}

#undef public_415dd3
#undef public_415de4
#undef public_415df1
#undef public_415df8
