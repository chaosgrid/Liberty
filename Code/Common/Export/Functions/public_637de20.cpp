#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6373e90);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637d790);
CLANG_FORWARD_PROC_SYMBOL(public_637de20);
CLANG_FORWARD_PROC_SYMBOL(public_637e6f0);

#define public_637de42 _public_637de42
#define public_637de4f _public_637de4f
#define public_637de81 _public_637de81
#define public_637de8c _public_637de8c
#define public_637de9a _public_637de9a
#define public_637dedc _public_637dedc
#define public_637deff _public_637deff
#define public_637df0e _public_637df0e
#define public_637df21 _public_637df21
#define public_637df2b _public_637df2b
#define public_637df4a _public_637df4a
#define public_637df82 _public_637df82
#define public_637df90 _public_637df90
#define public_637dfb4 _public_637dfb4
#define public_637dfcd _public_637dfcd
#define public_637dfd1 _public_637dfd1

PROC_DECLARE(0x637de20, internal_637de20, public_637de20);
extern "C" NAKED register_t __cdecl internal_637de20()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [public_658b078], 1
        push esi
        push edi
        mov edi, dword ptr ds : [public_63991e8]
        jl public_637de42
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5648 @0x637de37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5648
        push eax
        call edi
        add esp, 8
        public_637de42 : nop
        mov eax, dword ptr ds : [public_658b810]
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        je public_637de8c
        public_637de4f : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_637de8c
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 6
        je public_637de81
        mov ecx, dword ptr ds : [eax+0x4C]
        push ecx
/*FIXUP push offset public_63f55f8 @0x637de62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f55f8
        call public_6356960
        mov edx, dword ptr ss : [esp+0x10]
        push 0
        push edx
        push 5
        call public_6378600
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x14
        public_637de81 : nop
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jne public_637de4f
        public_637de8c : nop
        mov esi, dword ptr ds : [public_658b838]
        test esi, esi
        je public_637df2b
        public_637de9a : nop
        cmp dword ptr ds : [esi], 0
        je public_637df2b
        mov eax, dword ptr ds : [esi+0x14]
        test eax, 0x10000000
        je public_637dedc
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63f55b4 @0x637deb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f55b4
        call public_6356960
        push esi
        push 0
        push 0
        push 0
/*FIXUP push offset public_63ee94c @0x637dec4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x28
        public_637dedc : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [public_658b1f8]
        add esp, 4
        test ecx, ecx
        jle public_637deff
        lea edx, ds:[ecx-1]
        cmp eax, edx
        je public_637dfd1
        test ecx, ecx
        public_637deff : nop
        jge public_637df0e
        or edx, 0xFFFFFFFF
        sub edx, ecx
        cmp eax, edx
        je public_637dfd1
        public_637df0e : nop
        mov ecx, dword ptr ds : [public_658b1f4]
        test ecx, ecx
        jle public_637df21
        dec ecx
        cmp eax, ecx
        je public_637dfd1
        public_637df21 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_637de9a
        public_637df2b : nop
        mov ecx, dword ptr ds : [public_658b810]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ds : [public_658b818], ecx
        call public_637e6f0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_637df82
        public_637df4a : nop
        mov eax, dword ptr ds : [public_658b0dc]
        mov edx, dword ptr ds : [public_658b84c]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        dec edx
        push esi
        mov dword ptr ds : [public_658b84c], edx
        call public_637d790
        add esp, 0xC
        test eax, eax
        je public_637df82
        lea edx, ss:[esp+8]
        push edx
        call public_637e6f0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_637df4a
        public_637df82 : nop
        mov eax, dword ptr ds : [public_658b6f0]
        test eax, eax
        je public_637df90
        call public_6373e90
        public_637df90 : nop
        mov eax, dword ptr ds : [public_658b84c]
        test eax, eax
        je public_637dfb4
        test esi, esi
        jne public_637dfb4
        push eax
/*FIXUP push offset public_63f5564 @0x637df9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5564
        call public_6356960
        push esi
        push esi
        push 5
        call public_6378600
        add esp, 0x14
        public_637dfb4 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_637dfcd
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5534 @0x637dfc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5534
        push eax
        call edi
        add esp, 8
        public_637dfcd : nop
        pop edi
        pop esi
        pop ecx
        ret 
        public_637dfd1 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_637dfcd
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f54fc @0x637dfe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f54fc
        push eax
        call edi
        add esp, 0xC
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x637de20)
    }
}

#undef public_637de42
#undef public_637de4f
#undef public_637de81
#undef public_637de8c
#undef public_637de9a
#undef public_637dedc
#undef public_637deff
#undef public_637df0e
#undef public_637df21
#undef public_637df2b
#undef public_637df4a
#undef public_637df82
#undef public_637df90
#undef public_637dfb4
#undef public_637dfcd
#undef public_637dfd1
