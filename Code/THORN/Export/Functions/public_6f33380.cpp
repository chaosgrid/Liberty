#include "THORN-PCH.h"


#define public_6f33393 _public_6f33393
#define public_6f33395 _public_6f33395
#define public_6f333b9 _public_6f333b9
#define public_6f333bd _public_6f333bd
#define public_6f333c2 _public_6f333c2
#define public_6f333d2 _public_6f333d2
#define public_6f333e8 _public_6f333e8
#define public_6f33414 _public_6f33414

PROC_DECLARE(0x6f33380, internal_6f33380, public_6f33380);
extern "C" NAKED register_t __cdecl internal_6f33380()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a98c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f333d2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33393 : nop
        mov esi, ebp
        public_6f33395 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f333bd
        test cl, cl
        je public_6f333b9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f333bd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33395
        public_6f333b9 : nop
        xor eax, eax
        jmp public_6f333c2
        public_6f333bd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f333c2 : nop
        test eax, eax
        je public_6f333e8
        mov eax, dword ptr ds : [edi*8+public_6f5a994]
        inc edi
        test eax, eax
        jne public_6f33393
        public_6f333d2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f333e8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a990]
        test eax, eax
        jns public_6f33414
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
        public_6f33414 : nop
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
        UNREACHABLE_TRAP(0x6f33380)
    }
}

#undef public_6f33393
#undef public_6f33395
#undef public_6f333b9
#undef public_6f333bd
#undef public_6f333c2
#undef public_6f333d2
#undef public_6f333e8
#undef public_6f33414
