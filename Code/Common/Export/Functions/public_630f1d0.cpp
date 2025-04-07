#include "Common-PCH.h"


#define public_630f1f0 _public_630f1f0
#define public_630f1fa _public_630f1fa
#define public_630f210 _public_630f210
#define public_630f21e _public_630f21e
#define public_630f221 _public_630f221

PROC_DECLARE(0x630f1d0, internal_630f1d0, public_630f1d0);
extern "C" NAKED register_t __cdecl internal_630f1d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+0x400]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x404]
        xor eax, eax
        sub ebp, edi
        je public_630f1fa
        mov dl, byte ptr ss : [esp+0x18]
        lea esi, ds:[edi+ecx]
        lea ecx, ds:[ecx]
        public_630f1f0 : nop
        cmp byte ptr ds : [esi], dl
        je public_630f1fa
        inc eax
        inc esi
        cmp eax, ebp
        jb public_630f1f0
        public_630f1fa : nop
        lea esi, ds:[edi+ecx]
        add edi, eax
        test eax, eax
        mov dword ptr ds : [ecx+0x404], edi
        jbe public_630f221
        lea esp, ss:[esp]
        public_630f210 : nop
        mov cl, byte ptr ds : [esi+eax-1]
        cmp cl, 0x20
        je public_630f21e
        cmp cl, 9
        jne public_630f221
        public_630f21e : nop
        dec eax
        jne public_630f210
        public_630f221 : nop
        mov edx, dword ptr ss : [esp+0x14]
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
        pop ebp
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630f1d0)
    }
}

#undef public_630f1f0
#undef public_630f1fa
#undef public_630f210
#undef public_630f21e
#undef public_630f221
