#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a6e6);

#define public_623ea6e _public_623ea6e
#define public_623ea7f _public_623ea7f
#define public_623ea8c _public_623ea8c
#define public_623ea9d _public_623ea9d
#define public_623eab2 _public_623eab2
#define public_623eac4 _public_623eac4
#define public_623eb01 _public_623eb01
#define public_623eb14 _public_623eb14
#define public_623eb1a _public_623eb1a
#define public_623eb28 _public_623eb28

PROC_DECLARE(0x623ea30, internal_623ea30, public_623ea30);
extern "C" NAKED register_t __cdecl internal_623ea30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a6e6 @0x623ea32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a6e6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi], ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], 1
        je public_623ea7f
        public_623ea6e : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        jne public_623ea6e
        public_623ea7f : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_623ea9d
        public_623ea8c : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        jne public_623ea8c
        public_623ea9d : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_623eab2
        push eax
        call public_62460e0
        add esp, 4
        public_623eab2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebx
        cmp eax, ebx
        je public_623eac4
        push eax
        call public_62460e0
        add esp, 4
        public_623eac4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], eax
        imul eax, edi
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_624612c
        mov dword ptr ds : [esi], eax
        lea eax, ds:[edi*8]
        push eax
        call public_624612c
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 8
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ds : [esi+4], eax
        pop edi
        jbe public_623eb28
        public_623eb01 : nop
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, ebx
        je public_623eb14
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+4], ecx
        jmp public_623eb1a
        public_623eb14 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+0x1C], eax
        public_623eb1a : nop
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [esi+0xC]
        inc edx
        add eax, 8
        cmp edx, ecx
        jb public_623eb01
        public_623eb28 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x623ea30)
    }
}

#undef public_623ea6e
#undef public_623ea7f
#undef public_623ea8c
#undef public_623ea9d
#undef public_623eab2
#undef public_623eac4
#undef public_623eb01
#undef public_623eb14
#undef public_623eb1a
#undef public_623eb28
