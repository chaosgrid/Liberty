#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44240);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b44265 _public_6b44265
#define public_6b4428b _public_6b4428b

PROC_DECLARE(0x6b44240, internal_6b44240, public_6b44240);
extern "C" NAKED register_t __cdecl internal_6b44240()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov ebp, ecx
        jbe public_6b4428b
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6b4428b
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_6b44265
        push eax
        call public_6b6a092
        add esp, 4
        public_6b44265 : nop
        push ebx
        lea ebx, ds:[edi+1]
        push ebx
        call public_6b6a134
        mov dword ptr ss : [ebp+0x38], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x24], ebx
        pop ebx
        public_6b4428b : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6b44240)
    }
}

#undef public_6b44265
#undef public_6b4428b
