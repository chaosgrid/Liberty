#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_456360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba038);

PROC_DECLARE(0x456360, internal_456360, public_456360);
extern "C" NAKED register_t __cdecl internal_456360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba038 @0x456362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba038
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
        mov dword ptr ds : [esi], offset public_5cbed8
        mov al, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        push 0xC
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+4], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        add esp, 4
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x20], bl
        mov dword ptr ds : [esi], offset public_5ce114
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x456360)
    }
}
