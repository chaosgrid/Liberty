#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac3b0);

#define public_62ac3c0 _public_62ac3c0

PROC_DECLARE(0x62ac3b0, internal_62ac3b0, public_62ac3b0);
extern "C" NAKED register_t __cdecl internal_62ac3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62ac3c0
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_62ac3c0 : nop
        ret 
        UNREACHABLE_TRAP(0x62ac3b0)
    }
}

#undef public_62ac3c0
