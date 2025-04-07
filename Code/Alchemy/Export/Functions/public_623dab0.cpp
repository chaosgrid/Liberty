#include "Alchemy-PCH.h"


#define public_623dac3 _public_623dac3
#define public_623dac5 _public_623dac5
#define public_623dae9 _public_623dae9
#define public_623daed _public_623daed
#define public_623daf2 _public_623daf2
#define public_623db02 _public_623db02
#define public_623db18 _public_623db18
#define public_623db44 _public_623db44

PROC_DECLARE(0x623dab0, internal_623dab0, public_623dab0);
extern "C" NAKED register_t __cdecl internal_623dab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f758]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623db02
        mov ebp, dword ptr ss : [esp+0x18]
        public_623dac3 : nop
        mov esi, ebp
        public_623dac5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623daed
        test cl, cl
        je public_623dae9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623daed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623dac5
        public_623dae9 : nop
        xor eax, eax
        jmp public_623daf2
        public_623daed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623daf2 : nop
        test eax, eax
        je public_623db18
        mov eax, dword ptr ds : [edi*8+public_624f760]
        inc edi
        test eax, eax
        jne public_623dac3
        public_623db02 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623db18 : nop
        mov eax, dword ptr ds : [edi*8+public_624f75c]
        test eax, eax
        jns public_623db44
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
        public_623db44 : nop
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
        UNREACHABLE_TRAP(0x623dab0)
    }
}

#undef public_623dac3
#undef public_623dac5
#undef public_623dae9
#undef public_623daed
#undef public_623daf2
#undef public_623db02
#undef public_623db18
#undef public_623db44
