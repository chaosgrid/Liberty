#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a65c0);

#define public_62a5320 _public_62a5320
#define public_62a533a _public_62a533a
#define public_62a5341 _public_62a5341
#define public_62a534a _public_62a534a
#define public_62a534d _public_62a534d
#define public_62a5362 _public_62a5362
#define public_62a536f _public_62a536f
#define public_62a5377 _public_62a5377
#define public_62a5381 _public_62a5381
#define public_62a5388 _public_62a5388
#define public_62a538c _public_62a538c
#define public_62a5392 _public_62a5392

PROC_DECLARE(0x62a5300, internal_62a5300, public_62a5300);
extern "C" NAKED register_t __cdecl internal_62a5300()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        jne public_62a5392
        push ebp
        mov ebp, dword ptr ds : [ebx+0x18]
        push esi
        mov esi, dword ptr ss : [ebp]
        push edi
        xor edi, edi
        cmp esi, ebp
        je public_62a538c
        lea ecx, ds:[ecx]
        public_62a5320 : nop
        lea ecx, ds:[esi+0x10]
        call public_62a65c0
        test eax, eax
        je public_62a534d
        mov ecx, dword ptr ds : [ebx+0x2C]
        test ecx, ecx
        jne public_62a533a
        mov dword ptr ds : [ebx+0x2C], eax
        mov edi, eax
        jmp public_62a534d
        public_62a533a : nop
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_62a534a
        public_62a5341 : nop
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        jne public_62a5341
        public_62a534a : nop
        mov dword ptr ds : [edi+0x10], eax
        public_62a534d : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x69]
        test cl, cl
        jne public_62a536f
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x69]
        test cl, cl
        jne public_62a5388
        public_62a5362 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x69]
        test cl, cl
        je public_62a5362
        jmp public_62a5388
        public_62a536f : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a5381
        public_62a5377 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62a5377
        public_62a5381 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62a5388
        mov esi, eax
        public_62a5388 : nop
        cmp esi, ebp
        jne public_62a5320
        public_62a538c : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        pop ebp
        public_62a5392 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a5300)
    }
}

#undef public_62a5320
#undef public_62a533a
#undef public_62a5341
#undef public_62a534a
#undef public_62a534d
#undef public_62a5362
#undef public_62a536f
#undef public_62a5377
#undef public_62a5381
#undef public_62a5388
#undef public_62a538c
#undef public_62a5392
