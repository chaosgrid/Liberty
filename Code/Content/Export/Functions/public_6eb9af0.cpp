#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb82c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb830);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb9b05 _public_6eb9b05
#define public_6eb9b20 _public_6eb9b20
#define public_6eb9b2f _public_6eb9b2f
#define public_6eb9b31 _public_6eb9b31
#define public_6eb9b39 _public_6eb9b39
#define public_6eb9b50 _public_6eb9b50
#define public_6eb9b92 _public_6eb9b92
#define public_6eb9bb6 _public_6eb9bb6
#define public_6eb9bf0 _public_6eb9bf0
#define public_6eb9c11 _public_6eb9c11
#define public_6eb9c1f _public_6eb9c1f

PROC_DECLARE(0x6eb9af0, internal_6eb9af0, public_6eb9af0);
extern "C" NAKED register_t __cdecl internal_6eb9af0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x1C8]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eb9b39
        public_6eb9b05 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x30]
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ecx
        je public_6eb9b2f
        mov edx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edx]
        nop 
        lea esp, ss:[esp]
        public_6eb9b20 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eb9bb6
        add eax, 4
        cmp eax, ecx
        jne public_6eb9b20
        public_6eb9b2f : nop
        mov edi, dword ptr ds : [edi]
        public_6eb9b31 : nop
        cmp edi, dword ptr ds : [ebx+0x1C8]
        jne public_6eb9b05
        public_6eb9b39 : nop
        mov eax, dword ptr ds : [ebx+0x1E0]
        test eax, eax
        je public_6eb9b92
        lea edi, ds:[ebx+0x1B0]
        lea ebp, ds:[ebx+0x1D0]
        nop 
        public_6eb9b50 : nop
        mov edx, dword ptr ds : [ebx+0x1D4]
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[esi+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_6f7b0f0
        mov edx, dword ptr ds : [esi+0xC]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], edx
        call public_6f20e00
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6eb82c0
        mov eax, dword ptr ds : [ebx+0x1E0]
        test eax, eax
        jne public_6eb9b50
        public_6eb9b92 : nop
        mov eax, dword ptr ds : [ebx+0x1D4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1D0]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_6ed0e20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6eb9bb6 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6eb9b2f
        test eax, eax
        jne public_6eb9c1f
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+8]
        test al, al
        je public_6eb9c1f
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi], 2
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6eb9c11
        lea esp, ss:[esp]
        public_6eb9bf0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0xC]
        jne public_6eb9bf0
        public_6eb9c11 : nop
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6eb9c1f
        mov ecx, esi
        call public_6ebb830
        public_6eb9c1f : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp dword ptr ds : [ecx+0x10], 2
        jne public_6eb9b2f
        mov esi, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx], esi
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x1CC]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x1CC], eax
        mov edi, esi
        jmp public_6eb9b31
        UNREACHABLE_TRAP(0x6eb9af0)
    }
}

#undef public_6eb9b05
#undef public_6eb9b20
#undef public_6eb9b2f
#undef public_6eb9b31
#undef public_6eb9b39
#undef public_6eb9b50
#undef public_6eb9b92
#undef public_6eb9bb6
#undef public_6eb9bf0
#undef public_6eb9c11
#undef public_6eb9c1f
