#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b190);

#define public_6f3b1b1 _public_6f3b1b1
#define public_6f3b1d8 _public_6f3b1d8
#define public_6f3b1f1 _public_6f3b1f1
#define public_6f3b20b _public_6f3b20b
#define public_6f3b223 _public_6f3b223
#define public_6f3b231 _public_6f3b231

PROC_DECLARE(0x6f3b190, internal_6f3b190, public_6f3b190);
extern "C" NAKED register_t __cdecl internal_6f3b190()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b231
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3b1b1 : nop
        push offset public_6fb445c @0x6f3b1b1*/
  FIXUP public_6f3b1b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b1d8
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b223
/*FIXUP public_6f3b1d8 : nop
        push offset public_6fb9f88 @0x6f3b1d8*/
  FIXUP public_6f3b1d8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f88
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b1f1
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3b223
/*FIXUP public_6f3b1f1 : nop
        push offset public_6fb9f70 @0x6f3b1f1*/
  FIXUP public_6f3b1f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f70
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b20b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3b223
/*FIXUP public_6f3b20b : nop
        push offset public_6fb9f58 @0x6f3b20b*/
  FIXUP public_6f3b20b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f58
        call edi
        test al, al
        je public_6f3b223
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        public_6f3b223 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b1b1
        pop edi
        pop ebx
        public_6f3b231 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b190)
    }
}

#undef public_6f3b1b1
#undef public_6f3b1d8
#undef public_6f3b1f1
#undef public_6f3b20b
#undef public_6f3b223
#undef public_6f3b231
