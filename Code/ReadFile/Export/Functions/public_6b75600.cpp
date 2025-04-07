#include "ReadFile-PCH.h"


#define public_6b75637 _public_6b75637
#define public_6b75641 _public_6b75641
#define public_6b75669 _public_6b75669
#define public_6b75687 _public_6b75687
#define public_6b7568b _public_6b7568b
#define public_6b75697 _public_6b75697
#define public_6b7569f _public_6b7569f

PROC_DECLARE(0x6b75600, internal_6b75600, public_6b75600);
extern "C" NAKED register_t __cdecl internal_6b75600()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x128]
        test eax, eax
        jne public_6b7569f
        mov eax, dword ptr ds : [ebx+0x12C]
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        lea esi, ds:[eax+ebx+0xD]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 2
        ja public_6b75637
        mov eax, 2
        public_6b75637 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_6b75641
        mov eax, ecx
        public_6b75641 : nop
        test eax, eax
        jbe public_6b75687
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        push ebp
        mov ebp, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        pop ebp
        and ecx, 3
        rep movsb
        lea esi, ds:[eax-1]
        mov byte ptr ds : [eax+edx-1], 0
        test esi, esi
        jne public_6b75697
        public_6b75669 : nop
        mov eax, dword ptr ds : [ebx+0x120]
        test eax, eax
        je public_6b7568b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [ebx+0x11C], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6b75687 : nop
        xor esi, esi
        jmp public_6b75669
        public_6b7568b : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [ebx+0x11C], eax
        public_6b75697 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6b7569f : nop
        mov dword ptr ds : [ebx+0x11C], 5
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b75600)
    }
}

#undef public_6b75637
#undef public_6b75641
#undef public_6b75669
#undef public_6b75687
#undef public_6b7568b
#undef public_6b75697
#undef public_6b7569f
