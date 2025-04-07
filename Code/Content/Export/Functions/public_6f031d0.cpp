#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f031d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03990);
CLANG_FORWARD_PROC_SYMBOL(public_6f03b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f03204 _public_6f03204
#define public_6f03206 _public_6f03206
#define public_6f0320e _public_6f0320e
#define public_6f03213 _public_6f03213
#define public_6f0321f _public_6f0321f
#define public_6f03240 _public_6f03240
#define public_6f03258 _public_6f03258
#define public_6f03262 _public_6f03262
#define public_6f03282 _public_6f03282
#define public_6f0329b _public_6f0329b
#define public_6f032a0 _public_6f032a0
#define public_6f032b3 _public_6f032b3
#define public_6f032c0 _public_6f032c0
#define public_6f032d0 _public_6f032d0
#define public_6f0330c _public_6f0330c
#define public_6f0332b _public_6f0332b
#define public_6f0335a _public_6f0335a
#define public_6f03360 _public_6f03360
#define public_6f0337b _public_6f0337b
#define public_6f03390 _public_6f03390
#define public_6f033a8 _public_6f033a8
#define public_6f033b1 _public_6f033b1
#define public_6f033cc _public_6f033cc
#define public_6f033de _public_6f033de
#define public_6f033f5 _public_6f033f5
#define public_6f03419 _public_6f03419
#define public_6f03424 _public_6f03424
#define public_6f0343e _public_6f0343e
#define public_6f03450 _public_6f03450
#define public_6f03467 _public_6f03467
#define public_6f0346a _public_6f0346a

PROC_DECLARE(0x6f031d0, internal_6f031d0, public_6f031d0);
extern "C" NAKED register_t __cdecl internal_6f031d0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f0332b
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f03204
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebp, eax
        jb public_6f03206
        public_6f03204 : nop
        mov eax, ebp
        public_6f03206 : nop
        test ecx, ecx
        jne public_6f0320e
        xor esi, esi
        jmp public_6f03213
        public_6f0320e : nop
        sub esi, ecx
        sar esi, 4
        public_6f03213 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f0321f
        xor eax, eax
        public_6f0321f : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f03258
        public_6f03240 : nop
        push esi
        push edi
        call public_6f03990
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_6f03240
        public_6f03258 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6f03282
        mov dword ptr ss : [esp+0x24], ebp
        public_6f03262 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6f03990
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f03262
        mov eax, dword ptr ss : [esp+0x20]
        public_6f03282 : nop
        mov edx, ebp
        shl edx, 4
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6f032b3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f032a0
        public_6f0329b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_6f032a0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f03990
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_6f0329b
        public_6f032b3 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6f032d0
        lea ecx, ds:[ecx]
        public_6f032c0 : nop
        push 1
        mov ecx, esi
        call public_6f02b10
        add esi, 0x10
        cmp esi, edi
        jne public_6f032c0
        public_6f032d0 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6f0330c
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f0330c : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        add eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f0332b : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebp
        jae public_6f033de
        mov eax, ebp
        shl eax, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+edi]
        mov ebx, edi
        je public_6f0337b
        mov eax, edx
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f03360
        public_6f0335a : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_6f03360 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6f03990
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        jne public_6f0335a
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f0337b : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        sub ebp, edx
        mov ebx, ebp
        mov ebp, dword ptr ss : [esp+0x28]
        je public_6f033a8
        nop 
        public_6f03390 : nop
        push ebp
        push esi
        call public_6f03990
        add esp, 8
        add esi, 0x10
        dec ebx
        jne public_6f03390
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f033a8 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp edi, ebx
        mov esi, edi
        je public_6f033cc
        public_6f033b1 : nop
        push 0xFFFFFFFF
        push 0
        push ebp
        mov ecx, esi
        call public_6f03b80
        add esi, 0x10
        cmp esi, ebx
        jne public_6f033b1
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f033cc : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f033de : nop
        test ebp, ebp
        jbe public_6f0346a
        shl ebp, 4
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6f03419
        public_6f033f5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push eax
        call public_6f03990
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x10
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f033f5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f03419 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6f0343e
        public_6f03424 : nop
        push 0xFFFFFFFF
        push 0
        sub esi, 0x10
        sub ebx, 0x10
        push esi
        mov ecx, ebx
        call public_6f03b80
        cmp esi, edi
        jne public_6f03424
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f0343e : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_6f03467
        mov edi, dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_6f03450 : nop
        push 0xFFFFFFFF
        push 0
        push edi
        mov ecx, esi
        call public_6f03b80
        add esi, 0x10
        cmp esi, ebx
        jne public_6f03450
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f03467 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f0346a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f031d0)
    }
}

#undef public_6f03204
#undef public_6f03206
#undef public_6f0320e
#undef public_6f03213
#undef public_6f0321f
#undef public_6f03240
#undef public_6f03258
#undef public_6f03262
#undef public_6f03282
#undef public_6f0329b
#undef public_6f032a0
#undef public_6f032b3
#undef public_6f032c0
#undef public_6f032d0
#undef public_6f0330c
#undef public_6f0332b
#undef public_6f0335a
#undef public_6f03360
#undef public_6f0337b
#undef public_6f03390
#undef public_6f033a8
#undef public_6f033b1
#undef public_6f033cc
#undef public_6f033de
#undef public_6f033f5
#undef public_6f03419
#undef public_6f03424
#undef public_6f0343e
#undef public_6f03450
#undef public_6f03467
#undef public_6f0346a
