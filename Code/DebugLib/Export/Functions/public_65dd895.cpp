#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd895);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);

#define public_65dd8a1 _public_65dd8a1
#define public_65dd8bc _public_65dd8bc
#define public_65dd8ee _public_65dd8ee
#define public_65dd8fc _public_65dd8fc

PROC_DECLARE(0x65dd895, internal_65dd895, public_65dd895);
extern "C" NAKED register_t __cdecl internal_65dd895()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_65dd8a1
        pop ebp
        ret 
        public_65dd8a1 : nop
        cmp dword ptr ds : [public_65e63e8], 0
        jne public_65dd8bc
        mov cx, word ptr ss : [ebp+0xC]
        cmp cx, 0xFF
        ja public_65dd8ee
        push 1
        mov byte ptr ds : [eax], cl
        pop eax
        pop ebp
        ret 
        public_65dd8bc : nop
        lea ecx, ss:[ebp+8]
        and dword ptr ss : [ebp+8], 0
        push ecx
        push 0
        push dword ptr ds : [public_65e5be0]
        push eax
        lea eax, ss:[ebp+0xC]
        push 1
        push eax
        push 0x220
        push dword ptr ds : [public_65e63f8]
        call dword ptr ds : [public_65e1094]
        test eax, eax
        je public_65dd8ee
        cmp dword ptr ss : [ebp+8], 0
        je public_65dd8fc
        public_65dd8ee : nop
        call public_65de88a
        mov dword ptr ds : [eax], 0x2A
        or eax, 0xFFFFFFFF
        public_65dd8fc : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dd895)
    }
}

#undef public_65dd8a1
#undef public_65dd8bc
#undef public_65dd8ee
#undef public_65dd8fc
