#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);

#define public_56a1c0 _public_56a1c0
#define public_56a1e9 _public_56a1e9
#define public_56a20d _public_56a20d
#define public_56a221 _public_56a221
#define public_56a228 _public_56a228

PROC_DECLARE(0x56a1b0, internal_56a1b0, public_56a1b0);
extern "C" NAKED register_t __cdecl internal_56a1b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_56a1c0 : nop
        mov ecx, dword ptr ds : [edi+0x2B8]
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_56a1e9
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_56a1e9
        push esi
        push ebx
        call public_58cbf0
        inc esi
        jmp public_56a1c0
        public_56a1e9 : nop
        mov ecx, dword ptr ds : [edi+0x2B8]
        push ebx
        call public_58d0b0
        mov esi, eax
        test esi, esi
        je public_56a228
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_56a228
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_56a20d
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_56a20d : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_56a221
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_56a221 : nop
        mov dword ptr ds : [esi+8], 0
        public_56a228 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x56a1b0)
    }
}

#undef public_56a1c0
#undef public_56a1e9
#undef public_56a20d
#undef public_56a221
#undef public_56a228
