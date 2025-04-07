#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d44);

PROC_DECLARE(0x6b39c00, internal_6b39c00, public_6b39c00);
extern "C" NAKED register_t __cdecl internal_6b39c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x400
        push esi
        push edi
        push eax
        movzx eax, byte ptr ss : [esp+0x414]
        push ecx
        movzx ecx, byte ptr ss : [esp+0x414]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
/*FIXUP push offset public_6b6bee8 @0x6b39c2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bee8
        push edx
        call dword ptr ds : [public_6b6b1d4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x24]
        repne scasb
        mov edi, dword ptr ss : [esp+0x434]
        not ecx
        dec ecx
        mov esi, ecx
        lea eax, ss:[esp+esi+0x24]
        push edi
        push eax
        call dword ptr ds : [public_6b6b1ec]
        push edi
        call dword ptr ds : [public_6b6b1e4]
        mov edx, dword ptr ds : [public_6b73d74]
        add esp, 0x28
        lea eax, ds:[esi+eax*2+2]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [edx+0xC]
        call public_6b69d44
        pop edi
        pop esi
        add esp, 0x400
        ret 
        UNREACHABLE_TRAP(0x6b39c00)
    }
}
