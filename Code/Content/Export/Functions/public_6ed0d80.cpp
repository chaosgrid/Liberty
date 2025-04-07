#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb89b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed08e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed19f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed0da8 _public_6ed0da8
#define public_6ed0dcf _public_6ed0dcf
#define public_6ed0df1 _public_6ed0df1
#define public_6ed0df5 _public_6ed0df5
#define public_6ed0e15 _public_6ed0e15

PROC_DECLARE(0x6ed0d80, internal_6ed0d80, public_6ed0d80);
extern "C" NAKED register_t __cdecl internal_6ed0d80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6ed0df1
        mov ecx, eax
        cmp eax, ecx
        jne public_6ed0df1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed0dcf
        public_6ed0da8 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed19f0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6eb89b0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed0da8
        public_6ed0dcf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6ed0df1 : nop
        cmp eax, edi
        je public_6ed0e15
        public_6ed0df5 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6ed1c80
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6ed08e0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6ed0df5
        public_6ed0e15 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ed0d80)
    }
}

#undef public_6ed0da8
#undef public_6ed0dcf
#undef public_6ed0df1
#undef public_6ed0df5
#undef public_6ed0e15
