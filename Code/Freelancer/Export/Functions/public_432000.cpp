#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_432000);
CLANG_FORWARD_PROC_SYMBOL(public_4323b0);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_432030 _public_432030
#define public_43204f _public_43204f
#define public_43207b _public_43207b
#define public_432080 _public_432080
#define public_4320a0 _public_4320a0

PROC_DECLARE(0x432000, internal_432000, public_432000);
extern "C" NAKED register_t __cdecl internal_432000()
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
        je public_43207b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_43207b
        cmp ebx, eax
        jne public_43207b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_43204f
        lea esp, ss:[esp]
        public_432030 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4323b0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_432030
        public_43204f : nop
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
        public_43207b : nop
        cmp ecx, ebx
        je public_4320a0
        nop 
        public_432080 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_433a00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_41b640
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_432080
        public_4320a0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x432000)
    }
}

#undef public_432030
#undef public_43204f
#undef public_43207b
#undef public_432080
#undef public_4320a0
