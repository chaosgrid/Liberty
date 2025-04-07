#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6321fa0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396ed1);

PROC_DECLARE(0x6321fa0, internal_6321fa0, public_6321fa0);
extern "C" NAKED register_t __cdecl internal_6321fa0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396ed1 @0x6321fa8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396ed1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        lea ecx, ds:[esi+4]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov byte ptr ds : [ecx+0x18], al
        mov byte ptr ds : [ecx+0x19], al
        mov byte ptr ds : [ecx+0x1A], al
        mov byte ptr ds : [ecx+0x1B], al
        mov byte ptr ds : [ecx+0x1C], al
        mov byte ptr ds : [ecx+0x1D], al
        mov byte ptr ds : [ecx+0x1E], al
        mov byte ptr ds : [ecx+0x1F], al
        mov byte ptr ds : [ecx+0x20], al
        mov byte ptr ds : [ecx+0x21], al
        mov byte ptr ds : [ecx+0x22], al
        mov byte ptr ds : [ecx+0x23], al
        mov byte ptr ds : [ecx+0x24], al
        mov byte ptr ds : [ecx+0x25], al
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [ecx+0x28], eax
        mov dword ptr ds : [ecx+0x2C], eax
        mov byte ptr ds : [ecx+0x30], al
        mov byte ptr ds : [ecx+0x31], al
        mov byte ptr ds : [ecx+0x32], al
        mov byte ptr ds : [ecx+0x33], al
        mov byte ptr ds : [ecx+0x34], al
        mov byte ptr ds : [ecx+0x35], al
        mov byte ptr ds : [ecx+0x36], al
        mov byte ptr ds : [ecx+0x37], al
        mov byte ptr ds : [ecx+0x38], al
        mov byte ptr ds : [ecx+0x39], al
        mov byte ptr ds : [ecx+0x3A], al
        mov byte ptr ds : [ecx+0x3B], al
        mov byte ptr ds : [ecx+0x3C], al
        mov byte ptr ds : [ecx+0x3D], al
        mov dl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+0x78], dl
        mov dword ptr ds : [ecx+0x7C], eax
        mov dword ptr ds : [ecx+0x80], eax
        mov dword ptr ds : [ecx+0x84], eax
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov byte ptr ss : [esp+0x10], 2
        call public_631fad0
        mov ecx, dword ptr ss : [esp+4]
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6321fa0)
    }
}
