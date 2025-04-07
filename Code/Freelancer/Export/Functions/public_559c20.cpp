#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_559c20);
CLANG_FORWARD_JUMP_SYMBOL(public_5c15a0);

PROC_DECLARE(0x559c20, internal_559c20, public_559c20);
extern "C" NAKED register_t __cdecl internal_559c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c15a0 @0x559c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c15a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0xE
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_679a28]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        mov byte ptr ss : [esp+0x28], 1
        call public_403ea0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        push eax
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x559c20)
    }
}
