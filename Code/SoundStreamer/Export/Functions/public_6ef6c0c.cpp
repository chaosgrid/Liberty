#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6c0c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef998d);

#define public_6ef6c35 _public_6ef6c35

PROC_DECLARE(0x6ef6c0c, internal_6ef6c0c, public_6ef6c0c);
extern "C" NAKED register_t __cdecl internal_6ef6c0c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr ss : [ebp+8], 0
        push dword ptr ss : [ebp+0x10]
        je public_6ef6c35
        lea eax, ss:[ebp-8]
        push eax
        call public_6ef9960
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        leave 
        ret 
        public_6ef6c35 : nop
        lea eax, ss:[ebp+0x10]
        push eax
        call public_6ef998d
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6c0c)
    }
}

#undef public_6ef6c35
