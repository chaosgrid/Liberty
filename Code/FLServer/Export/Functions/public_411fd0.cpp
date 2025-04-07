#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_41a668);

PROC_DECLARE(0x411fd0, internal_411fd0, public_411fd0);
extern "C" NAKED register_t __cdecl internal_411fd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a668 @0x411fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a668
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        call public_418aaa
        lea eax, ss:[esp+4]
        push 0xF028
        push eax
        mov dword ptr ss : [esp+0x60], 0
        call public_40ae40
        mov ecx, dword ptr ds : [esi+0x1EC]
        mov edx, dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], 0
        fild qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], 0
        sub esp, 8
        fmul qword ptr ds : [public_41dea8]
        lea ecx, ss:[esp+0x20]
        fstp qword ptr ss : [esp+8]
        fild qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_41dea8]
        fstp qword ptr ss : [esp]
        push eax
        push ecx
        call dword ptr ds : [public_41b964]
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0xC]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_418aa4
        mov ecx, dword ptr ss : [esp+0x50]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x411fd0)
    }
}
