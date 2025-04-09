#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_402ed0);
CLANG_FORWARD_PROC_SYMBOL(public_402f40);

#define public_402e68 _public_402e68
#define public_402e72 _public_402e72
#define public_402e83 _public_402e83
#define public_402ea1 _public_402ea1
#define public_402ea3 _public_402ea3
#define public_402ec0 _public_402ec0

PROC_DECLARE(0x402e30, internal_402e30, public_402e30);
extern "C" NAKED register_t __cdecl internal_402e30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        call public_402f40
        mov esi, dword ptr ss : [esp+0x14]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+0x18]
        lea ebx, ss:[ebp+0x1C]
        mov ecx, 5
        mov edi, ebx
        rep movsd
        xor esi, esi
        cmp eax, esi
        je public_402e83
        mov ecx, dword ptr ds : [ebx]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_402e83
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        jne public_402e68
        mov dword ptr ss : [ebp+0x18], esi
        jmp public_402e83
        public_402e68 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, esi
        mov dword ptr ss : [ebp+0x18], eax
        je public_402e83
        public_402e72 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_402e83
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [ebp+0x18], eax
        jne public_402e72
        public_402e83 : nop
        cmp dword ptr ss : [ebp+0x18], esi
        jne public_402ec0
        mov ecx, ebp
        call public_402ed0
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, esi
        mov dword ptr ss : [ebp+0x10], eax
        jne public_402ea1
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_402ea3
        public_402ea1 : nop
        mov dword ptr ds : [ecx], eax
        public_402ea3 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], ecx
        inc dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x18], esi
        public_402ec0 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x402e30)
    }
}

#undef public_402e68
#undef public_402e72
#undef public_402e83
#undef public_402ea1
#undef public_402ea3
#undef public_402ec0
