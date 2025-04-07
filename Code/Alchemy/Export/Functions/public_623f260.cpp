#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f260);

#define public_623f281 _public_623f281
#define public_623f299 _public_623f299
#define public_623f29b _public_623f29b
#define public_623f2aa _public_623f2aa
#define public_623f2eb _public_623f2eb
#define public_623f2f7 _public_623f2f7

PROC_DECLARE(0x623f260, internal_623f260, public_623f260);
extern "C" NAKED register_t __cdecl internal_623f260()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+8]
        fcom dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_623f281
        fdivr dword ptr ds : [public_624bac4]
        mov ecx, 1
        jmp public_623f29b
        public_623f281 : nop
        fcom dword ptr ds : [public_624c368]
        fnstsw ax
        test ah, 5
        jp public_623f299
        fdivr dword ptr ds : [public_624bac4]
        or ecx, 0xFFFFFFFF
        jmp public_623f29b
        public_623f299 : nop
        xor ecx, ecx
        public_623f29b : nop
        fld dword ptr ds : [public_624bc38]
        mov eax, 6
        mov dword ptr ss : [esp+8], eax
        public_623f2aa : nop
        mov edx, eax
        imul edx, eax
        mov dword ptr ss : [esp], edx
        dec eax
        fild dword ptr ss : [esp]
        cmp eax, 1
        fmul st, st(2)
        fmul st, st(2)
        fild dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], eax
        fadd st(0), st
        fadd st, st(2)
        fadd dword ptr ds : [public_624bac4]
        fdivp 
        fstp st(1)
        jge public_623f2aa
        fadd dword ptr ds : [public_624bac4]
        test ecx, ecx
        jle public_623f2eb
        fdivp 
        fsubr dword ptr ds : [public_624f7a4]
        pop ecx
        ret 
        public_623f2eb : nop
        jge public_623f2f7
        fdivp 
        fsubr dword ptr ds : [public_624f7a0]
        pop ecx
        ret 
        public_623f2f7 : nop
        fdivp 
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x623f260)
    }
}

#undef public_623f281
#undef public_623f299
#undef public_623f29b
#undef public_623f2aa
#undef public_623f2eb
#undef public_623f2f7
