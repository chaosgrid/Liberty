#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f36050);
CLANG_FORWARD_PROC_SYMBOL(public_6f36420);
CLANG_FORWARD_PROC_SYMBOL(public_6f37280);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f35d00 _public_6f35d00
#define public_6f35d1f _public_6f35d1f
#define public_6f35d4b _public_6f35d4b
#define public_6f35d50 _public_6f35d50
#define public_6f35d70 _public_6f35d70

PROC_DECLARE(0x6f35cd0, internal_6f35cd0, public_6f35cd0);
extern "C" NAKED register_t __cdecl internal_6f35cd0()
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
        je public_6f35d4b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f35d4b
        cmp ebx, eax
        jne public_6f35d4b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f35d1f
        lea esp, ss:[esp]
        public_6f35d00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f36420
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f35d00
        public_6f35d1f : nop
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
        public_6f35d4b : nop
        cmp ecx, ebx
        je public_6f35d70
        nop 
        public_6f35d50 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f37280
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f36050
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f35d50
        public_6f35d70 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f35cd0)
    }
}

#undef public_6f35d00
#undef public_6f35d1f
#undef public_6f35d4b
#undef public_6f35d50
#undef public_6f35d70
