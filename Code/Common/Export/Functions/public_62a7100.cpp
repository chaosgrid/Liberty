#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a7100);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7960);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a7128 _public_62a7128
#define public_62a714f _public_62a714f
#define public_62a7171 _public_62a7171
#define public_62a7175 _public_62a7175
#define public_62a7195 _public_62a7195

PROC_DECLARE(0x62a7100, internal_62a7100, public_62a7100);
extern "C" NAKED register_t __cdecl internal_62a7100()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_62a7171
        mov ecx, eax
        cmp eax, ecx
        jne public_62a7171
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a714f
        public_62a7128 : nop
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
        jne public_62a7128
        public_62a714f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_62a7171 : nop
        cmp eax, edi
        je public_62a7195
        public_62a7175 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_62a72a0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_62a6c60
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_62a7175
        public_62a7195 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a7100)
    }
}

#undef public_62a7128
#undef public_62a714f
#undef public_62a7171
#undef public_62a7175
#undef public_62a7195
