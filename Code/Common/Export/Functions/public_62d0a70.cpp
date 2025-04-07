#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);

#define public_62d0aaa _public_62d0aaa

PROC_DECLARE(0x62d0a70, internal_62d0a70, public_62d0a70);
extern "C" NAKED register_t __cdecl internal_62d0a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push ecx
        mov ecx, esi
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62d0aaa
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x2C]
        push eax
        call dword ptr ds : [edx]
        xor eax, eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        public_62d0aaa : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62d0a70)
    }
}

#undef public_62d0aaa
