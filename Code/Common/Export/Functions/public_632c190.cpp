#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266990);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_632c190);
CLANG_FORWARD_PROC_SYMBOL(public_632c2a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63973e8);

PROC_DECLARE(0x632c190, internal_632c190, public_632c190);
extern "C" NAKED register_t __cdecl internal_632c190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63973e8 @0x632c192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63973e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        mov al, byte ptr ss : [esp+0x38]
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        mov esi, ecx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call public_62b9490
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dx, word ptr ds : [ecx]
        lea ecx, ss:[esp+0x40]
        lea eax, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], ebx
        mov word ptr ss : [esp+0x24], dx
        mov dword ptr ss : [esp+0xC], eax
        call public_6266990
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x3C], 1
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_632c2a0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x40], 2
        call public_632ca80
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x44], bl
        call public_632c4f0
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_632c4f0
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        pop esi
        add eax, 0x10
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x632c190)
    }
}
