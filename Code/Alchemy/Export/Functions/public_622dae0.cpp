#include "Alchemy-PCH.h"


#define public_622daf3 _public_622daf3
#define public_622daf5 _public_622daf5
#define public_622db19 _public_622db19
#define public_622db1d _public_622db1d
#define public_622db22 _public_622db22
#define public_622db32 _public_622db32
#define public_622db48 _public_622db48
#define public_622db74 _public_622db74

PROC_DECLARE(0x622dae0, internal_622dae0, public_622dae0);
extern "C" NAKED register_t __cdecl internal_622dae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624e480]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_622db32
        mov ebp, dword ptr ss : [esp+0x18]
        public_622daf3 : nop
        mov esi, ebp
        public_622daf5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_622db1d
        test cl, cl
        je public_622db19
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_622db1d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_622daf5
        public_622db19 : nop
        xor eax, eax
        jmp public_622db22
        public_622db1d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622db22 : nop
        test eax, eax
        je public_622db48
        mov eax, dword ptr ds : [edi*8+public_624e488]
        inc edi
        test eax, eax
        jne public_622daf3
        public_622db32 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_622db48 : nop
        mov eax, dword ptr ds : [edi*8+public_624e484]
        test eax, eax
        jns public_622db74
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
        public_622db74 : nop
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
        UNREACHABLE_TRAP(0x622dae0)
    }
}

#undef public_622daf3
#undef public_622daf5
#undef public_622db19
#undef public_622db1d
#undef public_622db22
#undef public_622db32
#undef public_622db48
#undef public_622db74
