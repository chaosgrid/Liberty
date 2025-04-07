#include "Content-PCH.h"


#define public_6ec8638 _public_6ec8638
#define public_6ec8641 _public_6ec8641
#define public_6ec8646 _public_6ec8646
#define public_6ec8666 _public_6ec8666
#define public_6ec866a _public_6ec866a
#define public_6ec866f _public_6ec866f
#define public_6ec8688 _public_6ec8688
#define public_6ec8697 _public_6ec8697

PROC_DECLARE(0x6ec8620, internal_6ec8620, public_6ec8620);
extern "C" NAKED register_t __cdecl internal_6ec8620()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax+0x9C]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ec8697
        push ebp
        push esi
        lea ebp, ds:[ebx+0x10]
        public_6ec8638 : nop
        test ebp, ebp
        jne public_6ec8641
        mov eax, dword ptr ds : [edi+8]
        jmp public_6ec866f
        public_6ec8641 : nop
        mov esi, ebp
        lea eax, ds:[edi+0xC]
        public_6ec8646 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ec866a
        test cl, cl
        je public_6ec8666
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ec866a
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec8646
        public_6ec8666 : nop
        xor eax, eax
        jmp public_6ec866f
        public_6ec866a : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec866f : nop
        test eax, eax
        sete al
        test al, al
        je public_6ec8688
        mov ecx, dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov byte ptr ds : [edi+0x2C], 1
        public_6ec8688 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [eax+0x9C]
        jne public_6ec8638
        pop esi
        pop ebp
        public_6ec8697 : nop
        pop edi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec8620)
    }
}

#undef public_6ec8638
#undef public_6ec8641
#undef public_6ec8646
#undef public_6ec8666
#undef public_6ec866a
#undef public_6ec866f
#undef public_6ec8688
#undef public_6ec8697
