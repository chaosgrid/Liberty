#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12740);

#define public_6d12752 _public_6d12752
#define public_6d12763 _public_6d12763
#define public_6d1276e _public_6d1276e
#define public_6d1278c _public_6d1278c
#define public_6d1278f _public_6d1278f
#define public_6d12798 _public_6d12798

PROC_DECLARE(0x6d12740, internal_6d12740, public_6d12740);
extern "C" NAKED register_t __cdecl internal_6d12740()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6d64a48]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        public_6d12752 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx+0x178]
        test edx, edx
        jne public_6d12763
        xor eax, eax
        jmp public_6d1276e
        public_6d12763 : nop
        mov eax, dword ptr ds : [ecx+0x17C]
        sub eax, edx
        sar eax, 2
        public_6d1276e : nop
        cmp esi, eax
        jge public_6d12798
        mov eax, dword ptr ds : [ecx+0x178]
        mov eax, dword ptr ds : [eax+esi*4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6d1278c
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_6d1278f
        public_6d1278c : nop
        inc esi
        jmp public_6d12752
        public_6d1278f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6d12798 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d12740)
    }
}

#undef public_6d12752
#undef public_6d12763
#undef public_6d1276e
#undef public_6d1278c
#undef public_6d1278f
#undef public_6d12798
