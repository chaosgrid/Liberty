#include "FreeLancer-PCH.h"


#define public_42bf53 _public_42bf53
#define public_42bf63 _public_42bf63
#define public_42bf69 _public_42bf69

PROC_DECLARE(0x42bf10, internal_42bf10, public_42bf10);
extern "C" NAKED register_t __cdecl internal_42bf10()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        cmp eax, esi
        jne public_42bf53
        mov eax, dword ptr ds : [esi+0x18]
        fld dword ptr ds : [public_5c7474]
        test eax, 0x2000000
        je public_42bf69
        mov al, byte ptr ds : [esi+0x19]
        test al, al
        jle public_42bf69
        fstp st(0)
        movsx esi, al
        call dword ptr ds : [public_5c71dc]
        lea ecx, ds:[esi+esi+1]
        cdq 
        idiv ecx
        sub edx, esi
        mov dword ptr ss : [esp+4], edx
        fild dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        public_42bf53 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_42bf63
        mov edx, dword ptr ds : [ecx]
        pop esi
        add esp, 4
        jmp dword ptr ds : [edx+0x2C]
        public_42bf63 : nop
        fld dword ptr ds : [public_5c7474]
        public_42bf69 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x42bf10)
    }
}

#undef public_42bf53
#undef public_42bf63
#undef public_42bf69
