#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ca90);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6ab48);

PROC_DECLARE(0x6b4ca90, internal_6b4ca90, public_6b4ca90);
extern "C" NAKED register_t __cdecl internal_6b4ca90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6ab48 @0x6b4ca92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6ab48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6b6cb20
        mov al, byte ptr ss : [esp+0xB]
        push 0x10
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+0x20], al
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x24], eax
        add esp, 4
        mov dword ptr ds : [esi], offset public_6b6dc14
        mov dword ptr ds : [esi+0xC], 0x20048
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6b4ca90)
    }
}
