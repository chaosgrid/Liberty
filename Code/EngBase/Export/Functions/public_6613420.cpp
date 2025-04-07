#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_6613420);
CLANG_FORWARD_PROC_SYMBOL(public_6613c00);
CLANG_FORWARD_PROC_SYMBOL(public_6613fe0);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661344b _public_661344b
#define public_6613472 _public_6613472
#define public_661349e _public_661349e
#define public_66134a2 _public_66134a2
#define public_66134c2 _public_66134c2

PROC_DECLARE(0x6613420, internal_6613420, public_6613420);
extern "C" NAKED register_t __cdecl internal_6613420()
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
        je public_661349e
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_661349e
        cmp ebx, eax
        jne public_661349e
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6613472
        public_661344b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6613fe0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x10]
        call public_66113c0
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_661344b
        public_6613472 : nop
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
        public_661349e : nop
        cmp ecx, ebx
        je public_66134c2
        public_66134a2 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_661a640
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_6613c00
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_66134a2
        public_66134c2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6613420)
    }
}

#undef public_661344b
#undef public_6613472
#undef public_661349e
#undef public_66134a2
#undef public_66134c2
