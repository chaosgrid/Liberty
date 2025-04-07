#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6235f50);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249e78);

#define public_6235fa6 _public_6235fa6
#define public_6235fc8 _public_6235fc8
#define public_6235fca _public_6235fca
#define public_6236010 _public_6236010
#define public_6236020 _public_6236020
#define public_6236042 _public_6236042
#define public_6236044 _public_6236044
#define public_6236095 _public_6236095
#define public_62360b7 _public_62360b7
#define public_62360b9 _public_62360b9
#define public_6236123 _public_6236123
#define public_6236125 _public_6236125
#define public_62361b7 _public_62361b7

PROC_DECLARE(0x6235f50, internal_6235f50, public_6235f50);
extern "C" NAKED register_t __cdecl internal_6235f50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249e78 @0x6235f52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249e78
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
        push edi
        mov dword ptr ss : [esp+0x18], esi
        call public_623f7b0
        xor ebp, ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov dword ptr ds : [esi+0x50], ebp
        mov dword ptr ds : [esi+0x54], ebp
        lea ebx, ds:[esi+0x58]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [esi], offset public_624eba0
        mov eax, dword ptr ds : [esi+0x4C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 4
        je public_6235fa6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebp
        public_6235fa6 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 5
        je public_6235fc8
        mov ecx, eax
        call public_6206ce0
        mov edi, eax
        jmp public_6235fca
        public_6235fc8 : nop
        xor edi, edi
        public_6235fca : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x28], 6
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x41200000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x4C], edi
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 4
        je public_6236010
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6236010 : nop
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, ebp
        je public_6236020
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebp
        public_6236020 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 7
        je public_6236042
        mov ecx, eax
        call public_6206ce0
        mov edi, eax
        jmp public_6236044
        public_6236042 : nop
        xor edi, edi
        public_6236044 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x28], 8
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3E99999A
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x50], edi
        mov byte ptr ss : [esp+0x28], 4
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, ebp
        je public_6236095
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x54], ebp
        public_6236095 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 9
        je public_62360b7
        mov ecx, eax
        call public_6206ce0
        mov edi, eax
        jmp public_62360b9
        public_62360b7 : nop
        xor edi, edi
        public_62360b9 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x28], 0xA
        call public_6209fd0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x42480000
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        add esp, 8
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x54], edi
        mov byte ptr ss : [esp+0x28], 4
        call public_6209fd0
        mov ecx, ebx
        call public_620a0d0
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 0xB
        je public_6236123
        mov ecx, eax
        call public_6207490
        mov edi, eax
        jmp public_6236125
        public_6236123 : nop
        xor edi, edi
        public_6236125 : nop
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x28], 0xC
        call public_6209ff0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x3F800000
        call public_6208bc0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        add esp, 8
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx], edi
        mov byte ptr ss : [esp+0x28], 4
        call public_6209ff0
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x34], 0xD
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0x3A83126F
        push edx
        mov ecx, dword ptr ds : [eax]
        push 0x3F800000
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        push 3
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x28], 4
        cmp eax, ebp
        je public_62361b7
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_62361b7 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6235f50)
    }
}

#undef public_6235fa6
#undef public_6235fc8
#undef public_6235fca
#undef public_6236010
#undef public_6236020
#undef public_6236042
#undef public_6236044
#undef public_6236095
#undef public_62360b7
#undef public_62360b9
#undef public_6236123
#undef public_6236125
#undef public_62361b7
