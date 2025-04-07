#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_JUMP_SYMBOL(public_6247bd8);

PROC_DECLARE(0x620f4e0, internal_620f4e0, public_620f4e0);
extern "C" NAKED register_t __cdecl internal_620f4e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247bd8 @0x620f4e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247bd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        call public_6244360
        xor edi, edi
        lea ecx, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x14], edi
        call public_6244b20
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xD8], edi
        mov dword ptr ds : [esi+0xDC], edi
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0xE0], edi
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0xFC], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0x108], edi
        mov dword ptr ds : [esi+0x104], edi
        mov dword ptr ds : [esi+0x100], edi
        mov dword ptr ds : [esi+0xF8], edi
        mov dword ptr ds : [esi+0xF4], edi
        mov dword ptr ds : [esi+0xF0], edi
        mov dword ptr ds : [esi+0x118], edi
        mov dword ptr ds : [esi+0x114], edi
        mov dword ptr ds : [esi+0x110], edi
        mov dword ptr ds : [esi], offset public_624c098
        mov dword ptr ds : [esi+0xE0], offset public_62579a4
        mov dword ptr ds : [esi+0xE4], edi
        mov dword ptr ds : [esi+0x11C], 0x3D4CCCCD
        mov dword ptr ds : [esi+0xE8], edi
        mov dword ptr ds : [esi+0x120], edi
        mov dword ptr ds : [esi+0x124], edi
        mov dword ptr ds : [esi+0x128], edi
        mov dword ptr ds : [esi+0x12C], edi
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x620f4e0)
    }
}
