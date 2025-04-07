#include "Alchemy-PCH.h"


#define public_6211343 _public_6211343
#define public_6211345 _public_6211345
#define public_6211369 _public_6211369
#define public_621136d _public_621136d
#define public_6211372 _public_6211372
#define public_6211382 _public_6211382
#define public_6211398 _public_6211398
#define public_62113c4 _public_62113c4

PROC_DECLARE(0x6211330, internal_6211330, public_6211330);
extern "C" NAKED register_t __cdecl internal_6211330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624c018]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6211382
        mov ebp, dword ptr ss : [esp+0x18]
        public_6211343 : nop
        mov esi, ebp
        public_6211345 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621136d
        test cl, cl
        je public_6211369
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621136d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6211345
        public_6211369 : nop
        xor eax, eax
        jmp public_6211372
        public_621136d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6211372 : nop
        test eax, eax
        je public_6211398
        mov eax, dword ptr ds : [edi*8+public_624c020]
        inc edi
        test eax, eax
        jne public_6211343
        public_6211382 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6211398 : nop
        mov eax, dword ptr ds : [edi*8+public_624c01c]
        test eax, eax
        jns public_62113c4
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
        public_62113c4 : nop
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
        UNREACHABLE_TRAP(0x6211330)
    }
}

#undef public_6211343
#undef public_6211345
#undef public_6211369
#undef public_621136d
#undef public_6211372
#undef public_6211382
#undef public_6211398
#undef public_62113c4
