#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb20d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb2455 _public_6eb2455
#define public_6eb2467 _public_6eb2467
#define public_6eb247d _public_6eb247d
#define public_6eb2499 _public_6eb2499
#define public_6eb24a4 _public_6eb24a4
#define public_6eb24ba _public_6eb24ba
#define public_6eb24c6 _public_6eb24c6
#define public_6eb24e7 _public_6eb24e7
#define public_6eb24ff _public_6eb24ff
#define public_6eb252f _public_6eb252f
#define public_6eb2537 _public_6eb2537
#define public_6eb2564 _public_6eb2564

PROC_DECLARE(0x6eb2440, internal_6eb2440, public_6eb2440);
extern "C" NAKED register_t __cdecl internal_6eb2440()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        push esi
        mov esi, ebp
        cmp esi, ebp
        push edi
        mov edi, dword ptr ds : [ebx+4]
        je public_6eb2467
        public_6eb2455 : nop
        push esi
        mov ecx, edi
        call public_6eb20d0
        add esi, 0x28
        add edi, 0x28
        cmp esi, ebp
        jne public_6eb2455
        public_6eb2467 : nop
        mov esi, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ebx+8], edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6eb247d
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6eb2499
        public_6eb247d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edi, edx
        public_6eb2499 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6eb24a4
        xor edx, edx
        jmp public_6eb24ba
        public_6eb24a4 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6eb24ba : nop
        cmp edx, edi
        jae public_6eb252f
        test edi, edi
        mov eax, edi
        jge public_6eb24c6
        xor eax, eax
        public_6eb24c6 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov esi, dword ptr ds : [ebx+4]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6eb24ff
        public_6eb24e7 : nop
        push esi
        push ebp
        call public_6eb1810
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 0x28
        add esp, 8
        add ebp, 0x28
        cmp esi, eax
        jne public_6eb24e7
        public_6eb24ff : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[edi+ecx*8]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edx
        call public_6eb23d0
        mov esi, dword ptr ss : [esp+0x44]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], edi
        public_6eb252f : nop
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [esi+8]
        je public_6eb2564
        public_6eb2537 : nop
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, 0xA
        mov esi, ebp
        lea edi, ss:[esp+0x1C]
        push 1
        rep movsd
        push eax
        mov ecx, ebx
        call public_6eaed70
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [ecx+8]
        add ebp, 0x28
        cmp ebp, eax
        jne public_6eb2537
        public_6eb2564 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6eb2440)
    }
}

#undef public_6eb2455
#undef public_6eb2467
#undef public_6eb247d
#undef public_6eb2499
#undef public_6eb24a4
#undef public_6eb24ba
#undef public_6eb24c6
#undef public_6eb24e7
#undef public_6eb24ff
#undef public_6eb252f
#undef public_6eb2537
#undef public_6eb2564
