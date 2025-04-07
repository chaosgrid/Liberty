#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13270);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61c09);

PROC_DECLARE(0x6d13270, internal_6d13270, public_6d13270);
extern "C" NAKED register_t __cdecl internal_6d13270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61c09 @0x6d13272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61c09
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d6478c]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi]
        mov dl, byte ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], 0
        mov byte ptr ss : [esp+0x28], dl
        call dword ptr ds : [public_6d64788]
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64730]
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d6472c]
        lea ecx, ss:[esp+4]
        push ecx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64784]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        call dword ptr ds : [edx+0xA4]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_6d64780]
        mov ecx, dword ptr ss : [esp+0x40]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x6d13270)
    }
}
