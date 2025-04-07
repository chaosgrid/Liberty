#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec0c10 _public_6ec0c10
#define public_6ec0c25 _public_6ec0c25
#define public_6ec0c7b _public_6ec0c7b
#define public_6ec0c83 _public_6ec0c83
#define public_6ec0c9d _public_6ec0c9d
#define public_6ec0cb4 _public_6ec0cb4
#define public_6ec0cf8 _public_6ec0cf8
#define public_6ec0d05 _public_6ec0d05

PROC_DECLARE(0x6ec0bd0, internal_6ec0bd0, public_6ec0bd0);
extern "C" NAKED register_t __cdecl internal_6ec0bd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        mov ebp, ecx
        je public_6ec0c25
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6ec0c25
        mov edi, dword ptr ds : [esi+0x24]
        cmp edi, dword ptr ds : [esi+0x28]
        je public_6ec0c25
        nop 
        lea esp, ss:[esp]
        public_6ec0c10 : nop
        mov ecx, dword ptr ds : [edi]
        push ebx
        push ecx
        mov ecx, ebp
        call public_6ec0bd0
        mov eax, dword ptr ds : [esi+0x28]
        add edi, 4
        cmp edi, eax
        jne public_6ec0c10
        public_6ec0c25 : nop
        mov ecx, dword ptr ds : [esi+4]
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        jg public_6ec0d05
        test bl, bl
        je public_6ec0d05
        mov esi, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [public_6ed1000]
        add esp, 4
        lea esi, ss:[ebp+0x54]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6ec6120
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6ec0c7b
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ec0c7b
        lea eax, ss:[esp+0x20]
        jmp public_6ec0c83
        public_6ec0c7b : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6ec0c83 : nop
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_6ec0c9d
        mov ebp, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0xB8]
        public_6ec0c9d : nop
        mov edi, dword ptr ds : [ebx+0x10]
        test edi, edi
        je public_6ec0cf8
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ec0cb4
        push eax
        call dword ptr ds : [public_6ed1054]
        add esp, 4
        public_6ec0cb4 : nop
        lea esi, ds:[edi+0x20]
        mov dword ptr ds : [edi], 0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ecb170
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        xor eax, eax
        add esp, 4
        lea ecx, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_6ec38c0
        push edi
        call public_6ed0c50
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6ec0cf8 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6ec44a0
        public_6ec0d05 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ec0bd0)
    }
}

#undef public_6ec0c10
#undef public_6ec0c25
#undef public_6ec0c7b
#undef public_6ec0c83
#undef public_6ec0c9d
#undef public_6ec0cb4
#undef public_6ec0cf8
#undef public_6ec0d05
