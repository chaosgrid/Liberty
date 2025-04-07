#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b766f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76b00);
CLANG_FORWARD_PROC_SYMBOL(public_6b76c40);
CLANG_FORWARD_PROC_SYMBOL(public_6b76fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b76b2b _public_6b76b2b
#define public_6b76b52 _public_6b76b52
#define public_6b76b7e _public_6b76b7e
#define public_6b76b82 _public_6b76b82
#define public_6b76ba2 _public_6b76ba2

PROC_DECLARE(0x6b76b00, internal_6b76b00, public_6b76b00);
extern "C" NAKED register_t __cdecl internal_6b76b00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6b76b7e
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6b76b7e
        cmp ebx, eax
        jne public_6b76b7e
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6b76b52
        public_6b76b2b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6b76c40
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x14]
        call public_6b72dd0
        push ebx
        call public_6b782a0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6b76b2b
        public_6b76b52 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 0xC
        public_6b76b7e : nop
        cmp ecx, ebx
        je public_6b76ba2
        public_6b76b82 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6b76fd0
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_6b766f0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6b76b82
        public_6b76ba2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b76b00)
    }
}

#undef public_6b76b2b
#undef public_6b76b52
#undef public_6b76b7e
#undef public_6b76b82
#undef public_6b76ba2
