#include "DebugLib-PCH.h"


#define public_65d18db _public_65d18db
#define public_65d18ed _public_65d18ed

PROC_DECLARE(0x65d18c0, internal_65d18c0, public_65d18c0);
extern "C" NAKED register_t __cdecl internal_65d18c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea esi, ds:[eax+0x28]
        mov eax, dword ptr ds : [eax+0x28]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        je public_65d18db
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_65d18db : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65d18ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_65d18ed : nop
        mov eax, dword ptr ss : [esp+0xC]
        push esi
/*FIXUP push offset public_65e3098 @0x65d18f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3098
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65d18c0)
    }
}

#undef public_65d18db
#undef public_65d18ed
