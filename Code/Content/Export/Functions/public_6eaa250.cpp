#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaa250);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaa2b8 _public_6eaa2b8
#define public_6eaa2c0 _public_6eaa2c0
#define public_6eaa2d0 _public_6eaa2d0
#define public_6eaa2f0 _public_6eaa2f0
#define public_6eaa304 _public_6eaa304
#define public_6eaa329 _public_6eaa329
#define public_6eaa331 _public_6eaa331
#define public_6eaa346 _public_6eaa346
#define public_6eaa350 _public_6eaa350
#define public_6eaa390 _public_6eaa390
#define public_6eaa3a3 _public_6eaa3a3
#define public_6eaa3b3 _public_6eaa3b3
#define public_6eaa3c7 _public_6eaa3c7

PROC_DECLARE(0x6eaa250, internal_6eaa250, public_6eaa250);
extern "C" NAKED register_t __cdecl internal_6eaa250()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x48]
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_6fb34ec]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        test eax, eax
        je public_6eaa3a3
        lea edx, ds:[eax*4]
        push ebx
        push edx
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+0x48]
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push eax
        push ebx
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_6fb34ac]
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6eaa2b8
        xor edx, edx
        jmp public_6eaa2c0
        public_6eaa2b8 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        sar edx, 3
        public_6eaa2c0 : nop
        cmp edx, ecx
        jae public_6eaa346
        test ecx, ecx
        mov eax, ecx
        jge public_6eaa2d0
        xor eax, eax
        public_6eaa2d0 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], eax
        mov ebx, eax
        je public_6eaa304
        public_6eaa2f0 : nop
        push edi
        push ebx
        call public_6f305b0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6eaa2f0
        public_6eaa304 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[ecx+edx*8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        test edx, edx
        mov dword ptr ds : [esi+0xC], eax
        jne public_6eaa329
        xor eax, eax
        jmp public_6eaa331
        public_6eaa329 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 3
        public_6eaa331 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edx
        public_6eaa346 : nop
        xor edi, edi
        test ecx, ecx
        jle public_6eaa390
        lea esp, ss:[esp]
        public_6eaa350 : nop
        mov ecx, dword ptr ds : [ebx+edi*4]
        mov edx, dword ptr ss : [ebp+0x48]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        push edx
        call dword ptr ds : [public_6fb34b0]
        mov eax, dword ptr ds : [ebx+edi*4]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0xC
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+8]
        push 1
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, esi
        call public_6f96770
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jl public_6eaa350
        public_6eaa390 : nop
        push ebx
        call public_6fa8fe0
        add esp, 4
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 4
        public_6eaa3a3 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        je public_6eaa3c7
        public_6eaa3b3 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6eaa3b3
        public_6eaa3c7 : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eaa250)
    }
}

#undef public_6eaa2b8
#undef public_6eaa2c0
#undef public_6eaa2d0
#undef public_6eaa2f0
#undef public_6eaa304
#undef public_6eaa329
#undef public_6eaa331
#undef public_6eaa346
#undef public_6eaa350
#undef public_6eaa390
#undef public_6eaa3a3
#undef public_6eaa3b3
#undef public_6eaa3c7
