#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403c10);
CLANG_FORWARD_PROC_SYMBOL(public_414530);
CLANG_FORWARD_PROC_SYMBOL(public_414850);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_JUMP_SYMBOL(public_41a9a8);

#define public_4145bd _public_4145bd
#define public_4145e3 _public_4145e3

PROC_DECLARE(0x414530, internal_414530, public_414530);
extern "C" NAKED register_t __cdecl internal_414530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a9a8 @0x414532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a9a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push 0xFFFFFFFF
        push ebx
        mov byte ptr ss : [esp+0x18], cl
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_403c10
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        call public_414850
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_4145e3
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4145bd
        cmp cl, 0xFF
        je public_4145bd
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        lea eax, ds:[ecx+0x1C]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_4145bd : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        mov edx, dword ptr ss : [esp+0xC]
        add esp, 4
        pop esi
        lea eax, ds:[edx+0x1C]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_4145e3 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        add eax, 0x1C
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x414530)
    }
}

#undef public_4145bd
#undef public_4145e3
