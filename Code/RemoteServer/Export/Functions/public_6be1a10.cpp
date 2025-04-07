#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1a10);
CLANG_FORWARD_PROC_SYMBOL(public_6be1db0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2180);
CLANG_FORWARD_PROC_SYMBOL(public_6be21c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be1a40 _public_6be1a40
#define public_6be1a5f _public_6be1a5f
#define public_6be1a8b _public_6be1a8b
#define public_6be1a90 _public_6be1a90
#define public_6be1ab0 _public_6be1ab0

PROC_DECLARE(0x6be1a10, internal_6be1a10, public_6be1a10);
extern "C" NAKED register_t __cdecl internal_6be1a10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6be1a8b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6be1a8b
        cmp ebx, eax
        jne public_6be1a8b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6be1a5f
        lea esp, ss:[esp]
        public_6be1a40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6be2180
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6be1a40
        public_6be1a5f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6be1a8b : nop
        cmp ecx, ebx
        je public_6be1ab0
        nop 
        public_6be1a90 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6be21c0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6be1db0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6be1a90
        public_6be1ab0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6be1a10)
    }
}

#undef public_6be1a40
#undef public_6be1a5f
#undef public_6be1a8b
#undef public_6be1a90
#undef public_6be1ab0
