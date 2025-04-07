#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f042d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f35140);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f042e6 _public_6f042e6
#define public_6f042fe _public_6f042fe
#define public_6f0430d _public_6f0430d
#define public_6f04315 _public_6f04315
#define public_6f04321 _public_6f04321
#define public_6f0436f _public_6f0436f
#define public_6f04377 _public_6f04377
#define public_6f04380 _public_6f04380
#define public_6f04390 _public_6f04390
#define public_6f043d1 _public_6f043d1
#define public_6f043de _public_6f043de
#define public_6f043f0 _public_6f043f0
#define public_6f04420 _public_6f04420
#define public_6f04434 _public_6f04434
#define public_6f0443a _public_6f0443a
#define public_6f0443d _public_6f0443d
#define public_6f04442 _public_6f04442

PROC_DECLARE(0x6f042d0, internal_6f042d0, public_6f042d0);
extern "C" NAKED register_t __cdecl internal_6f042d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x5C]
        test eax, eax
        push esi
        push edi
        jne public_6f042e6
        xor ebx, ebx
        jmp public_6f042fe
        public_6f042e6 : nop
        mov ecx, dword ptr ss : [ebp+0x60]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f042fe : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f0430d
        xor eax, eax
        jmp public_6f04315
        public_6f0430d : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f04315 : nop
        cmp eax, ebx
        jae public_6f04380
        test ebx, ebx
        mov eax, ebx
        jge public_6f04321
        xor eax, eax
        public_6f04321 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+ebx*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f0436f
        xor eax, eax
        jmp public_6f04377
        public_6f0436f : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6f04377 : nop
        lea edx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_6f04380 : nop
        mov ebx, dword ptr ss : [ebp+0x5C]
        cmp ebx, dword ptr ss : [ebp+0x60]
        je public_6f043de
        lea edi, ds:[ebx+0x18]
        nop 
        lea esp, ss:[esp]
        public_6f04390 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6f043d1
        mov ecx, dword ptr ds : [edi+4]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f043d1
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+8]
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], edx
        call public_6f96770
        public_6f043d1 : nop
        mov eax, dword ptr ss : [ebp+0x60]
        add ebx, 0x28
        add edi, 0x28
        cmp ebx, eax
        jne public_6f04390
        public_6f043de : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f04442
        mov ebx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6f043f0 : nop
        mov ecx, ebx
        call public_6f33f80
        mov edx, dword ptr ds : [edi]
        push eax
        push edx
        call public_6f35140
        add esp, 8
        cmp eax, 1
        je public_6f0443a
        cmp eax, 2
        je public_6f0443a
        mov edx, dword ptr ds : [esi+8]
        lea eax, ds:[edi+8]
        cmp eax, edx
        je public_6f04434
        mov ecx, edi
        lea esp, ss:[esp]
        public_6f04420 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f04420
        public_6f04434 : nop
        add dword ptr ds : [esi+8], 0xFFFFFFF8
        jmp public_6f0443d
        public_6f0443a : nop
        add edi, 8
        public_6f0443d : nop
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f043f0
        public_6f04442 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f042d0)
    }
}

#undef public_6f042e6
#undef public_6f042fe
#undef public_6f0430d
#undef public_6f04315
#undef public_6f04321
#undef public_6f0436f
#undef public_6f04377
#undef public_6f04380
#undef public_6f04390
#undef public_6f043d1
#undef public_6f043de
#undef public_6f043f0
#undef public_6f04420
#undef public_6f04434
#undef public_6f0443a
#undef public_6f0443d
#undef public_6f04442
