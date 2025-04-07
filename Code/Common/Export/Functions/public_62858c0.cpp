#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281630);
CLANG_FORWARD_PROC_SYMBOL(public_62858c0);

#define public_62858d6 _public_62858d6

PROC_DECLARE(0x62858c0, internal_62858c0, public_62858c0);
extern "C" NAKED register_t __cdecl internal_62858c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62858d6
        mov ecx, dword ptr ds : [eax+0x84]
        jmp public_6281630
        public_62858d6 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62858c0)
    }
}

#undef public_62858d6
