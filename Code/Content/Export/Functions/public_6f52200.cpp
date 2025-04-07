#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52200);

#define public_6f52214 _public_6f52214
#define public_6f52222 _public_6f52222

PROC_DECLARE(0x6f52200, internal_6f52200, public_6f52200);
extern "C" NAKED register_t __cdecl internal_6f52200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x9C]
        jge public_6f52214
        mov eax, dword ptr ds : [ecx+0x70]
        ret 4
        public_6f52214 : nop
        cmp eax, dword ptr ds : [ecx+0xA0]
        jge public_6f52222
        mov eax, dword ptr ds : [ecx+0x74]
        ret 4
        public_6f52222 : nop
        mov eax, dword ptr ds : [ecx+0x78]
        ret 4
        UNREACHABLE_TRAP(0x6f52200)
    }
}

#undef public_6f52214
#undef public_6f52222
