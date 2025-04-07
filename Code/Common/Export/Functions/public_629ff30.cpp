#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ff30);

#define public_629ff44 _public_629ff44

PROC_DECLARE(0x629ff30, internal_629ff30, public_629ff30);
extern "C" NAKED register_t __cdecl internal_629ff30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_629ff44
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ecx+4], edx
        ret 4
        public_629ff44 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x629ff30)
    }
}

#undef public_629ff44
