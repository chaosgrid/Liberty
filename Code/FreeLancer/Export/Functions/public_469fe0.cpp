#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469fe0);
CLANG_FORWARD_PROC_SYMBOL(public_46dba0);
CLANG_FORWARD_PROC_SYMBOL(public_46df70);
CLANG_FORWARD_PROC_SYMBOL(public_46e970);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46a010 _public_46a010
#define public_46a02f _public_46a02f
#define public_46a054 _public_46a054
#define public_46a058 _public_46a058
#define public_46a078 _public_46a078

PROC_DECLARE(0x469fe0, internal_469fe0, public_469fe0);
extern "C" NAKED register_t __cdecl internal_469fe0()
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
        je public_46a054
        mov ecx, eax
        cmp eax, ecx
        jne public_46a054
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46a02f
        nop 
        lea esp, ss:[esp]
        public_46a010 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46df70
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46a010
        public_46a02f : nop
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
        call public_53e430
        jmp public_46a078
        public_46a054 : nop
        cmp eax, edi
        je public_46a078
        public_46a058 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_46e970
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46dba0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_46a058
        public_46a078 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x469fe0)
    }
}

#undef public_46a010
#undef public_46a02f
#undef public_46a054
#undef public_46a058
#undef public_46a078
