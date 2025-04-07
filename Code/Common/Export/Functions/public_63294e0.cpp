#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6329506 _public_6329506
#define public_6329533 _public_6329533
#define public_6329561 _public_6329561
#define public_632957f _public_632957f
#define public_63295a1 _public_63295a1

PROC_DECLARE(0x63294e0, internal_63294e0, public_63294e0);
extern "C" NAKED register_t __cdecl internal_63294e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        sub eax, 0
        push ebx
        push esi
        push edi
        je public_6329561
        dec eax
        je public_6329533
        dec eax
        jne public_63295a1
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_63295a1
        public_6329506 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x18], ecx
        jne public_6329506
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6329533 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        dec eax
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebx
        ret 8
        public_6329561 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_632957f
        mov ebx, eax
        public_632957f : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[edi+0x1C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_630cd00
        mov eax, dword ptr ds : [edi+0x18]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0x18], eax
        public_63295a1 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63294e0)
    }
}

#undef public_6329506
#undef public_6329533
#undef public_6329561
#undef public_632957f
#undef public_63295a1
