#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f370);
CLANG_FORWARD_PROC_SYMBOL(public_6f41a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f41df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f465f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f3f3a0 _public_6f3f3a0
#define public_6f3f3bf _public_6f3f3bf
#define public_6f3f3eb _public_6f3f3eb
#define public_6f3f3f0 _public_6f3f3f0
#define public_6f3f410 _public_6f3f410

PROC_DECLARE(0x6f3f370, internal_6f3f370, public_6f3f370);
extern "C" NAKED register_t __cdecl internal_6f3f370()
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
        je public_6f3f3eb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f3f3eb
        cmp ebx, eax
        jne public_6f3f3eb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3f3bf
        lea esp, ss:[esp]
        public_6f3f3a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f41df0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3f3a0
        public_6f3f3bf : nop
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
        public_6f3f3eb : nop
        cmp ecx, ebx
        je public_6f3f410
        nop 
        public_6f3f3f0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f465f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f41a20
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f3f3f0
        public_6f3f410 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3f370)
    }
}

#undef public_6f3f3a0
#undef public_6f3f3bf
#undef public_6f3f3eb
#undef public_6f3f3f0
#undef public_6f3f410
