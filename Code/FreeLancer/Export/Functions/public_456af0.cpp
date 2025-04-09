#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_456af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_456b00 _public_456b00
#define public_456b30 _public_456b30

PROC_DECLARE(0x456af0, internal_456af0, public_456af0);
extern "C" NAKED register_t __cdecl internal_456af0()
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
        je public_456b30
        push esi
        public_456b00 : nop
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
        jne public_456b00
        pop esi
        public_456b30 : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x456af0)
    }
}

#undef public_456b00
#undef public_456b30
