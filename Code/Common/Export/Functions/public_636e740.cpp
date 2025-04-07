#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_636e787 _public_636e787
#define public_636e797 _public_636e797

PROC_DECLARE(0x636e740, internal_636e740, public_636e740);
extern "C" NAKED register_t __cdecl internal_636e740()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_636e797
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [public_658b970]
        lea eax, ds:[eax*4+8]
        cmp eax, edx
        jg public_636e787
        inc dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [public_658b978]
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[eax+edx*4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        public_636e787 : nop
        push eax
        push ecx
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [esi], 0
        public_636e797 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e740)
    }
}

#undef public_636e787
#undef public_636e797
