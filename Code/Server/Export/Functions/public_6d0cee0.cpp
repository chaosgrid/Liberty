#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01110);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cee0);

#define public_6d0cef7 _public_6d0cef7
#define public_6d0cef9 _public_6d0cef9
#define public_6d0cf10 _public_6d0cf10
#define public_6d0cf12 _public_6d0cf12
#define public_6d0cf35 _public_6d0cf35
#define public_6d0cf37 _public_6d0cf37
#define public_6d0cf53 _public_6d0cf53
#define public_6d0cf55 _public_6d0cf55
#define public_6d0cf70 _public_6d0cf70

PROC_DECLARE(0x6d0cee0, internal_6d0cee0, public_6d0cee0);
extern "C" NAKED register_t __cdecl internal_6d0cee0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6d0cef7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0cef9
        public_6d0cef7 : nop
        xor eax, eax
        public_6d0cef9 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6d0cf70
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6d0cf10
        add eax, 0xC
        jmp public_6d0cf12
        public_6d0cf10 : nop
        xor eax, eax
        public_6d0cf12 : nop
        test eax, eax
        lea ecx, ds:[esi+0xC]
        je public_6d0cf35
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0cf35
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6d0cf35
        mov edx, eax
        jmp public_6d0cf37
        public_6d0cf35 : nop
        xor edx, edx
        public_6d0cf37 : nop
        test ecx, ecx
        je public_6d0cf53
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6d0cf53
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d0cf55
        public_6d0cf53 : nop
        xor eax, eax
        public_6d0cf55 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push esi
        mov ecx, eax
        call dword ptr ds : [public_6d646e4]
        mov ecx, esi
        call public_6d01110
        pop esi
        ret 0xC
        nop 
        public_6d0cf70 : nop
        mov edx, dword ptr ds : [public_6d64a44]
/*FIXUP push offset public_6d682a0 @0x6d0cf76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d682a0
        push 0x9F2
/*FIXUP push offset public_6d67d10 @0x6d0cf80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d0cf8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d0cee0)
    }
}

#undef public_6d0cef7
#undef public_6d0cef9
#undef public_6d0cf10
#undef public_6d0cf12
#undef public_6d0cf35
#undef public_6d0cf37
#undef public_6d0cf53
#undef public_6d0cf55
#undef public_6d0cf70
