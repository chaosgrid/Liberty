#include "Alchemy-PCH.h"


#define public_62262c3 _public_62262c3
#define public_62262c5 _public_62262c5
#define public_62262e9 _public_62262e9
#define public_62262ed _public_62262ed
#define public_62262f2 _public_62262f2
#define public_6226302 _public_6226302
#define public_6226318 _public_6226318
#define public_6226344 _public_6226344

PROC_DECLARE(0x62262b0, internal_62262b0, public_62262b0);
extern "C" NAKED register_t __cdecl internal_62262b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624dd0c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6226302
        mov ebp, dword ptr ss : [esp+0x18]
        public_62262c3 : nop
        mov esi, ebp
        public_62262c5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62262ed
        test cl, cl
        je public_62262e9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62262ed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62262c5
        public_62262e9 : nop
        xor eax, eax
        jmp public_62262f2
        public_62262ed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62262f2 : nop
        test eax, eax
        je public_6226318
        mov eax, dword ptr ds : [edi*8+public_624dd14]
        inc edi
        test eax, eax
        jne public_62262c3
        public_6226302 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6226318 : nop
        mov eax, dword ptr ds : [edi*8+public_624dd10]
        test eax, eax
        jns public_6226344
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
        public_6226344 : nop
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
        UNREACHABLE_TRAP(0x62262b0)
    }
}

#undef public_62262c3
#undef public_62262c5
#undef public_62262e9
#undef public_62262ed
#undef public_62262f2
#undef public_6226302
#undef public_6226318
#undef public_6226344
