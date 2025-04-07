#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d447c0);

PROC_DECLARE(0x6d447c0, internal_6d447c0, public_6d447c0);
extern "C" NAKED register_t __cdecl internal_6d447c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6d6ad78 @0x6d447c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad78
        mov ecx, esi
        call dword ptr ds : [eax+4]
        fld qword ptr ds : [public_6d8fb28]
        fadd qword ptr ds : [public_6d8fb20]
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_6d6ad70 @0x6d447e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad70
        call dword ptr ds : [edx+8]
        push esi
        call dword ptr ds : [public_6d64824]
        mov eax, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [eax]
        push eax
        push 0x41
        call public_6d43650
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d447c0)
    }
}
