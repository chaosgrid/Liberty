#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c88e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394cc4);

#define public_62c8959 _public_62c8959

PROC_DECLARE(0x62c88e0, internal_62c88e0, public_62c88e0);
extern "C" NAKED register_t __cdecl internal_62c88e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394cc4 @0x62c88e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394cc4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_62d2020
        xor ebx, ebx
        lea edi, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        lea ecx, ds:[esi+0x68]
        mov byte ptr ss : [esp+0x18], 2
        call public_62d4e60
        lea ecx, ds:[esi+0xE0]
        mov byte ptr ss : [esp+0x18], 3
        call public_62d6750
        lea ecx, ds:[esi+0x1A0]
        mov byte ptr ss : [esp+0x18], 4
        call public_62da500
        mov dword ptr ds : [esi], offset public_639f95c
        mov dword ptr ds : [esi+0x2C], ebx
        cmp dword ptr ds : [edi], ebx
        je public_62c8959
        push ebx
        mov ecx, edi
        call public_6341610
        public_62c8959 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x1C5], bl
        mov dword ptr ds : [esi+0x1C8], ebx
        mov dword ptr ds : [esi+0x1CC], ebx
        mov byte ptr ds : [esi+0x1B4], bl
        mov byte ptr ds : [esi+0x1C4], 1
        mov dword ptr ds : [esi+0x1D0], 0x3F666666
        mov dword ptr ds : [esi+0x1B8], ebx
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1C0], ebx
        mov byte ptr ds : [esi+0x1D4], bl
        mov dword ptr ds : [esi+0x1D8], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c88e0)
    }
}

#undef public_62c8959
