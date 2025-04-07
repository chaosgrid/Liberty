#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ef40);

#define public_636ef59 _public_636ef59
#define public_636ef67 _public_636ef67
#define public_636ef7c _public_636ef7c
#define public_636ef82 _public_636ef82
#define public_636efb5 _public_636efb5

PROC_DECLARE(0x636ef40, internal_636ef40, public_636ef40);
extern "C" NAKED register_t __cdecl internal_636ef40()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658b81c]
        mov eax, dword ptr ds : [public_658b814]
        cmp eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        jne public_636ef59
        mov dword ptr ds : [public_658b81c], ecx
        public_636ef59 : nop
        cmp eax, dword ptr ds : [public_658b818]
        jne public_636ef67
        mov dword ptr ds : [public_658b818], ecx
        public_636ef67 : nop
        mov edx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x30], eax
        mov edx, dword ptr ds : [eax+0x2C]
        test edx, edx
        je public_636ef7c
        mov dword ptr ds : [edx+0x30], ecx
        jmp public_636ef82
        public_636ef7c : nop
        mov dword ptr ds : [public_658b810], ecx
        public_636ef82 : nop
        mov dword ptr ds : [eax+0x2C], ecx
        mov edx, dword ptr ds : [public_658b844]
        mov eax, dword ptr ds : [public_658b078]
        inc edx
        cmp eax, 4
        mov dword ptr ds : [public_658b844], edx
        jl public_636efb5
        mov eax, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63eecd4 @0x636efa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eecd4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_636efb5 : nop
        ret 
        UNREACHABLE_TRAP(0x636ef40)
    }
}

#undef public_636ef59
#undef public_636ef67
#undef public_636ef7c
#undef public_636ef82
#undef public_636efb5
