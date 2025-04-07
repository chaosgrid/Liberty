#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4438a0);
CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9743);

#define public_4438ed _public_4438ed

PROC_DECLARE(0x4438a0, internal_4438a0, public_4438a0);
extern "C" NAKED register_t __cdecl internal_4438a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9743 @0x4438a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9743
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5cb8d4
        lea edi, ds:[esi+0x38]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 1
        call public_457e30
        mov eax, dword ptr ds : [esi+0x30]
        cmp eax, 0xFFFFFFFF
        je public_4438ed
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        public_4438ed : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 0
        call public_457dc0
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_5594b0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4438a0)
    }
}

#undef public_4438ed
