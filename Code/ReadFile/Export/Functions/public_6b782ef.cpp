#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782ef);
CLANG_FORWARD_PROC_SYMBOL(public_6b78438);

#define public_6b78305 _public_6b78305
#define public_6b7832d _public_6b7832d
#define public_6b78331 _public_6b78331
#define public_6b78357 _public_6b78357
#define public_6b7836e _public_6b7836e
#define public_6b7837f _public_6b7837f
#define public_6b78384 _public_6b78384
#define public_6b78394 _public_6b78394
#define public_6b78397 _public_6b78397

PROC_DECLARE(0x6b782ef, internal_6b782ef, public_6b782ef);
extern "C" NAKED register_t __cdecl internal_6b782ef()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6b78305
        cmp dword ptr ds : [public_6b7a22c], eax
        jle public_6b7832d
        dec dword ptr ds : [public_6b7a22c]
        public_6b78305 : nop
        mov ecx, dword ptr ds : [public_6b79098]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6b7a230], ecx
        jne public_6b78357
        push 0x80
        call dword ptr ds : [public_6b79094]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6b7a238], eax
        jne public_6b78331
        public_6b7832d : nop
        xor eax, eax
        jmp public_6b78397
        public_6b78331 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6b7a238]
/*FIXUP push offset public_6b7a004 @0x6b78339*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a004
/*FIXUP push offset public_6b7a000 @0x6b7833e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a000
        mov dword ptr ds : [public_6b7a234], eax
        call public_6b78438
        inc dword ptr ds : [public_6b7a22c]
        pop ecx
        pop ecx
        jmp public_6b78394
        public_6b78357 : nop
        test eax, eax
        jne public_6b78394
        mov eax, dword ptr ds : [public_6b7a238]
        test eax, eax
        je public_6b78394
        mov ecx, dword ptr ds : [public_6b7a234]
        push esi
        lea esi, ds:[ecx-4]
        public_6b7836e : nop
        cmp esi, eax
        jb public_6b78384
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6b7837f
        call ecx
        mov eax, dword ptr ds : [public_6b7a238]
        public_6b7837f : nop
        sub esi, 4
        jmp public_6b7836e
        public_6b78384 : nop
        push eax
        call dword ptr ds : [public_6b79070]
        and dword ptr ds : [public_6b7a238], 0
        pop ecx
        pop esi
        public_6b78394 : nop
        push 1
        pop eax
        public_6b78397 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b782ef)
    }
}

#undef public_6b78305
#undef public_6b7832d
#undef public_6b78331
#undef public_6b78357
#undef public_6b7836e
#undef public_6b7837f
#undef public_6b78384
#undef public_6b78394
#undef public_6b78397
