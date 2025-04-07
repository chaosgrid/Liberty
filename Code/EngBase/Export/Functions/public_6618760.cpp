#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617320);
CLANG_FORWARD_PROC_SYMBOL(public_66181e0);
CLANG_FORWARD_PROC_SYMBOL(public_6618760);
CLANG_FORWARD_PROC_SYMBOL(public_6619ab0);
CLANG_FORWARD_PROC_SYMBOL(public_661a190);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661878b _public_661878b
#define public_66187b2 _public_66187b2
#define public_66187de _public_66187de
#define public_66187e2 _public_66187e2
#define public_6618802 _public_6618802

PROC_DECLARE(0x6618760, internal_6618760, public_6618760);
extern "C" NAKED register_t __cdecl internal_6618760()
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
        je public_66187de
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_66187de
        cmp ebx, eax
        jne public_66187de
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_66187b2
        public_661878b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6619ab0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x10]
        call public_6617320
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_661878b
        public_66187b2 : nop
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
        public_66187de : nop
        cmp ecx, ebx
        je public_6618802
        public_66187e2 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_661a190
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_66181e0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_66187e2
        public_6618802 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6618760)
    }
}

#undef public_661878b
#undef public_66187b2
#undef public_66187de
#undef public_66187e2
#undef public_6618802
