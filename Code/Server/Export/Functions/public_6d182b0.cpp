#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d182ed _public_6d182ed

PROC_DECLARE(0x6d182b0, internal_6d182b0, public_6d182b0);
extern "C" NAKED register_t __cdecl internal_6d182b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push eax
        xor bl, bl
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d182ed
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6d127b0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6d182ed
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d647d0]
        mov al, byte ptr ds : [esi]
        pop esi
        pop ebx
        ret 
        public_6d182ed : nop
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d182b0)
    }
}

#undef public_6d182ed
