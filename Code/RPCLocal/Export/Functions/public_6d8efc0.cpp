#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d86580);
CLANG_FORWARD_PROC_SYMBOL(public_6d86a70);
CLANG_FORWARD_PROC_SYMBOL(public_6d88280);
CLANG_FORWARD_PROC_SYMBOL(public_6d8efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8f01d _public_6d8f01d
#define public_6d8f042 _public_6d8f042
#define public_6d8f05b _public_6d8f05b

PROC_DECLARE(0x6d8efc0, internal_6d8efc0, public_6d8efc0);
extern "C" NAKED register_t __cdecl internal_6d8efc0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_6dbbd18]
        test al, al
        push esi
        mov esi, ecx
        jne public_6d8f01d
        mov al, byte ptr ds : [public_6dbbd19]
        test al, al
        je public_6d8f05b
        call public_6d88280
        mov dword ptr ds : [public_6dbbd1c], eax
        mov byte ptr ds : [public_6dbbd18], 1
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d8f01d
        lea eax, ss:[esp+4]
        push eax
        push 1
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8f01d
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8f01d : nop
        mov al, byte ptr ds : [public_6dbbd19]
        test al, al
        je public_6d8f05b
        mov ecx, dword ptr ds : [public_6dbbd1c]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6d8f05b
        mov edx, dword ptr ds : [eax+0x2C]
        test edx, edx
        jbe public_6d8f05b
        call public_6d86580
        test eax, eax
        je public_6d8f05b
        public_6d8f042 : nop
        push eax
        push 1
        mov ecx, esi
        call public_6d86a70
        mov ecx, dword ptr ds : [public_6dbbd1c]
        call public_6d86580
        test eax, eax
        jne public_6d8f042
        public_6d8f05b : nop
        mov eax, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d8efc0)
    }
}

#undef public_6d8f01d
#undef public_6d8f042
#undef public_6d8f05b
