#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803930);
CLANG_FORWARD_PROC_SYMBOL(public_6803950);
CLANG_FORWARD_PROC_SYMBOL(public_68039d0);

#define public_68039fc _public_68039fc
#define public_6803a18 _public_6803a18

PROC_DECLARE(0x68039d0, internal_68039d0, public_68039d0);
extern "C" NAKED register_t __cdecl internal_68039d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        jne public_6803a18
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        mov dword ptr ds : [esi+4], 1
        call public_6803930
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        xor edi, edi
        test eax, eax
        jle public_6803a18
        push ebx
        xor ebx, ebx
        public_68039fc : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        add ecx, eax
        push ecx
        call public_6803950
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        inc edi
        add ebx, 0x10
        cmp edi, eax
        jl public_68039fc
        pop ebx
        public_6803a18 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68039d0)
    }
}

#undef public_68039fc
#undef public_6803a18
