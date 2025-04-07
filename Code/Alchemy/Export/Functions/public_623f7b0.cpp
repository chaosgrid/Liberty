#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_62434c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a71c);

#define public_623f84a _public_623f84a
#define public_623f84c _public_623f84c
#define public_623f865 _public_623f865
#define public_623f873 _public_623f873
#define public_623f898 _public_623f898

PROC_DECLARE(0x623f7b0, internal_623f7b0, public_623f7b0);
extern "C" NAKED register_t __cdecl internal_623f7b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a71c @0x623f7b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a71c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, offset public_624bd80
        mov eax, offset public_624bd84
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x30], ecx
        mov dword ptr ds : [esi+0x28], eax
        push 0x34
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [esi+0x48], 0x40400000
        mov dword ptr ds : [esi], offset public_624f8d8
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x1C], 3
        je public_623f84a
        mov ecx, ebp
        call public_62434c0
        mov dword ptr ss : [ebp], offset public_624bbb8
        mov dword ptr ss : [ebp+0x30], 1
        jmp public_623f84c
        public_623f84a : nop
        xor ebp, ebp
        public_623f84c : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ss : [esp+0x1C], 2
        cmp eax, ebp
        je public_623f873
        cmp eax, edi
        je public_623f865
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], edi
        public_623f865 : nop
        cmp ebp, edi
        mov dword ptr ds : [esi+0x24], ebp
        je public_623f873
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+4]
        public_623f873 : nop
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        cmp dword ptr ds : [esi+0x34], edi
        je public_623f898
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_623f898
        push eax
        call public_62460e0
        add esp, 4
        public_623f898 : nop
        mov eax, edi
        mov dword ptr ds : [esi+0x38], edi
        push eax
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x3C], edi
        call public_623ef70
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x623f7b0)
    }
}

#undef public_623f84a
#undef public_623f84c
#undef public_623f865
#undef public_623f873
#undef public_623f898
