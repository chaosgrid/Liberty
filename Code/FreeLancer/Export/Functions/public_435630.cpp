#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435630);

#define public_435640 _public_435640
#define public_435654 _public_435654
#define public_43565f _public_43565f
#define public_435667 _public_435667
#define public_435671 _public_435671
#define public_435678 _public_435678
#define public_435680 _public_435680
#define public_4356a7 _public_4356a7
#define public_4356b9 _public_4356b9

PROC_DECLARE(0x435630, internal_435630, public_435630);
extern "C" NAKED register_t __cdecl internal_435630()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_668670]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        je public_435680
        mov edi, edi
        public_435640 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+0x24], edx
        cmp byte ptr ds : [ecx+0x2D], dl
        jne public_43565f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x2D], dl
        jne public_435678
        public_435654 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x2D], dl
        je public_435654
        jmp public_435678
        public_43565f : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_435671
        public_435667 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_435667
        public_435671 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_435678
        mov eax, ecx
        public_435678 : nop
        cmp eax, dword ptr ds : [public_668670]
        jne public_435640
        public_435680 : nop
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        je public_4356b9
        mov ecx, dword ptr ds : [public_66868c]
        cmp ecx, 0xFFFFFFFF
        je public_4356a7
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [public_66868c], 0xFFFFFFFF
        public_4356a7 : nop
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x74]
        mov dword ptr ds : [public_66868c], eax
        public_4356b9 : nop
        ret 
        UNREACHABLE_TRAP(0x435630)
    }
}

#undef public_435640
#undef public_435654
#undef public_43565f
#undef public_435667
#undef public_435671
#undef public_435678
#undef public_435680
#undef public_4356a7
#undef public_4356b9
