#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_52b510);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c041e);

#define public_52b54d _public_52b54d
#define public_52b55d _public_52b55d
#define public_52b56c _public_52b56c
#define public_52b583 _public_52b583
#define public_52b593 _public_52b593
#define public_52b5a2 _public_52b5a2

PROC_DECLARE(0x52b510, internal_52b510, public_52b510);
extern "C" NAKED register_t __cdecl internal_52b510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c041e @0x52b512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c041e
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
        mov dword ptr ds : [esi], offset public_5dd218
        mov ecx, dword ptr ds : [esi+0x4C]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], 2
        je public_52b54d
        call public_4f7a90
        mov dword ptr ds : [esi+0x4C], edi
        public_52b54d : nop
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, edi
        je public_52b55d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x48], edi
        public_52b55d : nop
        mov ecx, dword ptr ds : [esi+0x50]
        cmp ecx, edi
        je public_52b56c
        call public_537ad0
        mov dword ptr ds : [esi+0x50], edi
        public_52b56c : nop
        mov dword ptr ds : [esi+0x44], edi
        mov ecx, dword ptr ds : [esi+0x4C]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        je public_52b583
        call public_4f7a90
        mov dword ptr ds : [esi+0x4C], edi
        public_52b583 : nop
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, edi
        je public_52b593
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x48], edi
        public_52b593 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        cmp ecx, edi
        je public_52b5a2
        call public_537ad0
        mov dword ptr ds : [esi+0x50], edi
        public_52b5a2 : nop
        mov dword ptr ds : [esi+0x44], edi
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov ecx, dword ptr ds : [public_5c687c]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [esi+0x18]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x52b510)
    }
}

#undef public_52b54d
#undef public_52b55d
#undef public_52b56c
#undef public_52b583
#undef public_52b593
#undef public_52b5a2
