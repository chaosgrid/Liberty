#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_621d220);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6245b30);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62489c1);

#define public_621d319 _public_621d319
#define public_621d31b _public_621d31b

PROC_DECLARE(0x621d220, internal_621d220, public_621d220);
extern "C" NAKED register_t __cdecl internal_621d220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62489c1 @0x621d222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62489c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        push 0x110
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_621d319
        lea esi, ss:[ebp+4]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [ebp], offset public_624d420
        mov dword ptr ss : [esp+0x14], esi
        call public_623fb80
        mov dword ptr ds : [esi+0x98], edi
        lea ebx, ds:[esi+0xBC]
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0xA0], edi
        mov dword ptr ds : [esi+0xA4], edi
        mov dword ptr ds : [esi+0xA8], edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ds : [esi+0xB0], edi
        mov dword ptr ds : [esi+0xB4], edi
        mov byte ptr ds : [esi+0xB8], 1
        call public_6206c70
        mov dword ptr ds : [ebx+0x2C], edi
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x24], edi
        mov dword ptr ds : [esi+0xEC], edi
        mov byte ptr ds : [esi+0x95], 1
        mov dword ptr ds : [esi], offset public_624d728
        mov dword ptr ds : [esi+0x104], edi
        mov dword ptr ds : [esi+0x100], edi
        mov dword ptr ds : [esi+0xFC], edi
        mov dword ptr ds : [esi+0xF8], edi
        mov dword ptr ds : [esi+0xF4], edi
        mov dword ptr ds : [esi+0xF0], edi
        mov dword ptr ss : [ebp+0x1C], ebp
        mov dword ptr ss : [ebp], offset public_624d680
        mov dword ptr ss : [ebp+4], offset public_624d628
        mov dword ptr ss : [ebp+0x10C], 1
        pop ebx
        jmp public_621d31b
        public_621d319 : nop
        xor ebp, ebp
        public_621d31b : nop
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ss:[ebp+4]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6245b30
        mov eax, dword ptr ds : [edi+0xF0]
        pop edi
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0xF0], eax
        pop esi
        xor eax, eax
        mov dword ptr ds : [ecx], ebp
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x621d220)
    }
}

#undef public_621d319
#undef public_621d31b
