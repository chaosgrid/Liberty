#include "Server-PCH.h"


#define public_6ced3a1 _public_6ced3a1
#define public_6ced3a3 _public_6ced3a3
#define public_6ced3c7 _public_6ced3c7
#define public_6ced3dd _public_6ced3dd

PROC_DECLARE(0x6ced380, internal_6ced380, public_6ced380);
extern "C" NAKED register_t __cdecl internal_6ced380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        push esi
        mov esi, ecx
        jne public_6ced3c7
        mov esi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ced3a1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ced3a3
        public_6ced3a1 : nop
        xor eax, eax
        public_6ced3a3 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6ced3dd
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        pop esi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [edx+0x54]
        public_6ced3c7 : nop
        cmp eax, 0xA
        jne public_6ced3dd
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_6d64330]
        mov dword ptr ds : [esi+4], 0
        public_6ced3dd : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ced380)
    }
}

#undef public_6ced3a1
#undef public_6ced3a3
#undef public_6ced3c7
#undef public_6ced3dd
