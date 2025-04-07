#include "RendComp-PCH.h"


#define public_6c2c400 _public_6c2c400
#define public_6c2c40b _public_6c2c40b
#define public_6c2c413 _public_6c2c413
#define public_6c2c424 _public_6c2c424

PROC_DECLARE(0x6c2c3e0, internal_6c2c3e0, public_6c2c3e0);
extern "C" NAKED register_t __cdecl internal_6c2c3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push edi
        je public_6c2c40b
        mov edi, dword ptr ss : [esp+0x10]
        nop 
        public_6c2c400 : nop
        cmp edx, edi
        je public_6c2c413
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6c2c400
        public_6c2c40b : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6c2c413 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6c2c424
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6c2c424 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c2c3e0)
    }
}

#undef public_6c2c400
#undef public_6c2c40b
#undef public_6c2c413
#undef public_6c2c424
