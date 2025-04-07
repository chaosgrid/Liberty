#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_62b5f90);
CLANG_FORWARD_PROC_SYMBOL(public_62c2660);
CLANG_FORWARD_PROC_SYMBOL(public_62d2830);

#define public_62aa1e8 _public_62aa1e8
#define public_62aa221 _public_62aa221
#define public_62aa236 _public_62aa236
#define public_62aa23d _public_62aa23d

PROC_DECLARE(0x62aa1c0, internal_62aa1c0, public_62aa1c0);
extern "C" NAKED register_t __cdecl internal_62aa1c0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xAC]
        test eax, eax
        push edi
        je public_62aa23d
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62aa23d
        mov ecx, dword ptr ds : [esi+0x194]
        test ecx, ecx
        je public_62aa1e8
        push 0
        call public_62d2830
        public_62aa1e8 : nop
        push edi
        mov ecx, esi
        call public_62b5f90
        push 0x80000
        lea ecx, ds:[esi+0xE4]
        call public_629b720
        mov ebp, eax
        test ebp, ebp
        je public_62aa23d
        push ebx
        lea ecx, ss:[ebp+0x24]
        call public_62c2660
        mov ebx, dword ptr ss : [ebp+0x834]
        mov edx, dword ptr ss : [ebp+0x830]
        mov eax, ebx
        cmp eax, ebx
        je public_62aa236
        public_62aa221 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_62aa221
        public_62aa236 : nop
        mov dword ptr ss : [ebp+0x834], edx
        pop ebx
        public_62aa23d : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x62aa1c0)
    }
}

#undef public_62aa1e8
#undef public_62aa221
#undef public_62aa236
#undef public_62aa23d
