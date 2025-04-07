#include "Content-PCH.h"


#define public_6ebff21 _public_6ebff21
#define public_6ebff33 _public_6ebff33
#define public_6ebff54 _public_6ebff54
#define public_6ebff58 _public_6ebff58
#define public_6ebffb3 _public_6ebffb3
#define public_6ebffe7 _public_6ebffe7

PROC_DECLARE(0x6ebfef0, internal_6ebfef0, public_6ebfef0);
extern "C" NAKED register_t __cdecl internal_6ebfef0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov ebx, dword ptr ds : [public_6fb3294]
        mov ebp, eax
/*FIXUP push offset public_6fb57d8 @0x6ebff0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d8
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ebff21
        mov byte ptr ds : [esi+0x20], 1
        jmp public_6ebff33
/*FIXUP public_6ebff21 : nop
        push offset public_6fb57d0 @0x6ebff21*/
  FIXUP public_6ebff21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d0
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ebff33
        mov byte ptr ds : [esi+0x20], al
        public_6ebff33 : nop
        mov ebp, dword ptr ds : [public_6fb3048]
        push 1
        mov ecx, edi
        call ebp
/*FIXUP push offset public_6fb36ec @0x6ebff3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ebff54
        mov byte ptr ds : [esi+0x21], 1
        jmp public_6ebff58
        public_6ebff54 : nop
        mov byte ptr ds : [esi+0x21], 0
        public_6ebff58 : nop
        push 2
        mov ecx, edi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 3
        mov ecx, edi
        mov dword ptr ds : [esi+0x18], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0xC]
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x10]
        push 5
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x14]
        push 6
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fcom dword ptr ds : [public_6fb444c]
        fst dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x41
        jnp public_6ebffb3
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x1C]
        public_6ebffb3 : nop
        push 7
        fstp st(0)
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ebffe7
        push 7
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6ebffe7
        push 7
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x28]
        public_6ebffe7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebfef0)
    }
}

#undef public_6ebff21
#undef public_6ebff33
#undef public_6ebff54
#undef public_6ebff58
#undef public_6ebffb3
#undef public_6ebffe7
