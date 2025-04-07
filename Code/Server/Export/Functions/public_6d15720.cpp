#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15720);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);

#define public_6d1573a _public_6d1573a
#define public_6d15740 _public_6d15740
#define public_6d15756 _public_6d15756
#define public_6d15785 _public_6d15785
#define public_6d15798 _public_6d15798
#define public_6d157bc _public_6d157bc

PROC_DECLARE(0x6d15720, internal_6d15720, public_6d15720);
extern "C" NAKED register_t __cdecl internal_6d15720()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x200]
        or ebp, 0xFFFFFFFF
        inc esi
        cmp esi, 0x1000
        mov bl, 1
        jb public_6d15756
        public_6d1573a : nop
        xor esi, esi
        lea esp, ss:[esp]
        public_6d15740 : nop
        cmp esi, 0x1000
        jb public_6d15756
        mov ecx, edi
        call public_6d15f90
        mov ecx, edi
        call public_6d15f90
        public_6d15756 : nop
        mov ecx, esi
        and ecx, 0x1F
        mov eax, 1
        shl eax, cl
        mov ecx, esi
        shr ecx, 5
        test dword ptr ds : [edi+ecx*4], eax
        je public_6d15785
        test bl, bl
        je public_6d157bc
        inc esi
        cmp esi, 0x1000
        jae public_6d1573a
        cmp esi, dword ptr ds : [edi+0x200]
        jne public_6d15740
        xor bl, bl
        jmp public_6d15740
        public_6d15785 : nop
        test bl, bl
        je public_6d157bc
        cmp esi, 0x1000
        jb public_6d15798
        mov ecx, edi
        call public_6d15f90
        public_6d15798 : nop
        mov edx, esi
        shr edx, 5
        lea eax, ds:[edi+edx*4]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        or dword ptr ds : [eax], edx
        mov dword ptr ds : [edi+0x200], esi
        pop edi
        lea eax, ds:[esi+1]
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6d157bc : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d15720)
    }
}

#undef public_6d1573a
#undef public_6d15740
#undef public_6d15756
#undef public_6d15785
#undef public_6d15798
#undef public_6d157bc
