#include "Common-PCH.h"


#define public_627b261 _public_627b261
#define public_627b290 _public_627b290
#define public_627b2a3 _public_627b2a3

PROC_DECLARE(0x627b250, internal_627b250, public_627b250);
extern "C" NAKED register_t __cdecl internal_627b250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea esi, ss:[ebp+0x10]
        mov edx, esi
        push edi
        sub edx, eax
        public_627b261 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_627b261
        xor eax, eax
        mov edi, esi
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        test ebx, ebx
        jle public_627b2a3
        mov edi, 0xFFFFFFF0
        sub edi, ebp
        mov ebp, dword ptr ds : [public_63992fc]
        lea esp, ss:[esp]
        public_627b290 : nop
        movsx eax, byte ptr ds : [esi]
        push eax
        call ebp
        add esp, 4
        mov byte ptr ds : [esi], al
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, ebx
        jl public_627b290
        public_627b2a3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627b250)
    }
}

#undef public_627b261
#undef public_627b290
#undef public_627b2a3
