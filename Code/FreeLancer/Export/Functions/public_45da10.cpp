#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45da10);

PROC_DECLARE(0x45da10, internal_45da10, public_45da10);
extern "C" NAKED register_t __cdecl internal_45da10()
{
    __asm
    {
        push esi
        push edi
        movzx edi, byte ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x384]
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_679ba8 @0x45da22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [ecx]
        push edi
/*FIXUP push offset public_679ba8 @0x45da38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        push 0x33
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x45da10)
    }
}
