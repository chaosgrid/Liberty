#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5475b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0f5b);

PROC_DECLARE(0x5475b0, internal_5475b0, public_5475b0);
extern "C" NAKED register_t __cdecl internal_5475b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0f5b @0x5475b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0f5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push 2
        mov dword ptr ss : [esp+0xC], esi
        call public_532bc0
        xor ebx, ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov byte ptr ds : [esi+0xEC], bl
        mov eax, 0x3F800000
        mov byte ptr ds : [esi+0x1F0], 1
        lea ecx, ds:[esi+0x200]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x1F4], eax
        mov dword ptr ds : [esi+0x1F8], eax
        mov dword ptr ds : [esi+0x1FC], eax
        call dword ptr ds : [public_5c6030]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi], offset public_5e0304
        mov dword ptr ds : [esi+4], offset public_5e0284
        mov dword ptr ds : [esi+0xC], offset public_5e0278
        mov dword ptr ds : [esi+0xAC], offset public_5e0270
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5475b0)
    }
}
