#include "Common-PCH.h"


#define public_630f190 _public_630f190
#define public_630f19c _public_630f19c
#define public_630f1a2 _public_630f1a2

PROC_DECLARE(0x630f170, internal_630f170, public_630f170);
extern "C" NAKED register_t __cdecl internal_630f170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x404]
        sub eax, edi
        test eax, eax
        jle public_630f1a2
        lea ecx, ds:[edi+eax]
        lea edx, ds:[ecx+esi-1]
        lea esp, ss:[esp]
        public_630f190 : nop
        mov cl, byte ptr ds : [edx]
        cmp cl, 0x20
        je public_630f19c
        cmp cl, 9
        jne public_630f1a2
        public_630f19c : nop
        dec eax
        dec edx
        test eax, eax
        jg public_630f190
        public_630f1a2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        add esi, edi
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630f170)
    }
}

#undef public_630f190
#undef public_630f19c
#undef public_630f1a2
