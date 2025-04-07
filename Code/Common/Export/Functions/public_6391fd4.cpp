#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391fd4);
CLANG_FORWARD_PROC_SYMBOL(public_639213a);

#define public_6391fea _public_6391fea
#define public_6392012 _public_6392012
#define public_6392016 _public_6392016
#define public_639203c _public_639203c
#define public_6392053 _public_6392053
#define public_6392064 _public_6392064
#define public_6392069 _public_6392069
#define public_6392079 _public_6392079
#define public_639207c _public_639207c

PROC_DECLARE(0x6391fd4, internal_6391fd4, public_6391fd4);
extern "C" NAKED register_t __cdecl internal_6391fd4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6391fea
        cmp dword ptr ds : [public_658c72c], eax
        jle public_6392012
        dec dword ptr ds : [public_658c72c]
        public_6391fea : nop
        mov ecx, dword ptr ds : [public_63992d0]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_658ea00], ecx
        jne public_639203c
        push 0x80
        call dword ptr ds : [public_6399328]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_658ea0c], eax
        jne public_6392016
        public_6392012 : nop
        xor eax, eax
        jmp public_639207c
        public_6392016 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_658ea0c]
/*FIXUP push offset public_63ea618 @0x639201e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ea618
/*FIXUP push offset public_63ea000 @0x6392023*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ea000
        mov dword ptr ds : [public_658ea08], eax
        call public_639213a
        inc dword ptr ds : [public_658c72c]
        pop ecx
        pop ecx
        jmp public_6392079
        public_639203c : nop
        test eax, eax
        jne public_6392079
        mov eax, dword ptr ds : [public_658ea0c]
        test eax, eax
        je public_6392079
        mov ecx, dword ptr ds : [public_658ea08]
        push esi
        lea esi, ds:[ecx-4]
        public_6392053 : nop
        cmp esi, eax
        jb public_6392069
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6392064
        call ecx
        mov eax, dword ptr ds : [public_658ea0c]
        public_6392064 : nop
        sub esi, 4
        jmp public_6392053
        public_6392069 : nop
        push eax
        call dword ptr ds : [public_639932c]
        and dword ptr ds : [public_658ea0c], 0
        pop ecx
        pop esi
        public_6392079 : nop
        push 1
        pop eax
        public_639207c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6391fd4)
    }
}

#undef public_6391fea
#undef public_6392012
#undef public_6392016
#undef public_639203c
#undef public_6392053
#undef public_6392064
#undef public_6392069
#undef public_6392079
#undef public_639207c
