#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294460);
CLANG_FORWARD_PROC_SYMBOL(public_6294770);
CLANG_FORWARD_PROC_SYMBOL(public_629af70);
CLANG_FORWARD_PROC_SYMBOL(public_629eca0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393670);

PROC_DECLARE(0x6294460, internal_6294460, public_6294460);
extern "C" NAKED register_t __cdecl internal_6294460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393670 @0x6294462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393670
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        push 0x1000
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_629eca0
        xor ebx, ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], 1
        mov byte ptr ds : [esi+0x38], bl
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi], offset public_639c61c
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [edx+0xC]
        mov ecx, esi
        call public_629af70
        fstp dword ptr ds : [esi+0x30]
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x50], bl
        mov byte ptr ds : [esi+0x51], bl
        mov dword ptr ds : [esi], offset public_639c78c
        call public_6294770
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0x90]
        mov dword ptr ds : [esi+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6294460)
    }
}
