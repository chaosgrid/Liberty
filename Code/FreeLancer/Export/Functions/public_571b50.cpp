#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_571b50);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);

#define public_571b60 _public_571b60
#define public_571b89 _public_571b89
#define public_571bad _public_571bad
#define public_571bc1 _public_571bc1
#define public_571bc8 _public_571bc8

PROC_DECLARE(0x571b50, internal_571b50, public_571b50);
extern "C" NAKED register_t __cdecl internal_571b50()
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
        public_571b60 : nop
        mov ecx, dword ptr ds : [edi+0xC4]
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_571b89
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_571b89
        push esi
        push ebx
        call public_58cbf0
        inc esi
        jmp public_571b60
        public_571b89 : nop
        mov ecx, dword ptr ds : [edi+0xC4]
        push ebx
        call public_58d0b0
        mov esi, eax
        test esi, esi
        je public_571bc8
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_571bc8
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_571bad
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_571bad : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_571bc1
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_571bc1 : nop
        mov dword ptr ds : [esi+8], 0
        public_571bc8 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x571b50)
    }
}

#undef public_571b60
#undef public_571b89
#undef public_571bad
#undef public_571bc1
#undef public_571bc8
