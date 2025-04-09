#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_52f660);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c05de);

#define public_52f69a _public_52f69a
#define public_52f6a6 _public_52f6a6
#define public_52f6ba _public_52f6ba
#define public_52f6ca _public_52f6ca
#define public_52f6d9 _public_52f6d9
#define public_52f6ef _public_52f6ef
#define public_52f6ff _public_52f6ff
#define public_52f70e _public_52f70e

PROC_DECLARE(0x52f660, internal_52f660, public_52f660);
extern "C" NAKED register_t __cdecl internal_52f660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c05de @0x52f662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c05de
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
        mov dword ptr ds : [esi], offset public_5ddcdc
        mov ecx, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], 2
        je public_52f69a
        call public_40e990
        public_52f69a : nop
        mov ecx, dword ptr ds : [esi+0x34]
        cmp ecx, ebx
        je public_52f6a6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_52f6a6 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x14], 1
        je public_52f6ba
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], ebx
        public_52f6ba : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_52f6ca
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_52f6ca : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp ecx, ebx
        je public_52f6d9
        call public_537ad0
        mov dword ptr ds : [esi+0x2C], ebx
        public_52f6d9 : nop
        mov dword ptr ds : [esi+0x20], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_52f6ef
        call public_4f7a90
        mov dword ptr ds : [esi+0x18], ebx
        public_52f6ef : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_52f6ff
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_52f6ff : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, ebx
        je public_52f70e
        call public_537ad0
        mov dword ptr ds : [esi+0x1C], ebx
        public_52f70e : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x52f660)
    }
}

#undef public_52f69a
#undef public_52f6a6
#undef public_52f6ba
#undef public_52f6ca
#undef public_52f6d9
#undef public_52f6ef
#undef public_52f6ff
#undef public_52f70e
