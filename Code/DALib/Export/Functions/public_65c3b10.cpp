#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3b10);
CLANG_FORWARD_PROC_SYMBOL(public_65c54c0);

#define public_65c3b46 _public_65c3b46
#define public_65c3b79 _public_65c3b79

PROC_DECLARE(0x65c3b10, internal_65c3b10, public_65c3b10);
extern "C" NAKED register_t __cdecl internal_65c3b10()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_65c70d8]
        mov edi, dword ptr ds : [esi+0x50]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 0x3E8
        jbe public_65c3b79
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push esi
        mov dword ptr ds : [esi+0x50], eax
        call public_65c54c0
        add eax, dword ptr ds : [esi+0x3C]
        mov edi, eax
        lea ecx, ds:[esi+0x48]
        mov ebx, 2
        public_65c3b46 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+4], edx
        add edi, edx
        sub ecx, 4
        dec ebx
        jne public_65c3b46
        mov dword ptr ds : [esi+0x44], eax
        mov eax, 0xAAAAAAAB
        mul edi
        shr edx, 1
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], 0
        pop ebx
        fild qword ptr ss : [esp+8]
        fmul qword ptr ds : [public_65c74d0]
        fstp qword ptr ds : [esi+0x58]
        public_65c3b79 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x65c3b10)
    }
}

#undef public_65c3b46
#undef public_65c3b79
