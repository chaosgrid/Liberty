#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378a10);
CLANG_FORWARD_PROC_SYMBOL(public_637a060);
CLANG_FORWARD_PROC_SYMBOL(public_637a0e0);
CLANG_FORWARD_PROC_SYMBOL(public_637a140);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_637a160 _public_637a160
#define public_637a162 _public_637a162
#define public_637a17e _public_637a17e
#define public_637a180 _public_637a180
#define public_637a212 _public_637a212
#define public_637a225 _public_637a225

PROC_DECLARE(0x637a140, internal_637a140, public_637a140);
extern "C" NAKED register_t __cdecl internal_637a140()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x9C
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_637a160
        mov ecx, eax
        call public_637a0e0
        mov edi, eax
        jmp public_637a162
        public_637a160 : nop
        xor edi, edi
        public_637a162 : nop
        push 0x9C
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_637a17e
        mov ecx, eax
        call public_637a0e0
        mov esi, eax
        jmp public_637a180
        public_637a17e : nop
        xor esi, esi
        public_637a180 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x1C], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x20], edi
        lea ebx, ds:[edi+0x1C]
        lea eax, ds:[edi+0x40]
        mov dword ptr ds : [ebx+8], eax
        lea ecx, ds:[edi+0x64]
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [esi+0x1C], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x20], esi
        lea ebp, ds:[esi+0x1C]
        lea ecx, ds:[esi+0x64]
        mov dword ptr ss : [ebp+8], ecx
        lea eax, ds:[esi+0x40]
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0xC], ebp
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [edi+0xC], esi
        push edi
        mov dword ptr ds : [esi+0xC], edi
        call public_637a060
        push esi
        call public_637a060
        add esp, 8
        mov ecx, edi
        call public_6378a10
        mov ecx, esi
        call public_6378a10
        mov eax, 3
        public_637a212 : nop
        dec eax
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ebx+0x1C], edx
        mov ebx, dword ptr ds : [ebx+8]
        jne public_637a212
        mov eax, 3
        public_637a225 : nop
        dec eax
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [ebp+0x1C], edx
        mov ebp, dword ptr ss : [ebp+8]
        jne public_637a225
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637a140)
    }
}

#undef public_637a160
#undef public_637a162
#undef public_637a17e
#undef public_637a180
#undef public_637a212
#undef public_637a225
