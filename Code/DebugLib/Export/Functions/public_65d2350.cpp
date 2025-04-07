#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1340);
CLANG_FORWARD_PROC_SYMBOL(public_65d2350);
CLANG_FORWARD_PROC_SYMBOL(public_65d2e80);
CLANG_FORWARD_PROC_SYMBOL(public_65d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d6ca6);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cac);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d734e);

#define public_65d23da _public_65d23da
#define public_65d23dc _public_65d23dc
#define public_65d2421 _public_65d2421
#define public_65d2423 _public_65d2423
#define public_65d2462 _public_65d2462
#define public_65d2464 _public_65d2464
#define public_65d2497 _public_65d2497
#define public_65d24ae _public_65d24ae
#define public_65d24b3 _public_65d24b3

PROC_DECLARE(0x65d2350, internal_65d2350, public_65d2350);
extern "C" NAKED register_t __cdecl internal_65d2350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x590
        sub eax, 0
        je public_65d24ae
        dec eax
        jne public_65d24b3
        lea eax, ss:[esp]
        push eax
        push 0x101
        call public_65d6cac
        test eax, eax
        jne public_65d2497
        push esi
        lea ecx, ss:[esp+8]
        push edi
        push ecx
        lea edx, ss:[esp+0x19C]
/*FIXUP push offset public_65e311c @0x65d238f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e311c
        push edx
        call public_65d734e
        lea eax, ss:[esp+0x119]
        lea ecx, ss:[esp+0x1A4]
        push eax
/*FIXUP push offset public_65e30f4 @0x65d23a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e30f4
        push ecx
        call public_65d734e
        push 0xC
        call public_65d6f71
        add esp, 0x1C
        test eax, eax
        je public_65d23da
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e30e8
        mov dword ptr ds : [eax], offset public_65e1238
        mov esi, eax
        jmp public_65d23dc
        public_65d23da : nop
        xor esi, esi
        public_65d23dc : nop
        mov edi, dword ptr ds : [public_65e1004]
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e30e8 @0x65d23eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e30e8
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        push 0xC
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d2421
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e30dc
        mov dword ptr ds : [eax], offset public_65e1228
        mov esi, eax
        jmp public_65d2423
        public_65d2421 : nop
        xor esi, esi
        public_65d2423 : nop
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e30dc @0x65d242c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e30dc
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        push 0xC
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d2462
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e30c8
        mov dword ptr ds : [eax], offset public_65e1218
        mov esi, eax
        jmp public_65d2464
        public_65d2462 : nop
        xor esi, esi
        public_65d2464 : nop
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e30c8 @0x65d246d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e30c8
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        call public_65d5a80
        call public_65d2e80
        pop edi
        pop esi
        mov eax, 1
        add esp, 0x590
        ret 0xC
        public_65d2497 : nop
        push eax
        call public_65d1340
        add esp, 4
        mov eax, 1
        add esp, 0x590
        ret 0xC
        public_65d24ae : nop
        call public_65d6ca6
        public_65d24b3 : nop
        mov eax, 1
        add esp, 0x590
        ret 0xC
        UNREACHABLE_TRAP(0x65d2350)
    }
}

#undef public_65d23da
#undef public_65d23dc
#undef public_65d2421
#undef public_65d2423
#undef public_65d2462
#undef public_65d2464
#undef public_65d2497
#undef public_65d24ae
#undef public_65d24b3
