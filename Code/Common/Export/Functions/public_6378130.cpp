#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378130);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6378186 _public_6378186
#define public_63781b1 _public_63781b1
#define public_63781c9 _public_63781c9
#define public_63781e0 _public_63781e0

PROC_DECLARE(0x6378130, internal_6378130, public_6378130);
extern "C" NAKED register_t __cdecl internal_6378130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_658b998], eax
        lea eax, ds:[edi-1]
        mov dword ptr ds : [public_658b960], ecx
        mov ecx, eax
        not ecx
        test eax, ecx
        mov dword ptr ds : [public_658b96c], esi
        mov dword ptr ds : [public_658b964], edx
        mov dword ptr ds : [public_658b974], eax
        je public_6378186
        push edi
/*FIXUP push offset public_63f2f58 @0x637816e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2f58
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_6378186 : nop
        push 4
        push esi
        call public_6343f80
        push 4
        push esi
        mov dword ptr ds : [public_658b97c], eax
        call public_6343f80
        mov ecx, dword ptr ds : [public_658b97c]
        add esp, 0x10
        test ecx, ecx
        mov dword ptr ds : [public_658b978], eax
        je public_63781b1
        test eax, eax
        jne public_63781c9
/*FIXUP public_63781b1 : nop
        push offset public_63f2f28 @0x63781b1*/
  FIXUP public_63781b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2f28
        call public_6356960
        push 0
        push 0
        push 4
        call public_6378600
        add esp, 0x10
        public_63781c9 : nop
        cmp dword ptr ds : [public_658b998], 1
        jl public_63781e0
        push edi
/*FIXUP push offset public_63f2eec @0x63781d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2eec
        call public_6356960
        add esp, 8
        public_63781e0 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6378130)
    }
}

#undef public_6378186
#undef public_63781b1
#undef public_63781c9
#undef public_63781e0
