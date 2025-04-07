#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf8b7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad19c3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1adb);

#define public_6acf8f7 _public_6acf8f7
#define public_6acf904 _public_6acf904

PROC_DECLARE(0x6acf8b7, internal_6acf8b7, public_6acf8b7);
extern "C" NAKED register_t __cdecl internal_6acf8b7()
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
        call public_6ad1adb
        add esp, 0xC
        dec dword ptr ss : [ebp-0x1C]
        mov esi, eax
        js public_6acf8f7
        mov eax, dword ptr ss : [ebp-0x20]
        and byte ptr ds : [eax], 0
        jmp public_6acf904
        public_6acf8f7 : nop
        lea eax, ss:[ebp-0x20]
        push eax
        push 0
        call public_6ad19c3
        pop ecx
        pop ecx
        public_6acf904 : nop
        mov eax, esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6acf8b7)
    }
}

#undef public_6acf8f7
#undef public_6acf904
