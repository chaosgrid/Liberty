#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63529e0);

#define public_63529f9 _public_63529f9
#define public_6352a30 _public_6352a30
#define public_6352a56 _public_6352a56
#define public_6352a65 _public_6352a65
#define public_6352a6c _public_6352a6c

PROC_DECLARE(0x63529e0, internal_63529e0, public_63529e0);
extern "C" NAKED register_t __cdecl internal_63529e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        lea esi, ss:[esp+0x10]
        or eax, 0xFFFFFFFF
        mov edi, 4
        public_63529f9 : nop
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        inc esi
        xor edx, eax
        and edx, 0xFF
        mov edx, dword ptr ds : [edx*4+public_63edcdc]
        shr eax, 8
        xor eax, edx
        dec edi
        jne public_63529f9
        mov edi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        or eax, 0x80000000
        mov edx, edi
        and edx, eax
        xor esi, esi
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], eax
        jle public_6352a6c
        mov eax, dword ptr ds : [ecx+0xC]
        public_6352a30 : nop
        lea ecx, ds:[edx+edx*2]
        mov ebp, dword ptr ds : [eax+ecx*4+8]
        lea ecx, ds:[eax+ecx*4]
        inc esi
        test ebp, ebp
        je public_6352a6c
        mov ebp, dword ptr ds : [ecx]
        or ebp, 0x80000000
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_6352a56
        mov ebp, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [ecx+4], ebp
        je public_6352a65
        public_6352a56 : nop
        inc edx
        and edx, edi
        cmp esi, ebx
        jl public_6352a30
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6352a65 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+8], edx
        public_6352a6c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63529e0)
    }
}

#undef public_63529f9
#undef public_6352a30
#undef public_6352a56
#undef public_6352a65
#undef public_6352a6c
