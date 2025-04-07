#include "Common-PCH.h"


#define public_62d7945 _public_62d7945

PROC_DECLARE(0x62d7920, internal_62d7920, public_62d7920);
extern "C" NAKED register_t __cdecl internal_62d7920()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        je public_62d7945
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_62d7945
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov al, 1
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ds : [ecx+0x10], al
        ret 0xC
        public_62d7945 : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x62d7920)
    }
}

#undef public_62d7945
