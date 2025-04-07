#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320080);
CLANG_FORWARD_PROC_SYMBOL(public_6323a40);
CLANG_FORWARD_JUMP_SYMBOL(public_6396d22);

#define public_63200f9 _public_63200f9

PROC_DECLARE(0x6320080, internal_6320080, public_6320080);
extern "C" NAKED register_t __cdecl internal_6320080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396d22 @0x6320082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396d22
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_640193c]
        inc eax
        inc eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ds : [public_640193c], eax
        mov al, byte ptr ss : [esp+3]
        mov ecx, offset public_64018c4
        mov byte ptr ss : [esp+0xC], 1
        mov byte ptr ds : [public_64018c5], al
        mov byte ptr ds : [public_64018d0], 0
        call public_6323a40
        mov eax, dword ptr ds : [public_640193c]
        mov ecx, dword ptr ds : [public_64018c8]
        dec eax
        mov dword ptr ds : [public_64018d8], ecx
        mov dword ptr ds : [public_640193c], eax
        jne public_63200f9
        mov edx, dword ptr ds : [public_6401818]
        push edx
        call dword ptr ds : [public_63990e4]
        mov dword ptr ds : [public_6401818], 0
        public_63200f9 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6320080)
    }
}

#undef public_63200f9
