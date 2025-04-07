#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba02);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ba49);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bbba);

#define public_6d2bbcc _public_6d2bbcc
#define public_6d2bbd5 _public_6d2bbd5
#define public_6d2bc25 _public_6d2bc25
#define public_6d2bc27 _public_6d2bc27

PROC_DECLARE(0x6d2bbba, internal_6d2bbba, public_6d2bbba);
extern "C" NAKED register_t __cdecl internal_6d2bbba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2bbd5
        public_6d2bbcc : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 1
        mov dword ptr ss : [ebp-4], eax
        public_6d2bbd5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx+0x1400]
        jae public_6d2bc27
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+eax*4+0x1000]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax]
        je public_6d2bc25
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x10]
        call public_6d2ba49
        public_6d2bc25 : nop
        jmp public_6d2bbcc
        public_6d2bc27 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        call public_6d2ba02
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2bbba)
    }
}

#undef public_6d2bbcc
#undef public_6d2bbd5
#undef public_6d2bc25
#undef public_6d2bc27
