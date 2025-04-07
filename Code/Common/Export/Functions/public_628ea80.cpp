#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ea80);
CLANG_FORWARD_PROC_SYMBOL(public_628fd40);
CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628eab0 _public_628eab0
#define public_628eacf _public_628eacf
#define public_628eae8 _public_628eae8
#define public_628eaf0 _public_628eaf0
#define public_628eb10 _public_628eb10

PROC_DECLARE(0x628ea80, internal_628ea80, public_628ea80);
extern "C" NAKED register_t __cdecl internal_628ea80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_628eae8
        mov ecx, eax
        cmp eax, ecx
        jne public_628eae8
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_628eacf
        nop 
        lea esp, ss:[esp]
        public_628eab0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_628fd40
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_628eab0
        public_628eacf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_628eb10
        public_628eae8 : nop
        cmp eax, edi
        je public_628eb10
        lea esp, ss:[esp]
        public_628eaf0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_628ffd0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_628eaf0
        public_628eb10 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x628ea80)
    }
}

#undef public_628eab0
#undef public_628eacf
#undef public_628eae8
#undef public_628eaf0
#undef public_628eb10
