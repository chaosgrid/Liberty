#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62373c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249f24);

#define public_62373e3 _public_62373e3
#define public_62373e5 _public_62373e5
#define public_6237401 _public_6237401
#define public_6237416 _public_6237416
#define public_623742b _public_623742b
#define public_623743f _public_623743f
#define public_623746c _public_623746c
#define public_623747c _public_623747c
#define public_62374a1 _public_62374a1

PROC_DECLARE(0x62373c0, internal_62373c0, public_62373c0);
extern "C" NAKED register_t __cdecl internal_62373c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249f24 @0x62373c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249f24
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
        je public_62373e3
        lea esi, ds:[ecx+4]
        jmp public_62373e5
        public_62373e3 : nop
        xor esi, esi
        public_62373e5 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x14], 3
        cmp eax, ebx
        je public_6237401
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_6237401 : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov byte ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_6237416
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_6237416 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_623742b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_623742b : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_623743f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_623743f : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 4
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_623746c
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_623746c
        push eax
        call public_62460e0
        add esp, 4
        public_623746c : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_623747c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_623747c : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_62374a1
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_62374a1
        push esi
        call public_62460e0
        add esp, 4
        public_62374a1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62373c0)
    }
}

#undef public_62373e3
#undef public_62373e5
#undef public_6237401
#undef public_6237416
#undef public_623742b
#undef public_623743f
#undef public_623746c
#undef public_623747c
#undef public_62374a1
