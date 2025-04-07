#include "Shading-PCH.h"


#define public_6eb6543 _public_6eb6543
#define public_6eb6545 _public_6eb6545
#define public_6eb6569 _public_6eb6569
#define public_6eb656d _public_6eb656d
#define public_6eb6572 _public_6eb6572
#define public_6eb6582 _public_6eb6582
#define public_6eb6598 _public_6eb6598
#define public_6eb65c7 _public_6eb65c7

PROC_DECLARE(0x6eb6530, internal_6eb6530, public_6eb6530);
extern "C" NAKED register_t __cdecl internal_6eb6530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1838]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb6582
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb6543 : nop
        mov esi, ebp
        public_6eb6545 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb656d
        test cl, cl
        je public_6eb6569
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb656d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb6545
        public_6eb6569 : nop
        xor eax, eax
        jmp public_6eb6572
        public_6eb656d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb6572 : nop
        test eax, eax
        je public_6eb6598
        mov eax, dword ptr ds : [edi*8+public_6ed1840]
        inc edi
        test eax, eax
        jne public_6eb6543
        public_6eb6582 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb6598 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed183c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb65c7
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
        public_6eb65c7 : nop
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
        UNREACHABLE_TRAP(0x6eb6530)
    }
}

#undef public_6eb6543
#undef public_6eb6545
#undef public_6eb6569
#undef public_6eb656d
#undef public_6eb6572
#undef public_6eb6582
#undef public_6eb6598
#undef public_6eb65c7
