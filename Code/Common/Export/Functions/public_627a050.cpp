#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627a050);
CLANG_FORWARD_PROC_SYMBOL(public_627aab0);
CLANG_FORWARD_PROC_SYMBOL(public_627ae80);
CLANG_FORWARD_PROC_SYMBOL(public_627b110);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627a080 _public_627a080
#define public_627a09f _public_627a09f
#define public_627a0c4 _public_627a0c4
#define public_627a0c8 _public_627a0c8
#define public_627a0e8 _public_627a0e8

PROC_DECLARE(0x627a050, internal_627a050, public_627a050);
extern "C" NAKED register_t __cdecl internal_627a050()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_627a0c4
        mov ecx, eax
        cmp eax, ecx
        jne public_627a0c4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_627a09f
        lea esp, ss:[esp]
        public_627a080 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_627ae80
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_627a080
        public_627a09f : nop
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
        call public_632c410
        jmp public_627a0e8
        public_627a0c4 : nop
        cmp eax, edi
        je public_627a0e8
        public_627a0c8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_627b110
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_627aab0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_627a0c8
        public_627a0e8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x627a050)
    }
}

#undef public_627a080
#undef public_627a09f
#undef public_627a0c4
#undef public_627a0c8
#undef public_627a0e8
