#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6334580);
CLANG_FORWARD_JUMP_SYMBOL(public_63926bb);

PROC_DECLARE(0x626c290, internal_626c290, public_626c290);
extern "C" NAKED register_t __cdecl internal_626c290()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63926bb @0x626c292*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63926bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_6333e40
        mov al, byte ptr ss : [esp+7]
        mov byte ptr ds : [esi+4], al
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_6334580
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x626c290)
    }
}
