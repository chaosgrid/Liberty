#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c2e3c2 _public_6c2e3c2

PROC_DECLARE(0x6c2e2f0, internal_6c2e2f0, public_6c2e2f0);
extern "C" NAKED register_t __cdecl internal_6c2e2f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6c37d70]
        mov eax, 1
        test al, cl
        jne public_6c2e3c2
        mov dl, cl
        or dl, al
        mov ecx, 0xC
        mov byte ptr ds : [public_6c37d70], dl
        mov dword ptr ds : [public_6c37ce0], eax
        mov eax, 8
        mov dword ptr ds : [public_6c37ce8], ecx
        mov dword ptr ds : [public_6c37cf0], ecx
        mov edx, 0x10
        mov dword ptr ds : [public_6c37d00], ecx
        mov ecx, 4
/*FIXUP push offset _public_6c2e3e0 @0x6c2e338*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        mov dword ptr ds : [public_6c37ce4], 0xE
        mov dword ptr ds : [public_6c37cec], 0x800
        mov dword ptr ds : [public_6c37cf4], 0x30
        mov dword ptr ds : [public_6c37cf8], eax
        mov dword ptr ds : [public_6c37cfc], edx
        mov dword ptr ds : [public_6c37d04], 2
        mov dword ptr ds : [public_6c37d08], 0x100
        mov dword ptr ds : [public_6c37d0c], eax
        mov dword ptr ds : [public_6c37d10], ecx
        mov dword ptr ds : [public_6c37d14], 0x200
        mov dword ptr ds : [public_6c37d18], eax
        mov dword ptr ds : [public_6c37d1c], edx
        mov dword ptr ds : [public_6c37d20], 0x40
        mov dword ptr ds : [public_6c37d24], ecx
        call public_6c34f34
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], offset public_6c37ce0
        add esp, 4
        mov eax, 6
        ret 
        public_6c2e3c2 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], offset public_6c37ce0
        mov eax, 6
        ret 
        UNREACHABLE_TRAP(0x6c2e2f0)
    }
}

#undef public_6c2e3c2
