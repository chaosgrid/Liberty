#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303840);

#define public_6303872 _public_6303872
#define public_6303891 _public_6303891
#define public_630389a _public_630389a

PROC_DECLARE(0x6303840, internal_6303840, public_6303840);
extern "C" NAKED register_t __cdecl internal_6303840()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
/*FIXUP push offset public_63a2710 @0x6303848*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2710
        push ebp
        or edi, 0xFFFFFFFF
        call dword ptr ds : [public_63992f8]
        add esp, 8
        test eax, eax
        je public_630389a
        mov eax, dword ptr ss : [esp+0x1C]
        xor esi, esi
        test eax, eax
        jle public_630389a
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [public_639902c]
        public_6303872 : nop
        mov eax, dword ptr ds : [edi+esi*8]
        push eax
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        je public_6303891
        mov eax, dword ptr ss : [esp+0x1C]
        inc esi
        cmp esi, eax
        jl public_6303872
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_6303891 : nop
        mov eax, dword ptr ds : [edi+esi*8+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_630389a : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6303840)
    }
}

#undef public_6303872
#undef public_6303891
#undef public_630389a
