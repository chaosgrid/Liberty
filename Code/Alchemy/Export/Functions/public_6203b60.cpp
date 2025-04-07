#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203480);
CLANG_FORWARD_PROC_SYMBOL(public_6203b60);
CLANG_FORWARD_PROC_SYMBOL(public_6204660);
CLANG_FORWARD_PROC_SYMBOL(public_620ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6215560);
CLANG_FORWARD_PROC_SYMBOL(public_6224700);
CLANG_FORWARD_PROC_SYMBOL(public_622b3d0);
CLANG_FORWARD_PROC_SYMBOL(public_622efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6232390);
CLANG_FORWARD_PROC_SYMBOL(public_6237830);
CLANG_FORWARD_PROC_SYMBOL(public_623f6d0);

#define public_6203b89 _public_6203b89
#define public_6203bb1 _public_6203bb1

PROC_DECLARE(0x6203b60, internal_6203b60, public_6203b60);
extern "C" NAKED register_t __cdecl internal_6203b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_6203b89
        dec eax
        jne public_6203bb1
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_624b014]
        call public_623f6d0
        call public_6203480
        mov eax, 1
        ret 0xC
        public_6203b89 : nop
        call public_622b3d0
        call public_6224700
        call public_6237830
        call public_6232390
        call public_622efb0
        call public_6215560
        call public_620ef70
        call public_6204660
        public_6203bb1 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6203b60)
    }
}

#undef public_6203b89
#undef public_6203bb1
