#include "Alchemy-PCH.h"


#define public_623a1e3 _public_623a1e3
#define public_623a1e5 _public_623a1e5
#define public_623a209 _public_623a209
#define public_623a20d _public_623a20d
#define public_623a212 _public_623a212
#define public_623a222 _public_623a222
#define public_623a238 _public_623a238
#define public_623a264 _public_623a264

PROC_DECLARE(0x623a1d0, internal_623a1d0, public_623a1d0);
extern "C" NAKED register_t __cdecl internal_623a1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ee64]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623a222
        mov ebp, dword ptr ss : [esp+0x18]
        public_623a1e3 : nop
        mov esi, ebp
        public_623a1e5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623a20d
        test cl, cl
        je public_623a209
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623a20d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623a1e5
        public_623a209 : nop
        xor eax, eax
        jmp public_623a212
        public_623a20d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623a212 : nop
        test eax, eax
        je public_623a238
        mov eax, dword ptr ds : [edi*8+public_624ee6c]
        inc edi
        test eax, eax
        jne public_623a1e3
        public_623a222 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623a238 : nop
        mov eax, dword ptr ds : [edi*8+public_624ee68]
        test eax, eax
        jns public_623a264
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
        public_623a264 : nop
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
        UNREACHABLE_TRAP(0x623a1d0)
    }
}

#undef public_623a1e3
#undef public_623a1e5
#undef public_623a209
#undef public_623a20d
#undef public_623a212
#undef public_623a222
#undef public_623a238
#undef public_623a264
