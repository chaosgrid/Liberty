#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad13e8);

#define public_6ad140c _public_6ad140c
#define public_6ad141a _public_6ad141a
#define public_6ad1428 _public_6ad1428
#define public_6ad1436 _public_6ad1436
#define public_6ad1444 _public_6ad1444
#define public_6ad1452 _public_6ad1452
#define public_6ad1460 _public_6ad1460
#define public_6ad1471 _public_6ad1471
#define public_6ad1478 _public_6ad1478
#define public_6ad1487 _public_6ad1487

PROC_DECLARE(0x6ad13e8, internal_6ad13e8, public_6ad13e8);
extern "C" NAKED register_t __cdecl internal_6ad13e8()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6add570]
        cmp eax, 0xFFFFFFFF
        je public_6ad1487
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6ad140c
        push eax
        call dword ptr ds : [public_6ada11c]
        mov esi, eax
        test esi, esi
        je public_6ad1478
        public_6ad140c : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6ad141a
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad141a : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_6ad1428
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1428 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6ad1436
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1436 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6ad1444
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1444 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_6ad1452
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1452 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_6ad1460
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1460 : nop
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, offset public_6adfc80
        je public_6ad1471
        push eax
        call public_6ad07b3
        pop ecx
        public_6ad1471 : nop
        push esi
        call public_6ad07b3
        pop ecx
        public_6ad1478 : nop
        push 0
        push dword ptr ds : [public_6add570]
        call dword ptr ds : [public_6ada12c]
        pop esi
        public_6ad1487 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad13e8)
    }
}

#undef public_6ad140c
#undef public_6ad141a
#undef public_6ad1428
#undef public_6ad1436
#undef public_6ad1444
#undef public_6ad1452
#undef public_6ad1460
#undef public_6ad1471
#undef public_6ad1478
#undef public_6ad1487
