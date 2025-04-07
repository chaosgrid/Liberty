#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d550);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d860);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e010);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f24a70 _public_6f24a70
#define public_6f24aa0 _public_6f24aa0
#define public_6f24ac8 _public_6f24ac8
#define public_6f24aed _public_6f24aed
#define public_6f24af1 _public_6f24af1
#define public_6f24b11 _public_6f24b11

PROC_DECLARE(0x6f24a60, internal_6f24a60, public_6f24a60);
extern "C" NAKED register_t __cdecl internal_6f24a60()
{
    __asm
    {
        mov ecx, offset public_6f61dd4
        jmp public_6f24a70
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f24a70 : nop
        sub esp, 0xC
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
        je public_6f24aed
        mov ecx, eax
        cmp eax, ecx
        jne public_6f24aed
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f24ac8
        nop 
        lea esp, ss:[esp]
        public_6f24aa0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2dc40
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2e420
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f24aa0
        public_6f24ac8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f2d550
        jmp public_6f24b11
        public_6f24aed : nop
        cmp eax, edi
        je public_6f24b11
        public_6f24af1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f2e010
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f2d860
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f24af1
        public_6f24b11 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f24a60)
    }
}

#undef public_6f24a70
#undef public_6f24aa0
#undef public_6f24ac8
#undef public_6f24aed
#undef public_6f24af1
#undef public_6f24b11
