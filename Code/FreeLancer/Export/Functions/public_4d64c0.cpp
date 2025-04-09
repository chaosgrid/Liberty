#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d64c0);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5be239);

#define public_4d6526 _public_4d6526
#define public_4d654d _public_4d654d
#define public_4d6574 _public_4d6574
#define public_4d659b _public_4d659b
#define public_4d65d3 _public_4d65d3

PROC_DECLARE(0x4d64c0, internal_4d64c0, public_4d64c0);
extern "C" NAKED register_t __cdecl internal_4d64c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be239 @0x4d64c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be239
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x38]
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5d8104
        mov dword ptr ds : [ebx], offset public_5d804c
        mov dword ptr ds : [esi+0xB4], offset public_5d803c
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        lea edi, ds:[esi+0x3E8]
        mov dword ptr ds : [public_674a10], eax
        mov dword ptr ss : [esp+0x18], edi
        mov eax, dword ptr ds : [edi+4]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        mov byte ptr ss : [esp+0x24], 5
        je public_4d6526
        mov ecx, edi
        call public_59eee0
        public_4d6526 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_59ef20
        lea edi, ds:[esi+0x3BC]
        mov dword ptr ss : [esp+0x18], edi
        cmp dword ptr ds : [edi+4], ebp
        mov byte ptr ss : [esp+0x24], 6
        je public_4d654d
        mov ecx, edi
        call public_59eee0
        public_4d654d : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        call public_59ef20
        lea edi, ds:[esi+0x390]
        mov dword ptr ss : [esp+0x18], edi
        cmp dword ptr ds : [edi+4], ebp
        mov byte ptr ss : [esp+0x24], 7
        je public_4d6574
        mov ecx, edi
        call public_59eee0
        public_4d6574 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call public_59ef20
        lea edi, ds:[esi+0x364]
        mov dword ptr ss : [esp+0x18], edi
        cmp dword ptr ds : [edi+4], ebp
        mov byte ptr ss : [esp+0x24], 8
        je public_4d659b
        mov ecx, edi
        call public_59eee0
        public_4d659b : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        call public_59ef20
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 0
        call public_59fa50
        pop edi
        mov dword ptr ds : [esi], offset public_5d6eac
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        lea ecx, ds:[esi+0x28]
        pop esi
        mov dword ptr ss : [esp+0x1C], ebp
        pop ebp
        pop ebx
        je public_4d65d3
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4d65d3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4d64c0)
    }
}

#undef public_4d6526
#undef public_4d654d
#undef public_4d6574
#undef public_4d659b
#undef public_4d65d3
