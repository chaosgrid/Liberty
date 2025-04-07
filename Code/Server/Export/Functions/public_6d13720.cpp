#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13720);
CLANG_FORWARD_PROC_SYMBOL(public_6d15e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d13750 _public_6d13750
#define public_6d1376f _public_6d1376f
#define public_6d13794 _public_6d13794
#define public_6d13798 _public_6d13798
#define public_6d137b8 _public_6d137b8

PROC_DECLARE(0x6d13720, internal_6d13720, public_6d13720);
extern "C" NAKED register_t __cdecl internal_6d13720()
{
    __asm
    {
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
        je public_6d13794
        mov ecx, eax
        cmp eax, ecx
        jne public_6d13794
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d1376f
        nop 
        lea esp, ss:[esp]
        public_6d13750 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d15e70
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d13750
        public_6d1376f : nop
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
        call public_6d5c540
        jmp public_6d137b8
        public_6d13794 : nop
        cmp eax, edi
        je public_6d137b8
        public_6d13798 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d13798
        public_6d137b8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d13720)
    }
}

#undef public_6d13750
#undef public_6d1376f
#undef public_6d13794
#undef public_6d13798
#undef public_6d137b8
