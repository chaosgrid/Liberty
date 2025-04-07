#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3de0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb3df0 _public_6eb3df0
#define public_6eb3e06 _public_6eb3e06
#define public_6eb3e1a _public_6eb3e1a
#define public_6eb3e40 _public_6eb3e40
#define public_6eb3e57 _public_6eb3e57
#define public_6eb3e61 _public_6eb3e61
#define public_6eb3e93 _public_6eb3e93
#define public_6eb3eb7 _public_6eb3eb7

PROC_DECLARE(0x6eb3de0, internal_6eb3de0, public_6eb3de0);
extern "C" NAKED register_t __cdecl internal_6eb3de0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push edi
        jne public_6eb3df0
        xor edx, edx
        jmp public_6eb3e06
        public_6eb3df0 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eb3e06 : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp edx, edi
        jae public_6eb3eb7
        test edi, edi
        mov eax, edi
        jge public_6eb3e1a
        xor eax, eax
        public_6eb3e1a : nop
        push ebp
        lea ecx, ds:[eax+eax*4]
        shl ecx, 3
        push esi
        push ecx
        call public_6fa912a
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], esi
        mov edx, esi
        je public_6eb3e61
        lea ecx, ds:[ecx]
        public_6eb3e40 : nop
        test edx, edx
        je public_6eb3e57
        mov ecx, 0xA
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        public_6eb3e57 : nop
        add eax, 0x28
        add edx, 0x28
        cmp eax, ebp
        jne public_6eb3e40
        public_6eb3e61 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        lea eax, ds:[edi+edi*4]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6eb3e93
        xor edx, edx
        lea ecx, ds:[edx+edx*4]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        pop edi
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6eb3e93 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*4]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        mov dword ptr ds : [ebx+8], edx
        pop ebp
        public_6eb3eb7 : nop
        pop edi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eb3de0)
    }
}

#undef public_6eb3df0
#undef public_6eb3e06
#undef public_6eb3e1a
#undef public_6eb3e40
#undef public_6eb3e57
#undef public_6eb3e61
#undef public_6eb3e93
#undef public_6eb3eb7
