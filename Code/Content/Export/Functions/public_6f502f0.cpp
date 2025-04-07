#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecff00);
CLANG_FORWARD_PROC_SYMBOL(public_6f502f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf32f);

PROC_DECLARE(0x6f502f0, internal_6f502f0, public_6f502f0);
extern "C" NAKED register_t __cdecl internal_6f502f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf32f @0x6f502f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf32f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0xC4]
        push eax
        mov dword ptr ss : [esp+0x18], 3
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC8], edi
        mov dword ptr ds : [esi+0xCC], edi
        mov ecx, dword ptr ds : [esi+0xB4]
        push ecx
        call public_6fa8fe0
        add esp, 8
        lea ecx, ds:[esi+0x9C]
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edi
        call public_6ecff00
        mov edx, dword ptr ds : [esi+0x88]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov eax, dword ptr ds : [esi+0x78]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov ecx, dword ptr ds : [esi+0x60]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov edx, dword ptr ds : [esi+0x4C]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f502f0)
    }
}
