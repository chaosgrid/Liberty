#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d57090);
CLANG_FORWARD_PROC_SYMBOL(public_6d58460);
CLANG_FORWARD_PROC_SYMBOL(public_6d59360);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63b06);

PROC_DECLARE(0x6d57090, internal_6d57090, public_6d57090);
extern "C" NAKED register_t __cdecl internal_6d57090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63b06 @0x6d57092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63b06
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x938
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6d46ab0
        mov esi, dword ptr ss : [esp+0x954]
        mov ecx, 0x80
        lea edi, ss:[esp+0x3AC]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x5B0]
        mov dword ptr ss : [esp+0x950], 0
        call public_6d58460
        lea eax, ss:[esp+0x3AC]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x954], 1
        call public_6d59360
        lea ecx, ss:[esp+0x5AC]
        mov byte ptr ss : [esp+0x94C], 0
        call public_6d46d20
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x94C], 0xFFFFFFFF
        call public_6d46d20
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x944]
        pop edi
        pop esi
        lea eax, ds:[edx+0x20C]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x944
        ret 4
        UNREACHABLE_TRAP(0x6d57090)
    }
}
