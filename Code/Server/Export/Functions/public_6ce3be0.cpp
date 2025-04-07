#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce46d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce3c10 _public_6ce3c10
#define public_6ce3c37 _public_6ce3c37
#define public_6ce3c63 _public_6ce3c63
#define public_6ce3c67 _public_6ce3c67
#define public_6ce3c87 _public_6ce3c87

PROC_DECLARE(0x6ce3be0, internal_6ce3be0, public_6ce3be0);
extern "C" NAKED register_t __cdecl internal_6ce3be0()
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
        je public_6ce3c63
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ce3c63
        cmp ebx, eax
        jne public_6ce3c63
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ce3c37
        lea esp, ss:[esp]
        public_6ce3c10 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce4b30
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6d572a0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ce3c10
        public_6ce3c37 : nop
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
        public_6ce3c63 : nop
        cmp ecx, ebx
        je public_6ce3c87
        public_6ce3c67 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ce5750
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ce46d0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ce3c67
        public_6ce3c87 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ce3be0)
    }
}

#undef public_6ce3c10
#undef public_6ce3c37
#undef public_6ce3c63
#undef public_6ce3c67
#undef public_6ce3c87
