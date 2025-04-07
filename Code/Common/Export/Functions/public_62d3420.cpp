#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3420);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9030);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d3508 _public_62d3508
#define public_62d3525 _public_62d3525
#define public_62d3530 _public_62d3530
#define public_62d3543 _public_62d3543
#define public_62d354f _public_62d354f
#define public_62d3558 _public_62d3558
#define public_62d356e _public_62d356e
#define public_62d3575 _public_62d3575
#define public_62d358a _public_62d358a
#define public_62d358c _public_62d358c
#define public_62d35af _public_62d35af

PROC_DECLARE(0x62d3420, internal_62d3420, public_62d3420);
extern "C" NAKED register_t __cdecl internal_62d3420()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        mov ebp, edi
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d3508
        mov ecx, edi
        mov eax, 2
        shl eax, cl
        test dword ptr ds : [esi+0xB8], eax
        jne public_62d3525
        mov al, byte ptr ds : [esi+0xBC]
        test al, al
        jne public_62d3525
        cmp edi, 6
        jne public_62d3508
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [esi+0x120]
        push 2
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_62e8c20
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0xC]
        push edx
        add ecx, 0x18
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_62e8ce0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9030
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        public_62d3508 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, ebp
        jne public_62d3530
        mov cl, byte ptr ss : [esp+0x20]
        test cl, cl
        jne public_62d3530
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 0xC
        public_62d3525 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0xC
        ret 0xC
        public_62d3530 : nop
        xor ecx, ecx
        xor edi, edi
        cmp eax, 0xFFFFFFFF
        push ebx
        mov bl, 1
        je public_62d3543
        mov ecx, dword ptr ds : [esi+eax*4+0x174]
        public_62d3543 : nop
        cmp ebp, 0xFFFFFFFF
        je public_62d354f
        mov edi, dword ptr ds : [esi+ebp*4+0x174]
        public_62d354f : nop
        test ecx, ecx
        je public_62d3558
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_62d3558 : nop
        test edi, edi
        je public_62d3575
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_62d356e
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov bl, al
        public_62d356e : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        public_62d3575 : nop
        mov dword ptr ds : [esi+0xC0], ebp
        mov esi, dword ptr ds : [esi+0xF0]
        test esi, esi
        je public_62d358a
        lea ecx, ds:[esi-8]
        jmp public_62d358c
        public_62d358a : nop
        xor ecx, ecx
        public_62d358c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62d35af
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62d35af
        mov dword ptr ds : [eax+0x1A0], ebp
        public_62d35af : nop
        mov al, bl
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62d3420)
    }
}

#undef public_62d3508
#undef public_62d3525
#undef public_62d3530
#undef public_62d3543
#undef public_62d354f
#undef public_62d3558
#undef public_62d356e
#undef public_62d3575
#undef public_62d358a
#undef public_62d358c
#undef public_62d35af
