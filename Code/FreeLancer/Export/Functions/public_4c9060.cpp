#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4c9060);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd898);

PROC_DECLARE(0x4c9060, internal_4c9060, public_4c9060);
extern "C" NAKED register_t __cdecl internal_4c9060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd898 @0x4c9062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd898
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov ebp, 0x3F800000
        mov dword ptr ds : [esi+0x5C], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov dword ptr ds : [esi+0x3C], ebp
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xF8
        or al, 8
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x6C], al
        mov ecx, dword ptr ds : [public_67dcd4]
        inc ecx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [public_67dcd4], ecx
        lea edi, ds:[esi+0x7C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_420d40
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov byte ptr ds : [esi+0xA8], bl
        mov byte ptr ds : [esi+0xA7], bl
        mov byte ptr ds : [esi+0xA6], bl
        mov byte ptr ds : [esi+0xA5], bl
        and byte ptr ds : [esi+0xA4], 0xF8
        pop edi
        mov dword ptr ds : [esi], offset public_5d709c
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4c9060)
    }
}
