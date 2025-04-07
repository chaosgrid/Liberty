#include "Alchemy-PCH.h"


#define public_622f173 _public_622f173
#define public_622f194 _public_622f194

PROC_DECLARE(0x622f150, internal_622f150, public_622f150);
extern "C" NAKED register_t __cdecl internal_622f150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xE34C3C55
        jne public_622f173
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x9C]
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622f173 : nop
        cmp eax, 0x49A6DBE
        jne public_622f194
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x9C]
        shr ecx, 1
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_622f194 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622f150)
    }
}

#undef public_622f173
#undef public_622f194
