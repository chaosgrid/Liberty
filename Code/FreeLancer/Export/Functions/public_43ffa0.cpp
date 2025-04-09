#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_435cf0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43ffa0);
CLANG_FORWARD_PROC_SYMBOL(public_44c290);

#define public_440001 _public_440001
#define public_440031 _public_440031
#define public_440061 _public_440061
#define public_44008b _public_44008b
#define public_440097 _public_440097

PROC_DECLARE(0x43ffa0, internal_43ffa0, public_43ffa0);
extern "C" NAKED register_t __cdecl internal_43ffa0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x3B8]
        push edi
        mov ecx, offset public_668708
        call public_43a460
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_44008b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_44008b
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cb7bc @0x43ffd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7bc
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_440001
/*FIXUP push offset public_5cb168 @0x43ffe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb168
        mov ecx, ebp
        call public_44c290
/*FIXUP push offset public_5cb7ac @0x43ffef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7ac
        call public_435cf0
        add esp, 4
        jmp public_440097
        public_440001 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+4]
/*FIXUP push offset public_5cb7a0 @0x440007*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7a0
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_440031
/*FIXUP push offset public_5cb154 @0x440016*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb154
        mov ecx, ebp
        call public_44c290
/*FIXUP push offset public_5cb790 @0x440022*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb790
        call public_435cf0
        add esp, 4
        jmp public_440097
        public_440031 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edx+4]
/*FIXUP push offset public_5cb784 @0x440037*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb784
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_440061
/*FIXUP push offset public_5cb140 @0x440046*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb140
        mov ecx, ebp
        call public_44c290
/*FIXUP push offset public_5cb778 @0x440052*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb778
        call public_435cf0
        add esp, 4
        jmp public_440097
        public_440061 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx+4]
/*FIXUP push offset public_5cb7f8 @0x440067*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7f8
        push edx
        call edi
        add esp, 8
        test eax, eax
        je public_44008b
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+4]
/*FIXUP push offset public_5cb804 @0x44007c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb804
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_440097
        public_44008b : nop
        mov ecx, ebp
/*FIXUP push offset public_5cb17c @0x44008d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb17c
        call public_44c290
        public_440097 : nop
        fld dword ptr ds : [public_61650c]
        push ecx
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp]
        push 0
        call public_412050
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x3C4], 1
        mov dword ptr ds : [ebx+0x3C0], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43ffa0)
    }
}

#undef public_440001
#undef public_440031
#undef public_440061
#undef public_44008b
#undef public_440097
