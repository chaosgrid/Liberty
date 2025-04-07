#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa10e0 _public_6fa10e0
#define public_6fa1107 _public_6fa1107
#define public_6fa1133 _public_6fa1133
#define public_6fa1137 _public_6fa1137
#define public_6fa1157 _public_6fa1157

PROC_DECLARE(0x6fa10b0, internal_6fa10b0, public_6fa10b0);
extern "C" NAKED register_t __cdecl internal_6fa10b0()
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
        je public_6fa1133
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6fa1133
        cmp ebx, eax
        jne public_6fa1133
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6fa1107
        lea esp, ss:[esp]
        public_6fa10e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa38c0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f9f4a0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6fa10e0
        public_6fa1107 : nop
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
        public_6fa1133 : nop
        cmp ecx, ebx
        je public_6fa1157
        public_6fa1137 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6fa3b80
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6fa3470
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6fa1137
        public_6fa1157 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa10b0)
    }
}

#undef public_6fa10e0
#undef public_6fa1107
#undef public_6fa1133
#undef public_6fa1137
#undef public_6fa1157
