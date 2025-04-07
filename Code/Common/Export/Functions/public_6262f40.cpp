#include "Common-PCH.h"


#define public_6262f55 _public_6262f55
#define public_6262f5f _public_6262f5f
#define public_6262f62 _public_6262f62

PROC_DECLARE(0x6262f40, internal_6262f40, public_6262f40);
extern "C" NAKED register_t __cdecl internal_6262f40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x404]
        push esi
        mov esi, dword ptr ds : [ecx+0x400]
        cmp eax, esi
        jae public_6262f5f
        mov dl, byte ptr ss : [esp+8]
        public_6262f55 : nop
        cmp byte ptr ds : [eax+ecx], dl
        je public_6262f62
        inc eax
        cmp eax, esi
        jb public_6262f55
        public_6262f5f : nop
        or eax, 0xFFFFFFFF
        public_6262f62 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6262f40)
    }
}

#undef public_6262f55
#undef public_6262f5f
#undef public_6262f62
