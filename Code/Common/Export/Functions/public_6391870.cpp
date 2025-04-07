#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6371200);
CLANG_FORWARD_PROC_SYMBOL(public_6371ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_6391870);

#define public_639189b _public_639189b
#define public_63918b9 _public_63918b9
#define public_63918f8 _public_63918f8
#define public_63918fa _public_63918fa
#define public_639190c _public_639190c
#define public_6391911 _public_6391911
#define public_6391934 _public_6391934
#define public_639193d _public_639193d
#define public_6391970 _public_6391970
#define public_6391982 _public_6391982
#define public_63919a8 _public_63919a8

PROC_DECLARE(0x6391870, internal_6391870, public_6391870);
extern "C" NAKED register_t __cdecl internal_6391870()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [public_658b078], 4
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], 0
        jl public_639189b
        push 0
        push 0
        push 0
        push esi
/*FIXUP push offset public_63fba60 @0x639188e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fba60
        call public_6378820
        add esp, 0x14
        public_639189b : nop
        cmp esi, dword ptr ds : [public_658b82c]
        je public_63918b9
        mov eax, dword ptr ds : [public_658b834]
        test eax, eax
        je public_639193d
        test dword ptr ds : [eax+0x14], 0x10000000
        je public_6391911
        public_63918b9 : nop
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [edx+0x4C]
        push ecx
        push eax
/*FIXUP push offset public_63fba10 @0x63918cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fba10
        call public_6356960
        mov edx, dword ptr ds : [public_658b82c]
        add esp, 0x10
        cmp esi, edx
        je public_639190c
        mov ecx, dword ptr ds : [public_658b834]
        test ecx, ecx
        je public_63918f8
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_63918f8
        mov eax, dword ptr ds : [eax+4]
        jmp public_63918fa
        public_63918f8 : nop
        xor eax, eax
        public_63918fa : nop
        push ecx
        push 0
        push eax
        push edx
/*FIXUP push offset public_63fb420 @0x63918ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb420
        call public_6378820
        add esp, 0x14
        public_639190c : nop
        mov eax, dword ptr ds : [public_658b834]
        public_6391911 : nop
        test eax, eax
        je public_639193d
        test dword ptr ds : [eax+0x14], 0x8000000
        je public_6391934
        mov ecx, dword ptr ds : [public_658b870]
        push ecx
/*FIXUP push offset public_63fb9d8 @0x6391925*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb9d8
        call public_6356960
        add esp, 8
        jmp public_639193d
        public_6391934 : nop
        push eax
        call public_6371ee0
        add esp, 4
        public_639193d : nop
        mov eax, dword ptr ds : [public_658b82c]
        test eax, eax
        je public_6391970
        lea edx, ss:[esp+4]
        push edx
        push 1
        push eax
        call public_6371200
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 0xC
        test eax, eax
        je public_6391970
        mov eax, dword ptr ds : [public_658b82c]
        push 0
        push eax
        push 5
        call public_6378600
        add esp, 0xC
        public_6391970 : nop
        mov eax, dword ptr ds : [public_658b03c]
        test eax, eax
        jne public_6391982
        cmp dword ptr ds : [public_658b078], 4
        jl public_63919a8
        public_6391982 : nop
        lea ecx, ss:[esp+4]
        push ecx
        push 1
        push esi
        call public_6371200
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 0xC
        test eax, eax
        je public_63919a8
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0xC
        public_63919a8 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6391870)
    }
}

#undef public_639189b
#undef public_63918b9
#undef public_63918f8
#undef public_63918fa
#undef public_639190c
#undef public_6391911
#undef public_6391934
#undef public_639193d
#undef public_6391970
#undef public_6391982
#undef public_63919a8
