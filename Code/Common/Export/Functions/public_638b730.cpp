#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638b630);
CLANG_FORWARD_PROC_SYMBOL(public_638b730);

PROC_DECLARE(0x638b730, internal_638b730, public_638b730);
extern "C" NAKED register_t __cdecl internal_638b730()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x34
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x18]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
        push esi
        push edi
        push ebx
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x3FF00000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0x3FF00000
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0x3FF00000
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        call public_638b630
        fld qword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+8]
        fchs 
        add esp, 0x1C
        lea ecx, ss:[esp+0x28]
        push ecx
        sub esp, 8
        fstp qword ptr ss : [esp]
        push esi
        push edi
        push ebx
        push edx
        call public_638b630
        add esp, 0x1C
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638b730)
    }
}
