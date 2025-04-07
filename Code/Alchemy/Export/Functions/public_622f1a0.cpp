#include "Alchemy-PCH.h"


#define public_622f1cb _public_622f1cb
#define public_622f1d9 _public_622f1d9
#define public_622f200 _public_622f200
#define public_622f20e _public_622f20e

PROC_DECLARE(0x622f1a0, internal_622f1a0, public_622f1a0);
extern "C" NAKED register_t __cdecl internal_622f1a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xE34C3C55
        jne public_622f1d9
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x9C]
        je public_622f1cb
        or ecx, 1
        mov dword ptr ds : [eax+0x9C], ecx
        xor eax, eax
        ret 0xC
        public_622f1cb : nop
        and ecx, 0xFFFFFFFE
        mov dword ptr ds : [eax+0x9C], ecx
        xor eax, eax
        ret 0xC
        public_622f1d9 : nop
        cmp eax, 0x49A6DBE
        jne public_622f20e
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x9C]
        je public_622f200
        or ecx, 2
        mov dword ptr ds : [eax+0x9C], ecx
        xor eax, eax
        ret 0xC
        public_622f200 : nop
        and ecx, 0xFFFFFFFD
        mov dword ptr ds : [eax+0x9C], ecx
        xor eax, eax
        ret 0xC
        public_622f20e : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622f1a0)
    }
}

#undef public_622f1cb
#undef public_622f1d9
#undef public_622f200
#undef public_622f20e
