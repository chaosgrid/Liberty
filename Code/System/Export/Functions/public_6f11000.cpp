#include "System-PCH.h"


#define public_6f11013 _public_6f11013
#define public_6f11015 _public_6f11015
#define public_6f11039 _public_6f11039
#define public_6f1103d _public_6f1103d
#define public_6f11042 _public_6f11042
#define public_6f11052 _public_6f11052
#define public_6f1105e _public_6f1105e
#define public_6f1108d _public_6f1108d
#define public_6f110a8 _public_6f110a8
#define public_6f110b6 _public_6f110b6
#define public_6f110ca _public_6f110ca
#define public_6f110cf _public_6f110cf

PROC_DECLARE(0x6f11000, internal_6f11000, public_6f11000);
extern "C" NAKED register_t __cdecl internal_6f11000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f1205c]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f11052
        public_6f11013 : nop
        mov esi, ebp
        public_6f11015 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f1103d
        test cl, cl
        je public_6f11039
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f1103d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f11015
        public_6f11039 : nop
        xor eax, eax
        jmp public_6f11042
        public_6f1103d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f11042 : nop
        test eax, eax
        je public_6f1105e
        mov eax, dword ptr ds : [edi*8+public_6f12064]
        inc edi
        test eax, eax
        jne public_6f11013
        public_6f11052 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], 0
        jmp public_6f110a8
        public_6f1105e : nop
        mov eax, dword ptr ds : [edi*8+public_6f12060]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6f1108d
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f1108d : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f110a8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx+8]
        test esi, esi
        je public_6f110ca
        public_6f110b6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebp
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        je public_6f110cf
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f110b6
        public_6f110ca : nop
        mov eax, 0xFFFFFFFD
        public_6f110cf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f11000)
    }
}

#undef public_6f11013
#undef public_6f11015
#undef public_6f11039
#undef public_6f1103d
#undef public_6f11042
#undef public_6f11052
#undef public_6f1105e
#undef public_6f1108d
#undef public_6f110a8
#undef public_6f110b6
#undef public_6f110ca
#undef public_6f110cf
