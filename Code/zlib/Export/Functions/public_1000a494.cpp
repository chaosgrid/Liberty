#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);
CLANG_FORWARD_PROC_SYMBOL(public_1000a494);
CLANG_FORWARD_PROC_SYMBOL(public_1000a64c);

#define public_1000a4a4 _public_1000a4a4
#define public_1000a4c6 _public_1000a4c6
#define public_1000a4db _public_1000a4db
#define public_1000a4e2 _public_1000a4e2
#define public_1000a4e8 _public_1000a4e8
#define public_1000a510 _public_1000a510
#define public_1000a52d _public_1000a52d
#define public_1000a556 _public_1000a556
#define public_1000a57f _public_1000a57f
#define public_1000a595 _public_1000a595
#define public_1000a5af _public_1000a5af
#define public_1000a5b7 _public_1000a5b7
#define public_1000a5c2 _public_1000a5c2
#define public_1000a5d7 _public_1000a5d7
#define public_1000a5dc _public_1000a5dc

PROC_DECLARE(0x1000a494, internal_1000a494, public_1000a494);
extern "C" NAKED register_t __cdecl internal_1000a494()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 1
        jne public_1000a4c6
        inc dword ptr ds : [public_1000e1d0]
        public_1000a4a4 : nop
        cmp dword ptr ds : [public_1000e1c8], 0
        jne public_1000a4e8
        call dword ptr ds : [public_1000b050]
        cmp al, 3
        jne public_1000a4e2
        test eax, 0x80000000
        je public_1000a4e2
        inc dword ptr ds : [public_1000e1c8]
        jmp public_1000a4e8
        public_1000a4c6 : nop
        test esi, esi
        jne public_1000a4a4
        cmp dword ptr ds : [public_1000e1d0], 0
        jle public_1000a4db
        dec dword ptr ds : [public_1000e1d0]
        jmp public_1000a4a4
        public_1000a4db : nop
        xor eax, eax
        jmp public_1000a5dc
        public_1000a4e2 : nop
        dec dword ptr ds : [public_1000e1c8]
        public_1000a4e8 : nop
        cmp esi, 1
        jne public_1000a57f
        cmp dword ptr ds : [public_1000e1c8], 0
        jl public_1000a510
        cmp dword ptr ds : [public_1000e1d0], 1
        jne public_1000a5d7
        cmp dword ptr ds : [public_1000e1c8], 0
        jge public_1000a52d
        public_1000a510 : nop
        push 0x80
        call public_1000a46a
        add esp, 4
        mov dword ptr ds : [public_1000e5dc], eax
        test eax, eax
        jne public_1000a556
        xor eax, eax
        jmp public_1000a5dc
        public_1000a52d : nop
        cmp dword ptr ds : [public_1000e1d0], 1
        jne public_1000a556
        push 0x80
        push 0x2000
        call dword ptr ds : [public_1000b04c]
        mov dword ptr ds : [public_1000e5dc], eax
        test eax, eax
        jne public_1000a556
        xor eax, eax
        jmp public_1000a5dc
        public_1000a556 : nop
        mov eax, dword ptr ds : [public_1000e5dc]
/*FIXUP push offset public_1000b060 @0x1000a55b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b060
/*FIXUP push offset public_1000b05c @0x1000a560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b05c
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_1000e5dc]
        mov dword ptr ds : [public_1000e5d8], eax
        call public_1000a64c
        add esp, 8
        jmp public_1000a5d7
        public_1000a57f : nop
        test esi, esi
        jne public_1000a5d7
        cmp dword ptr ds : [public_1000e1c8], 0
        jl public_1000a595
        cmp dword ptr ds : [public_1000e1d0], 0
        jne public_1000a5d7
        public_1000a595 : nop
        cmp dword ptr ds : [public_1000e5dc], 0
        je public_1000a5d7
        mov esi, dword ptr ds : [public_1000e5d8]
        sub esi, 4
        cmp dword ptr ds : [public_1000e5dc], esi
        ja public_1000a5c2
        public_1000a5af : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_1000a5b7
        call eax
        public_1000a5b7 : nop
        sub esi, 4
        cmp dword ptr ds : [public_1000e5dc], esi
        jbe public_1000a5af
        public_1000a5c2 : nop
        cmp dword ptr ds : [public_1000e1c8], 0
        jle public_1000a5d7
        mov eax, dword ptr ds : [public_1000e5dc]
        push eax
        call dword ptr ds : [public_1000b054]
        public_1000a5d7 : nop
        mov eax, 1
        public_1000a5dc : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x1000a494)
    }
}

#undef public_1000a4a4
#undef public_1000a4c6
#undef public_1000a4db
#undef public_1000a4e2
#undef public_1000a4e8
#undef public_1000a510
#undef public_1000a52d
#undef public_1000a556
#undef public_1000a57f
#undef public_1000a595
#undef public_1000a5af
#undef public_1000a5b7
#undef public_1000a5c2
#undef public_1000a5d7
#undef public_1000a5dc
