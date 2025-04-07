#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd030);

#define public_62fd044 _public_62fd044
#define public_62fd04e _public_62fd04e
#define public_62fd052 _public_62fd052
#define public_62fd057 _public_62fd057

PROC_DECLARE(0x62fd030, internal_62fd030, public_62fd030);
extern "C" NAKED register_t __cdecl internal_62fd030()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_62fd057
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_62fd044 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_62fd04e
        mov eax, dword ptr ds : [eax+8]
        jmp public_62fd052
        public_62fd04e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_62fd052 : nop
        cmp eax, ecx
        jne public_62fd044
        pop esi
        public_62fd057 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x62fd030)
    }
}

#undef public_62fd044
#undef public_62fd04e
#undef public_62fd052
#undef public_62fd057
