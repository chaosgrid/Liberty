#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68040a0);
CLANG_FORWARD_PROC_SYMBOL(public_6804150);
CLANG_FORWARD_PROC_SYMBOL(public_68041f0);

#define public_68040be _public_68040be
#define public_68040ef _public_68040ef
#define public_680411e _public_680411e
#define public_6804133 _public_6804133
#define public_680413a _public_680413a

PROC_DECLARE(0x68040a0, internal_68040a0, public_68040a0);
extern "C" NAKED register_t __cdecl internal_68040a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax-0x20]
        cmp ecx, 0xFFFFFFFF
        jne public_68040be
        cmp dword ptr ds : [eax-0x10], ecx
        jne public_68040be
        fld qword ptr ds : [eax-0x18]
        fsub qword ptr ds : [eax-8]
        jmp public_68040ef
        public_68040be : nop
        cmp ecx, 0xFFFFFFFE
        jne public_680413a
        cmp dword ptr ds : [eax-0x10], 0xFFFFFFFE
        jne public_680413a
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
        call public_68041f0
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        add esp, 0x10
        public_68040ef : nop
        mov eax, dword ptr ds : [esi]
        fcom qword ptr ds : [public_680c180]
        add eax, 0xFFFFFFF0
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax-8], 0
        mov dword ptr ds : [eax-4], 0x3FF00000
        fnstsw ax
        test ah, 1
        je public_680411e
        mov edx, dword ptr ds : [esi]
        fstp st(0)
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx-0x10], eax
        pop esi
        ret 
        public_680411e : nop
        fcomp qword ptr ds : [public_680c180]
        fnstsw ax
        test ah, 0x40
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6804133
        mov eax, dword ptr ss : [esp+0x10]
        public_6804133 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx-0x10], eax
        pop esi
        ret 
        public_680413a : nop
        mov eax, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_680d544 @0x680413e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d544
        push eax
        call public_6804150
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68040a0)
    }
}

#undef public_68040be
#undef public_68040ef
#undef public_680411e
#undef public_6804133
#undef public_680413a
