#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ce90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2a0c8 _public_6f2a0c8
#define public_6f2a116 _public_6f2a116
#define public_6f2a147 _public_6f2a147
#define public_6f2a15f _public_6f2a15f
#define public_6f2a162 _public_6f2a162
#define public_6f2a17a _public_6f2a17a

PROC_DECLARE(0x6f2a0b0, internal_6f2a0b0, public_6f2a0b0);
extern "C" NAKED register_t __cdecl internal_6f2a0b0()
{
    __asm
    {
        sub esp, 0xFC
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push esi
        push edi
        lea esi, ss:[esp+0x3C]
        mov edi, 0xA
        public_6f2a0c8 : nop
        mov ecx, esi
        call ebx
        add esi, 4
        dec edi
        jne public_6f2a0c8
        mov eax, dword ptr ss : [esp+0x114]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x114]
        xor esi, esi
        push edx
        mov dword ptr ss : [esp+0x110], esi
        call dword ptr ds : [public_6fb34f4]
        add esp, 0xC
        test eax, eax
        jne public_6f2a17a
        cmp dword ptr ss : [esp+0x104], esi
        mov dword ptr ss : [esp+0xC], esi
        jle public_6f2a17a
        push ebp
        mov ebp, dword ptr ss : [esp+0x114]
        lea ebx, ss:[esp+0x68]
        public_6f2a116 : nop
        mov eax, dword ptr ds : [ebx-0x50]
        push ebx
/*FIXUP push offset public_6fb925c @0x6f2a11a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb925c
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f6ce90
        add esp, 8
        test al, al
        jne public_6f2a162
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f2a147
        mov edi, eax
        public_6f2a147 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f2a15f
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6f2a15f : nop
        inc dword ptr ss : [ebp+8]
        public_6f2a162 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x108]
        inc eax
        add ebx, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6f2a116
        pop ebp
        public_6f2a17a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xFC
        ret 
        UNREACHABLE_TRAP(0x6f2a0b0)
    }
}

#undef public_6f2a0c8
#undef public_6f2a116
#undef public_6f2a147
#undef public_6f2a15f
#undef public_6f2a162
#undef public_6f2a17a
