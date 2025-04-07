#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370d70);
CLANG_FORWARD_PROC_SYMBOL(public_63743a0);
CLANG_FORWARD_PROC_SYMBOL(public_638cae0);
CLANG_FORWARD_PROC_SYMBOL(public_638e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_638e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_638ecb0);
CLANG_FORWARD_PROC_SYMBOL(public_6390b50);
CLANG_FORWARD_PROC_SYMBOL(public_6391720);

#define public_638cb0e _public_638cb0e
#define public_638cb11 _public_638cb11
#define public_638cb26 _public_638cb26
#define public_638cb29 _public_638cb29
#define public_638cb42 _public_638cb42
#define public_638cb59 _public_638cb59
#define public_638cb8e _public_638cb8e
#define public_638cbaa _public_638cbaa
#define public_638cbb7 _public_638cbb7
#define public_638cbc4 _public_638cbc4
#define public_638cbf7 _public_638cbf7
#define public_638cbfb _public_638cbfb
#define public_638cc12 _public_638cc12
#define public_638cc33 _public_638cc33
#define public_638cc55 _public_638cc55
#define public_638cc7b _public_638cc7b
#define public_638cc8c _public_638cc8c
#define public_638cc91 _public_638cc91
#define public_638cc9b _public_638cc9b
#define public_638ccab _public_638ccab
#define public_638ccba _public_638ccba
#define public_638ccbe _public_638ccbe
#define public_638ccdb _public_638ccdb
#define public_638ccee _public_638ccee
#define public_638cd2d _public_638cd2d
#define public_638cd5a _public_638cd5a
#define public_638cd71 _public_638cd71

PROC_DECLARE(0x638cae0, internal_638cae0, public_638cae0);
extern "C" NAKED register_t __cdecl internal_638cae0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_658b078]
        push ebp
        xor ebp, ebp
        cmp eax, 2
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [esp+4], ebp
        jl public_638cb26
        mov eax, dword ptr ds : [public_658b81c]
        cmp eax, ebp
        je public_638cb0e
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_638cb11
        public_638cb0e : nop
        or eax, 0xFFFFFFFF
        public_638cb11 : nop
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa064 @0x638cb17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa064
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638cb26 : nop
        push ebx
        push esi
        push edi
        public_638cb29 : nop
        mov ecx, dword ptr ds : [public_658b8f0]
        push ecx
        xor ebx, ebx
        call public_636ec10
        add esp, 4
        test eax, eax
        je public_638cc55
        public_638cb42 : nop
        mov edx, dword ptr ds : [public_658b8f0]
        push edx
        call public_636e460
        add esp, 4
        cmp eax, ebp
        je public_638cc12
        public_638cb59 : nop
        cmp eax, ebp
        mov edx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax+0x10]
        je public_638cb8e
        mov ecx, dword ptr ds : [public_658b9ac]
        mov ebp, dword ptr ds : [public_658b978]
        inc ecx
        mov dword ptr ds : [public_658b9ac], ecx
        mov ecx, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [ecx+0x60]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [ecx], eax
        xor ebp, ebp
        public_638cb8e : nop
        mov eax, dword ptr ds : [edx+0x50]
        test ah, 4
        jne public_638cbfb
        mov ecx, dword ptr ds : [edi+0x50]
        test ch, 4
        jne public_638cbfb
        test ah, 2
        je public_638cbaa
        test eax, 0x4000000
        je public_638cbb7
        public_638cbaa : nop
        test ch, 2
        je public_638cbc4
        test ecx, 0x4000000
        jne public_638cbc4
        public_638cbb7 : nop
        cmp dword ptr ds : [public_658b0a4], ebp
        je public_638cbc4
        cmp esi, 2
        jle public_638cbfb
        public_638cbc4 : nop
        push esi
        push edi
        push edx
        call public_638ecb0
        add esp, 0xC
        call public_638e9e0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        add edx, eax
        inc ecx
        cmp esi, 3
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], ecx
        mov ebx, 1
        jne public_638cbf7
        inc dword ptr ss : [esp+0x18]
        jmp public_638cbfb
        public_638cbf7 : nop
        inc dword ptr ss : [esp+0x1C]
        public_638cbfb : nop
        mov edx, dword ptr ds : [public_658b8f0]
        push edx
        call public_636e460
        add esp, 4
        cmp eax, ebp
        jne public_638cb59
        public_638cc12 : nop
        cmp dword ptr ds : [public_658b8c0], ebp
        je public_638cc33
        cmp dword ptr ds : [public_658b24c], 5
        jg public_638cc33
        cmp dword ptr ss : [esp+0x10], 2
        jle public_638cc33
        mov dword ptr ss : [esp+0x10], ebp
        call public_6390b50
        public_638cc33 : nop
        mov eax, dword ptr ds : [public_658b81c]
        push eax
        call public_638e0b0
        mov ecx, dword ptr ds : [public_658b8f0]
        push ecx
        call public_636ec10
        add esp, 8
        test eax, eax
        jne public_638cb42
        public_638cc55 : nop
        cmp dword ptr ds : [public_658b670], ebp
        je public_638ccdb
        mov ecx, dword ptr ds : [public_658b24c]
        xor eax, eax
        cmp ecx, 4
        jl public_638cc91
        cmp dword ptr ds : [public_658b8c0], ebp
        je public_638cc91
        mov eax, dword ptr ds : [public_658b838]
        cmp eax, ebp
        je public_638cc8c
        public_638cc7b : nop
        cmp dword ptr ds : [eax], ebp
        je public_638cc8c
        or dword ptr ds : [eax+0x14], 0x4000000
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        jne public_638cc7b
        public_638cc8c : nop
        mov eax, 1
        public_638cc91 : nop
        cmp ebx, ebp
        jne public_638cc9b
        cmp dword ptr ss : [esp+0x24], ebp
        je public_638ccba
        public_638cc9b : nop
        cmp dword ptr ds : [public_658b0a0], ebp
        je public_638ccab
        cmp dword ptr ds : [public_658b8c0], ebp
        je public_638ccba
        public_638ccab : nop
        cmp dword ptr ds : [public_658b24c], 5
        jg public_638ccba
        mov dword ptr ss : [esp+0x24], ebp
        jmp public_638ccbe
        public_638ccba : nop
        cmp eax, ebp
        je public_638ccdb
        public_638ccbe : nop
        call public_6390b50
        test eax, eax
        je public_638ccdb
        mov edx, dword ptr ds : [public_658b81c]
        push edx
        call public_638e0b0
        add esp, 4
        jmp public_638cb29
        public_638ccdb : nop
        cmp dword ptr ss : [esp+0x28], ebp
        je public_638ccee
        call public_6391720
        test eax, eax
        jne public_638cb29
        public_638ccee : nop
        cmp dword ptr ds : [public_658b03c], ebp
        pop edi
        pop esi
        pop ebx
        je public_638cd2d
        cmp dword ptr ds : [public_658b0a0], ebp
        jne public_638cd2d
        mov eax, dword ptr ds : [public_658b1a8]
        mov ecx, dword ptr ds : [public_658b81c]
        push ebp
        push ecx
        mov dword ptr ds : [public_658b948], eax
        mov dword ptr ds : [public_658b1a8], ebp
        call public_6370d70
        mov edx, dword ptr ds : [public_658b948]
        add esp, 8
        mov dword ptr ds : [public_658b1a8], edx
        public_638cd2d : nop
        cmp dword ptr ds : [public_658b078], 1
        pop ebp
        jl public_638cd5a
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63fa004 @0x638cd4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa004
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_638cd5a : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_638cd71
        cmp dword ptr ds : [public_658b844], 0x32
        jge public_638cd71
        call public_63743a0
        public_638cd71 : nop
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x638cae0)
    }
}

#undef public_638cb0e
#undef public_638cb11
#undef public_638cb26
#undef public_638cb29
#undef public_638cb42
#undef public_638cb59
#undef public_638cb8e
#undef public_638cbaa
#undef public_638cbb7
#undef public_638cbc4
#undef public_638cbf7
#undef public_638cbfb
#undef public_638cc12
#undef public_638cc33
#undef public_638cc55
#undef public_638cc7b
#undef public_638cc8c
#undef public_638cc91
#undef public_638cc9b
#undef public_638ccab
#undef public_638ccba
#undef public_638ccbe
#undef public_638ccdb
#undef public_638ccee
#undef public_638cd2d
#undef public_638cd5a
#undef public_638cd71
