#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd40c);
CLANG_FORWARD_PROC_SYMBOL(public_65de817);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de91b);

#define public_65dd42b _public_65dd42b
#define public_65dd44b _public_65dd44b
#define public_65dd44d _public_65dd44d
#define public_65dd458 _public_65dd458
#define public_65dd45d _public_65dd45d
#define public_65dd47c _public_65dd47c

PROC_DECLARE(0x65dd40c, internal_65dd40c, public_65dd40c);
extern "C" NAKED register_t __cdecl internal_65dd40c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_65de91b
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_65dd42b
        call public_65de88a
        mov dword ptr ds : [eax], 9
        jmp public_65dd458
        public_65dd42b : nop
        push dword ptr ss : [esp+0x14]
        push 0
        push dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_65e10f8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_65dd44b
        call dword ptr ds : [public_65e107c]
        jmp public_65dd44d
        public_65dd44b : nop
        xor eax, eax
        public_65dd44d : nop
        test eax, eax
        je public_65dd45d
        push eax
        call public_65de817
        pop ecx
        public_65dd458 : nop
        or eax, 0xFFFFFFFF
        jmp public_65dd47c
        public_65dd45d : nop
        mov ecx, esi
        and esi, 0x1F
        sar ecx, 5
        mov eax, esi
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        and byte ptr ds : [ecx+eax*4+4], 0xFD
        lea eax, ds:[ecx+eax*4+4]
        mov eax, edi
        public_65dd47c : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd40c)
    }
}

#undef public_65dd42b
#undef public_65dd44b
#undef public_65dd44d
#undef public_65dd458
#undef public_65dd45d
#undef public_65dd47c
