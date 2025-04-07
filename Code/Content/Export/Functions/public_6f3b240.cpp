#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b240);

#define public_6f3b262 _public_6f3b262
#define public_6f3b28c _public_6f3b28c
#define public_6f3b2a9 _public_6f3b2a9
#define public_6f3b2c6 _public_6f3b2c6
#define public_6f3b301 _public_6f3b301
#define public_6f3b326 _public_6f3b326
#define public_6f3b340 _public_6f3b340
#define public_6f3b358 _public_6f3b358
#define public_6f3b36b _public_6f3b36b

PROC_DECLARE(0x6f3b240, internal_6f3b240, public_6f3b240);
extern "C" NAKED register_t __cdecl internal_6f3b240()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b36b
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
/*FIXUP public_6f3b262 : nop
        push offset public_6fb445c @0x6f3b262*/
  FIXUP public_6f3b262 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b28c
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b358
/*FIXUP public_6f3b28c : nop
        push offset public_6fba018 @0x6f3b28c*/
  FIXUP public_6f3b28c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba018
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b2a9
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp]
        jmp public_6f3b358
/*FIXUP public_6f3b2a9 : nop
        push offset public_6fba000 @0x6f3b2a9*/
  FIXUP public_6f3b2a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba000
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b2c6
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+4]
        jmp public_6f3b358
/*FIXUP public_6f3b2c6 : nop
        push offset public_6fb9fe4 @0x6f3b2c6*/
  FIXUP public_6f3b2c6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9fe4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b326
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3b2db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f3b301
        mov al, 1
        xor edx, edx
        mov dl, al
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+8]
        jmp public_6f3b358
/*FIXUP public_6f3b301 : nop
        push offset public_6fb9840 @0x6f3b301*/
  FIXUP public_6f3b301 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        setne al
        xor edx, edx
        mov dl, al
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+8]
        jmp public_6f3b358
/*FIXUP public_6f3b326 : nop
        push offset public_6fb9fc4 @0x6f3b326*/
  FIXUP public_6f3b326 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9fc4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b340
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6f3b358
/*FIXUP public_6f3b340 : nop
        push offset public_6fb9fa4 @0x6f3b340*/
  FIXUP public_6f3b340 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9fa4
        call ebx
        test al, al
        je public_6f3b358
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x10]
        public_6f3b358 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b262
        pop edi
        pop ebp
        pop ebx
        public_6f3b36b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b240)
    }
}

#undef public_6f3b262
#undef public_6f3b28c
#undef public_6f3b2a9
#undef public_6f3b2c6
#undef public_6f3b301
#undef public_6f3b326
#undef public_6f3b340
#undef public_6f3b358
#undef public_6f3b36b
