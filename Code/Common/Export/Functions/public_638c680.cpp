#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6383460);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_638c6a7 _public_638c6a7
#define public_638c6ba _public_638c6ba
#define public_638c6ce _public_638c6ce
#define public_638c6d1 _public_638c6d1
#define public_638c6ea _public_638c6ea
#define public_638c6f5 _public_638c6f5
#define public_638c6fb _public_638c6fb

PROC_DECLARE(0x638c680, internal_638c680, public_638c680);
extern "C" NAKED register_t __cdecl internal_638c680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b104]
        test eax, eax
        je public_638c6d1
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x50]
        mov edx, 0x40000
        test edx, ecx
        je public_638c6a7
        mov ecx, dword ptr ds : [public_658b0fc]
        xor eax, eax
        test ecx, ecx
        sete al
        ret 
        public_638c6a7 : nop
        mov eax, dword ptr ds : [eax+0x3C]
        test eax, eax
        je public_638c6f5
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638c6f5
        public_638c6ba : nop
        test dword ptr ds : [eax+0x50], edx
        jne public_638c6ce
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638c6ba
        mov eax, 1
        ret 
        public_638c6ce : nop
        xor eax, eax
        ret 
        public_638c6d1 : nop
        mov eax, dword ptr ds : [public_658b0fc]
        test eax, eax
        je public_638c6ea
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x50]
        not eax
        shr eax, 0x12
        and eax, 1
        ret 
        public_638c6ea : nop
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_638c6fb
        public_638c6f5 : nop
        mov eax, 1
        ret 
        public_638c6fb : nop
        push 0
        push eax
        call public_6383460
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x638c680)
    }
}

#undef public_638c6a7
#undef public_638c6ba
#undef public_638c6ce
#undef public_638c6d1
#undef public_638c6ea
#undef public_638c6f5
#undef public_638c6fb
