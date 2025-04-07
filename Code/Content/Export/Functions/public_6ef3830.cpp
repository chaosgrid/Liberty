#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3830);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ab0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac142);

PROC_DECLARE(0x6ef3830, internal_6ef3830, public_6ef3830);
extern "C" NAKED register_t __cdecl internal_6ef3830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac142 @0x6ef3832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac142
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edx]
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], eax
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], 0xBF800000
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        mov dword ptr ss : [esp+4], esi
        mov byte ptr ds : [esi+0x18], cl
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x3C], cl
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x20]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x28], edx
        call public_6ef3ab0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3830)
    }
}
