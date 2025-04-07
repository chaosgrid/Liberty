#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_59e500);

PROC_DECLARE(0x59e500, internal_59e500, public_59e500);
extern "C" NAKED register_t __cdecl internal_59e500()
{
    __asm
    {
        push 0xB50
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB60
        call public_421ed0
        push 0x487
/*FIXUP push offset public_5e5df0 @0x59e537*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5df0
/*FIXUP push offset public_67dbf8 @0x59e53c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
/*FIXUP push offset public_67dbf8 @0x59e546*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x24
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1A
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x59e500)
    }
}
