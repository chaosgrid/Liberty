#include "Alchemy-PCH.h"


#define public_623cc23 _public_623cc23
#define public_623cc25 _public_623cc25
#define public_623cc49 _public_623cc49
#define public_623cc4d _public_623cc4d
#define public_623cc52 _public_623cc52
#define public_623cc62 _public_623cc62
#define public_623cc78 _public_623cc78
#define public_623cca4 _public_623cca4

PROC_DECLARE(0x623cc10, internal_623cc10, public_623cc10);
extern "C" NAKED register_t __cdecl internal_623cc10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f4b0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623cc62
        mov ebp, dword ptr ss : [esp+0x18]
        public_623cc23 : nop
        mov esi, ebp
        public_623cc25 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623cc4d
        test cl, cl
        je public_623cc49
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623cc4d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623cc25
        public_623cc49 : nop
        xor eax, eax
        jmp public_623cc52
        public_623cc4d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623cc52 : nop
        test eax, eax
        je public_623cc78
        mov eax, dword ptr ds : [edi*8+public_624f4b8]
        inc edi
        test eax, eax
        jne public_623cc23
        public_623cc62 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623cc78 : nop
        mov eax, dword ptr ds : [edi*8+public_624f4b4]
        test eax, eax
        jns public_623cca4
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
        public_623cca4 : nop
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
        UNREACHABLE_TRAP(0x623cc10)
    }
}

#undef public_623cc23
#undef public_623cc25
#undef public_623cc49
#undef public_623cc4d
#undef public_623cc52
#undef public_623cc62
#undef public_623cc78
#undef public_623cca4
