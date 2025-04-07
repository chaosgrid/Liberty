#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6240aaf _public_6240aaf
#define public_6240ac8 _public_6240ac8

PROC_DECLARE(0x6240aa0, internal_6240aa0, public_6240aa0);
extern "C" NAKED register_t __cdecl internal_6240aa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6240aaf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6240aaf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6240ac8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6240ac8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6240aa0)
    }
}

#undef public_6240aaf
#undef public_6240ac8
