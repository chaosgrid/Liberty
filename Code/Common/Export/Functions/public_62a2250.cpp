#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2250);

#define public_62a2265 _public_62a2265
#define public_62a2270 _public_62a2270
#define public_62a2274 _public_62a2274
#define public_62a2279 _public_62a2279

PROC_DECLARE(0x62a2250, internal_62a2250, public_62a2250);
extern "C" NAKED register_t __cdecl internal_62a2250()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_62a2279
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov si, word ptr ds : [esi]
        public_62a2265 : nop
        cmp word ptr ds : [edx+0xC], si
        jae public_62a2270
        mov edx, dword ptr ds : [edx+8]
        jmp public_62a2274
        public_62a2270 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_62a2274 : nop
        cmp edx, ecx
        jne public_62a2265
        pop esi
        public_62a2279 : nop
        ret 4
        UNREACHABLE_TRAP(0x62a2250)
    }
}

#undef public_62a2265
#undef public_62a2270
#undef public_62a2274
#undef public_62a2279
