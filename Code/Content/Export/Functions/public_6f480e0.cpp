#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f480e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faef69);

#define public_6f4816f _public_6f4816f
#define public_6f4817b _public_6f4817b

PROC_DECLARE(0x6f480e0, internal_6f480e0, public_6f480e0);
extern "C" NAKED register_t __cdecl internal_6f480e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faef69 @0x6f480e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faef69
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov byte ptr ss : [esp+0xC], al
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [ecx+0xC]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_6fb3528]
        mov esi, dword ptr ss : [esp+0x34]
        mov cl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov edx, dword ptr ds : [public_6fb32cc]
        mov eax, dword ptr ds : [edx]
        add esp, 8
        push eax
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb32d0]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6f4817b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f4816f
        cmp cl, 0xFF
        je public_6f4816f
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4817b
        public_6f4816f : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4817b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f480e0)
    }
}

#undef public_6f4816f
#undef public_6f4817b
