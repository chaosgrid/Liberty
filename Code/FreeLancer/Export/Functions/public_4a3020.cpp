#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3020);
CLANG_FORWARD_PROC_SYMBOL(public_4a3210);
CLANG_FORWARD_PROC_SYMBOL(public_4a39a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a39e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a3c20);
CLANG_FORWARD_PROC_SYMBOL(public_4a3d60);
CLANG_FORWARD_PROC_SYMBOL(public_4a3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4a3091 _public_4a3091
#define public_4a3096 _public_4a3096
#define public_4a309e _public_4a309e
#define public_4a30b3 _public_4a30b3
#define public_4a30c0 _public_4a30c0
#define public_4a30e0 _public_4a30e0
#define public_4a30f4 _public_4a30f4
#define public_4a3152 _public_4a3152
#define public_4a31ba _public_4a31ba
#define public_4a31e7 _public_4a31e7
#define public_4a31ed _public_4a31ed

PROC_DECLARE(0x4a3020, internal_4a3020, public_4a3020);
extern "C" NAKED register_t __cdecl internal_4a3020()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebp
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        sub ebx, ecx
        mov eax, 0x84210843
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4a3152
        test ebp, ebp
        je public_4a3091
        mov ebx, ecx
        sub ebx, ebp
        mov eax, 0x84210843
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, edx
        ja public_4a3096
        public_4a3091 : nop
        mov ebx, 1
        public_4a3096 : nop
        test ebp, ebp
        jne public_4a309e
        xor edx, edx
        jmp public_4a30b3
        public_4a309e : nop
        sub ecx, ebp
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4a30b3 : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4a30c0
        xor eax, eax
        public_4a30c0 : nop
        imul eax, 0x7C
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_4a30f4
        lea esp, ss:[esp]
        public_4a30e0 : nop
        push ebx
        push ebp
        call public_4a3ea0
        add ebx, 0x7C
        add esp, 8
        add ebp, 0x7C
        cmp ebx, edi
        jne public_4a30e0
        public_4a30f4 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_4a3ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x7C
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_4a39a0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x7C
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_4a3210
        inc eax
        imul eax, 0x7C
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_4a31ed
        public_4a3152 : nop
        mov ebx, ecx
        sub ebx, edi
        mov eax, 0x84210843
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4a31ba
        lea edx, ds:[edi+0x7C]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_4a39a0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_4a39e0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_4a3c20
        add esp, 0xC
        jmp public_4a31e7
        public_4a31ba : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF84
        push ecx
        mov ecx, esi
        call public_4a39a0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF84
        push eax
        push edi
        call public_4a3d60
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x7C]
        push ecx
        push edi
        call public_4a3c20
        add esp, 0x18
        public_4a31e7 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x7C
        public_4a31ed : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x7C
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4a3020)
    }
}

#undef public_4a3091
#undef public_4a3096
#undef public_4a309e
#undef public_4a30b3
#undef public_4a30c0
#undef public_4a30e0
#undef public_4a30f4
#undef public_4a3152
#undef public_4a31ba
#undef public_4a31e7
#undef public_4a31ed
