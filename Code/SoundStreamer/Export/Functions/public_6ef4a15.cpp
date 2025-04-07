#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4a15);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6fa2);
CLANG_FORWARD_PROC_SYMBOL(public_6ef70b7);

#define public_6ef4a53 _public_6ef4a53
#define public_6ef4a60 _public_6ef4a60

PROC_DECLARE(0x6ef4a15, internal_6ef4a15, public_6ef4a15);
extern "C" NAKED register_t __cdecl internal_6ef4a15()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        lea eax, ss:[ebp-0x20]
        mov dword ptr ss : [ebp-0x14], 0x42
        push eax
        call public_6ef70b7
        add esp, 0xC
        dec dword ptr ss : [ebp-0x1C]
        mov esi, eax
        js public_6ef4a53
        mov eax, dword ptr ss : [ebp-0x20]
        and byte ptr ds : [eax], 0
        jmp public_6ef4a60
        public_6ef4a53 : nop
        lea eax, ss:[ebp-0x20]
        push eax
        push 0
        call public_6ef6fa2
        pop ecx
        pop ecx
        public_6ef4a60 : nop
        mov eax, esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4a15)
    }
}

#undef public_6ef4a53
#undef public_6ef4a60
