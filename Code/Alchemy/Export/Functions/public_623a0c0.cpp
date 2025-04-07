#include "Alchemy-PCH.h"


#define public_623a0d3 _public_623a0d3
#define public_623a0d5 _public_623a0d5
#define public_623a0f9 _public_623a0f9
#define public_623a0fd _public_623a0fd
#define public_623a102 _public_623a102
#define public_623a112 _public_623a112
#define public_623a128 _public_623a128
#define public_623a154 _public_623a154

PROC_DECLARE(0x623a0c0, internal_623a0c0, public_623a0c0);
extern "C" NAKED register_t __cdecl internal_623a0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f1a8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623a112
        mov ebp, dword ptr ss : [esp+0x18]
        public_623a0d3 : nop
        mov esi, ebp
        public_623a0d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623a0fd
        test cl, cl
        je public_623a0f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623a0fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623a0d5
        public_623a0f9 : nop
        xor eax, eax
        jmp public_623a102
        public_623a0fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623a102 : nop
        test eax, eax
        je public_623a128
        mov eax, dword ptr ds : [edi*8+public_624f1b0]
        inc edi
        test eax, eax
        jne public_623a0d3
        public_623a112 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623a128 : nop
        mov eax, dword ptr ds : [edi*8+public_624f1ac]
        test eax, eax
        jns public_623a154
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
        public_623a154 : nop
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
        UNREACHABLE_TRAP(0x623a0c0)
    }
}

#undef public_623a0d3
#undef public_623a0d5
#undef public_623a0f9
#undef public_623a0fd
#undef public_623a102
#undef public_623a112
#undef public_623a128
#undef public_623a154
