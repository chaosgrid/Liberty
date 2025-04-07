#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);
CLANG_FORWARD_PROC_SYMBOL(public_100033e0);
CLANG_FORWARD_PROC_SYMBOL(public_10005890);
CLANG_FORWARD_PROC_SYMBOL(public_1000a40c);
CLANG_FORWARD_PROC_SYMBOL(public_1000a412);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_100033ee _public_100033ee
#define public_100033fe _public_100033fe
#define public_10003414 _public_10003414
#define public_1000341e _public_1000341e
#define public_10003420 _public_10003420
#define public_10003441 _public_10003441
#define public_1000344a _public_1000344a
#define public_1000345a _public_1000345a
#define public_1000346a _public_1000346a
#define public_1000347a _public_1000347a

PROC_DECLARE(0x100033e0, internal_100033e0, public_100033e0);
extern "C" NAKED register_t __cdecl internal_100033e0()
{
    __asm
    {
        push edi
        xor edi, edi
        test esi, esi
        jne public_100033ee
        mov eax, 0xFFFFFFFE
        pop edi
        ret 
        public_100033ee : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_100033fe
        push eax
        call public_1000a418
        add esp, 4
        public_100033fe : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_10003420
        mov al, byte ptr ds : [esi+0x5C]
        cmp al, 0x77
        jne public_10003414
        push esi
        call public_10001ff0
        jmp public_1000341e
        public_10003414 : nop
        cmp al, 0x72
        jne public_10003420
        push esi
        call public_10005890
        public_1000341e : nop
        mov edi, eax
        public_10003420 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_10003441
        push eax
        call public_1000a412
        add esp, 4
        test eax, eax
        je public_10003441
        call public_1000a40c
        cmp dword ptr ds : [eax], 0x1D
        je public_10003441
        or edi, 0xFFFFFFFF
        public_10003441 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jge public_1000344a
        mov edi, eax
        public_1000344a : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_1000345a
        push eax
        call public_1000a418
        add esp, 4
        public_1000345a : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_1000346a
        push eax
        call public_1000a418
        add esp, 4
        public_1000346a : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_1000347a
        push eax
        call public_1000a418
        add esp, 4
        public_1000347a : nop
        push esi
        call public_1000a418
        add esp, 4
        mov eax, edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x100033e0)
    }
}

#undef public_100033ee
#undef public_100033fe
#undef public_10003414
#undef public_1000341e
#undef public_10003420
#undef public_10003441
#undef public_1000344a
#undef public_1000345a
#undef public_1000346a
#undef public_1000347a
