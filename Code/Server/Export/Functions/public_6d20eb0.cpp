#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62788);

PROC_DECLARE(0x6d20eb0, internal_6d20eb0, public_6d20eb0);
extern "C" NAKED register_t __cdecl internal_6d20eb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62788 @0x6d20eb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi], offset public_6d68d00
        mov eax, dword ptr ss : [esp+0x24]
        lea edi, ds:[esi+8]
        push ebx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [edi], eax
        call public_6d23ef0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [public_6d68a50]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [public_6d68a54]
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0x24], 1
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], esi
        mov dword ptr ds : [esi+0x30], offset public_6d68e04
        pop edi
        mov dword ptr ds : [esi], offset public_6d68c28
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d20eb0)
    }
}
