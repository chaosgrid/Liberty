#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001910);
CLANG_FORWARD_PROC_SYMBOL(public_10001a80);

#define public_10001a8f _public_10001a8f
#define public_10001a9d _public_10001a9d
#define public_10001ab7 _public_10001ab7
#define public_10001b91 _public_10001b91
#define public_10001b95 _public_10001b95
#define public_10001bb1 _public_10001bb1

PROC_DECLARE(0x10001a80, internal_10001a80, public_10001a80);
extern "C" NAKED register_t __cdecl internal_10001a80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_10001a8f
        xor eax, eax
        pop esi
        ret 0xC
        public_10001a8f : nop
        mov eax, dword ptr ds : [public_1000d000]
        test eax, eax
        je public_10001a9d
        call public_10001910
        public_10001a9d : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, 8
        mov eax, dword ptr ss : [esp+8]
        not eax
        jb public_10001b91
        push ebx
        push edi
        mov edi, edx
        shr edi, 3
        public_10001ab7 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        mov ebx, eax
        shr ebx, 8
        sub edx, 8
        xor ecx, eax
        and ecx, 0xFF
        mov eax, dword ptr ds : [ecx*4+public_1000e1d8]
        xor eax, ebx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+1]
        inc esi
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_1000e1d8]
        shr eax, 8
        xor ecx, eax
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        inc esi
        xor eax, ecx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_1000e1d8]
        shr ecx, 8
        xor eax, ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+1]
        inc esi
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_1000e1d8]
        shr eax, 8
        xor ecx, eax
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        inc esi
        xor eax, ecx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_1000e1d8]
        shr ecx, 8
        xor eax, ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+1]
        inc esi
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_1000e1d8]
        shr eax, 8
        xor ecx, eax
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        inc esi
        xor eax, ecx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_1000e1d8]
        shr ecx, 8
        xor eax, ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+1]
        inc esi
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_1000e1d8]
        shr eax, 8
        xor eax, ecx
        inc esi
        dec edi
        jne public_10001ab7
        pop edi
        pop ebx
        public_10001b91 : nop
        test edx, edx
        je public_10001bb1
        public_10001b95 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_1000e1d8]
        shr eax, 8
        xor eax, ecx
        inc esi
        dec edx
        jne public_10001b95
        public_10001bb1 : nop
        not eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x10001a80)
    }
}

#undef public_10001a8f
#undef public_10001a9d
#undef public_10001ab7
#undef public_10001b91
#undef public_10001b95
#undef public_10001bb1
