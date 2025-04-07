#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ea90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f3f9d0 _public_6f3f9d0
#define public_6f3f9ef _public_6f3f9ef
#define public_6f3fa1b _public_6f3fa1b
#define public_6f3fa20 _public_6f3fa20
#define public_6f3fa40 _public_6f3fa40

PROC_DECLARE(0x6f3f9a0, internal_6f3f9a0, public_6f3f9a0);
extern "C" NAKED register_t __cdecl internal_6f3f9a0()
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
        je public_6f3fa1b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f3fa1b
        cmp ebx, eax
        jne public_6f3fa1b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3f9ef
        lea esp, ss:[esp]
        public_6f3f9d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f42d40
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3f9d0
        public_6f3f9ef : nop
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
        public_6f3fa1b : nop
        cmp ecx, ebx
        je public_6f3fa40
        nop 
        public_6f3fa20 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f46640
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f2ea90
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f3fa20
        public_6f3fa40 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3f9a0)
    }
}

#undef public_6f3f9d0
#undef public_6f3f9ef
#undef public_6f3fa1b
#undef public_6f3fa20
#undef public_6f3fa40
