#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_62858e0);

#define public_62858fd _public_62858fd

PROC_DECLARE(0x62858e0, internal_62858e0, public_62858e0);
extern "C" NAKED register_t __cdecl internal_62858e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62858fd
        mov ecx, dword ptr ss : [esp+8]
        push 1
        push ecx
        mov ecx, dword ptr ds : [eax+0x84]
        call public_6281510
        public_62858fd : nop
        ret 
        UNREACHABLE_TRAP(0x62858e0)
    }
}

#undef public_62858fd
