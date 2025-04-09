#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_515dd0);

#define public_515e0d _public_515e0d

PROC_DECLARE(0x515dd0, internal_515dd0, public_515dd0);
extern "C" NAKED register_t __cdecl internal_515dd0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov ecx, edi
        xor bl, bl
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_515e0d
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, esi
        call public_503f40
        pop edi
        pop esi
        pop ebx
        ret 0x10
        public_515e0d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x515dd0)
    }
}

#undef public_515e0d
