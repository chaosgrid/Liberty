#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352980);

#define public_635299a _public_635299a
#define public_63529c0 _public_63529c0
#define public_63529c7 _public_63529c7
#define public_63529d0 _public_63529d0

PROC_DECLARE(0x6352980, internal_6352980, public_6352980);
extern "C" NAKED register_t __cdecl internal_6352980()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        mov eax, esi
        and eax, ebp
        xor edx, edx
        test edi, edi
        jle public_63529c7
        mov ebx, dword ptr ds : [ecx+0xC]
        public_635299a : nop
        lea ecx, ds:[eax+eax*2]
        mov ebp, dword ptr ds : [ebx+ecx*4+8]
        lea ecx, ds:[ebx+ecx*4]
        inc edx
        test ebp, ebp
        je public_63529c7
        mov ebp, dword ptr ds : [ecx]
        or ebp, 0x80000000
        cmp ebp, dword ptr ss : [esp+0x18]
        jne public_63529c0
        mov ebp, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ecx+4], ebp
        je public_63529d0
        public_63529c0 : nop
        inc eax
        and eax, esi
        cmp edx, edi
        jl public_635299a
        public_63529c7 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_63529d0 : nop
        mov eax, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6352980)
    }
}

#undef public_635299a
#undef public_63529c0
#undef public_63529c7
#undef public_63529d0
