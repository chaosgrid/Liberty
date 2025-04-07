#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ff30);

#define public_631ff50 _public_631ff50
#define public_631ff5e _public_631ff5e
#define public_631ff63 _public_631ff63

PROC_DECLARE(0x631ff30, internal_631ff30, public_631ff30);
extern "C" NAKED register_t __cdecl internal_631ff30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [public_6399408]
        mov edx, dword ptr ds : [eax]
        cmp edx, 0xFFFFFFFF
        je public_631ff63
        mov eax, dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [ecx+0x80]
        cmp eax, ecx
        je public_631ff63
        mov edi, edi
        public_631ff50 : nop
        cmp dword ptr ds : [eax], edx
        je public_631ff5e
        add eax, 8
        cmp eax, ecx
        jne public_631ff50
        ret 4
        public_631ff5e : nop
        fstp st(0)
        fld dword ptr ds : [eax+4]
        public_631ff63 : nop
        ret 4
        UNREACHABLE_TRAP(0x631ff30)
    }
}

#undef public_631ff50
#undef public_631ff5e
#undef public_631ff63
