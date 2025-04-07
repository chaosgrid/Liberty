#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb9f20 _public_6eb9f20
#define public_6eb9f5e _public_6eb9f5e
#define public_6eb9f68 _public_6eb9f68
#define public_6eb9f9b _public_6eb9f9b
#define public_6eb9f9d _public_6eb9f9d
#define public_6eb9fa9 _public_6eb9fa9
#define public_6eb9fc0 _public_6eb9fc0
#define public_6eb9fdd _public_6eb9fdd
#define public_6eb9fe7 _public_6eb9fe7

PROC_DECLARE(0x6eb9ef0, internal_6eb9ef0, public_6eb9ef0);
extern "C" NAKED register_t __cdecl internal_6eb9ef0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov ebp, ecx
        call public_6eac0c0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_6eb9fa9
        mov eax, dword ptr ss : [ebp+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb9fa9
        mov edi, edi
        public_6eb9f20 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_6eb9f68
        mov ecx, dword ptr ds : [esi+0x8C]
        push 0
        push ecx
        mov ecx, ebx
        call public_6ea9fc0
        mov edi, dword ptr ds : [esi+0x90]
        test edi, edi
        mov dword ptr ds : [esi+0x8C], 0xFFFFFFFF
        je public_6eb9f5e
        mov ecx, edi
        call public_6eb8c40
        push edi
        call public_6fa8fe0
        add esp, 4
        public_6eb9f5e : nop
        mov dword ptr ds : [esi+0x90], 0
        public_6eb9f68 : nop
        mov al, byte ptr ds : [esi+0x94]
        test al, al
        je public_6eb9f9b
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x2F8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x2F8], eax
        mov esi, edi
        jmp public_6eb9f9d
        public_6eb9f9b : nop
        mov esi, dword ptr ds : [esi]
        public_6eb9f9d : nop
        cmp esi, dword ptr ss : [ebp+0x2F4]
        jne public_6eb9f20
        public_6eb9fa9 : nop
        mov eax, dword ptr ss : [ebp+0x314]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eb9fe7
        mov ebx, dword ptr ds : [public_6fb34e0]
        nop 
        lea esp, ss:[esp]
        public_6eb9fc0 : nop
        mov eax, dword ptr ds : [edi+0x8C]
        cmp eax, 0xFFFFFFFF
        lea esi, ds:[edi+0x8C]
        je public_6eb9fdd
        push esi
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6eb9fdd : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0x314]
        jne public_6eb9fc0
        public_6eb9fe7 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 2
        call public_6eb9af0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eb9ef0)
    }
}

#undef public_6eb9f20
#undef public_6eb9f5e
#undef public_6eb9f68
#undef public_6eb9f9b
#undef public_6eb9f9d
#undef public_6eb9fa9
#undef public_6eb9fc0
#undef public_6eb9fdd
#undef public_6eb9fe7
