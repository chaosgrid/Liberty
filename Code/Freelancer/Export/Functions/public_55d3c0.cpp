#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_55a560);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1741);

#define public_55d47a _public_55d47a
#define public_55d47c _public_55d47c
#define public_55d4c0 _public_55d4c0

PROC_DECLARE(0x55d3c0, internal_55d3c0, public_55d3c0);
extern "C" NAKED register_t __cdecl internal_55d3c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1741 @0x55d3c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1741
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push 0x3CC
        mov dword ptr ss : [esp+0xC], ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_55d47a
        push edi
        mov ecx, esi
        call public_55a560
        lea edi, ds:[esi+0x378]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        call public_420d40
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x3A4]
        push ebx
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_5c7084]
        mov cl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x3B4], cl
        mov dword ptr ds : [esi+0x3B8], ebx
        mov dword ptr ds : [esi+0x3BC], ebx
        mov dword ptr ds : [esi+0x3C0], ebx
        mov dword ptr ds : [esi], offset public_5e1764
        mov dword ptr ds : [esi+0x7C], offset public_5e1754
        pop edi
        jmp public_55d47c
        public_55d47a : nop
        xor esi, esi
        public_55d47c : nop
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        add edx, 0xC
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_55d4c0
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        public_55d4c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x55d3c0)
    }
}

#undef public_55d47a
#undef public_55d47c
#undef public_55d4c0
