#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x509e80, internal_509e80, public_509e80);
extern "C" NAKED register_t __cdecl internal_509e80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_67505c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_509ec0 @0x509e96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_509ec0
        mov dword ptr ds : [public_675060], eax
        mov dword ptr ds : [public_675064], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x509e80)
    }
}
