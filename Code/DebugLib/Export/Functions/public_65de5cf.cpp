#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de5cf);

#define public_65de61e _public_65de61e
#define public_65de63d _public_65de63d
#define public_65de650 _public_65de650
#define public_65de654 _public_65de654

PROC_DECLARE(0x65de5cf, internal_65de5cf, public_65de5cf);
extern "C" NAKED register_t __cdecl internal_65de5cf()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_65e6404], ebx
        push esi
        push edi
        jne public_65de61e
/*FIXUP push offset public_65e1b00 @0x65de5dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b00
        call dword ptr ds : [public_65e1110]
        mov edi, eax
        cmp edi, ebx
        je public_65de654
        mov esi, dword ptr ds : [public_65e110c]
/*FIXUP push offset public_65e1af4 @0x65de5f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1af4
        push edi
        call esi
        test eax, eax
        mov dword ptr ds : [public_65e6404], eax
        je public_65de654
/*FIXUP push offset public_65e1ae4 @0x65de604*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1ae4
        push edi
        call esi
/*FIXUP push offset public_65e1ad0 @0x65de60c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1ad0
        push edi
        mov dword ptr ds : [public_65e6408], eax
        call esi
        mov dword ptr ds : [public_65e640c], eax
        public_65de61e : nop
        mov eax, dword ptr ds : [public_65e6408]
        test eax, eax
        je public_65de63d
        call eax
        mov ebx, eax
        test ebx, ebx
        je public_65de63d
        mov eax, dword ptr ds : [public_65e640c]
        test eax, eax
        je public_65de63d
        push ebx
        call eax
        mov ebx, eax
        public_65de63d : nop
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push ebx
        call dword ptr ds : [public_65e6404]
        public_65de650 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        public_65de654 : nop
        xor eax, eax
        jmp public_65de650
        UNREACHABLE_TRAP(0x65de5cf)
    }
}

#undef public_65de61e
#undef public_65de63d
#undef public_65de650
#undef public_65de654
