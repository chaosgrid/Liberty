#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);

#define public_62bee56 _public_62bee56

PROC_DECLARE(0x62bee40, internal_62bee40, public_62bee40);
extern "C" NAKED register_t __cdecl internal_62bee40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62bee56
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_62bee56 : nop
        ret 
        UNREACHABLE_TRAP(0x62bee40)
    }
}

#undef public_62bee56
