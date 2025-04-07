#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

#define public_4500e3 _public_4500e3
#define public_4500e5 _public_4500e5
#define public_450109 _public_450109
#define public_45010d _public_45010d
#define public_450112 _public_450112
#define public_450122 _public_450122
#define public_450138 _public_450138
#define public_450164 _public_450164

PROC_DECLARE(0x4500d0, internal_4500d0, public_4500d0);
extern "C" NAKED register_t __cdecl internal_4500d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cca20]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_450122
        mov ebp, dword ptr ss : [esp+0x18]
        public_4500e3 : nop
        mov esi, ebp
        public_4500e5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_45010d
        test cl, cl
        je public_450109
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_45010d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_4500e5
        public_450109 : nop
        xor eax, eax
        jmp public_450112
        public_45010d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_450112 : nop
        test eax, eax
        je public_450138
        mov eax, dword ptr ds : [edi*8+public_5cca28]
        inc edi
        test eax, eax
        jne public_4500e3
        public_450122 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_450138 : nop
        mov eax, dword ptr ds : [edi*8+public_5cca24]
        test eax, eax
        jns public_450164
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_450164 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4500d0)
    }
}

#undef public_4500e3
#undef public_4500e5
#undef public_450109
#undef public_45010d
#undef public_450112
#undef public_450122
#undef public_450138
#undef public_450164
