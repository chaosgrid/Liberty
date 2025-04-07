#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be310);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62be320 _public_62be320
#define public_62be34d _public_62be34d

PROC_DECLARE(0x62be310, internal_62be310, public_62be310);
extern "C" NAKED register_t __cdecl internal_62be310()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_63fc4c8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62be34d
        mov edi, edi
        public_62be320 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [public_63fc4cc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_63fc4cc], ecx
        jne public_62be320
        public_62be34d : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62be310)
    }
}

#undef public_62be320
#undef public_62be34d
