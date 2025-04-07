#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638d910);
CLANG_FORWARD_PROC_SYMBOL(public_638e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_638e280);
CLANG_FORWARD_PROC_SYMBOL(public_6391400);

#define public_638e0dd _public_638e0dd
#define public_638e0ff _public_638e0ff
#define public_638e141 _public_638e141
#define public_638e151 _public_638e151
#define public_638e165 _public_638e165
#define public_638e176 _public_638e176
#define public_638e180 _public_638e180
#define public_638e191 _public_638e191
#define public_638e1c7 _public_638e1c7
#define public_638e1ca _public_638e1ca
#define public_638e1d3 _public_638e1d3
#define public_638e1de _public_638e1de
#define public_638e20b _public_638e20b
#define public_638e21d _public_638e21d
#define public_638e237 _public_638e237
#define public_638e254 _public_638e254
#define public_638e272 _public_638e272

PROC_DECLARE(0x638e0b0, internal_638e0b0, public_638e0b0);
extern "C" NAKED register_t __cdecl internal_638e0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b8f0]
        push eax
        call public_636ec10
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 4
        jl public_638e0dd
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa7c0 @0x638e0ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa7c0
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638e0dd : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        inc ecx
        test edi, edi
        mov dword ptr ds : [public_658b8e0], ecx
        je public_638e1de
        mov ebp, 0x2000
        public_638e0ff : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_638e1de
        mov ecx, dword ptr ds : [edi+0x50]
        mov eax, 0x4000000
        test eax, ecx
        jne public_638e1d3
        mov ecx, dword ptr ds : [edi+0x50]
        mov edx, dword ptr ds : [public_658b8e0]
        or ecx, eax
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        mov dword ptr ds : [edi+0x48], edx
        mov dword ptr ds : [edi+0x50], ecx
        je public_638e151
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        je public_638e151
        public_638e141 : nop
        and dword ptr ds : [eax+0x50], 0xFFFFDFFF
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638e141
        public_638e151 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_638e1d3
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_638e1d3
        public_638e165 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, 0x2000000
        je public_638e176
        test eax, 0x4000000
        je public_638e1ca
        public_638e176 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        jne public_638e180
        mov ecx, dword ptr ds : [esi+8]
        public_638e180 : nop
        test dword ptr ds : [ecx+0x50], ebp
        je public_638e191
        and eax, 0xFBFFFFFF
        or eax, 0x2000000
        jmp public_638e1c7
        public_638e191 : nop
        mov edx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [ecx+0x48], edx
        je public_638e1ca
        and eax, 0xFBFFFFFF
        or eax, 0x2000000
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [ecx+0x50]
        push ecx
        or eax, ebp
        push edi
        mov dword ptr ds : [ecx+0x50], eax
        call public_6391400
        add esp, 8
        test eax, eax
        je public_638e1ca
        mov eax, dword ptr ds : [esi+0xC]
        or eax, 0x4000000
        public_638e1c7 : nop
        mov dword ptr ds : [esi+0xC], eax
        public_638e1ca : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_638e165
        public_638e1d3 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_638e0ff
        public_638e1de : nop
        mov eax, dword ptr ds : [public_658b8f0]
        push eax
        call public_636ec10
        mov esi, eax
        mov eax, dword ptr ds : [public_658b014]
        add esp, 4
        test eax, eax
        je public_638e20b
        mov ecx, dword ptr ds : [public_658b8f0]
/*FIXUP push offset _public_638e280 @0x638e1fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_638e280
        push 4
        push esi
        add ecx, 4
        push ecx
        jmp public_638e21d
        public_638e20b : nop
        mov edx, dword ptr ds : [public_658b8f0]
/*FIXUP push offset _public_638d910 @0x638e211*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_638d910
        push 4
        push esi
        add edx, 4
        push edx
        public_638e21d : nop
        call dword ptr ds : [public_63992a8]
        mov eax, dword ptr ds : [public_658b8c0]
        add esp, 0x10
        test eax, eax
        je public_638e237
        add dword ptr ds : [public_658bd58], esi
        jmp public_638e254
        public_638e237 : nop
        mov ecx, dword ptr ds : [public_658bd48]
        mov eax, dword ptr ds : [public_658bd50]
        add ecx, esi
        cmp eax, esi
        mov dword ptr ds : [public_658bd48], ecx
        jge public_638e254
        mov dword ptr ds : [public_658bd50], esi
        public_638e254 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638e272
        mov eax, dword ptr ds : [public_658b7fc]
        push esi
/*FIXUP push offset public_63fa79c @0x638e263*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa79c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638e272 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638e0b0)
    }
}

#undef public_638e0dd
#undef public_638e0ff
#undef public_638e141
#undef public_638e151
#undef public_638e165
#undef public_638e176
#undef public_638e180
#undef public_638e191
#undef public_638e1c7
#undef public_638e1ca
#undef public_638e1d3
#undef public_638e1de
#undef public_638e20b
#undef public_638e21d
#undef public_638e237
#undef public_638e254
#undef public_638e272
