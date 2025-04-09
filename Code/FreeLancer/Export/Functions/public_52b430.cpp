#include "FreeLancer-PCH.h"


#define public_52b440 _public_52b440
#define public_52b44c _public_52b44c
#define public_52b44e _public_52b44e
#define public_52b460 _public_52b460
#define public_52b46f _public_52b46f
#define public_52b473 _public_52b473
#define public_52b486 _public_52b486
#define public_52b48a _public_52b48a
#define public_52b48d _public_52b48d

PROC_DECLARE(0x52b430, internal_52b430, public_52b430);
extern "C" NAKED register_t __cdecl internal_52b430()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        push esi
        je public_52b44c
        mov si, word ptr ss : [esp+8]
        public_52b440 : nop
        cmp word ptr ds : [eax], si
        je public_52b48d
        add eax, 2
        cmp eax, edx
        jne public_52b440
        public_52b44c : nop
        mov esi, edx
        public_52b44e : nop
        cmp esi, edx
        je public_52b473
        lea eax, ds:[esi+2]
        cmp eax, edx
        je public_52b46f
        sub esi, eax
        push edi
        lea esp, ss:[esp]
        public_52b460 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], di
        add eax, 2
        cmp eax, edx
        jne public_52b460
        pop edi
        public_52b46f : nop
        add dword ptr ds : [ecx+0x1C], 0xFFFFFFFE
        public_52b473 : nop
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        pop esi
        je public_52b486
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, edx
        sar eax, 1
        test eax, eax
        jne public_52b48a
        public_52b486 : nop
        mov byte ptr ds : [ecx+0x10], 0
        public_52b48a : nop
        ret 4
        public_52b48d : nop
        mov esi, eax
        jmp public_52b44e
        UNREACHABLE_TRAP(0x52b430)
    }
}

#undef public_52b440
#undef public_52b44c
#undef public_52b44e
#undef public_52b460
#undef public_52b46f
#undef public_52b473
#undef public_52b486
#undef public_52b48a
#undef public_52b48d
