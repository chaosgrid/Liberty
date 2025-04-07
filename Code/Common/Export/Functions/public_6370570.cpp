#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e800);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);

#define public_6370580 _public_6370580
#define public_637058f _public_637058f
#define public_63705b9 _public_63705b9
#define public_63705d5 _public_63705d5

PROC_DECLARE(0x6370570, internal_6370570, public_6370570);
extern "C" NAKED register_t __cdecl internal_6370570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6370580
        mov eax, 0xFFFFFFFD
        pop esi
        ret 
        public_6370580 : nop
        cmp eax, dword ptr ds : [public_658b800]
        jne public_637058f
        mov eax, 0xFFFFFFFE
        pop esi
        ret 
        public_637058f : nop
        mov ecx, dword ptr ds : [public_658b258]
        cmp eax, ecx
        jb public_63705b9
        mov esi, dword ptr ds : [public_658b24c]
        mov edx, esi
        imul edx, dword ptr ds : [public_658b254]
        lea edx, ds:[ecx+edx*8]
        cmp eax, edx
        jae public_63705b9
        sub eax, ecx
        sar eax, 3
        cdq 
        idiv esi
        pop esi
        ret 
        public_63705b9 : nop
        push eax
        mov eax, dword ptr ds : [public_658b8fc]
        push eax
        call public_636e800
        add esp, 8
        cmp eax, 0xFFFFFFFF
        je public_63705d5
        add eax, dword ptr ds : [public_658b254]
        pop esi
        ret 
        public_63705d5 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6370570)
    }
}

#undef public_6370580
#undef public_637058f
#undef public_63705b9
#undef public_63705d5
