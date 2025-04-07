#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60340);
CLANG_FORWARD_PROC_SYMBOL(public_6f607e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6036f _public_6f6036f
#define public_6f603a3 _public_6f603a3
#define public_6f603a8 _public_6f603a8

PROC_DECLARE(0x6f60340, internal_6f60340, public_6f60340);
extern "C" NAKED register_t __cdecl internal_6f60340()
{
    __asm
    {
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd1b84
        call public_6f68cf0
        mov esi, eax
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x50C
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f6036f
        mov ebx, eax
        public_6f6036f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ef7bd0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_6f603a3
        call public_6f607e0
        mov dword ptr ds : [esi], eax
        jmp public_6f603a8
        public_6f603a3 : nop
        call public_6f607e0
        public_6f603a8 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd1b84
        call public_6f68cf0
        mov edx, dword ptr ds : [eax+8]
        xor ecx, ecx
        test edx, edx
        setne cl
        pop edi
        pop esi
        pop ebx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6f60340)
    }
}

#undef public_6f6036f
#undef public_6f603a3
#undef public_6f603a8
