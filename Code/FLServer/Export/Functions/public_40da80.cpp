#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40da80);

#define public_40dabc _public_40dabc

PROC_DECLARE(0x40da80, internal_40da80, public_40da80);
extern "C" NAKED register_t __cdecl internal_40da80()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xF4]
        test eax, eax
        push esi
        push edi
        je public_40dabc
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[ebx+0x208]
        mov ecx, 0xB
        rep movsd
        mov eax, dword ptr ds : [ebx+0xF4]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_41b1a4]
        public_40dabc : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[ebx+0x208]
        mov ecx, 0xB
        rep movsd
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40da80)
    }
}

#undef public_40dabc
