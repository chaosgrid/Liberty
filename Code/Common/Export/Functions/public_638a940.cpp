#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638a940);

#define public_638a9b8 _public_638a9b8
#define public_638a9d5 _public_638a9d5
#define public_638a9fb _public_638a9fb

PROC_DECLARE(0x638a940, internal_638a940, public_638a940);
extern "C" NAKED register_t __cdecl internal_638a940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_638a9fb
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_638a9fb
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_638a9fb
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f8d2c @0x638a97d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8d2c
        push esi
        call edi
        mov eax, dword ptr ds : [public_658b050]
        add esp, 8
        test eax, eax
        je public_638a9d5
        mov eax, dword ptr ds : [public_658b1e0]
        test eax, eax
        jne public_638a9b8
        fld qword ptr ds : [public_658b6a8]
        fcomp qword ptr ds : [public_63a5a68]
        fnstsw ax
        test ah, 0x41
        jne public_638a9b8
/*FIXUP push offset public_63f8c9c @0x638a9ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8c9c
        push esi
        call edi
        add esp, 8
        public_638a9b8 : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_638a9d5
        mov eax, dword ptr ds : [public_658b028]
        test eax, eax
        jne public_638a9d5
/*FIXUP push offset public_63f8c24 @0x638a9ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8c24
        push esi
        call edi
        add esp, 8
        public_638a9d5 : nop
        mov eax, dword ptr ds : [public_658b6a4]
        mov ecx, dword ptr ds : [public_658b6a0]
        push eax
        push ecx
/*FIXUP push offset public_63f89b8 @0x638a9e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f89b8
        push esi
        call edi
        add esp, 0x10
/*FIXUP push offset public_63f88c8 @0x638a9ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f88c8
        push esi
        call edi
        add esp, 8
        pop edi
        pop esi
        ret 
        public_638a9fb : nop
        mov edx, dword ptr ss : [esp+4]
/*FIXUP push offset public_63f8828 @0x638a9ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8828
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x638a940)
    }
}

#undef public_638a9b8
#undef public_638a9d5
#undef public_638a9fb
