#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c5dbe _public_62c5dbe

PROC_DECLARE(0x62c5cf0, internal_62c5cf0, public_62c5cf0);
extern "C" NAKED register_t __cdecl internal_62c5cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push ecx
        mov ecx, esi
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62c5dbe
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        push ebp
        push eax
        lea edi, ds:[esi+0x2C]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x300], 0x43960000
        mov byte ptr ds : [esi+0x304], 0
        call dword ptr ds : [edx]
        push 2
        mov ecx, edi
        call public_62d88b0
        push 0x40490FDB
        mov ecx, edi
        call public_63275f0
        push 0
        mov ecx, edi
        call public_62d5980
        push 0
        mov ecx, edi
        call public_62a66b0
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0xA4]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA4]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x164]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x164]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x178]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x178]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x258]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x258]
        push eax
        call dword ptr ds : [edx]
        pop edi
        public_62c5dbe : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62c5cf0)
    }
}

#undef public_62c5dbe
