#include "Content-PCH.h"


#define public_6f860c8 _public_6f860c8
#define public_6f860dd _public_6f860dd
#define public_6f860f3 _public_6f860f3

PROC_DECLARE(0x6f860a0, internal_6f860a0, public_6f860a0);
extern "C" NAKED register_t __cdecl internal_6f860a0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6f860f3
        mov eax, dword ptr ds : [edi+0x1C]
        push ebp
        push esi
        lea ebp, ds:[edi+4]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov esi, dword ptr ds : [edi+0x24]
        cmp esi, dword ptr ds : [edi+0x28]
        je public_6f860dd
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f860c8 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x28]
        add esi, 4
        cmp esi, eax
        jne public_6f860c8
        pop ebx
        public_6f860dd : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        lea ecx, ds:[edi+0x48]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3174]
        pop esi
        pop ebp
        public_6f860f3 : nop
        lea eax, ds:[edi+4]
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f860a0)
    }
}

#undef public_6f860c8
#undef public_6f860dd
#undef public_6f860f3
