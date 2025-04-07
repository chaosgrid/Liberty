#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9405);

#define public_6ef9415 _public_6ef9415
#define public_6ef941c _public_6ef941c
#define public_6ef9423 _public_6ef9423
#define public_6ef942a _public_6ef942a
#define public_6ef9431 _public_6ef9431
#define public_6ef943b _public_6ef943b
#define public_6ef9460 _public_6ef9460
#define public_6ef9465 _public_6ef9465
#define public_6ef9468 _public_6ef9468
#define public_6ef947e _public_6ef947e
#define public_6ef9480 _public_6ef9480
#define public_6ef948d _public_6ef948d

PROC_DECLARE(0x6ef9405, internal_6ef9405, public_6ef9405);
extern "C" NAKED register_t __cdecl internal_6ef9405()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor eax, eax
        push esi
        test bl, 0x10
        je public_6ef9415
        push 1
        pop eax
        public_6ef9415 : nop
        test bl, 8
        je public_6ef941c
        or al, 4
        public_6ef941c : nop
        test bl, 4
        je public_6ef9423
        or al, 8
        public_6ef9423 : nop
        test bl, 2
        je public_6ef942a
        or al, 0x10
        public_6ef942a : nop
        test bl, 1
        je public_6ef9431
        or al, 0x20
        public_6ef9431 : nop
        test ebx, 0x80000
        je public_6ef943b
        or al, 2
        public_6ef943b : nop
        mov ecx, ebx
        mov edx, 0x300
        and ecx, edx
        mov esi, 0x200
        je public_6ef9468
        cmp ecx, 0x100
        je public_6ef9465
        cmp ecx, esi
        je public_6ef9460
        cmp ecx, edx
        jne public_6ef9468
        or ah, 0xC
        jmp public_6ef9468
        public_6ef9460 : nop
        or ah, 8
        jmp public_6ef9468
        public_6ef9465 : nop
        or ah, 4
        public_6ef9468 : nop
        mov ecx, ebx
        and ecx, 0x30000
        je public_6ef947e
        cmp ecx, 0x10000
        jne public_6ef9480
        or eax, esi
        jmp public_6ef9480
        public_6ef947e : nop
        or eax, edx
        public_6ef9480 : nop
        pop esi
        test ebx, 0x40000
        pop ebx
        je public_6ef948d
        or ah, 0x10
        public_6ef948d : nop
        ret 
        UNREACHABLE_TRAP(0x6ef9405)
    }
}

#undef public_6ef9415
#undef public_6ef941c
#undef public_6ef9423
#undef public_6ef942a
#undef public_6ef9431
#undef public_6ef943b
#undef public_6ef9460
#undef public_6ef9465
#undef public_6ef9468
#undef public_6ef947e
#undef public_6ef9480
#undef public_6ef948d
