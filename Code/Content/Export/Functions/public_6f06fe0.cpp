#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f06fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facf28);

#define public_6f07050 _public_6f07050
#define public_6f070c9 _public_6f070c9
#define public_6f070cc _public_6f070cc

PROC_DECLARE(0x6f06fe0, internal_6f06fe0, public_6f06fe0);
extern "C" NAKED register_t __cdecl internal_6f06fe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facf28 @0x6f06fe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facf28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov dword ptr ds : [esi+4], 1
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [edi+8]
        xor ebx, ebx
        mov dword ptr ds : [esi+0xC], ecx
        mov byte ptr ds : [esi+0x10], bl
        mov dword ptr ds : [esi], offset public_6fb81d8
        mov ecx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x14], ecx
        mov ebp, dword ptr ds : [edi+0x58]
        lea eax, ds:[esi+0x1C]
        cmp eax, ebx
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x10], esi
        lea edx, ds:[esi+0x20]
        mov dword ptr ds : [ecx], ebp
        je public_6f07050
        cmp edx, ebx
        mov ebp, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [eax], ebp
        je public_6f07050
        mov eax, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [edx], eax
        public_6f07050 : nop
        mov dword ptr ds : [esi+0x24], ebx
        mov edx, dword ptr ds : [edi+0x4C]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [edi+0x50]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0x30], eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [esi], offset public_6fb8330
        call dword ptr ds : [public_6fb3630]
        push 0x20
        call public_6fa912a
        add esp, 0x10
        cmp eax, ebx
        je public_6f070c9
        mov ecx, dword ptr ds : [edi+0xC]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_6fb83b4]
        mov dword ptr ds : [eax], offset public_6fb839c
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+0xC]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax], offset public_6fb8384
        mov dword ptr ds : [esi+0x28], eax
        jmp public_6f070cc
        public_6f070c9 : nop
        mov dword ptr ds : [esi+0x28], ebx
        public_6f070cc : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f06fe0)
    }
}

#undef public_6f07050
#undef public_6f070c9
#undef public_6f070cc
