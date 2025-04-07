#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c7790);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d77d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8970);
CLANG_FORWARD_PROC_SYMBOL(public_62d94b0);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394c33);

#define public_62c7826 _public_62c7826

PROC_DECLARE(0x62c7790, internal_62c7790, public_62c7790);
extern "C" NAKED register_t __cdecl internal_62c7790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394c33 @0x62c7792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394c33
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62d2020
        xor ebx, ebx
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62d77d0
        lea ecx, ds:[esi+0x110]
        mov byte ptr ss : [esp+0x14], 1
        call public_62d8970
        lea ecx, ds:[esi+0x1AC]
        mov byte ptr ss : [esp+0x14], 2
        call public_62d94b0
        lea ecx, ds:[esi+0x1CC]
        mov byte ptr ss : [esp+0x14], 3
        call public_62d6750
        lea ecx, ds:[esi+0x28C]
        mov byte ptr ss : [esp+0x14], 4
        call public_62da500
        lea ecx, ds:[esi+0x2A0]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_639f874
        cmp dword ptr ds : [ecx], ebx
        mov byte ptr ss : [esp+0x14], 6
        je public_62c7826
        push ebx
        call public_6341610
        public_62c7826 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x2B4], bl
        mov byte ptr ds : [esi+0x2B5], bl
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x2B6], bl
        mov byte ptr ds : [esi+0x2B7], bl
        mov dword ptr ds : [esi+0x2B8], ebx
        mov dword ptr ds : [esi+0x2AC], 0x40400000
        mov dword ptr ds : [esi+0x2BC], 0x3F34FDF4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c7790)
    }
}

#undef public_62c7826
