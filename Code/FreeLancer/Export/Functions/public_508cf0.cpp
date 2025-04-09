#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_5074e0);

#define public_508df3 _public_508df3

PROC_DECLARE(0x508cf0, internal_508cf0, public_508cf0);
extern "C" NAKED register_t __cdecl internal_508cf0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x2C0]
        test al, al
        push esi
        push edi
        je public_508df3
        fld dword ptr ss : [ebp+0x294]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_508df3
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        add esp, 8
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ebx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x10]
        push ebx
        rep movsd
        call public_422950
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        sub esp, 8
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, ebp
        call public_5074e0
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        call public_422190
        push 0xB71
        call public_421dd0
        add esp, 8
        public_508df3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x508cf0)
    }
}

#undef public_508df3
