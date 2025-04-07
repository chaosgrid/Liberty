#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);

#define public_6805005 _public_6805005
#define public_680500c _public_680500c
#define public_6805012 _public_6805012

PROC_DECLARE(0x6804fe0, internal_6804fe0, public_6804fe0);
extern "C" NAKED register_t __cdecl internal_6804fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, 0xFFFFFFF9
        je public_680500c
        cmp eax, 0xFFFFFFFD
        je public_6805005
        test eax, eax
        jne public_6805012
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        and eax, ecx
        ret 
        public_6805005 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x14]
        ret 
        public_680500c : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        public_6805012 : nop
        ret 
        UNREACHABLE_TRAP(0x6804fe0)
    }
}

#undef public_6805005
#undef public_680500c
#undef public_6805012
