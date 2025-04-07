#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d300);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d450);

#define public_6f4d31e _public_6f4d31e
#define public_6f4d34f _public_6f4d34f
#define public_6f4d37e _public_6f4d37e
#define public_6f4d393 _public_6f4d393
#define public_6f4d39a _public_6f4d39a

PROC_DECLARE(0x6f4d300, internal_6f4d300, public_6f4d300);
extern "C" NAKED register_t __cdecl internal_6f4d300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax-0x20]
        cmp ecx, 0xFFFFFFFF
        jne public_6f4d31e
        cmp dword ptr ds : [eax-0x10], ecx
        jne public_6f4d31e
        fld qword ptr ds : [eax-0x18]
        fsub qword ptr ds : [eax-8]
        jmp public_6f4d34f
        public_6f4d31e : nop
        cmp ecx, 0xFFFFFFFE
        jne public_6f4d39a
        cmp dword ptr ds : [eax-0x10], 0xFFFFFFFE
        jne public_6f4d39a
        mov ecx, dword ptr ds : [eax-8]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax-0x18]
        push edx
        add ecx, 0x28
        push ecx
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        add eax, 0x28
        push eax
        call public_6f4d450
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        add esp, 0x10
        public_6f4d34f : nop
        mov eax, dword ptr ds : [esi]
        fcom qword ptr ds : [public_6f5b430]
        add eax, 0xFFFFFFF0
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax-8], 0
        mov dword ptr ds : [eax-4], 0x3FF00000
        fnstsw ax
        test ah, 1
        je public_6f4d37e
        mov edx, dword ptr ds : [esi]
        fstp st(0)
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx-0x10], eax
        pop esi
        ret 
        public_6f4d37e : nop
        fcomp qword ptr ds : [public_6f5b430]
        fnstsw ax
        test ah, 0x40
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6f4d393
        mov eax, dword ptr ss : [esp+0x10]
        public_6f4d393 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx-0x10], eax
        pop esi
        ret 
        public_6f4d39a : nop
        mov eax, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_6f605c8 @0x6f4d39e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f605c8
        push eax
        call public_6f4d3b0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4d300)
    }
}

#undef public_6f4d31e
#undef public_6f4d34f
#undef public_6f4d37e
#undef public_6f4d393
#undef public_6f4d39a
