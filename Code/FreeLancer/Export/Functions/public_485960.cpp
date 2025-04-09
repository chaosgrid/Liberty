#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_485960);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a2100);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc121);

PROC_DECLARE(0x485960, internal_485960, public_485960);
extern "C" NAKED register_t __cdecl internal_485960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc121 @0x485962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc121
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        call public_59f860
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov al, byte ptr ss : [esp+0xB]
        mov byte ptr ds : [esi+0x340], al
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov cl, byte ptr ss : [esp+0xB]
        mov byte ptr ds : [esi+0x350], cl
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        lea ecx, ds:[esi+0x5DC]
        mov byte ptr ss : [esp+0x18], 3
        mov byte ptr ds : [esi+0x368], bl
        call public_5a2100
        lea ecx, ds:[esi+0xE98]
        mov byte ptr ss : [esp+0x18], 4
        call public_5a2100
        mov ecx, dword ptr ss : [esp+0x10]
        mov al, 1
        mov byte ptr ds : [esi+0x33D], al
        mov byte ptr ds : [esi+0x33E], al
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov byte ptr ds : [esi+0x33C], bl
        mov dword ptr ds : [esi], offset public_5d1d5c
        mov dword ptr ds : [esi+0x7C], offset public_5d1d50
        mov dword ptr ds : [esi+0x32C], offset public_5d1d48
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x485960)
    }
}
