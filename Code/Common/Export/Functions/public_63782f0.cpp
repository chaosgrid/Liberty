#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_63782f0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6378311 _public_6378311
#define public_637833b _public_637833b
#define public_6378349 _public_6378349
#define public_6378364 _public_6378364
#define public_6378372 _public_6378372

PROC_DECLARE(0x63782f0, internal_63782f0, public_63782f0);
extern "C" NAKED register_t __cdecl internal_63782f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b970]
        test eax, eax
        je public_6378311
/*FIXUP push offset public_63f307c @0x63782f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f307c
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x10
        public_6378311 : nop
        mov eax, dword ptr ds : [public_658b974]
        mov ecx, dword ptr ss : [esp+4]
        add ecx, eax
        push ebx
        not eax
        push esi
        mov esi, dword ptr ds : [public_658b968]
        and ecx, eax
        mov eax, esi
        mov edx, eax
        dec eax
        test edx, edx
        push edi
        mov edi, dword ptr ds : [public_658b97c]
        je public_6378349
        lea edx, ds:[edi+eax*4]
        public_637833b : nop
        cmp dword ptr ds : [edx], ecx
        je public_6378372
        mov ebx, eax
        dec eax
        sub edx, 4
        test ebx, ebx
        jne public_637833b
        public_6378349 : nop
        mov eax, dword ptr ds : [public_658b96c]
        cmp esi, eax
        jge public_6378364
        mov dword ptr ds : [edi+esi*4], ecx
        mov eax, dword ptr ds : [public_658b968]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_658b968], eax
        pop ebx
        ret 
        public_6378364 : nop
        push eax
/*FIXUP push offset public_63f3034 @0x6378365*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3034
        call public_6356960
        add esp, 8
        public_6378372 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63782f0)
    }
}

#undef public_6378311
#undef public_637833b
#undef public_6378349
#undef public_6378364
#undef public_6378372
