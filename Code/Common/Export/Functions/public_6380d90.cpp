#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);

#define public_6380e18 _public_6380e18

PROC_DECLARE(0x6380d90, internal_6380d90, public_6380d90);
extern "C" NAKED register_t __cdecl internal_6380d90()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        push eax
        call public_6380cf0
        mov edi, eax
        mov eax, dword ptr ds : [public_658ba60]
        lea ecx, ss:[esp+0x10]
        push ecx
        inc eax
        push esi
        push edi
        mov dword ptr ds : [public_658ba60], eax
        call public_637fd60
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push esi
        push edi
        call public_6381270
        mov ecx, dword ptr ds : [public_658b804]
        push ecx
        push edi
        mov ebx, eax
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x28
        cmp eax, 4
        jl public_6380e18
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x34]
        push edx
        push eax
        push ecx
        call public_636ec10
        mov edx, dword ptr ds : [esi+0x4C]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f6780 @0x6380e09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6780
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_6380e18 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6380d90)
    }
}

#undef public_6380e18
