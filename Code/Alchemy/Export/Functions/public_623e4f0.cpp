#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e4f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a67e);

#define public_623e513 _public_623e513
#define public_623e515 _public_623e515
#define public_623e531 _public_623e531
#define public_623e545 _public_623e545
#define public_623e572 _public_623e572
#define public_623e582 _public_623e582
#define public_623e5a7 _public_623e5a7

PROC_DECLARE(0x623e4f0, internal_623e4f0, public_623e4f0);
extern "C" NAKED register_t __cdecl internal_623e4f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a67e @0x623e4f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a67e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_623e513
        lea esi, ds:[ecx+4]
        jmp public_623e515
        public_623e513 : nop
        xor esi, esi
        public_623e515 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_623e531
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_623e531 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_623e545
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_623e545 : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_623e572
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_623e572
        push eax
        call public_62460e0
        add esp, 4
        public_623e572 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_623e582
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_623e582 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_623e5a7
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_623e5a7
        push esi
        call public_62460e0
        add esp, 4
        public_623e5a7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623e4f0)
    }
}

#undef public_623e513
#undef public_623e515
#undef public_623e531
#undef public_623e545
#undef public_623e572
#undef public_623e582
#undef public_623e5a7
