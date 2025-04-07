#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629f590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6393bd1);

PROC_DECLARE(0x629f590, internal_629f590, public_629f590);
extern "C" NAKED register_t __cdecl internal_629f590()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393bd1 @0x629f592*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393bd1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639cacc
        mov dword ptr ds : [esi+0x20], offset public_639cac0
        mov dword ptr ss : [esp+0x10], 2
        call public_629af40
        mov eax, dword ptr ds : [esi+0x830]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
/*FIXUP push offset _public_62881d0 @0x629f5d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62881d0
        push 0x100
        mov dword ptr ds : [esi+0x830], eax
        mov dword ptr ds : [esi+0x834], eax
        mov dword ptr ds : [esi+0x838], eax
        mov byte ptr ss : [esp+0x18], al
        lea eax, ds:[esi+0x24]
        push 8
        push eax
        call public_6391dfc
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639ca04
        call public_629adb0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629f590)
    }
}
