#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_630e5a0);

#define public_62adc6e _public_62adc6e
#define public_62adc7e _public_62adc7e
#define public_62adc8e _public_62adc8e
#define public_62adc9e _public_62adc9e
#define public_62adcac _public_62adcac
#define public_62adcbb _public_62adcbb
#define public_62adccb _public_62adccb

PROC_DECLARE(0x62adc40, internal_62adc40, public_62adc40);
extern "C" NAKED register_t __cdecl internal_62adc40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x120
        ja public_62adc9e
        je public_62adc8e
        sub eax, 0x9C
        je public_62adc7e
        sub eax, 0x54
        je public_62adc6e
        sub eax, 0x14
        jne public_62adcac
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_63fc3e0
        push eax
        call public_630e5a0
        ret 
        public_62adc6e : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, offset public_63fc3d0
        call public_630e5a0
        ret 
        public_62adc7e : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, offset public_63fc400
        call public_630e5a0
        ret 
        public_62adc8e : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_63fc3f0
        push eax
        call public_630e5a0
        ret 
        public_62adc9e : nop
        cmp eax, 0x1EC
        je public_62adccb
        cmp eax, 0x2DC
        je public_62adcbb
        public_62adcac : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        call dword ptr ds : [public_639932c]
        add esp, 4
        ret 
        public_62adcbb : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, offset public_63fc3b0
        call public_630e5a0
        ret 
        public_62adccb : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_63fc3c0
        push eax
        call public_630e5a0
        ret 
        UNREACHABLE_TRAP(0x62adc40)
    }
}

#undef public_62adc6e
#undef public_62adc7e
#undef public_62adc8e
#undef public_62adc9e
#undef public_62adcac
#undef public_62adcbb
#undef public_62adccb
