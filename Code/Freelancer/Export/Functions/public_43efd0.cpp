#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594e70);

#define public_43eff7 _public_43eff7
#define public_43f006 _public_43f006
#define public_43f028 _public_43f028
#define public_43f030 _public_43f030
#define public_43f03a _public_43f03a
#define public_43f03f _public_43f03f
#define public_43f041 _public_43f041
#define public_43f049 _public_43f049

PROC_DECLARE(0x43efd0, internal_43efd0, public_43efd0);
extern "C" NAKED register_t __cdecl internal_43efd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c70d8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_5cb7e0 @0x43efde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7e0
        push edi
        mov ebp, ecx
        call ebx
        mov eax, dword ptr ss : [ebp+0x38C]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_43f049
        public_43eff7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x1C]
        jne public_43f006
        mov eax, dword ptr ds : [public_5c7078]
        public_43f006 : nop
        push ecx
        push eax
/*FIXUP push offset public_5cb7d4 @0x43f008*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7d4
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x21]
        add esp, 0x10
        test cl, cl
        jne public_43f028
        push eax
        call public_594e70
        add esp, 4
        jmp public_43f03f
        public_43f028 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_43f03a
        public_43f030 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_43f030
        public_43f03a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_43f041
        public_43f03f : nop
        mov esi, eax
        public_43f041 : nop
        cmp esi, dword ptr ss : [ebp+0x38C]
        jne public_43eff7
/*FIXUP public_43f049 : nop
        push offset public_5cb7d0 @0x43f049*/
  FIXUP public_43f049 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7d0
        push edi
        call ebx
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x43efd0)
    }
}

#undef public_43eff7
#undef public_43f006
#undef public_43f028
#undef public_43f030
#undef public_43f03a
#undef public_43f03f
#undef public_43f041
#undef public_43f049
