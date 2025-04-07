#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65dd253);

#define public_65dd6f0 _public_65dd6f0
#define public_65dd6f6 _public_65dd6f6
#define public_65dd6fb _public_65dd6fb
#define public_65dd72f _public_65dd72f
#define public_65dd736 _public_65dd736
#define public_65dd753 _public_65dd753
#define public_65dd773 _public_65dd773
#define public_65dd776 _public_65dd776

PROC_DECLARE(0x65dd6dc, internal_65dd6dc, public_65dd6dc);
extern "C" NAKED register_t __cdecl internal_65dd6dc()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e7900]
        push esi
        push 0x14
        test eax, eax
        pop esi
        jne public_65dd6f0
        mov eax, 0x200
        jmp public_65dd6f6
        public_65dd6f0 : nop
        cmp eax, esi
        jge public_65dd6fb
        mov eax, esi
        public_65dd6f6 : nop
        mov dword ptr ds : [public_65e7900], eax
        public_65dd6fb : nop
        push 4
        push eax
        call public_65dd253
        pop ecx
        mov dword ptr ds : [public_65e68e8], eax
        test eax, eax
        pop ecx
        jne public_65dd72f
        push 4
        push esi
        mov dword ptr ds : [public_65e7900], esi
        call public_65dd253
        pop ecx
        mov dword ptr ds : [public_65e68e8], eax
        test eax, eax
        pop ecx
        jne public_65dd72f
        push 0x1A
        call public_65d7ef0
        pop ecx
        public_65dd72f : nop
        xor ecx, ecx
        mov eax, offset public_65e5738
        public_65dd736 : nop
        mov edx, dword ptr ds : [public_65e68e8]
        mov dword ptr ds : [ecx+edx], eax
        add eax, 0x20
        add ecx, 4
        cmp eax, offset public_65e59b8
        jl public_65dd736
        xor ecx, ecx
        mov edx, offset public_65e5748
        public_65dd753 : nop
        mov esi, ecx
        mov eax, ecx
        sar esi, 5
        and eax, 0x1F
        mov esi, dword ptr ds : [esi*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        mov eax, dword ptr ds : [esi+eax*4]
        cmp eax, 0xFFFFFFFF
        je public_65dd773
        test eax, eax
        jne public_65dd776
        public_65dd773 : nop
        or dword ptr ds : [edx], 0xFFFFFFFF
        public_65dd776 : nop
        add edx, 0x20
        inc ecx
        cmp edx, offset public_65e57a8
        jl public_65dd753
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd6dc)
    }
}

#undef public_65dd6f0
#undef public_65dd6f6
#undef public_65dd6fb
#undef public_65dd72f
#undef public_65dd736
#undef public_65dd753
#undef public_65dd773
#undef public_65dd776
