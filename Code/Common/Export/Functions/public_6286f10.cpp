#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639309b);

PROC_DECLARE(0x6286f10, internal_6286f10, public_6286f10);
extern "C" NAKED register_t __cdecl internal_6286f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639309b @0x6286f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639309b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ds : [esi], edi
        push 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+4], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edi
        mov cl, byte ptr ss : [esp+0xF]
        push 0xC
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi+0x10], cl
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], edi
        add esp, 8
        mov dword ptr ds : [esi+0x1C], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6286f10)
    }
}
