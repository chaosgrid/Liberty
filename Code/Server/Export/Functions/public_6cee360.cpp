#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60732);

PROC_DECLARE(0x6cee360, internal_6cee360, public_6cee360);
extern "C" NAKED register_t __cdecl internal_6cee360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60732 @0x6cee362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60732
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], offset public_6d65a2c
        mov dword ptr ds : [esi+4], offset public_6d659ac
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, dword ptr ds : [public_6d64358]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [public_6d64354]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [public_6d64350]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [public_6d6434c]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0xC], eax
        mov cl, byte ptr ss : [esp+0xB]
        push 0xC
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x14], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        push 0x14
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x2C], dl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], ebx
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x38], bl
        mov byte ptr ds : [esi+0x39], bl
        mov dword ptr ds : [esi+0x3C], 0x3F800000
        mov byte ptr ds : [esi+0x40], bl
        mov byte ptr ds : [esi+0x41], bl
        push 0x14
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0x44], al
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], ebx
        mov byte ptr ds : [esi+0x50], bl
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        add esp, 0xC
        mov dword ptr ds : [esi], offset public_6d657ec
        mov dword ptr ds : [esi+4], offset public_6d6576c
        mov dword ptr ds : [esi+0xC], offset public_6d65764
        mov dword ptr ds : [esi+0x54], 0x18
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cee360)
    }
}
