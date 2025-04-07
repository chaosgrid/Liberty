#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4500);

#define public_62ccb99 _public_62ccb99
#define public_62ccb9b _public_62ccb9b
#define public_62ccbca _public_62ccbca
#define public_62ccbd1 _public_62ccbd1
#define public_62ccbe1 _public_62ccbe1
#define public_62ccbee _public_62ccbee
#define public_62ccc01 _public_62ccc01

PROC_DECLARE(0x62ccb70, internal_62ccb70, public_62ccb70);
extern "C" NAKED register_t __cdecl internal_62ccb70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        mov ecx, 2
        test cl, al
        je public_62ccbee
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccbee
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ccbee
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62ccb99
        add eax, 0xFFFFFFF8
        jmp public_62ccb9b
        public_62ccb99 : nop
        xor eax, eax
        public_62ccb9b : nop
        mov ecx, dword ptr ds : [esi+0x2B4]
        mov edx, dword ptr ds : [esi+0x24]
        push ecx
        push eax
        add edx, 0x14FC
        push edx
        call public_62e4500
        add esp, 0xC
        test al, al
        mov al, byte ptr ds : [esi+0x29]
        je public_62ccbd1
        test al, al
        mov eax, 3
        jne public_62ccbca
        mov eax, 1
        public_62ccbca : nop
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62ccbd1 : nop
        test al, al
        je public_62ccbe1
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62ccbe1 : nop
        mov dword ptr ds : [esi+0xC], 0
        xor eax, eax
        pop esi
        ret 4
        public_62ccbee : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62ccc01
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62ccc01 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ccb70)
    }
}

#undef public_62ccb99
#undef public_62ccb9b
#undef public_62ccbca
#undef public_62ccbd1
#undef public_62ccbe1
#undef public_62ccbee
#undef public_62ccc01
