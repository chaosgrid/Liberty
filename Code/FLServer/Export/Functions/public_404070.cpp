#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404070);
CLANG_FORWARD_PROC_SYMBOL(public_404b80);
CLANG_FORWARD_PROC_SYMBOL(public_404fe0);
CLANG_FORWARD_PROC_SYMBOL(public_405800);
CLANG_FORWARD_PROC_SYMBOL(public_405d00);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4040a0 _public_4040a0
#define public_4040c7 _public_4040c7
#define public_4040f3 _public_4040f3
#define public_4040f7 _public_4040f7
#define public_404117 _public_404117

PROC_DECLARE(0x404070, internal_404070, public_404070);
extern "C" NAKED register_t __cdecl internal_404070()
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
        je public_4040f3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4040f3
        cmp ebx, eax
        jne public_4040f3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4040c7
        lea esp, ss:[esp]
        public_4040a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_404fe0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_405d00
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4040a0
        public_4040c7 : nop
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
        public_4040f3 : nop
        cmp ecx, ebx
        je public_404117
        public_4040f7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_405800
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_404b80
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4040f7
        public_404117 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x404070)
    }
}

#undef public_4040a0
#undef public_4040c7
#undef public_4040f3
#undef public_4040f7
#undef public_404117
