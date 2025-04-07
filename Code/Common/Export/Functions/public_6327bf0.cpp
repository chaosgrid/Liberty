#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6268e30);
CLANG_FORWARD_PROC_SYMBOL(public_6272740);
CLANG_FORWARD_JUMP_SYMBOL(public_639712b);

PROC_DECLARE(0x6327bf0, internal_6327bf0, public_6327bf0);
extern "C" NAKED register_t __cdecl internal_6327bf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639712b @0x6327bf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639712b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        lea edi, ds:[esi+4]
        push ebx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [edi], al
        call public_6268e30
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x20]
        lea edi, ds:[esi+0x10]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        call public_6272740
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [esi], offset public_63a3de8
        mov edx, dword ptr ds : [public_640957c]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi], offset public_63a3e1c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6327bf0)
    }
}
