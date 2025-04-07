#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2370);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2650);

#define public_6f9f940 _public_6f9f940
#define public_6f9f953 _public_6f9f953
#define public_6f9f956 _public_6f9f956
#define public_6f9f95a _public_6f9f95a
#define public_6f9f993 _public_6f9f993
#define public_6f9f9a0 _public_6f9f9a0
#define public_6f9f9a8 _public_6f9f9a8
#define public_6f9f9cc _public_6f9f9cc

PROC_DECLARE(0x6f9f920, internal_6f9f920, public_6f9f920);
extern "C" NAKED register_t __cdecl internal_6f9f920()
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
        je public_6f9f95a
        lea esp, ss:[esp]
        public_6f9f940 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_6f9f953
        mov esi, dword ptr ds : [esi]
        jmp public_6f9f956
        public_6f9f953 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f9f956 : nop
        cmp esi, ecx
        jne public_6f9f940
        public_6f9f95a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f9f9a8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f9f9a0
        cmp edi, dword ptr ds : [edx]
        jne public_6f9f993
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6fa2650
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
        public_6f9f993 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6ed2370
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f9f9a0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_6f9f9cc
        public_6f9f9a8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6fa2650
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
        public_6f9f9cc : nop
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
        UNREACHABLE_TRAP(0x6f9f920)
    }
}

#undef public_6f9f940
#undef public_6f9f953
#undef public_6f9f956
#undef public_6f9f95a
#undef public_6f9f993
#undef public_6f9f9a0
#undef public_6f9f9a8
#undef public_6f9f9cc
