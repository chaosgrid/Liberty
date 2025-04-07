#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238050);
CLANG_FORWARD_PROC_SYMBOL(public_6244120);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a043);

#define public_6238102 _public_6238102
#define public_6238104 _public_6238104

PROC_DECLARE(0x6238050, internal_6238050, public_6238050);
extern "C" NAKED register_t __cdecl internal_6238050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a043 @0x6238052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a043
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_6238102
        lea esi, ds:[edi+0xC]
        mov dword ptr ds : [edi], offset public_624b8b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_6244360
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x20], 1
        call public_6244b20
        mov dword ptr ds : [esi+0xD8], ebp
        mov dword ptr ds : [esi+0xDC], ebp
        mov dword ptr ds : [esi+0xE0], ebp
        mov dword ptr ds : [esi], offset public_624eee8
        mov dword ptr ds : [esi+0xE0], offset public_6257b68
        mov dword ptr ds : [esi+0xE4], ebp
        mov dword ptr ds : [esi+0xE8], ebp
        mov dword ptr ds : [esi+0xEC], ebp
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624f008
        mov dword ptr ds : [esi], offset public_624ef78
        mov dword ptr ds : [edi+0x100], 1
        jmp public_6238104
        public_6238102 : nop
        xor edi, edi
        public_6238104 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        lea esi, ds:[edi+0xC]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6244120
        mov eax, dword ptr ds : [ebx+0xF0]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0xF0], eax
        xor eax, eax
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6238050)
    }
}

#undef public_6238102
#undef public_6238104
