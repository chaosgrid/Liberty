#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6fba);
CLANG_FORWARD_PROC_SYMBOL(public_65d716e);
CLANG_FORWARD_PROC_SYMBOL(public_65d866f);

#define public_65d7191 _public_65d7191
#define public_65d71cf _public_65d71cf
#define public_65d71de _public_65d71de

PROC_DECLARE(0x65d716e, internal_65d716e, public_65d716e);
extern "C" NAKED register_t __cdecl internal_65d716e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld 
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+4]
        and eax, 0x66
        test eax, eax
        je public_65d7191
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x24], 1
        push 1
        pop eax
        jmp public_65d71de
        public_65d7191 : nop
        push 1
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+8]
        push 0
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d866f
        add esp, 0x20
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax+0x24], 0
        jne public_65d71cf
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0xC]
        call public_65d6fba
        public_65d71cf : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esp, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [ebx+0x20]
        jmp dword ptr ds : [ebx+0x18]
        push 1
        pop eax
        public_65d71de : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d716e)
    }
}

#undef public_65d7191
#undef public_65d71cf
#undef public_65d71de
