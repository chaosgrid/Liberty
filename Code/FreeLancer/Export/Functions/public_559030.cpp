#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559050);
CLANG_FORWARD_PROC_SYMBOL(public_559280);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x559030, internal_559030, public_559030);
extern "C" NAKED register_t __cdecl internal_559030()
{
    __asm
    {
        mov ecx, offset public_6799ec
        call public_559050
/*FIXUP push offset _public_559280 @0x55903a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_559280
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x559030)
    }
}
