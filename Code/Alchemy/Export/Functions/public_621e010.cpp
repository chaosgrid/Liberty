#include "Alchemy-PCH.h"


#define public_621e023 _public_621e023
#define public_621e025 _public_621e025
#define public_621e049 _public_621e049
#define public_621e04d _public_621e04d
#define public_621e052 _public_621e052
#define public_621e062 _public_621e062
#define public_621e078 _public_621e078
#define public_621e0a4 _public_621e0a4

PROC_DECLARE(0x621e010, internal_621e010, public_621e010);
extern "C" NAKED register_t __cdecl internal_621e010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d794]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621e062
        mov ebp, dword ptr ss : [esp+0x18]
        public_621e023 : nop
        mov esi, ebp
        public_621e025 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621e04d
        test cl, cl
        je public_621e049
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621e04d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621e025
        public_621e049 : nop
        xor eax, eax
        jmp public_621e052
        public_621e04d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621e052 : nop
        test eax, eax
        je public_621e078
        mov eax, dword ptr ds : [edi*8+public_624d79c]
        inc edi
        test eax, eax
        jne public_621e023
        public_621e062 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621e078 : nop
        mov eax, dword ptr ds : [edi*8+public_624d798]
        test eax, eax
        jns public_621e0a4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_621e0a4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621e010)
    }
}

#undef public_621e023
#undef public_621e025
#undef public_621e049
#undef public_621e04d
#undef public_621e052
#undef public_621e062
#undef public_621e078
#undef public_621e0a4
