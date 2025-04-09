#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5b3653 _public_5b3653
#define public_5b3692 _public_5b3692

PROC_DECLARE(0x5b3640, internal_5b3640, public_5b3640);
extern "C" NAKED register_t __cdecl internal_5b3640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67ed04]
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ds : [eax]
        xor ebp, ebp
        cmp edi, eax
        mov ebx, eax
        je public_5b3692
        push esi
        public_5b3653 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_5b7e1d
        push esi
        mov dword ptr ds : [esi+8], ebp
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67ed08]
        add esp, 8
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_67ed08], ecx
        jne public_5b3653
        mov eax, dword ptr ds : [public_67ed04]
        pop esi
        public_5b3692 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        mov dword ptr ds : [public_67ed04], ebp
        mov dword ptr ds : [public_67ed08], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5b3640)
    }
}

#undef public_5b3653
#undef public_5b3692
