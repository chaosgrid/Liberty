#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_6231220);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249a3e);

#define public_6231243 _public_6231243
#define public_6231245 _public_6231245
#define public_623127b _public_623127b
#define public_6231298 _public_6231298
#define public_62312b4 _public_62312b4
#define public_62312c5 _public_62312c5
#define public_62312da _public_62312da
#define public_623131d _public_623131d
#define public_623132d _public_623132d
#define public_623134c _public_623134c

PROC_DECLARE(0x6231220, internal_6231220, public_6231220);
extern "C" NAKED register_t __cdecl internal_6231220()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249a3e @0x6231228*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249a3e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        test ecx, ecx
        push esi
        push edi
        je public_6231243
        lea esi, ds:[ecx+4]
        jmp public_6231245
        public_6231243 : nop
        xor esi, esi
        public_6231245 : nop
        mov edi, offset public_624bd84
        push ebx
        mov dword ptr ds : [esi+0x7C], edi
        mov eax, dword ptr ds : [esi+0x88]
        mov ebx, offset public_624bd80
        mov dword ptr ss : [esp+0xC], esi
        test eax, eax
        push ebp
        mov dword ptr ds : [esi+0x84], ebx
        je public_623127b
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_623127b
        push eax
        call public_62460e0
        add esp, 4
        public_623127b : nop
        mov dword ptr ds : [esi+0x5C], edi
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        mov dword ptr ds : [esi+0x64], ebx
        je public_6231298
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_6231298
        push eax
        call public_62460e0
        add esp, 4
        public_6231298 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x20], 1
        test eax, eax
        je public_62312b4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], 0
        public_62312b4 : nop
        mov ebx, dword ptr ds : [esi+0x50]
        lea ebp, ds:[esi+0x4C]
        mov byte ptr ss : [esp+0x20], 0
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_62312da
        public_62312c5 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, ebp
        call public_620c160
        cmp edi, ebx
        jne public_62312c5
        public_62312da : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        xor edi, edi
        add esp, 4
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov ebx, offset public_624bd84
        mov ebp, offset public_624bd80
        mov dword ptr ds : [esi+0x28], ebx
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], 2
        mov dword ptr ds : [esi+0x30], ebp
        je public_623131d
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_623131d
        push eax
        call public_62460e0
        add esp, 4
        public_623131d : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, edi
        je public_623132d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], edi
        public_623132d : nop
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], ebp
        cmp eax, edi
        pop ebp
        pop ebx
        je public_623134c
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, edi
        je public_623134c
        push esi
        call public_62460e0
        add esp, 4
        public_623134c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6231220)
    }
}

#undef public_6231243
#undef public_6231245
#undef public_623127b
#undef public_6231298
#undef public_62312b4
#undef public_62312c5
#undef public_62312da
#undef public_623131d
#undef public_623132d
#undef public_623134c
