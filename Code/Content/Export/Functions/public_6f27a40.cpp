#include "Content-PCH.h"


#define public_6f27a9e _public_6f27a9e
#define public_6f27abd _public_6f27abd
#define public_6f27adc _public_6f27adc
#define public_6f27afb _public_6f27afb
#define public_6f27b1a _public_6f27b1a
#define public_6f27b39 _public_6f27b39
#define public_6f27b58 _public_6f27b58
#define public_6f27b71 _public_6f27b71

PROC_DECLARE(0x6f27a40, internal_6f27a40, public_6f27a40);
extern "C" NAKED register_t __cdecl internal_6f27a40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call ebx
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0x118], eax
        call dword ptr ds : [public_6fb3020]
        push 2
        mov ecx, esi
        mov dword ptr ds : [edi+0x11C], eax
        call ebx
        mov ebx, dword ptr ds : [public_6fb3294]
        mov esi, eax
/*FIXUP push offset public_6fb9200 @0x6f27a83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9200
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27a9e
        mov dword ptr ds : [edi+0x120], eax
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27a9e : nop
        push offset public_6fb9244 @0x6f27a9e*/
  FIXUP public_6f27a9e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9244
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27abd
        mov dword ptr ds : [edi+0x120], 1
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27abd : nop
        push offset public_6fb9240 @0x6f27abd*/
  FIXUP public_6f27abd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9240
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27adc
        mov dword ptr ds : [edi+0x120], 2
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27adc : nop
        push offset public_6fb9234 @0x6f27adc*/
  FIXUP public_6f27adc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9234
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27afb
        mov dword ptr ds : [edi+0x120], 3
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27afb : nop
        push offset public_6fb9228 @0x6f27afb*/
  FIXUP public_6f27afb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9228
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27b1a
        mov dword ptr ds : [edi+0x120], 4
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27b1a : nop
        push offset public_6fb921c @0x6f27b1a*/
  FIXUP public_6f27b1a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb921c
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27b39
        mov dword ptr ds : [edi+0x120], 5
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27b39 : nop
        push offset public_6fb9214 @0x6f27b39*/
  FIXUP public_6f27b39 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9214
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27b58
        mov dword ptr ds : [edi+0x120], 6
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f27b58 : nop
        push offset public_6fb9208 @0x6f27b58*/
  FIXUP public_6f27b58 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9208
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f27b71
        mov dword ptr ds : [edi+0x120], 7
        public_6f27b71 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27a40)
    }
}

#undef public_6f27a9e
#undef public_6f27abd
#undef public_6f27adc
#undef public_6f27afb
#undef public_6f27b1a
#undef public_6f27b39
#undef public_6f27b58
#undef public_6f27b71
