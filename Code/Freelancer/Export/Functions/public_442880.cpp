#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442880);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_442890 _public_442890
#define public_4428c0 _public_4428c0

PROC_DECLARE(0x442880, internal_442880, public_442880);
extern "C" NAKED register_t __cdecl internal_442880()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_4428c0
        push esi
        public_442890 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_455e90
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_442890
        pop esi
        public_4428c0 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x442880)
    }
}

#undef public_442890
#undef public_4428c0
