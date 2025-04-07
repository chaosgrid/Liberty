#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28200);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);

#define public_6d28271 _public_6d28271
#define public_6d282a6 _public_6d282a6
#define public_6d282e8 _public_6d282e8
#define public_6d2831d _public_6d2831d
#define public_6d28323 _public_6d28323
#define public_6d28334 _public_6d28334
#define public_6d28336 _public_6d28336
#define public_6d28342 _public_6d28342

PROC_DECLARE(0x6d28200, internal_6d28200, public_6d28200);
extern "C" NAKED register_t __cdecl internal_6d28200()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1008]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d28334
        mov ecx, dword ptr ds : [esi+0x1000]
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [esi+0x1008], eax
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d282a6
        push 0x1000
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d28271
/*FIXUP push offset public_6d68a58 @0x6d28253*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d28262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea edx, ss:[esp+8]
        push edx
        call public_6d601a2
        public_6d28271 : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [esi+0x1008], ecx
        lea ecx, ds:[eax+0x1000]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [edx+4], eax
        jmp public_6d2831d
        public_6d282a6 : nop
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x1000], eax
        mov ecx, dword ptr ds : [eax+0xC]
        sub ecx, eax
        sub ecx, 0x10
        cmp ecx, 4
        jae public_6d28323
        push 0x14
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d282e8
/*FIXUP push offset public_6d68a58 @0x6d282ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d282d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea edx, ss:[esp+0x14]
        push edx
        call public_6d601a2
        public_6d282e8 : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[eax+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [esi+0x1008], ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [ecx], eax
        public_6d2831d : nop
        mov dword ptr ds : [esi+0x1000], eax
        public_6d28323 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        add eax, 0x10
        mov dword ptr ds : [esi+0x1004], eax
        jmp public_6d28336
        public_6d28334 : nop
        mov eax, ecx
        public_6d28336 : nop
        test eax, eax
        je public_6d28342
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        public_6d28342 : nop
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6d28200)
    }
}

#undef public_6d28271
#undef public_6d282a6
#undef public_6d282e8
#undef public_6d2831d
#undef public_6d28323
#undef public_6d28334
#undef public_6d28336
#undef public_6d28342
