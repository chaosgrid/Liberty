#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f52270);

#define public_6f52283 _public_6f52283
#define public_6f52295 _public_6f52295
#define public_6f522aa _public_6f522aa
#define public_6f522c4 _public_6f522c4
#define public_6f522cb _public_6f522cb
#define public_6f522cd _public_6f522cd
#define public_6f522db _public_6f522db

PROC_DECLARE(0x6f52270, internal_6f52270, public_6f52270);
extern "C" NAKED register_t __cdecl internal_6f52270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+eax*2]
        mov ecx, dword ptr ds : [esi+eax*4+0x2C]
        test ecx, ecx
        je public_6f522db
        public_6f52283 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xA
        jne public_6f52295
        push esi
        call public_6f51e90
        add esp, 4
        jmp public_6f522cd
        public_6f52295 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6f522aa
/*FIXUP push offset public_6f60f8c @0x6f5229a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60f8c
        push esi
        call public_6f511c0
        add esp, 8
        jmp public_6f522cd
        public_6f522aa : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f522c4
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_6f522cb
        public_6f522c4 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_6f522cb : nop
        mov dword ptr ds : [esi], eax
        public_6f522cd : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+ecx*4+0x2C]
        test eax, eax
        jne public_6f52283
        public_6f522db : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52270)
    }
}

#undef public_6f52283
#undef public_6f52295
#undef public_6f522aa
#undef public_6f522c4
#undef public_6f522cb
#undef public_6f522cd
#undef public_6f522db
