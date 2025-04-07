#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac230);

#define public_62c117a _public_62c117a
#define public_62c1182 _public_62c1182

PROC_DECLARE(0x62c1150, internal_62c1150, public_62c1150);
extern "C" NAKED register_t __cdecl internal_62c1150()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        je public_62c1182
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_62c1182
        mov ecx, esi
        call public_62ac230
        test eax, eax
        je public_62c117a
        mov eax, dword ptr ds : [eax+0xC0]
        pop esi
        ret 
        public_62c117a : nop
        mov eax, dword ptr ds : [esi+0x1A0]
        pop esi
        ret 
        public_62c1182 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62c1150)
    }
}

#undef public_62c117a
#undef public_62c1182
