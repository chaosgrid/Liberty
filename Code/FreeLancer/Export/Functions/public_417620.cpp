#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b88c6);

#define public_4176ab _public_4176ab

PROC_DECLARE(0x417620, internal_417620, public_417620);
extern "C" NAKED register_t __cdecl internal_417620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b88c6 @0x417622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b88c6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push 0x2C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_4176ab
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, 1
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0x27], al
        mov byte ptr ds : [esi+0x26], al
        mov byte ptr ds : [esi+0x25], al
        mov byte ptr ds : [esi+0x24], al
        mov al, 8
        mov byte ptr ss : [esp+4], al
        mov byte ptr ss : [esp+5], al
        mov byte ptr ss : [esp+6], al
        mov byte ptr ss : [esp+0x14], cl
        mov byte ptr ss : [esp+7], 0xFF
        mov eax, dword ptr ss : [esp+4]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c8cb8
        mov dword ptr ds : [esi+0x24], eax
        call dword ptr ds : [public_5c8cd8]
        mov eax, esi
        public_4176ab : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x417620)
    }
}

#undef public_4176ab
