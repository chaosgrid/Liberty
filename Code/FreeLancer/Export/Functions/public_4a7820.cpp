#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a7840);
CLANG_FORWARD_PROC_SYMBOL(public_4a9090);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4a7820, internal_4a7820, public_4a7820);
extern "C" NAKED register_t __cdecl internal_4a7820()
{
    __asm
    {
/*FIXUP push offset public_5cedb4 @0x4a7820*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cedb4
        mov ecx, offset public_672180
        call public_4a9090
/*FIXUP push offset _public_4a7840 @0x4a782f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4a7840
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a7820)
    }
}
