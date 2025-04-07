#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2020);
CLANG_FORWARD_PROC_SYMBOL(public_6ef22d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);

#define public_6ef230d _public_6ef230d
#define public_6ef2321 _public_6ef2321
#define public_6ef2325 _public_6ef2325
#define public_6ef2380 _public_6ef2380
#define public_6ef239e _public_6ef239e

PROC_DECLARE(0x6ef22d0, internal_6ef22d0, public_6ef22d0);
extern "C" NAKED register_t __cdecl internal_6ef22d0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0xD0]
        test edi, edi
        jle public_6ef2321
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jle public_6ef230d
        sub eax, edi
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea ecx, ds:[edi+eax]
        push ecx
        push eax
        call public_6ef46e0
        mov eax, dword ptr ds : [esi+0xD0]
        add esp, 0xC
        sub eax, edi
        mov dword ptr ds : [esi+0xD0], eax
        jmp public_6ef2325
        public_6ef230d : nop
        mov edi, eax
        mov eax, dword ptr ds : [esi+0xD0]
        xor ebp, ebp
        sub eax, edi
        mov dword ptr ds : [esi+0xD0], eax
        jmp public_6ef2325
        public_6ef2321 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ef2325 : nop
        mov ecx, dword ptr ds : [esi+0x90]
        cmp ecx, 0xFFFFFFFF
        je public_6ef239e
        movzx edx, word ptr ds : [esi+0xDA]
        movzx eax, word ptr ds : [esi+0xE6]
        imul eax, edx
        cdq 
        and edx, 7
        add eax, edx
        sar eax, 3
        imul eax, ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        lea edx, ds:[ecx+ebp]
        cmp edx, eax
        jl public_6ef239e
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0xA4]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0xA0]
        sub eax, ecx
        mov dword ptr ds : [esi+0x40], eax
        mov al, byte ptr ds : [esi+0x85]
        test al, al
        je public_6ef2380
        mov ecx, esi
        call public_6ef2020
        public_6ef2380 : nop
        mov dword ptr ds : [esi+0xB0], 0
        mov dword ptr ds : [esi+0xB4], 0
        mov dword ptr ds : [esi+0xD0], 0xFFFFFFFF
        public_6ef239e : nop
        mov eax, dword ptr ds : [esi+0xC8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+0xC8], eax
        pop esi
        mov eax, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ef22d0)
    }
}

#undef public_6ef230d
#undef public_6ef2321
#undef public_6ef2325
#undef public_6ef2380
#undef public_6ef239e
