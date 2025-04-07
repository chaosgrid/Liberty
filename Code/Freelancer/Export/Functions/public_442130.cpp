#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4420a0);
CLANG_FORWARD_PROC_SYMBOL(public_442130);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_442157 _public_442157
#define public_44216a _public_44216a
#define public_442183 _public_442183
#define public_442198 _public_442198

PROC_DECLARE(0x442130, internal_442130, public_442130);
extern "C" NAKED register_t __cdecl internal_442130()
{
    __asm
    {
        push ebx
/*FIXUP push offset public_5cb548 @0x442131*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_442198
        push edi
        mov edi, dword ptr ds : [ebx+0x3E8]
        test edi, edi
        je public_442183
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_44216a
        push esi
        public_442157 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_442157
        pop esi
        public_44216a : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+0x3E8], 0
        public_442183 : nop
        call public_4420a0
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        pop edi
        public_442198 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x442130)
    }
}

#undef public_442157
#undef public_44216a
#undef public_442183
#undef public_442198
