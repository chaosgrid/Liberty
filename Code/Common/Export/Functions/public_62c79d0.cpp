#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);

#define public_62c7a9e _public_62c7a9e

PROC_DECLARE(0x62c79d0, internal_62c79d0, public_62c79d0);
extern "C" NAKED register_t __cdecl internal_62c79d0()
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
        je public_62c7a9e
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x30]
        push edi
        push ebp
        push eax
        lea edi, ds:[esi+0x30]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        push 0x3FC90FDB
        mov ecx, edi
        call public_62a66b0
        push 0x42480000
        mov ecx, edi
        call public_62a33d0
        push 0x40C00000
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x110]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x110]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x1AC]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x1AC]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x1CC]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x1CC]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x28C]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x28C]
        push eax
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x2A8], 0x41200000
        mov dword ptr ds : [esi+0x2B0], 0
        pop edi
        public_62c7a9e : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62c79d0)
    }
}

#undef public_62c7a9e
