#include "Common-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_63975a8);

PROC_DECLARE(0x6333080, internal_6333080, public_6333080);
extern "C" NAKED register_t __cdecl internal_6333080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63975a8 @0x6333082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63975a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [esi+0xC], al
        mov byte ptr ds : [esi+0xD], al
        mov dword ptr ds : [esi], offset public_63a49e4
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edi, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi], offset public_63a49cc
        mov dword ptr ds : [edi], offset public_63a49b4
        mov dword ptr ds : [esi], offset public_63a49a0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6333080)
    }
}
