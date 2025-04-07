#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_623ba50);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6245b30);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a391);

#define public_623bb37 _public_623bb37
#define public_623bb39 _public_623bb39

PROC_DECLARE(0x623ba50, internal_623ba50, public_623ba50);
extern "C" NAKED register_t __cdecl internal_623ba50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a391 @0x623ba52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a391
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        push 0x104
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_623bb37
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
        mov dword ptr ds : [esi], offset public_624f3a0
        mov dword ptr ds : [esi+0xF8], edi
        mov dword ptr ds : [esi+0xF4], edi
        mov dword ptr ds : [esi+0xF0], edi
        mov dword ptr ss : [ebp+0x1C], ebp
        mov dword ptr ss : [ebp], offset public_624f2f8
        mov dword ptr ss : [ebp+4], offset public_624f2a0
        mov dword ptr ss : [ebp+0x100], 1
        pop ebx
        jmp public_623bb39
        public_623bb37 : nop
        xor ebp, ebp
        public_623bb39 : nop
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
        UNREACHABLE_TRAP(0x623ba50)
    }
}

#undef public_623bb37
#undef public_623bb39
