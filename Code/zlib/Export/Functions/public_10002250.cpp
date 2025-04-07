#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001710);
CLANG_FORWARD_PROC_SYMBOL(public_10002250);

#define public_10002261 _public_10002261
#define public_1000226a _public_1000226a
#define public_1000228a _public_1000228a

PROC_DECLARE(0x10002250, internal_10002250, public_10002250);
extern "C" NAKED register_t __cdecl internal_10002250()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        mov ebx, eax
        cmp ebx, ecx
        jbe public_10002261
        mov ebx, ecx
        public_10002261 : nop
        test ebx, ebx
        jne public_1000226a
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_1000226a : nop
        sub eax, ebx
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        jne public_1000228a
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+0x30]
        push ebx
        push ecx
        push edx
        call public_10001710
        mov dword ptr ss : [ebp+0x30], eax
        public_1000228a : nop
        push esi
        mov esi, dword ptr ss : [ebp]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        add eax, ebx
        add ecx, ebx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp], ecx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10002250)
    }
}

#undef public_10002261
#undef public_1000226a
#undef public_1000228a
