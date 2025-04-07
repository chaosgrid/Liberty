#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2250);
CLANG_FORWARD_PROC_SYMBOL(public_6600c36);

#define public_6600cfd _public_6600cfd
#define public_6600d07 _public_6600d07
#define public_6600d19 _public_6600d19
#define public_6600d23 _public_6600d23
#define public_6600d25 _public_6600d25
#define public_6600d29 _public_6600d29
#define public_6600d45 _public_6600d45
#define public_6600d4e _public_6600d4e
#define public_6600d5d _public_6600d5d
#define public_6600d74 _public_6600d74
#define public_6600d77 _public_6600d77

PROC_DECLARE(0x6600ce1, internal_6600ce1, public_6600ce1);
extern "C" NAKED register_t __cdecl internal_6600ce1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6600cfd
        cmp dword ptr ds : [public_66033ec], 0
        jmp public_6600d23
        public_6600cfd : nop
        cmp esi, 1
        je public_6600d07
        cmp esi, 2
        jne public_6600d29
        public_6600d07 : nop
        mov eax, dword ptr ds : [public_6603b08]
        test eax, eax
        je public_6600d19
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6600d25
        public_6600d19 : nop
        push edi
        push esi
        push ebx
        call public_6600c36
        test eax, eax
        public_6600d23 : nop
        jne public_6600d29
        public_6600d25 : nop
        xor eax, eax
        jmp public_6600d77
        public_6600d29 : nop
        push edi
        push esi
        push ebx
        call public_65f2250
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6600d45
        test eax, eax
        jne public_6600d74
        push edi
        push eax
        push ebx
        call public_6600c36
        public_6600d45 : nop
        test esi, esi
        je public_6600d4e
        cmp esi, 3
        jne public_6600d74
        public_6600d4e : nop
        push edi
        push esi
        push ebx
        call public_6600c36
        test eax, eax
        jne public_6600d5d
        and dword ptr ss : [ebp+0xC], eax
        public_6600d5d : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6600d74
        mov eax, dword ptr ds : [public_6603b08]
        test eax, eax
        je public_6600d74
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6600d74 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6600d77 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6600ce1)
    }
}

#undef public_6600cfd
#undef public_6600d07
#undef public_6600d19
#undef public_6600d23
#undef public_6600d25
#undef public_6600d29
#undef public_6600d45
#undef public_6600d4e
#undef public_6600d5d
#undef public_6600d74
#undef public_6600d77
