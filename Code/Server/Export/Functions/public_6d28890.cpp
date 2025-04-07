#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28890);

#define public_6d288c2 _public_6d288c2
#define public_6d288f3 _public_6d288f3
#define public_6d28905 _public_6d28905
#define public_6d28920 _public_6d28920

PROC_DECLARE(0x6d28890, internal_6d28890, public_6d28890);
extern "C" NAKED register_t __cdecl internal_6d28890()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push edi
        mov edi, ecx
        je public_6d28905
        push esi
        movsx esi, byte ptr ss : [esp+0xC]
        push esi
        call dword ptr ds : [public_6d64ba8]
        xor ecx, ecx
        mov cl, al
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+eax*4+8]
        jns public_6d288c2
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d288c2 : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        push esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6d64c50]
        xor ecx, ecx
        mov cl, al
        add esp, 8
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+eax*4+8]
        jns public_6d288f3
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d288f3 : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        pop esi
        pop edi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        ret 8
        public_6d28905 : nop
        movzx ecx, byte ptr ss : [esp+8]
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+eax*4+8]
        jns public_6d28920
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d28920 : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        pop edi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        ret 8
        UNREACHABLE_TRAP(0x6d28890)
    }
}

#undef public_6d288c2
#undef public_6d288f3
#undef public_6d28905
#undef public_6d28920
