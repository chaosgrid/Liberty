#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4d1c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4d72);

#define public_6ad4d7f _public_6ad4d7f
#define public_6ad4d98 _public_6ad4d98
#define public_6ad4dce _public_6ad4dce
#define public_6ad4dd1 _public_6ad4dd1
#define public_6ad4dd9 _public_6ad4dd9
#define public_6ad4de6 _public_6ad4de6
#define public_6ad4dfd _public_6ad4dfd
#define public_6ad4e0e _public_6ad4e0e
#define public_6ad4e1d _public_6ad4e1d
#define public_6ad4e2f _public_6ad4e2f

PROC_DECLARE(0x6ad4d72, internal_6ad4d72, public_6ad4d72);
extern "C" NAKED register_t __cdecl internal_6ad4d72()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6addc54]
        push edi
        public_6ad4d7f : nop
        cmp dword ptr ds : [esi+0x10], 0xFFFFFFFF
        je public_6ad4e1d
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0x2010]
        mov ebx, 0x3FF000
        public_6ad4d98 : nop
        cmp dword ptr ds : [edi], 0xF0
        jne public_6ad4dd9
        mov eax, ebx
        push 0x4000
        add eax, dword ptr ds : [esi+0x10]
        push 0x1000
        push eax
        call dword ptr ds : [public_6ada0c4]
        test eax, eax
        je public_6ad4dd9
        or dword ptr ds : [edi], 0xFFFFFFFF
        dec dword ptr ds : [public_6ae1088]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6ad4dce
        cmp eax, edi
        jbe public_6ad4dd1
        public_6ad4dce : nop
        mov dword ptr ds : [esi+0xC], edi
        public_6ad4dd1 : nop
        inc dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp+8]
        je public_6ad4de6
        public_6ad4dd9 : nop
        sub ebx, 0x1000
        sub edi, 8
        test ebx, ebx
        jge public_6ad4d98
        public_6ad4de6 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov ecx, esi
        mov esi, dword ptr ds : [esi+4]
        je public_6ad4e1d
        cmp dword ptr ds : [ecx+0x18], 0xFFFFFFFF
        jne public_6ad4e1d
        push 1
        lea eax, ds:[ecx+0x20]
        pop edx
        public_6ad4dfd : nop
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6ad4e0e
        inc edx
        add eax, 8
        cmp edx, 0x400
        jl public_6ad4dfd
        public_6ad4e0e : nop
        cmp edx, 0x400
        jne public_6ad4e1d
        push ecx
        call public_6ad4d1c
        pop ecx
        public_6ad4e1d : nop
        cmp esi, dword ptr ds : [public_6addc54]
        je public_6ad4e2f
        cmp dword ptr ss : [ebp+8], 0
        jg public_6ad4d7f
        public_6ad4e2f : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad4d72)
    }
}

#undef public_6ad4d7f
#undef public_6ad4d98
#undef public_6ad4dce
#undef public_6ad4dd1
#undef public_6ad4dd9
#undef public_6ad4de6
#undef public_6ad4dfd
#undef public_6ad4e0e
#undef public_6ad4e1d
#undef public_6ad4e2f
