#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226600);

#define public_6226616 _public_6226616
#define public_6226628 _public_6226628
#define public_6226636 _public_6226636
#define public_6226643 _public_6226643
#define public_622664d _public_622664d
#define public_622665f _public_622665f
#define public_622667a _public_622667a

PROC_DECLARE(0x6226600, internal_6226600, public_6226600);
extern "C" NAKED register_t __cdecl internal_6226600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ebx, dword ptr ss : [ebp+8]
        lea edi, ds:[eax+4]
        cmp edi, ebx
        mov esi, eax
        je public_6226643
        public_6226616 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6226628
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6226628 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6226636
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6226636 : nop
        mov esi, edi
        lea edi, ds:[esi+4]
        cmp edi, ebx
        jne public_6226616
        mov eax, dword ptr ss : [esp+0x14]
        public_6226643 : nop
        mov edi, dword ptr ss : [ebp+8]
        lea esi, ds:[edi-4]
        cmp esi, edi
        je public_622667a
        public_622664d : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_622665f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_622665f : nop
        add esi, 4
        cmp esi, edi
        jne public_622664d
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        add eax, 0xFFFFFFFC
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 4
        public_622667a : nop
        mov ecx, dword ptr ss : [ebp+8]
        pop edi
        add ecx, 0xFFFFFFFC
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6226600)
    }
}

#undef public_6226616
#undef public_6226628
#undef public_6226636
#undef public_6226643
#undef public_622664d
#undef public_622665f
#undef public_622667a
