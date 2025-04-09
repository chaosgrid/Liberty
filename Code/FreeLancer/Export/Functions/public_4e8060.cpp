#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e8060);

#define public_4e806e _public_4e806e
#define public_4e8078 _public_4e8078
#define public_4e8082 _public_4e8082
#define public_4e808c _public_4e808c
#define public_4e8099 _public_4e8099
#define public_4e80a3 _public_4e80a3
#define public_4e80ad _public_4e80ad
#define public_4e80b7 _public_4e80b7
#define public_4e80c2 _public_4e80c2
#define public_4e80cd _public_4e80cd
#define public_4e80d8 _public_4e80d8
#define public_4e80e3 _public_4e80e3
#define public_4e80ee _public_4e80ee

PROC_DECLARE(0x4e8060, internal_4e8060, public_4e8060);
extern "C" NAKED register_t __cdecl internal_4e8060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test al, 1
        je public_4e806e
        mov eax, 0x563
        ret 
        public_4e806e : nop
        test al, 2
        je public_4e8078
        mov eax, 0x44B
        ret 
        public_4e8078 : nop
        test al, 4
        je public_4e8082
        mov eax, 0x564
        ret 
        public_4e8082 : nop
        test al, 8
        je public_4e808c
        mov eax, 0x565
        ret 
        public_4e808c : nop
        test eax, 0x8010
        je public_4e8099
        mov eax, 0x566
        ret 
        public_4e8099 : nop
        test al, 0x20
        je public_4e80a3
        mov eax, 0x567
        ret 
        public_4e80a3 : nop
        test al, 0x40
        je public_4e80ad
        mov eax, 0x568
        ret 
        public_4e80ad : nop
        test al, al
        jns public_4e80b7
        mov eax, 0x4FA
        ret 
        public_4e80b7 : nop
        test ah, 1
        je public_4e80c2
        mov eax, 0x44C
        ret 
        public_4e80c2 : nop
        test ah, 2
        je public_4e80cd
        mov eax, 0x442
        ret 
        public_4e80cd : nop
        test ah, 4
        je public_4e80d8
        mov eax, 0x56A
        ret 
        public_4e80d8 : nop
        test ah, 8
        je public_4e80e3
        mov eax, 0x56B
        ret 
        public_4e80e3 : nop
        test ah, 0x10
        je public_4e80ee
        mov eax, 0x56C
        ret 
        public_4e80ee : nop
        and eax, 0x2000
        neg eax
        sbb eax, eax
        and eax, 0x56D
        ret 
        UNREACHABLE_TRAP(0x4e8060)
    }
}

#undef public_4e806e
#undef public_4e8078
#undef public_4e8082
#undef public_4e808c
#undef public_4e8099
#undef public_4e80a3
#undef public_4e80ad
#undef public_4e80b7
#undef public_4e80c2
#undef public_4e80cd
#undef public_4e80d8
#undef public_4e80e3
#undef public_4e80ee
