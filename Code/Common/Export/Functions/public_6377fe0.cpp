#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_6378015 _public_6378015
#define public_6378053 _public_6378053

PROC_DECLARE(0x6377fe0, internal_6377fe0, public_6377fe0);
extern "C" NAKED register_t __cdecl internal_6377fe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        je public_6378053
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [public_658b970]
        jg public_6378015
        inc dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        mov edx, dword ptr ds : [ecx+esi*4]
        mov ecx, dword ptr ds : [public_658b978]
        lea ecx, ds:[ecx+edx*4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 
        public_6378015 : nop
        mov edx, dword ptr ds : [public_658b9b0]
        mov ecx, dword ptr ds : [public_658b9b8]
        inc edx
        sub ecx, esi
        push eax
        mov dword ptr ds : [public_658b9b0], edx
        mov dword ptr ds : [public_658b9b8], ecx
        call public_6343fb0
        mov eax, dword ptr ds : [public_658b998]
        add esp, 4
        cmp eax, 5
        jl public_6378053
        push 0
        push esi
/*FIXUP push offset public_63f2ec8 @0x6378046*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2ec8
        call public_6356960
        add esp, 0xC
        public_6378053 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6377fe0)
    }
}

#undef public_6378015
#undef public_6378053
