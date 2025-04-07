#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a7040);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7960);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a7070 _public_62a7070
#define public_62a7097 _public_62a7097
#define public_62a70c3 _public_62a70c3
#define public_62a70c7 _public_62a70c7
#define public_62a70e7 _public_62a70e7

PROC_DECLARE(0x62a7040, internal_62a7040, public_62a7040);
extern "C" NAKED register_t __cdecl internal_62a7040()
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
        je public_62a70c3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_62a70c3
        cmp ebx, eax
        jne public_62a70c3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a7097
        lea esp, ss:[esp]
        public_62a7070 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62a7960
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_62a5d70
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a7070
        public_62a7097 : nop
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
        public_62a70c3 : nop
        cmp ecx, ebx
        je public_62a70e7
        public_62a70c7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_62a72a0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62a6c60
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_62a70c7
        public_62a70e7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62a7040)
    }
}

#undef public_62a7070
#undef public_62a7097
#undef public_62a70c3
#undef public_62a70c7
#undef public_62a70e7
