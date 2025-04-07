#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd550);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bd562 _public_4bd562
#define public_4bd593 _public_4bd593

PROC_DECLARE(0x4bd550, internal_4bd550, public_4bd550);
extern "C" NAKED register_t __cdecl internal_4bd550()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_4bd593
        push esi
        public_4bd562 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call dword ptr ds : [public_5c6098]
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_4bd562
        pop esi
        public_4bd593 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4bd550)
    }
}

#undef public_4bd562
#undef public_4bd593
