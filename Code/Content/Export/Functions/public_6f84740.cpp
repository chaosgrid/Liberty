#include "Content-PCH.h"


#define public_6f84768 _public_6f84768
#define public_6f8477d _public_6f8477d
#define public_6f84787 _public_6f84787

PROC_DECLARE(0x6f84740, internal_6f84740, public_6f84740);
extern "C" NAKED register_t __cdecl internal_6f84740()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6f84787
        mov eax, dword ptr ds : [edi+0x1C]
        push ebp
        push esi
        lea ebp, ds:[edi+4]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov esi, dword ptr ds : [edi+0x24]
        cmp esi, dword ptr ds : [edi+0x28]
        je public_6f8477d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f84768 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x28]
        add esi, 4
        cmp esi, eax
        jne public_6f84768
        pop ebx
        public_6f8477d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        pop esi
        pop ebp
        public_6f84787 : nop
        lea eax, ds:[edi+4]
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f84740)
    }
}

#undef public_6f84768
#undef public_6f8477d
#undef public_6f84787
