#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_62b11e0 _public_62b11e0
#define public_62b11e2 _public_62b11e2
#define public_62b120c _public_62b120c
#define public_62b120e _public_62b120e
#define public_62b122f _public_62b122f
#define public_62b1231 _public_62b1231
#define public_62b1245 _public_62b1245
#define public_62b1248 _public_62b1248
#define public_62b1257 _public_62b1257
#define public_62b1259 _public_62b1259
#define public_62b127b _public_62b127b
#define public_62b1289 _public_62b1289

PROC_DECLARE(0x62b1190, internal_62b1190, public_62b1190);
extern "C" NAKED register_t __cdecl internal_62b1190()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b127b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b127b
        mov ax, word ptr ds : [esi+0x228]
        cmp ax, word ptr ds : [public_63a4aa4]
        je public_62b1289
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b1245
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1245
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b11e0
        lea ecx, ds:[eax-8]
        jmp public_62b11e2
        public_62b11e0 : nop
        xor ecx, ecx
        public_62b11e2 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b1245
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_62b1245
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        je public_62b120c
        lea ecx, ds:[eax-8]
        jmp public_62b120e
        public_62b120c : nop
        xor ecx, ecx
        public_62b120e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b122f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b122f
        mov ecx, eax
        jmp public_62b1231
        public_62b122f : nop
        xor ecx, ecx
        public_62b1231 : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x228]
        push eax
        call dword ptr ds : [edx+0xF8]
        jmp public_62b1248
        public_62b1245 : nop
        or eax, 0xFFFFFFFF
        public_62b1248 : nop
        mov ecx, dword ptr ds : [esi+0x220]
        test ecx, ecx
        je public_62b1257
        add ecx, 0xFFFFFFF8
        jmp public_62b1259
        public_62b1257 : nop
        xor ecx, ecx
        public_62b1259 : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1C]
        push eax
        call public_630e710
        add esp, 8
        test al, al
        jne public_62b1289
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x228], ax
        pop esi
        ret 
        public_62b127b : nop
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x228], cx
        public_62b1289 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b1190)
    }
}

#undef public_62b11e0
#undef public_62b11e2
#undef public_62b120c
#undef public_62b120e
#undef public_62b122f
#undef public_62b1231
#undef public_62b1245
#undef public_62b1248
#undef public_62b1257
#undef public_62b1259
#undef public_62b127b
#undef public_62b1289
