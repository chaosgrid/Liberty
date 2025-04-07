#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecff00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ecff30 _public_6ecff30
#define public_6ecff4f _public_6ecff4f
#define public_6ecff68 _public_6ecff68
#define public_6ecff70 _public_6ecff70
#define public_6ecff90 _public_6ecff90

PROC_DECLARE(0x6ecff00, internal_6ecff00, public_6ecff00);
extern "C" NAKED register_t __cdecl internal_6ecff00()
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
        je public_6ecff68
        mov ecx, eax
        cmp eax, ecx
        jne public_6ecff68
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ecff4f
        nop 
        lea esp, ss:[esp]
        public_6ecff30 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed1cd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ecff30
        public_6ecff4f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6ecff90
        public_6ecff68 : nop
        cmp eax, edi
        je public_6ecff90
        lea esp, ss:[esp]
        public_6ecff70 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ecff70
        public_6ecff90 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ecff00)
    }
}

#undef public_6ecff30
#undef public_6ecff4f
#undef public_6ecff68
#undef public_6ecff70
#undef public_6ecff90
