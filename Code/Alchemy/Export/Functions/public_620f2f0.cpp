#include "Alchemy-PCH.h"


#define public_620f315 _public_620f315
#define public_620f320 _public_620f320
#define public_620f341 _public_620f341
#define public_620f34c _public_620f34c
#define public_620f36d _public_620f36d
#define public_620f378 _public_620f378

PROC_DECLARE(0x620f2f0, internal_620f2f0, public_620f2f0);
extern "C" NAKED register_t __cdecl internal_620f2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xE2F60EEB
        jne public_620f320
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_620f315
        or ecx, 8
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f315 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f320 : nop
        cmp eax, 0xF3D52EE4
        jne public_620f34c
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_620f341
        or ch, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f341 : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f34c : nop
        cmp eax, 0xE8DC7F5E
        jne public_620f378
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_620f36d
        or ch, 0x20
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f36d : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_620f378 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f2f0)
    }
}

#undef public_620f315
#undef public_620f320
#undef public_620f341
#undef public_620f34c
#undef public_620f36d
#undef public_620f378
