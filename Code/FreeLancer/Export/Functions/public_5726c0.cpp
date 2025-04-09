#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5726c0);
CLANG_FORWARD_PROC_SYMBOL(public_591ae0);
CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_594580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c388b);

PROC_DECLARE(0x5726c0, internal_5726c0, public_5726c0);
extern "C" NAKED register_t __cdecl internal_5726c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c388b @0x5726c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c388b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x8C]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], esi
        call public_594580
        push eax
        mov ecx, esi
        call public_591ae0
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], edi
        call public_591e30
        mov dword ptr ds : [esi+0xE0], edi
        mov dword ptr ds : [esi+0xE4], edi
        mov dword ptr ds : [esi+0xE8], edi
        mov dword ptr ds : [esi+0xEC], edi
        mov dword ptr ds : [esi+0xF0], edi
        mov al, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x20], 6
        mov byte ptr ds : [esi+0xF4], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+0xFC], edi
        mov cl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x24], 7
        mov byte ptr ds : [esi+0x100], cl
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x104], eax
        mov dword ptr ds : [esi+0x108], edi
        add esp, 8
        mov dword ptr ds : [esi+0xB4], edi
        pop edi
        mov dword ptr ds : [esi], offset public_5e2ef4
        mov dword ptr ds : [esi+0x7C], offset public_5e2ed8
        mov dword ptr ds : [esi+0x80], offset public_5e2ed0
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5726c0)
    }
}
