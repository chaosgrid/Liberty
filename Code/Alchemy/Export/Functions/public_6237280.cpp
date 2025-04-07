#include "Alchemy-PCH.h"


#define public_6237293 _public_6237293
#define public_6237295 _public_6237295
#define public_62372b9 _public_62372b9
#define public_62372bd _public_62372bd
#define public_62372c2 _public_62372c2
#define public_62372d2 _public_62372d2
#define public_62372e8 _public_62372e8
#define public_6237314 _public_6237314

PROC_DECLARE(0x6237280, internal_6237280, public_6237280);
extern "C" NAKED register_t __cdecl internal_6237280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ee34]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62372d2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6237293 : nop
        mov esi, ebp
        public_6237295 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62372bd
        test cl, cl
        je public_62372b9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62372bd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6237295
        public_62372b9 : nop
        xor eax, eax
        jmp public_62372c2
        public_62372bd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62372c2 : nop
        test eax, eax
        je public_62372e8
        mov eax, dword ptr ds : [edi*8+public_624ee3c]
        inc edi
        test eax, eax
        jne public_6237293
        public_62372d2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62372e8 : nop
        mov eax, dword ptr ds : [edi*8+public_624ee38]
        test eax, eax
        jns public_6237314
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
        public_6237314 : nop
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
        UNREACHABLE_TRAP(0x6237280)
    }
}

#undef public_6237293
#undef public_6237295
#undef public_62372b9
#undef public_62372bd
#undef public_62372c2
#undef public_62372d2
#undef public_62372e8
#undef public_6237314
