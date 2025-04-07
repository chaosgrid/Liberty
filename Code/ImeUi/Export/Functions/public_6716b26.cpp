#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716b26);
CLANG_FORWARD_PROC_SYMBOL(public_6716c7a);

#define public_6716b3c _public_6716b3c
#define public_6716b64 _public_6716b64
#define public_6716b68 _public_6716b68
#define public_6716b8e _public_6716b8e
#define public_6716ba5 _public_6716ba5
#define public_6716bb6 _public_6716bb6
#define public_6716bbb _public_6716bbb
#define public_6716bcb _public_6716bcb
#define public_6716bce _public_6716bce

PROC_DECLARE(0x6716b26, internal_6716b26, public_6716b26);
extern "C" NAKED register_t __cdecl internal_6716b26()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6716b3c
        cmp dword ptr ds : [public_671cfec], eax
        jle public_6716b64
        dec dword ptr ds : [public_671cfec]
        public_6716b3c : nop
        mov ecx, dword ptr ds : [public_67170e8]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_671d034], ecx
        jne public_6716b8e
        push 0x80
        call dword ptr ds : [public_67170c4]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_671d03c], eax
        jne public_6716b68
        public_6716b64 : nop
        xor eax, eax
        jmp public_6716bce
        public_6716b68 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_671d03c]
/*FIXUP push offset public_671900c @0x6716b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671900c
/*FIXUP push offset public_6719000 @0x6716b75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719000
        mov dword ptr ds : [public_671d038], eax
        call public_6716c7a
        inc dword ptr ds : [public_671cfec]
        pop ecx
        pop ecx
        jmp public_6716bcb
        public_6716b8e : nop
        test eax, eax
        jne public_6716bcb
        mov eax, dword ptr ds : [public_671d03c]
        test eax, eax
        je public_6716bcb
        mov ecx, dword ptr ds : [public_671d038]
        push esi
        lea esi, ds:[ecx-4]
        public_6716ba5 : nop
        cmp esi, eax
        jb public_6716bbb
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6716bb6
        call ecx
        mov eax, dword ptr ds : [public_671d03c]
        public_6716bb6 : nop
        sub esi, 4
        jmp public_6716ba5
        public_6716bbb : nop
        push eax
        call dword ptr ds : [public_67170c8]
        and dword ptr ds : [public_671d03c], 0
        pop ecx
        pop esi
        public_6716bcb : nop
        push 1
        pop eax
        public_6716bce : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6716b26)
    }
}

#undef public_6716b3c
#undef public_6716b64
#undef public_6716b68
#undef public_6716b8e
#undef public_6716ba5
#undef public_6716bb6
#undef public_6716bbb
#undef public_6716bcb
#undef public_6716bce
