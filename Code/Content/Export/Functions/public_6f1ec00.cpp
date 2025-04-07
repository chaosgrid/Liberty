#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f18d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ec00);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1ec30 _public_6f1ec30
#define public_6f1ec57 _public_6f1ec57
#define public_6f1ec83 _public_6f1ec83
#define public_6f1ec87 _public_6f1ec87
#define public_6f1eca7 _public_6f1eca7

PROC_DECLARE(0x6f1ec00, internal_6f1ec00, public_6f1ec00);
extern "C" NAKED register_t __cdecl internal_6f1ec00()
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
        je public_6f1ec83
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f1ec83
        cmp ebx, eax
        jne public_6f1ec83
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f1ec57
        lea esp, ss:[esp]
        public_6f1ec30 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f1fb80
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f18d20
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f1ec30
        public_6f1ec57 : nop
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
        public_6f1ec83 : nop
        cmp ecx, ebx
        je public_6f1eca7
        public_6f1ec87 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f69d00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f1fbc0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f1ec87
        public_6f1eca7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f1ec00)
    }
}

#undef public_6f1ec30
#undef public_6f1ec57
#undef public_6f1ec83
#undef public_6f1ec87
#undef public_6f1eca7
