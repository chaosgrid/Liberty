#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6244120);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62473a3);

#define public_6204fb1 _public_6204fb1
#define public_6204fb3 _public_6204fb3

PROC_DECLARE(0x6204ef0, internal_6204ef0, public_6204ef0);
extern "C" NAKED register_t __cdecl internal_6204ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62473a3 @0x6204ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62473a3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6204fb1
        lea esi, ds:[edi+0xC]
        mov dword ptr ds : [edi], offset public_624b8b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6244360
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [esi+0xB4], ebx
        call public_6244b20
        mov dword ptr ds : [esi+0xDC], ebx
        mov byte ptr ds : [esi+0xE0], bl
        mov byte ptr ds : [esi+0xE1], bl
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi], offset public_624b6b0
        mov dword ptr ds : [esi+0xEC], offset public_6257954
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624b7d0
        mov dword ptr ds : [esi], offset public_624b740
        mov dword ptr ds : [edi+0x100], 1
        jmp public_6204fb3
        public_6204fb1 : nop
        xor edi, edi
        public_6204fb3 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0xC]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6244120
        mov eax, dword ptr ds : [ebx+0xF0]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0xF0], eax
        xor eax, eax
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6204ef0)
    }
}

#undef public_6204fb1
#undef public_6204fb3
