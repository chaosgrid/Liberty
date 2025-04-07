#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40311);
CLANG_FORWARD_PROC_SYMBOL(public_6d40349);
CLANG_FORWARD_PROC_SYMBOL(public_6d403ee);

#define public_6d40425 _public_6d40425
#define public_6d40441 _public_6d40441
#define public_6d40447 _public_6d40447
#define public_6d40451 _public_6d40451
#define public_6d40467 _public_6d40467
#define public_6d4046b _public_6d4046b
#define public_6d40472 _public_6d40472
#define public_6d40482 _public_6d40482
#define public_6d40493 _public_6d40493
#define public_6d4049b _public_6d4049b

PROC_DECLARE(0x6d403ee, internal_6d403ee, public_6d403ee);
extern "C" NAKED register_t __cdecl internal_6d403ee()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x74]
        sub esp, 0x98
        push ebx
        push edi
        push 0x25
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x24]
        rep stosd
        lea eax, ss:[ebp-0x24]
        xor bl, bl
        and byte ptr ss : [ebp+0x73], bl
        push eax
        mov dword ptr ss : [ebp-0x24], 0x94
        call dword ptr ds : [public_6d5e034]
        test eax, eax
        jne public_6d40425
        inc bl
        mov byte ptr ss : [ebp+0x73], 1
        public_6d40425 : nop
        cmp dword ptr ss : [ebp-0x14], 1
        jne public_6d40447
        cmp dword ptr ss : [ebp-0x20], 4
        ja public_6d40451
        jne public_6d40441
        cmp dword ptr ss : [ebp-0x1C], 0xA
        jb public_6d40441
        cmp word ptr ss : [ebp-0x18], 0x55D
        jae public_6d40451
        public_6d40441 : nop
        mov byte ptr ss : [ebp+0x73], 1
        jmp public_6d40451
        public_6d40447 : nop
        cmp dword ptr ss : [ebp-0x14], 2
        jne public_6d40467
        test bl, bl
        je public_6d40482
        public_6d40451 : nop
        mov eax, dword ptr ss : [ebp+0x7C]
        sub eax, 6
        je public_6d40472
        dec eax
        je public_6d4046b
        sub eax, 3
        jne public_6d40467
        cmp byte ptr ss : [ebp+0x73], 0
        je public_6d40493
        public_6d40467 : nop
        xor eax, eax
        jmp public_6d4049b
        public_6d4046b : nop
        call public_6d40311
        jmp public_6d4049b
        public_6d40472 : nop
        cmp byte ptr ss : [ebp+0x73], 0
        jne public_6d40467
        call public_6d40349
        and eax, 4
        jmp public_6d4049b
        public_6d40482 : nop
        cmp dword ptr ss : [ebp+0x7C], 0xA
        je public_6d40493
        push dword ptr ss : [ebp+0x7C]
        call dword ptr ds : [public_6d5e038]
        jmp public_6d4049b
        public_6d40493 : nop
        call public_6d40349
        and eax, 8
        public_6d4049b : nop
        pop edi
        pop ebx
        add ebp, 0x74
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d403ee)
    }
}

#undef public_6d40425
#undef public_6d40441
#undef public_6d40447
#undef public_6d40451
#undef public_6d40467
#undef public_6d4046b
#undef public_6d40472
#undef public_6d40482
#undef public_6d40493
#undef public_6d4049b
