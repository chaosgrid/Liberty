#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a980);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ae90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f4a9b0 _public_6f4a9b0
#define public_6f4a9d7 _public_6f4a9d7
#define public_6f4aa03 _public_6f4aa03
#define public_6f4aa07 _public_6f4aa07
#define public_6f4aa27 _public_6f4aa27

PROC_DECLARE(0x6f4a980, internal_6f4a980, public_6f4a980);
extern "C" NAKED register_t __cdecl internal_6f4a980()
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
        je public_6f4aa03
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f4aa03
        cmp ebx, eax
        jne public_6f4aa03
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f4a9d7
        lea esp, ss:[esp]
        public_6f4a9b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f4ae90
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f39230
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f4a9b0
        public_6f4a9d7 : nop
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
        public_6f4aa03 : nop
        cmp ecx, ebx
        je public_6f4aa27
        public_6f4aa07 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f3c570
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f4aab0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f4aa07
        public_6f4aa27 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f4a980)
    }
}

#undef public_6f4a9b0
#undef public_6f4a9d7
#undef public_6f4aa03
#undef public_6f4aa07
#undef public_6f4aa27
