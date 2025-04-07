#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);

#define public_6d22f54 _public_6d22f54
#define public_6d22f70 _public_6d22f70
#define public_6d22f81 _public_6d22f81

PROC_DECLARE(0x6d22f4d, internal_6d22f4d, public_6d22f4d);
extern "C" NAKED register_t __cdecl internal_6d22f4d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        public_6d22f54 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x20
        je public_6d22f70
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 9
        jne public_6d22f81
        public_6d22f70 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d22f54
        public_6d22f81 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d22f4d)
    }
}

#undef public_6d22f54
#undef public_6d22f70
#undef public_6d22f81
