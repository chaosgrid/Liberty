#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5725e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3808);

#define public_57265f _public_57265f
#define public_57266b _public_57266b

PROC_DECLARE(0x5725e0, internal_5725e0, public_5725e0);
extern "C" NAKED register_t __cdecl internal_5725e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3808 @0x5725e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3808
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        xor ebx, ebx
        push 1
        lea ecx, ds:[esi+0x7C]
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ds:[esi+0x6C]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ds:[esi+0x5C]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ds:[esi+0x4C]
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        cmp eax, ebx
        je public_57266b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_57265f
        cmp cl, 0xFF
        je public_57265f
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_57266b
        public_57265f : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_57266b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi], offset public_5cfd94
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5725e0)
    }
}

#undef public_57265f
#undef public_57266b
