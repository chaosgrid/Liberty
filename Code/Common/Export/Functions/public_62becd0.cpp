#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62becd0);

#define public_62bece5 _public_62bece5
#define public_62becf6 _public_62becf6
#define public_62becfa _public_62becfa
#define public_62becff _public_62becff

PROC_DECLARE(0x62becd0, internal_62becd0, public_62becd0);
extern "C" NAKED register_t __cdecl internal_62becd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        push esi
        mov esi, eax
        je public_62becff
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_62bece5 : nop
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_62becf6
        mov edx, dword ptr ds : [edx+8]
        jmp public_62becfa
        public_62becf6 : nop
        mov esi, edx
        mov edx, dword ptr ds : [edx]
        public_62becfa : nop
        cmp edx, ecx
        jne public_62bece5
        pop edi
        public_62becff : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62becd0)
    }
}

#undef public_62bece5
#undef public_62becf6
#undef public_62becfa
#undef public_62becff
