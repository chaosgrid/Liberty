#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4192ae);

PROC_DECLARE(0x4157e0, internal_4157e0, public_4157e0);
extern "C" NAKED register_t __cdecl internal_4157e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_427828]
        sub esp, 0x40
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+0x84C]
        push ecx
        lea edx, ss:[esp+8]
/*FIXUP push offset public_4259c8 @0x4157f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259c8
        push edx
        call dword ptr ds : [public_41b964]
        add esp, 0xC
        lea eax, ss:[esp+4]
        push eax
        push 0x3EB
        mov ecx, esi
        call public_4192ae
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x4157e0)
    }
}
