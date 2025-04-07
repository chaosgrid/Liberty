#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d734e);
CLANG_FORWARD_PROC_SYMBOL(public_65d911f);
CLANG_FORWARD_PROC_SYMBOL(public_65d9237);

#define public_65d738e _public_65d738e
#define public_65d739b _public_65d739b

PROC_DECLARE(0x65d734e, internal_65d734e, public_65d734e);
extern "C" NAKED register_t __cdecl internal_65d734e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x20], eax
        lea eax, ss:[ebp+0x10]
        mov dword ptr ss : [ebp-0x14], 0x42
        push eax
        lea eax, ss:[ebp-0x20]
        push dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], 0x7FFFFFFF
        push eax
        call public_65d9237
        add esp, 0xC
        dec dword ptr ss : [ebp-0x1C]
        mov esi, eax
        js public_65d738e
        mov eax, dword ptr ss : [ebp-0x20]
        and byte ptr ds : [eax], 0
        jmp public_65d739b
        public_65d738e : nop
        lea eax, ss:[ebp-0x20]
        push eax
        push 0
        call public_65d911f
        pop ecx
        pop ecx
        public_65d739b : nop
        mov eax, esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d734e)
    }
}

#undef public_65d738e
#undef public_65d739b
