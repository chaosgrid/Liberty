#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f481c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c610);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf0f8);

#define public_6f4c65c _public_6f4c65c
#define public_6f4c664 _public_6f4c664
#define public_6f4c6b9 _public_6f4c6b9
#define public_6f4c6c5 _public_6f4c6c5
#define public_6f4c6d2 _public_6f4c6d2

PROC_DECLARE(0x6f4c610, internal_6f4c610, public_6f4c610);
extern "C" NAKED register_t __cdecl internal_6f4c610()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf0f8 @0x6f4c618*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf0f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push esi
        push edi
        mov edi, ecx
        push ebx
        lea eax, ss:[esp+0x34]
        lea esi, ds:[edi+0x20C]
        push eax
        mov ecx, esi
        call public_6f2e220
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        je public_6f4c65c
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4c65c
        lea eax, ss:[esp+0x30]
        jmp public_6f4c664
        public_6f4c65c : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f4c664 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x210]
        je public_6f4c6d2
        mov dl, byte ptr ss : [esp+0x30]
        xor esi, esi
        mov byte ptr ss : [esp+0x10], dl
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x2C], esi
        call public_6f481c0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, esi
        je public_6f4c6b9
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6f4c6b9
        mov edx, dword ptr ds : [ebx]
        push edx
        call dword ptr ds : [public_6fb353c]
        add esp, 4
        jmp public_6f4c6c5
        public_6f4c6b9 : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax+0x8C]
        public_6f4c6c5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6fa8fe0
        add esp, 4
        public_6f4c6d2 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f4c610)
    }
}

#undef public_6f4c65c
#undef public_6f4c664
#undef public_6f4c6b9
#undef public_6f4c6c5
#undef public_6f4c6d2
