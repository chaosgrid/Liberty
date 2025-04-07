#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629cd30);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);
CLANG_FORWARD_JUMP_SYMBOL(public_6393908);

PROC_DECLARE(0x629cd30, internal_629cd30, public_629cd30);
extern "C" NAKED register_t __cdecl internal_629cd30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393908 @0x629cd32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393908
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        push 0x200
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_62930d0
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi], offset public_639d5a4
        call public_6307f80
        fstp qword ptr ds : [esi+0x58]
        push 1
        mov ecx, esi
        call public_629aed0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629cd30)
    }
}
