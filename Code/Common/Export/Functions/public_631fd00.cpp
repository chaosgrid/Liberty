#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_631fd00);
CLANG_FORWARD_JUMP_SYMBOL(public_6396d01);

PROC_DECLARE(0x631fd00, internal_631fd00, public_631fd00);
extern "C" NAKED register_t __cdecl internal_631fd00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396d01 @0x631fd02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396d01
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov byte ptr ds : [esi+0x18], al
        mov byte ptr ds : [esi+0x19], al
        mov byte ptr ds : [esi+0x1A], al
        mov byte ptr ds : [esi+0x1B], al
        mov byte ptr ds : [esi+0x1C], al
        mov byte ptr ds : [esi+0x1D], al
        mov byte ptr ds : [esi+0x1E], al
        mov byte ptr ds : [esi+0x1F], al
        mov byte ptr ds : [esi+0x20], al
        mov byte ptr ds : [esi+0x21], al
        mov byte ptr ds : [esi+0x22], al
        mov byte ptr ds : [esi+0x23], al
        mov byte ptr ds : [esi+0x24], al
        mov byte ptr ds : [esi+0x25], al
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov byte ptr ds : [esi+0x30], al
        mov byte ptr ds : [esi+0x31], al
        mov byte ptr ds : [esi+0x32], al
        mov byte ptr ds : [esi+0x33], al
        mov byte ptr ds : [esi+0x34], al
        mov byte ptr ds : [esi+0x35], al
        mov byte ptr ds : [esi+0x36], al
        mov byte ptr ds : [esi+0x37], al
        mov byte ptr ds : [esi+0x38], al
        mov byte ptr ds : [esi+0x39], al
        mov byte ptr ds : [esi+0x3A], al
        mov byte ptr ds : [esi+0x3B], al
        mov byte ptr ds : [esi+0x3C], al
        mov byte ptr ds : [esi+0x3D], al
        mov cl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x78], cl
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], eax
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+8], eax
        call public_631fad0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x631fd00)
    }
}
