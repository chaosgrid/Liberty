#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6324570);
CLANG_FORWARD_JUMP_SYMBOL(public_6396ed1);

PROC_DECLARE(0x6324570, internal_6324570, public_6324570);
extern "C" NAKED register_t __cdecl internal_6324570()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396ed1 @0x6324578*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396ed1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        lea ecx, ds:[esi+4]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], ecx
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
        mov dword ptr ss : [esp+0x10], eax
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
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+0x78], dl
        mov dword ptr ds : [ecx+0x7C], eax
        mov dword ptr ds : [ecx+0x80], eax
        mov dword ptr ds : [ecx+0x84], eax
        add edi, 4
        push edi
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+8], eax
        call public_631fad0
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6324570)
    }
}
