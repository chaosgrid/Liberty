#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_636f2e1 _public_636f2e1
#define public_636f30d _public_636f30d
#define public_636f328 _public_636f328
#define public_636f333 _public_636f333
#define public_636f340 _public_636f340
#define public_636f386 _public_636f386

PROC_DECLARE(0x636f2c0, internal_636f2c0, public_636f2c0);
extern "C" NAKED register_t __cdecl internal_636f2c0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x80
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_636f2e1
        test edi, edi
        jne public_636f2e1
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_636f2e1 : nop
        mov edx, dword ptr ds : [public_658bb58]
        mov ecx, dword ptr ds : [public_658b800]
        lea eax, ss:[esp+8]
        push eax
        inc edx
        push esi
        push ecx
        mov dword ptr ds : [public_658bb58], edx
        call public_637fd60
        fld qword ptr ss : [esp+0x14]
        add esp, 0xC
        test edi, edi
        je public_636f30d
        fst qword ptr ds : [edi]
        public_636f30d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_636f333
        fld qword ptr ds : [public_658b6a0]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_636f340
        public_636f328 : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 8
        ret 
        public_636f333 : nop
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        jne public_636f328
        public_636f340 : nop
        or dword ptr ds : [esi+0x50], 0x8000
        mov ecx, dword ptr ds : [public_658bc50]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bc50], ecx
        je public_636f386
        mov edx, dword ptr ds : [public_658b870]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63eee0c @0x636f377*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eee0c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
/*FIXUP public_636f386 : nop
        push offset public_63eedfc @0x636f386*/
  FIXUP public_636f386 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eedfc
        call public_637f410
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x636f2c0)
    }
}

#undef public_636f2e1
#undef public_636f30d
#undef public_636f328
#undef public_636f333
#undef public_636f340
#undef public_636f386
