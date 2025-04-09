#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2760);

#define public_4a2785 _public_4a2785
#define public_4a279e _public_4a279e
#define public_4a27af _public_4a27af
#define public_4a27b3 _public_4a27b3
#define public_4a27cc _public_4a27cc
#define public_4a27d0 _public_4a27d0
#define public_4a2832 _public_4a2832
#define public_4a285a _public_4a285a
#define public_4a2860 _public_4a2860
#define public_4a2879 _public_4a2879
#define public_4a2880 _public_4a2880
#define public_4a28cf _public_4a28cf
#define public_4a2903 _public_4a2903
#define public_4a2925 _public_4a2925

PROC_DECLARE(0x4a2760, internal_4a2760, public_4a2760);
extern "C" NAKED register_t __cdecl internal_4a2760()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov bl, byte ptr ss : [esp+0x30]
        push ebp
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0xFD0], bl
        mov eax, dword ptr ds : [esi+0xFD8]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        jne public_4a2785
        xor edx, edx
        jmp public_4a279e
        public_4a2785 : nop
        mov ecx, dword ptr ds : [esi+0xFDC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4a279e : nop
        test bl, bl
        lea eax, ds:[edx-1]
        mov dword ptr ss : [esp+0x14], eax
        je public_4a2860
        jmp public_4a27b3
        public_4a27af : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_4a27b3 : nop
        test eax, eax
        mov byte ptr ss : [esp+0x3C], 1
        jle public_4a2925
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4a27d0
        public_4a27cc : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_4a27d0 : nop
        mov eax, dword ptr ds : [esi+0xFD8]
        mov ecx, dword ptr ds : [edi+eax+0x28]
        mov edx, dword ptr ds : [edi+eax+0x10]
        lea ebx, ds:[edi+eax+0x18]
        lea ebp, ds:[edi+eax]
        mov eax, dword ptr ds : [esi+0xFE8]
        mov ecx, dword ptr ds : [eax+ecx*8]
        mov eax, dword ptr ds : [eax+edx*8]
        push ecx
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jle public_4a2832
        mov ecx, 6
        mov esi, ebp
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, 6
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov ecx, 6
        lea esi, ss:[esp+0x20]
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x3C], 0
        public_4a2832 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x18
        dec eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], eax
        jne public_4a27cc
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        je public_4a27af
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 4
        public_4a285a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, edi
        public_4a2860 : nop
        test eax, eax
        mov byte ptr ss : [esp+0x3C], 1
        jle public_4a2925
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4a2880
        public_4a2879 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_4a2880 : nop
        mov eax, dword ptr ds : [esi+0xFD8]
        mov ecx, dword ptr ds : [edi+eax+0x2C]
        mov edx, dword ptr ds : [edi+eax+0x14]
        lea ebx, ds:[edi+eax+0x18]
        lea ebp, ds:[edi+eax]
        mov eax, dword ptr ds : [esi+0xFF8]
        mov ecx, dword ptr ds : [eax+ecx*8]
        mov eax, dword ptr ds : [eax+edx*8]
        push ecx
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jne public_4a28cf
        mov eax, dword ptr ds : [esi+0xFE8]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax+ecx*8]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [eax+edx*8]
        push ecx
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        public_4a28cf : nop
        jle public_4a2903
        mov ecx, 6
        mov esi, ebp
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, 6
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov ecx, 6
        lea esi, ss:[esp+0x20]
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x3C], 0
        public_4a2903 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x18
        dec eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], eax
        jne public_4a2879
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        je public_4a285a
        public_4a2925 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4a2760)
    }
}

#undef public_4a2785
#undef public_4a279e
#undef public_4a27af
#undef public_4a27b3
#undef public_4a27cc
#undef public_4a27d0
#undef public_4a2832
#undef public_4a285a
#undef public_4a2860
#undef public_4a2879
#undef public_4a2880
#undef public_4a28cf
#undef public_4a2903
#undef public_4a2925
