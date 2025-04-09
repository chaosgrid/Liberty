#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422120);

#define public_422151 _public_422151
#define public_42215b _public_42215b

PROC_DECLARE(0x422120, internal_422120, public_422120);
extern "C" NAKED register_t __cdecl internal_422120()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6de0]
        push ecx
        mov dword ptr ds : [public_6648cc], ecx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0x17
        push eax
        call dword ptr ds : [edx+0xF0]
        mov al, byte ptr ds : [public_6648c4]
        test al, al
        je public_422151
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push 1
        jmp public_42215b
        public_422151 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        push 0
        public_42215b : nop
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6648c8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x422120)
    }
}

#undef public_422151
#undef public_42215b
