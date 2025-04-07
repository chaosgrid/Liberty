#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1000);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfe3b);

PROC_DECLARE(0x65d1000, internal_65d1000, public_65d1000);
extern "C" NAKED register_t __cdecl internal_65d1000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dfe3b @0x65d1002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfe3b
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
        push 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_65e11d0
        mov dword ptr ds : [esi+4], offset public_65e11b4
        mov byte ptr ds : [esi+0xC], al
        call public_65d6f71
        xor edi, edi
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], edi
        mov cl, byte ptr ss : [esp+0xF]
        push 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi+0x20], cl
        call public_65d6f71
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi], offset public_65e118c
        mov dword ptr ds : [esi+4], offset public_65e1170
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], 4
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x65d1000)
    }
}
