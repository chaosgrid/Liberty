#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5da0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6870);

#define public_65c6899 _public_65c6899
#define public_65c68e1 _public_65c68e1
#define public_65c68fb _public_65c68fb
#define public_65c6903 _public_65c6903
#define public_65c6905 _public_65c6905

PROC_DECLARE(0x65c6870, internal_65c6870, public_65c6870);
extern "C" NAKED register_t __cdecl internal_65c6870()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        push ebp
        mov eax, edx
        push esi
        shr eax, 3
        lea edx, ds:[edx+ecx*8]
        lea esi, ds:[ecx*8]
        and eax, 0x3F
        cmp edx, esi
        push edi
        mov dword ptr ds : [ebx+0x14], edx
        jae public_65c6899
        inc dword ptr ds : [ebx+0x18]
        public_65c6899 : nop
        mov edi, dword ptr ds : [ebx+0x18]
        mov edx, ecx
        shr edx, 0x1D
        mov ebp, 0x40
        add edi, edx
        sub ebp, eax
        cmp ecx, ebp
        mov dword ptr ds : [ebx+0x18], edi
        jb public_65c6903
        mov esi, dword ptr ss : [esp+0x14]
        lea edi, ds:[eax+ebx+0x1C]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        lea ecx, ds:[ebx+0x1C]
        push ecx
        mov ecx, ebx
        call public_65c5da0
        lea esi, ss:[ebp+0x3F]
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp esi, ebp
        jae public_65c68fb
        public_65c68e1 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+esi-0x3F]
        push eax
        mov ecx, ebx
        call public_65c5da0
        add esi, 0x40
        add edi, 0x40
        cmp esi, ebp
        jb public_65c68e1
        public_65c68fb : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        jmp public_65c6905
        public_65c6903 : nop
        xor edi, edi
        public_65c6905 : nop
        mov edx, dword ptr ss : [esp+0x14]
        sub ecx, edi
        lea esi, ds:[edi+edx]
        lea edi, ds:[eax+ebx+0x1C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65c6870)
    }
}

#undef public_65c6899
#undef public_65c68e1
#undef public_65c68fb
#undef public_65c6903
#undef public_65c6905
