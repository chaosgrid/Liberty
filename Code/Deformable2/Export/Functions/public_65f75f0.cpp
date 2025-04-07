#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f16a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f75f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9190);
CLANG_FORWARD_PROC_SYMBOL(public_65f91b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9450);
CLANG_FORWARD_PROC_SYMBOL(public_65f9490);
CLANG_FORWARD_PROC_SYMBOL(public_65f98e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f7619 _public_65f7619
#define public_65f7621 _public_65f7621
#define public_65f7630 _public_65f7630
#define public_65f7650 _public_65f7650
#define public_65f7668 _public_65f7668
#define public_65f76a7 _public_65f76a7
#define public_65f7720 _public_65f7720
#define public_65f7749 _public_65f7749
#define public_65f7751 _public_65f7751

PROC_DECLARE(0x65f75f0, internal_65f75f0, public_65f75f0);
extern "C" NAKED register_t __cdecl internal_65f75f0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x24]
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_65f7751
        mov edx, dword ptr ds : [ebx+0x64]
        cmp edx, edi
        lea esi, ds:[ebx+0x60]
        jne public_65f7619
        xor ecx, ecx
        jmp public_65f7621
        public_65f7619 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 4
        public_65f7621 : nop
        cmp ecx, eax
        push ebp
        jae public_65f76a7
        cmp eax, edi
        jge public_65f7630
        xor eax, eax
        public_65f7630 : nop
        shl eax, 4
        push eax
        call public_6600bb6
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], eax
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], eax
        je public_65f7668
        public_65f7650 : nop
        push edi
        push ebp
        call public_65f9aa0
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 0x10
        add esp, 8
        add ebp, 0x10
        cmp edi, eax
        jne public_65f7650
        public_65f7668 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_65f9450
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6600bb0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_65f9190
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        xor edi, edi
        public_65f76a7 : nop
        mov al, byte ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [ebx+0x24]
        mov byte ptr ss : [esp+0x18], al
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        push eax
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        call public_65f98e0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        mov edi, eax
        push edi
        mov ecx, esi
        call public_65f9450
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+8], edi
        call public_65f91b0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_65f16a0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6600bb0
        mov eax, dword ptr ds : [ebx+0x10]
        add esp, 4
        xor esi, esi
        test eax, eax
        pop ebp
        jbe public_65f7751
        nop 
        lea esp, ss:[esp]
        public_65f7720 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx+esi*4]
        cmp eax, dword ptr ds : [ebx+0x24]
        jae public_65f7749
        mov ecx, dword ptr ds : [ebx+0x64]
        shl eax, 4
        lea edx, ss:[esp+0x28]
        add eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        push 1
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], esi
        call public_65f9490
        public_65f7749 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        inc esi
        cmp esi, eax
        jb public_65f7720
        public_65f7751 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x65f75f0)
    }
}

#undef public_65f7619
#undef public_65f7621
#undef public_65f7630
#undef public_65f7650
#undef public_65f7668
#undef public_65f76a7
#undef public_65f7720
#undef public_65f7749
#undef public_65f7751
