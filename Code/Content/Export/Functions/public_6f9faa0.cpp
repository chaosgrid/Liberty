#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9faa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2b60);

#define public_6f9fac0 _public_6f9fac0
#define public_6f9fad3 _public_6f9fad3
#define public_6f9fad6 _public_6f9fad6
#define public_6f9fada _public_6f9fada
#define public_6f9fb13 _public_6f9fb13
#define public_6f9fb20 _public_6f9fb20
#define public_6f9fb28 _public_6f9fb28
#define public_6f9fb4c _public_6f9fb4c

PROC_DECLARE(0x6f9faa0, internal_6f9faa0, public_6f9faa0);
extern "C" NAKED register_t __cdecl internal_6f9faa0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6f9fada
        lea esp, ss:[esp]
        public_6f9fac0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_6f9fad3
        mov esi, dword ptr ds : [esi]
        jmp public_6f9fad6
        public_6f9fad3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f9fad6 : nop
        cmp esi, ecx
        jne public_6f9fac0
        public_6f9fada : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f9fb28
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f9fb20
        cmp edi, dword ptr ds : [edx]
        jne public_6f9fb13
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6fa2b60
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f9fb13 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f4e3f0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f9fb20 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_6f9fb4c
        public_6f9fb28 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6fa2b60
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f9fb4c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f9faa0)
    }
}

#undef public_6f9fac0
#undef public_6f9fad3
#undef public_6f9fad6
#undef public_6f9fada
#undef public_6f9fb13
#undef public_6f9fb20
#undef public_6f9fb28
#undef public_6f9fb4c
