#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ffa0);

#define public_634ffb3 _public_634ffb3
#define public_634ffc2 _public_634ffc2
#define public_634ffc8 _public_634ffc8
#define public_634ffd5 _public_634ffd5
#define public_634ffe4 _public_634ffe4
#define public_634ffed _public_634ffed
#define public_634fffa _public_634fffa
#define public_635000a _public_635000a

PROC_DECLARE(0x634ffa0, internal_634ffa0, public_634ffa0);
extern "C" NAKED register_t __cdecl internal_634ffa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x74]
        test edx, edx
        je public_634ffb3
        push esi
        mov esi, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [edx+0x78], esi
        pop esi
        public_634ffb3 : nop
        mov edx, dword ptr ds : [eax+0x78]
        test edx, edx
        je public_634ffc2
        mov ecx, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [edx+0x74], ecx
        jmp public_634ffc8
        public_634ffc2 : nop
        mov edx, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [ecx+0x14], edx
        public_634ffc8 : nop
        mov ecx, dword ptr ds : [eax+0x20]
        test ecx, ecx
        je public_634ffd5
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [ecx+0xC], edx
        public_634ffd5 : nop
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        je public_634ffe4
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [ecx+8], edx
        jmp public_634ffed
        public_634ffe4 : nop
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [ecx+0x24], edx
        public_634ffed : nop
        mov ecx, dword ptr ds : [eax+0x3C]
        test ecx, ecx
        je public_634fffa
        mov edx, dword ptr ds : [eax+0x40]
        mov dword ptr ds : [ecx+0xC], edx
        public_634fffa : nop
        mov ecx, dword ptr ds : [eax+0x40]
        test ecx, ecx
        je public_635000a
        mov eax, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        public_635000a : nop
        mov ecx, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [ecx+0x24], edx
        ret 4
        UNREACHABLE_TRAP(0x634ffa0)
    }
}

#undef public_634ffb3
#undef public_634ffc2
#undef public_634ffc8
#undef public_634ffd5
#undef public_634ffe4
#undef public_634ffed
#undef public_634fffa
#undef public_635000a
