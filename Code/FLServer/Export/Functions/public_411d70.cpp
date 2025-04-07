#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d70);
CLANG_FORWARD_PROC_SYMBOL(public_419236);
CLANG_FORWARD_PROC_SYMBOL(public_41923c);
CLANG_FORWARD_PROC_SYMBOL(public_419242);
CLANG_FORWARD_PROC_SYMBOL(public_419248);
CLANG_FORWARD_JUMP_SYMBOL(public_41a634);

PROC_DECLARE(0x411d70, internal_411d70, public_411d70);
extern "C" NAKED register_t __cdecl internal_411d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a634 @0x411d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a634
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        call public_419248
        xor edi, edi
        lea ecx, ds:[esi+0xC4]
        mov dword ptr ss : [esp+0x18], edi
        call public_419242
        lea ecx, ds:[esi+0x144]
        mov byte ptr ss : [esp+0x18], 1
        call public_41923c
        lea eax, ss:[esp+0xC]
        push eax
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ds : [esi+0x1E4], edi
        mov dword ptr ds : [esi+0x1E8], edi
        mov dword ptr ds : [esi+0x1EC], edi
        mov dword ptr ds : [esi+0x1F0], edi
        mov dword ptr ds : [esi+0x1F4], edi
        mov dword ptr ds : [esi+0x1F8], edi
        mov dword ptr ds : [esi+0x1FC], edi
        mov dword ptr ds : [esi+0x200], edi
        mov dword ptr ds : [esi+0x204], edi
        mov dword ptr ds : [esi+0x208], edi
        mov dword ptr ds : [esi], offset public_41dda8
        call public_419236
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC0], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x20C], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x411d70)
    }
}
