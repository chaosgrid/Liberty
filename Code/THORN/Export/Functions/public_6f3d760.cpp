#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d760);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e620);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3d790 _public_6f3d790
#define public_6f3d7af _public_6f3d7af
#define public_6f3d7db _public_6f3d7db
#define public_6f3d7e0 _public_6f3d7e0
#define public_6f3d800 _public_6f3d800

PROC_DECLARE(0x6f3d760, internal_6f3d760, public_6f3d760);
extern "C" NAKED register_t __cdecl internal_6f3d760()
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
        je public_6f3d7db
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f3d7db
        cmp ebx, eax
        jne public_6f3d7db
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3d7af
        lea esp, ss:[esp]
        public_6f3d790 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f3e9f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3d790
        public_6f3d7af : nop
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
        public_6f3d7db : nop
        cmp ecx, ebx
        je public_6f3d800
        nop 
        public_6f3d7e0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f3f3f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f3e620
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f3d7e0
        public_6f3d800 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3d760)
    }
}

#undef public_6f3d790
#undef public_6f3d7af
#undef public_6f3d7db
#undef public_6f3d7e0
#undef public_6f3d800
