#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316470);
CLANG_FORWARD_PROC_SYMBOL(public_6316e60);
CLANG_FORWARD_PROC_SYMBOL(public_6317240);
CLANG_FORWARD_PROC_SYMBOL(public_6317300);
CLANG_FORWARD_PROC_SYMBOL(public_6318860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317270 _public_6317270
#define public_6317297 _public_6317297
#define public_63172c3 _public_63172c3
#define public_63172c7 _public_63172c7
#define public_63172e7 _public_63172e7

PROC_DECLARE(0x6317240, internal_6317240, public_6317240);
extern "C" NAKED register_t __cdecl internal_6317240()
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
        je public_63172c3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_63172c3
        cmp ebx, eax
        jne public_63172c3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6317297
        lea esp, ss:[esp]
        public_6317270 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318860
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6316470
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6317270
        public_6317297 : nop
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
        public_63172c3 : nop
        cmp ecx, ebx
        je public_63172e7
        public_63172c7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6317300
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6316e60
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_63172c7
        public_63172e7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6317240)
    }
}

#undef public_6317270
#undef public_6317297
#undef public_63172c3
#undef public_63172c7
#undef public_63172e7
