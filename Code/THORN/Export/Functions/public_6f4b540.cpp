#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cd30);

#define public_6f4b551 _public_6f4b551
#define public_6f4b57c _public_6f4b57c

PROC_DECLARE(0x6f4b540, internal_6f4b540, public_6f4b540);
extern "C" NAKED register_t __cdecl internal_6f4b540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6f4b551
        fld qword ptr ds : [public_6f5b430]
        pop esi
        ret 
        public_6f4b551 : nop
        shl eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi-0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6f4b57c
        push eax
        call public_6f4cd30
        add esp, 4
        test eax, eax
        je public_6f4b57c
        fld qword ptr ds : [public_6f5b430]
        pop esi
        ret 
        public_6f4b57c : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+4]
        fld qword ptr ds : [eax+esi-8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b540)
    }
}

#undef public_6f4b551
#undef public_6f4b57c
