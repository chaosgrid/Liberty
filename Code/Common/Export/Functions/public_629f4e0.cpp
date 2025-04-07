#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393bd1);

PROC_DECLARE(0x629f4e0, internal_629f4e0, public_629f4e0);
extern "C" NAKED register_t __cdecl internal_629f4e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393bd1 @0x629f4e2*/
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
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        push 0x80000
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_629ad70
        mov dword ptr ds : [esi], offset public_639ca04
        xor edi, edi
        lea ecx, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x14], edi
        call public_62c2610
        mov cl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x82C], cl
        mov dword ptr ds : [esi+0x830], edi
        mov dword ptr ds : [esi+0x834], edi
        mov dword ptr ds : [esi+0x838], edi
        push 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x18], 2
        mov dword ptr ds : [esi+0x83C], edi
        mov dword ptr ds : [esi], offset public_639cacc
        mov dword ptr ds : [esi+0x20], offset public_639cac0
        call public_629aed0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629f4e0)
    }
}
