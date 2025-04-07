#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543f00);

PROC_DECLARE(0x543f00, internal_543f00, public_543f00);
extern "C" NAKED register_t __cdecl internal_543f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x40
        add eax, 0x41
        push eax
/*FIXUP push offset public_5dffb0 @0x543f0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffb0
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_5dffa8 @0x543f14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffa8
        push ecx
        call dword ptr ds : [public_5c71ec]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push eax
        add eax, 0x24
        push eax
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0xC0]
        neg eax
        sbb eax, eax
        inc eax
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x543f00)
    }
}
