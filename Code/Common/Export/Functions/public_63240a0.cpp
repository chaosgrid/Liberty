#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396e32);

#define public_632416b _public_632416b

PROC_DECLARE(0x63240a0, internal_63240a0, public_63240a0);
extern "C" NAKED register_t __cdecl internal_63240a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396e32 @0x63240a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396e32
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_632416b
        add ecx, 4
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx-4], edx
        mov dword ptr ss : [esp+0x1C], ecx
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
        add esi, 4
        push esi
        mov byte ptr ss : [esp+0x14], 3
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+8], eax
        call public_631fad0
        pop esi
        public_632416b : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63240a0)
    }
}

#undef public_632416b
