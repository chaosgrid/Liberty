#include "Alchemy-PCH.h"


#define public_6223bc3 _public_6223bc3
#define public_6223bc5 _public_6223bc5
#define public_6223be9 _public_6223be9
#define public_6223bed _public_6223bed
#define public_6223bf2 _public_6223bf2
#define public_6223c02 _public_6223c02
#define public_6223c18 _public_6223c18
#define public_6223c44 _public_6223c44

PROC_DECLARE(0x6223bb0, internal_6223bb0, public_6223bb0);
extern "C" NAKED register_t __cdecl internal_6223bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624dcd8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6223c02
        mov ebp, dword ptr ss : [esp+0x18]
        public_6223bc3 : nop
        mov esi, ebp
        public_6223bc5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6223bed
        test cl, cl
        je public_6223be9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6223bed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6223bc5
        public_6223be9 : nop
        xor eax, eax
        jmp public_6223bf2
        public_6223bed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6223bf2 : nop
        test eax, eax
        je public_6223c18
        mov eax, dword ptr ds : [edi*8+public_624dce0]
        inc edi
        test eax, eax
        jne public_6223bc3
        public_6223c02 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6223c18 : nop
        mov eax, dword ptr ds : [edi*8+public_624dcdc]
        test eax, eax
        jns public_6223c44
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
        public_6223c44 : nop
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
        UNREACHABLE_TRAP(0x6223bb0)
    }
}

#undef public_6223bc3
#undef public_6223bc5
#undef public_6223be9
#undef public_6223bed
#undef public_6223bf2
#undef public_6223c02
#undef public_6223c18
#undef public_6223c44
