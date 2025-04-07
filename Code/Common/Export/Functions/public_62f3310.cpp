#include "Common-PCH.h"


#define public_62f3321 _public_62f3321
#define public_62f3344 _public_62f3344
#define public_62f3351 _public_62f3351
#define public_62f3360 _public_62f3360
#define public_62f336a _public_62f336a
#define public_62f3371 _public_62f3371
#define public_62f3379 _public_62f3379

PROC_DECLARE(0x62f3310, internal_62f3310, public_62f3310);
extern "C" NAKED register_t __cdecl internal_62f3310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcac4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62f3379
        mov edi, dword ptr ss : [esp+0xC]
        public_62f3321 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62f3379
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f3351
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f3371
        public_62f3344 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62f3344
        jmp public_62f3371
        public_62f3351 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62f336a
        lea esp, ss:[esp]
        public_62f3360 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62f3360
        public_62f336a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62f3371
        mov esi, eax
        public_62f3371 : nop
        cmp esi, dword ptr ds : [public_63fcac4]
        jne public_62f3321
        public_62f3379 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62f3310)
    }
}

#undef public_62f3321
#undef public_62f3344
#undef public_62f3351
#undef public_62f3360
#undef public_62f336a
#undef public_62f3371
#undef public_62f3379
