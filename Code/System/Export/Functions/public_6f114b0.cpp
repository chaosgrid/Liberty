#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11a0a);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a10);

#define public_6f114ca _public_6f114ca
#define public_6f11510 _public_6f11510
#define public_6f1153b _public_6f1153b
#define public_6f11548 _public_6f11548
#define public_6f11553 _public_6f11553
#define public_6f11556 _public_6f11556
#define public_6f11577 _public_6f11577
#define public_6f11593 _public_6f11593
#define public_6f115ad _public_6f115ad
#define public_6f115bf _public_6f115bf

PROC_DECLARE(0x6f114b0, internal_6f114b0, public_6f114b0);
extern "C" NAKED register_t __cdecl internal_6f114b0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        jne public_6f114ca
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        pop ecx
        ret 8
        public_6f114ca : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        push 0x14
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6f11a10
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f1153b
        mov ebp, dword ptr ss : [esp+0x18]
        lea ebx, ds:[esi+4]
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_6f11510
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx], 0
        public_6f11510 : nop
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [public_6f13194]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6f11548
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], ecx
        jmp public_6f115ad
        public_6f1153b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        pop ecx
        ret 8
        public_6f11548 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6f11553
        mov dword ptr ds : [eax], esi
        jmp public_6f11556
        public_6f11553 : nop
        mov dword ptr ss : [ebp+8], esi
        public_6f11556 : nop
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0xC]
        push ebp
/*FIXUP push offset public_6f13034 @0x6f11561*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13034
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6f11577
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        public_6f11577 : nop
        mov ebx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx]
        add esi, 0x10
        push esi
/*FIXUP push offset public_6f1304c @0x6f1157f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f1304c
        push ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6f11593
        mov esi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6f11593 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0xC], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6f115ad : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_6f115bf
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx], 0
        public_6f115bf : nop
        push esi
        call public_6f11a0a
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f114b0)
    }
}

#undef public_6f114ca
#undef public_6f11510
#undef public_6f1153b
#undef public_6f11548
#undef public_6f11553
#undef public_6f11556
#undef public_6f11577
#undef public_6f11593
#undef public_6f115ad
#undef public_6f115bf
