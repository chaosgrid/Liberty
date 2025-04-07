#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1c3f0);

PROC_DECLARE(0x6f1c3f0, internal_6f1c3f0, public_6f1c3f0);
extern "C" NAKED register_t __cdecl internal_6f1c3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x70]
        fld dword ptr ds : [ecx+0x1C]
        push eax
        mov eax, dword ptr ds : [ecx+0x6C]
        lea edx, ds:[ecx+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x18]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [ecx+0x68]
        fstp qword ptr ss : [esp]
        push eax
        push ecx
/*FIXUP push offset public_6fb8dfc @0x6f1c41b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dfc
        push edx
        call dword ptr ds : [public_6fb3380]
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6f1c3f0)
    }
}
