#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adbc0);
CLANG_FORWARD_PROC_SYMBOL(public_630e580);

#define public_62adbeb _public_62adbeb
#define public_62adbf5 _public_62adbf5
#define public_62adbff _public_62adbff
#define public_62adc09 _public_62adc09
#define public_62adc17 _public_62adc17
#define public_62adc21 _public_62adc21
#define public_62adc2b _public_62adc2b

PROC_DECLARE(0x62adbc0, internal_62adbc0, public_62adbc0);
extern "C" NAKED register_t __cdecl internal_62adbc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x120
        ja public_62adc09
        je public_62adbff
        mov ecx, eax
        sub ecx, 0x9C
        je public_62adbf5
        sub ecx, 0x54
        je public_62adbeb
        sub ecx, 0x14
        jne public_62adc17
        mov ecx, offset public_63fc3e0
        jmp public_630e580
        public_62adbeb : nop
        mov ecx, offset public_63fc3d0
        jmp public_630e580
        public_62adbf5 : nop
        mov ecx, offset public_63fc400
        jmp public_630e580
        public_62adbff : nop
        mov ecx, offset public_63fc3f0
        jmp public_630e580
        public_62adc09 : nop
        cmp eax, 0x1EC
        je public_62adc2b
        cmp eax, 0x2DC
        je public_62adc21
        public_62adc17 : nop
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_6399328]
        public_62adc21 : nop
        mov ecx, offset public_63fc3b0
        jmp public_630e580
        public_62adc2b : nop
        mov ecx, offset public_63fc3c0
        jmp public_630e580
        UNREACHABLE_TRAP(0x62adbc0)
    }
}

#undef public_62adbeb
#undef public_62adbf5
#undef public_62adbff
#undef public_62adc09
#undef public_62adc17
#undef public_62adc21
#undef public_62adc2b
