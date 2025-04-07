#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);

#define public_62cf539 _public_62cf539
#define public_62cf54c _public_62cf54c
#define public_62cf55c _public_62cf55c
#define public_62cf56a _public_62cf56a
#define public_62cf578 _public_62cf578
#define public_62cf584 _public_62cf584
#define public_62cf586 _public_62cf586
#define public_62cf5b2 _public_62cf5b2
#define public_62cf5b9 _public_62cf5b9
#define public_62cf5c9 _public_62cf5c9

PROC_DECLARE(0x62cf530, internal_62cf530, public_62cf530);
extern "C" NAKED register_t __cdecl internal_62cf530()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x28], 2
        jne public_62cf55c
        public_62cf539 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62cf54c
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62cf54c : nop
        mov dword ptr ds : [esi+0xC], 2
        mov eax, 2
        pop esi
        ret 4
        public_62cf55c : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf56a
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62cf578
        public_62cf56a : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push 1
        push 0xE
        call public_62d29a0
        jmp public_62cf539
        public_62cf578 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf584
        add eax, 0xFFFFFFF8
        jmp public_62cf586
        public_62cf584 : nop
        xor eax, eax
        public_62cf586 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x24]
        push ecx
        push eax
        add edx, 0x14FC
        push edx
        call public_62e4500
        add esp, 0xC
        test al, al
        mov al, byte ptr ds : [esi+0x29]
        je public_62cf5b9
        test al, al
        mov eax, 3
        jne public_62cf5b2
        mov eax, 1
        public_62cf5b2 : nop
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62cf5b9 : nop
        test al, al
        je public_62cf5c9
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62cf5c9 : nop
        mov dword ptr ds : [esi+0xC], 0
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cf530)
    }
}

#undef public_62cf539
#undef public_62cf54c
#undef public_62cf55c
#undef public_62cf56a
#undef public_62cf578
#undef public_62cf584
#undef public_62cf586
#undef public_62cf5b2
#undef public_62cf5b9
#undef public_62cf5c9
