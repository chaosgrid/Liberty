#include "Server-PCH.h"

PROC_DECLARE(0x6d45090, internal_6d45090, public_6d45090);
extern "C" NAKED register_t __cdecl internal_6d45090()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_6d90280 @0x6d4509c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90280
        push edx
        call dword ptr ds : [eax+0x1CC]
        ret 4
        UNREACHABLE_TRAP(0x6d45090)
    }
}
