#include "Alchemy-PCH.h"


#define public_6237193 _public_6237193
#define public_6237195 _public_6237195
#define public_62371b9 _public_62371b9
#define public_62371bd _public_62371bd
#define public_62371c2 _public_62371c2
#define public_62371d2 _public_62371d2
#define public_62371e8 _public_62371e8
#define public_6237214 _public_6237214

PROC_DECLARE(0x6237180, internal_6237180, public_6237180);
extern "C" NAKED register_t __cdecl internal_6237180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ee1c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62371d2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6237193 : nop
        mov esi, ebp
        public_6237195 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62371bd
        test cl, cl
        je public_62371b9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62371bd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6237195
        public_62371b9 : nop
        xor eax, eax
        jmp public_62371c2
        public_62371bd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62371c2 : nop
        test eax, eax
        je public_62371e8
        mov eax, dword ptr ds : [edi*8+public_624ee24]
        inc edi
        test eax, eax
        jne public_6237193
        public_62371d2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62371e8 : nop
        mov eax, dword ptr ds : [edi*8+public_624ee20]
        test eax, eax
        jns public_6237214
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
        public_6237214 : nop
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
        UNREACHABLE_TRAP(0x6237180)
    }
}

#undef public_6237193
#undef public_6237195
#undef public_62371b9
#undef public_62371bd
#undef public_62371c2
#undef public_62371d2
#undef public_62371e8
#undef public_6237214
