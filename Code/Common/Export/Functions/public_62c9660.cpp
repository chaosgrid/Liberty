#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);

#define public_62c96d5 _public_62c96d5

PROC_DECLARE(0x62c9660, internal_62c9660, public_62c9660);
extern "C" NAKED register_t __cdecl internal_62c9660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        push ebp
        push eax
        mov esi, ecx
        call public_62d2090
        test al, al
        mov byte ptr ss : [esp+0x18], al
        je public_62c96d5
        mov edx, dword ptr ds : [esi+0xE8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        lea ecx, ds:[esi+0xE8]
        push edi
        push ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x70]
        push ebp
        lea ecx, ds:[esi+0x70]
        push edi
        push ebx
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x1A8]
        push ebp
        lea ecx, ds:[esi+0x1A8]
        push edi
        push ebx
        call dword ptr ds : [edx]
        mov eax, 2
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x48], eax
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x64], 0
        mov dword ptr ds : [esi+0x6C], 0
        mov dword ptr ds : [esi+0x68], 0x3E7
        pop ebx
        public_62c96d5 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62c9660)
    }
}

#undef public_62c96d5
