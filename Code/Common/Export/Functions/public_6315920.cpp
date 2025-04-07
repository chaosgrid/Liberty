#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6315920);
CLANG_FORWARD_PROC_SYMBOL(public_6318550);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6315950 _public_6315950
#define public_631596f _public_631596f
#define public_6315994 _public_6315994
#define public_6315998 _public_6315998
#define public_63159b8 _public_63159b8

PROC_DECLARE(0x6315920, internal_6315920, public_6315920);
extern "C" NAKED register_t __cdecl internal_6315920()
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
        je public_6315994
        mov ecx, eax
        cmp eax, ecx
        jne public_6315994
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_631596f
        nop 
        lea esp, ss:[esp]
        public_6315950 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318550
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6315950
        public_631596f : nop
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
        jmp public_63159b8
        public_6315994 : nop
        cmp eax, edi
        je public_63159b8
        public_6315998 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_628ffd0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6315998
        public_63159b8 : nop
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
        UNREACHABLE_TRAP(0x6315920)
    }
}

#undef public_6315950
#undef public_631596f
#undef public_6315994
#undef public_6315998
#undef public_63159b8
